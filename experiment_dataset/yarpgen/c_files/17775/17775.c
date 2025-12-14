/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                    {
                        var_16 = ((6 / 18446744073709551608) & (max(var_13, (arr_3 [i_2] [i_2] [i_2 + 1]))));
                        var_17 = (10100462053084535318 | 4565039666239587408);
                        var_18 = ((max(255, var_1)));
                        var_19 = (min((max(16322267907490623588, 8515012948509088826)), (max((arr_3 [i_0 + 2] [i_0 + 1] [i_0 + 2]), (arr_3 [i_0 - 1] [i_0 + 1] [i_0 + 1])))));
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                    {
                        var_20 = (min((max((max(var_3, var_2)), ((max((arr_1 [i_0] [i_1]), 384))))), (max(var_10, 5))));

                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 7;i_5 += 1) /* same iter space */
                        {
                            arr_16 [i_0] [i_0] = (((arr_0 [i_5 + 1] [i_2 - 2]) - 10100462053084535314));
                            var_21 = ((-6995266723095211753 != (arr_12 [i_0] [i_5 + 2] [i_2 - 1] [i_0] [i_0])));
                            var_22 = (((arr_4 [3] [i_0 + 3]) || 11));
                            arr_17 [i_0] [8] [i_2] [i_4] [i_4] [i_5] &= (((arr_14 [i_1] [i_5 - 2] [i_2] [i_4] [6]) | (16322267907490623593 > 2124476166218928026)));
                            var_23 *= (arr_8 [i_0] [i_0] [i_0] [1] [i_0 + 3]);
                        }
                        /* vectorizable */
                        for (int i_6 = 2; i_6 < 7;i_6 += 1) /* same iter space */
                        {
                            var_24 = 4565039666239587407;
                            arr_21 [i_0 + 3] [2] [i_2] [0] [i_0] = (arr_3 [i_0] [i_1] [i_4]);
                            var_25 = var_15;
                            var_26 = (arr_13 [i_2 - 1] [i_2] [i_2] [i_4] [i_2]);
                        }
                        for (int i_7 = 2; i_7 < 7;i_7 += 1) /* same iter space */
                        {
                            var_27 = ((((min(18446744073709551605, var_8))) && ((13881704407469964188 != (max(1384779580290398684, 18446744073709551579))))));
                            var_28 = ((max((arr_23 [i_0 + 3] [i_0] [i_0] [i_7 + 2] [i_0] [i_7 - 2]), (arr_15 [i_0] [i_0] [i_2 - 2] [i_4] [4]))));
                        }
                    }
                    var_29 = ((((max(2124476166218928028, 244)) == 536346624)));
                }
            }
        }
    }
    var_30 = (((((var_15 - (12849443310500976367 > var_10)))) != (((min(18446744073709551600, var_3)) + var_8))));
    #pragma endscop
}
