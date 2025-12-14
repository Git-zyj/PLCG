/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((32767 ? -var_0 : (min(825987699, (var_2 || var_12)))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_18 = (((-(min(var_3, var_13)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_19 = 0;
                            var_20 ^= (((((-(arr_4 [i_3 - 1] [i_0 + 1] [i_0 - 1])))) < ((var_11 ? (var_5 - -825987698) : var_8))));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 20;i_4 += 1)
                            {
                                var_21 = 1;
                                arr_13 [i_0] = ((arr_10 [i_4] [i_3 + 2] [i_3] [11] [i_0 - 2]) ? var_8 : (arr_1 [i_0 - 3]));
                            }
                            arr_14 [i_1] [i_1] = ((((max(((((arr_5 [i_0] [i_1] [i_2] [i_3 + 1]) || -8438541652237171492))), (arr_11 [i_0] [i_1])))) ? (max((((!(arr_10 [i_0] [i_1] [i_2] [i_3] [i_1])))), (arr_5 [i_3] [i_2] [i_1] [i_0]))) : -19974));
                        }
                    }
                }
            }
        }
    }
    var_22 = ((0 | (((var_6 != var_6) * var_2))));
    var_23 = (max((3 == var_14), (((((max(var_8, 11)))) > ((6553 ? var_15 : 253))))));
    #pragma endscop
}
