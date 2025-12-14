/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 6;i_1 += 1)
        {
            {
                var_15 = (((((-(arr_4 [i_1 + 4] [i_0])))) * (((min((arr_4 [i_0] [i_1 - 2]), var_3)) & (var_5 > var_8)))));
                arr_5 [i_0] [i_0] [1] = ((-(!78)));
            }
        }
    }
    var_16 = (var_4 - var_2);
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    arr_16 [i_3] [i_3] [i_3] = (((!74) <= ((2 / (arr_8 [i_2 - 1])))));
                    var_17 = ((!((((arr_10 [i_3]) ? (arr_14 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_3]) : (arr_10 [i_3]))))));
                }
            }
        }
    }
    #pragma endscop
}
