/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (1 / 1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (min((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : 1)), ((((arr_0 [i_1] [i_0]) ? var_7 : -3276968851061877975)))));
                arr_6 [i_0] [i_0] [16] = ((-(arr_4 [i_0] [i_0] [i_1])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {
                    arr_16 [i_4] |= var_3;
                    arr_17 [i_2] = (max(((((1 ? var_3 : -110)))), (min((arr_7 [i_2]), ((min(0, 1)))))));
                }
            }
        }
    }
    var_11 = ((-var_6 ? 19037 : (var_2 / var_5)));
    #pragma endscop
}
