/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_13 ^= (((((+(((arr_1 [i_0 - 1] [i_0 + 1]) ? var_5 : 3180937260))))) ? var_4 : (min(((-(arr_2 [i_0]))), var_1))));
                    arr_8 [i_1] [i_0] [i_1] = (!0);

                    for (int i_3 = 4; i_3 < 12;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            arr_14 [i_0] = (~67092480);
                            arr_15 [i_0] = 36836;
                            var_14 *= arr_1 [i_0] [14];
                        }
                        for (int i_5 = 2; i_5 < 15;i_5 += 1) /* same iter space */
                        {
                            arr_18 [i_0] [i_1] [i_0] [i_2] [i_5] |= (arr_11 [i_0 + 2] [i_2] [2] [i_3 + 4] [i_2]);
                            var_15 += (max((((!((min((arr_17 [i_0]), 3145955952)))))), (min(var_0, 58476))));
                            arr_19 [i_0] [i_3] [i_2] [i_1] [i_0] = ((-1 ? ((max(var_1, 9190))) : (max((arr_13 [i_0 + 2] [i_1] [i_2 + 1] [i_3] [i_0]), ((-(arr_6 [i_0] [i_0] [i_0] [i_0])))))));
                        }
                        for (int i_6 = 2; i_6 < 15;i_6 += 1) /* same iter space */
                        {
                            var_16 = 0;
                            arr_22 [i_6 - 2] [i_0] [i_2 + 1] [i_2 + 1] [i_1] [i_0] [i_0] = (max((arr_21 [i_0 + 1] [3] [4] [i_0] [i_0 + 2] [3] [i_0]), (max(var_12, (arr_6 [i_2 + 1] [i_2 - 2] [i_0] [i_2 - 2])))));
                        }
                        var_17 = ((((((((var_2 ? (arr_2 [i_0 - 1]) : var_0))) ? 43201 : ((((arr_20 [3] [i_1] [6] [i_2] [i_3]) > 43456)))))) != (max((arr_5 [i_0]), (arr_5 [i_1])))));
                        var_18 = ((((63964 < (arr_4 [i_3 - 1]))) || var_5));

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            arr_25 [i_0] [i_0] [14] [i_3] [i_7] = var_1;
                            var_19 = ((var_2 ? var_8 : -var_1));
                            arr_26 [i_0] [i_0] [i_2] [i_3] [i_7] = ((((-(arr_6 [i_0] [i_2] [i_0] [i_7]))) < (arr_3 [i_1] [i_0] [0])));
                        }
                    }
                }
            }
        }
    }
    var_20 &= 3145955970;
    var_21 = var_11;
    #pragma endscop
}
