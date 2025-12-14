/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_16 = (arr_2 [i_2] [i_2] [i_2]);
                                var_17 = (max((arr_9 [i_0] [12] [i_2]), ((19119 ? -6107 : (-127 - 1)))));
                                var_18 = (arr_8 [i_0] [i_1 - 2] [i_2] [i_3] [i_4]);
                                var_19 = var_6;
                            }
                        }
                    }
                    arr_12 [i_2] [i_2] [i_2] [i_2] = (((((30967 % (arr_6 [i_1 + 1] [i_1 + 1])))) | var_11));
                    var_20 = (min(var_20, (((!(((var_4 | (arr_4 [i_1] [i_1])))))))));
                }
            }
        }
    }
    var_21 = ((min(var_0, (-9223372036854775807 - 1))));
    var_22 = 18422727728405847467;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 19;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 16;i_8 += 1)
                    {
                        {
                            var_23 |= ((-11736 ? (max(7438574391893809205, (arr_16 [i_6 + 1]))) : (~-83)));
                            var_24 *= 1;
                            var_25 = (min(var_25, -114));
                        }
                    }
                }
                var_26 = 1155341059;
            }
        }
    }
    var_27 = -112;
    #pragma endscop
}
