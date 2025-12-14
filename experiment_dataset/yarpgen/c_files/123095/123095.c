/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [2] [i_2] = var_7;
                    var_11 = (min((max(35, (var_10 + 80))), var_1));
                    var_12 &= (((arr_2 [7] [2]) >= var_6));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            {
                arr_15 [i_3] [i_4] |= var_7;
                arr_16 [i_4] = (((min(((var_1 * (arr_12 [1] [i_4]))), (35 >= var_6)))) | ((var_0 ? (1 % var_9) : (arr_10 [i_3]))));
            }
        }
    }
    var_13 += ((~(max(((max(30709, -110))), -1274920673317549905))));
    #pragma endscop
}
