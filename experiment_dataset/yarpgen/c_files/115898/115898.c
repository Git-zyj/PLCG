/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [7] [i_4] [i_3] = ((0 ? var_7 : var_3));
                                arr_16 [i_3] [i_3 + 1] [i_2 + 1] [i_1] [i_1] [i_1] [i_3] = (((arr_4 [i_2] [i_2 + 1] [i_2]) ? 18446744073709551607 : 1173353711));
                                var_13 = (arr_1 [i_3 + 2] [i_3 + 2]);
                            }
                        }
                    }
                    arr_17 [i_0] [i_1 - 1] [i_1 - 1] [i_2] = ((var_8 >> (((arr_13 [i_0] [i_1] [i_2] [i_1] [i_2] [i_0]) - 8470634825234863270))));
                    var_14 ^= var_0;
                    arr_18 [i_2] [i_1 - 2] [i_0] = (11 + var_2);
                }
                var_15 = var_11;
            }
        }
    }
    var_16 = ((((var_5 ^ ((max(var_5, 251)))))) | ((var_3 ^ (var_9 & var_2))));
    var_17 = ((!(((66 ? (var_5 & 1042740832) : var_10)))));
    var_18 -= ((~(min(((12321 ? 18446744073709551613 : 0)), ((max(5105, 0)))))));
    #pragma endscop
}
