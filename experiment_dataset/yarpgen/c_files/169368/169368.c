/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= (~23672025);
    var_16 = ((!((max((((var_7 ? var_1 : var_10))), ((var_10 ? 1 : 1329072479)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    arr_6 [i_0] [i_1] &= var_1;
                    arr_7 [3] = (!6161455877642546459);
                    var_17 = (min(var_17, (arr_3 [i_0] [i_1] [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_14 [i_3] [i_3] [2] [2] = (max(((-((94 ? (arr_4 [i_0] [i_1] [i_0]) : -2100304769)))), (((var_6 != (arr_12 [i_0] [i_0] [i_0] [i_0]))))));
                                var_18 = (arr_0 [i_1]);
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    arr_17 [i_1] [i_5] = var_8;
                    var_19 ^= ((!(arr_11 [i_0] [i_1] [i_0] [i_5] [i_0] [6])));
                    var_20 = (((((min(206, 1))) ? ((~(arr_1 [i_0]))) : (((50 ? (arr_0 [i_1]) : 3531609821))))));
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    arr_20 [i_0] [4] [i_6] [i_0] = (max((arr_4 [i_0] [i_0] [i_0]), ((-((min(50, (arr_12 [i_0] [i_0] [i_0] [i_6]))))))));
                    var_21 = max((~110), (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]));
                    var_22 ^= (max((((~((var_12 | (arr_13 [i_0] [i_1] [i_0] [i_1] [i_1] [i_1] [i_1])))))), var_7));
                }
                var_23 = (max(var_23, var_0));
                var_24 = (max(var_24, (((1978296642 ? 15684891701936479603 : 18446744073709551615)))));
                var_25 = (min(var_25, 1978296642));
            }
        }
    }
    var_26 = (min(112, 0));
    #pragma endscop
}
