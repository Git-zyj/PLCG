/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_7 [i_0] = ((((var_2 - (arr_1 [i_0])))) ? (var_12 | var_10) : (arr_6 [i_1] [i_1] [i_0]));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    arr_12 [i_0] = ((-2049379810 >= (arr_10 [i_0] [13])));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_13 = 144115187002114048;
                                var_14 = 103;
                                arr_18 [i_3] [i_3] [i_1] [i_3] = (((2049379820 <= 0) ? (((arr_10 [9] [9]) / 2049379810)) : var_4));
                                var_15 = var_7;
                                arr_19 [i_0] [i_3] [i_3] = (((61619 ? 17592186011648 : 18446744073709551589)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 |= (max(var_11, (!var_9)));
    var_17 = (min(-1, (var_2 > var_11)));
    var_18 = var_5;
    var_19 = (var_10 == var_8);
    #pragma endscop
}
