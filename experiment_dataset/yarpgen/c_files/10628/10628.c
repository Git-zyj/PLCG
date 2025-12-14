/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_20 = (((((max(var_4, -11177)))) ? (((arr_3 [1] [i_1] [1]) | (arr_2 [i_0] [6] [i_1 + 3]))) : (arr_3 [i_0] [i_1] [i_1])));

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    arr_7 [i_0] [11] [5] = (arr_3 [i_1] [i_1 + 3] [i_1]);
                    var_21 = ((!(max((arr_1 [i_1 + 3] [i_1 - 1]), (arr_1 [i_1 - 1] [i_1 + 2])))));
                    arr_8 [i_0] = ((!((min((arr_2 [i_0 - 1] [4] [7]), var_3)))));
                }
                /* LoopNest 2 */
                for (int i_3 = 3; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        {
                            var_22 ^= var_18;
                            arr_16 [i_0] [i_0] [8] [9] [i_0] [i_0] = (max((14024 | 10754), (arr_6 [1] [i_0 - 1])));
                        }
                    }
                }
            }
        }
    }
    var_23 ^= (((((min(var_15, var_15))) && -var_2)));
    #pragma endscop
}
