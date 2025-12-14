/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0] = (((arr_1 [i_0 + 1]) ? -24765 : (arr_1 [i_0 - 3])));

                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    var_11 = ((!(((-24766 ? 24772 : 24765)))));

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        var_12 = (32767 != -505008345);
                        arr_10 [i_0] [1] [i_2] [i_2] = (((arr_6 [i_0] [i_0] [i_0 - 1] [i_0 - 3]) * 0));
                        arr_11 [i_0] [12] [i_2] [0] [i_0] = (-(((arr_9 [i_1] [i_2] [i_1]) ? var_0 : 127)));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_13 = -24737;
                            var_14 = ((((((arr_1 [i_2 + 3]) <= var_2))) >= (arr_8 [i_2])));
                        }
                        var_15 = ((((211359026 ? 9470454500021710639 : var_10)) & (385328637 || var_7)));
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        var_16 = (var_5 && 50081);
                        var_17 = (((((!(arr_8 [i_2])))) >= var_1));
                        arr_16 [i_2] [i_2] [i_2] [7] = (arr_1 [11]);
                    }
                    var_18 = ((-((((((((arr_3 [i_2] [i_2] [i_2]) + 2147483647)) << (1 - 1)))) ? 385328644 : var_7))));
                }
                for (int i_6 = 0; i_6 < 0;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        var_19 = var_9;
                        var_20 = (max(var_20, ((min(((var_2 ? 2486486371250716136 : (arr_13 [i_1] [i_1] [i_1] [i_1] [i_0])), -var_6))))));
                        arr_22 [i_6] [i_6] [i_6] [i_1] [i_0] = (((!(arr_7 [i_0 - 3] [i_1 - 3]))));
                    }
                    var_21 = (251328807 > ((1 ? -24723 : 225)));
                }
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    var_22 &= ((((min(var_6, (arr_6 [i_0 - 2] [i_1 - 2] [i_1 - 2] [i_8])))) ? (((arr_6 [14] [i_1 - 4] [i_8] [16]) ? -25390 : (arr_6 [11] [i_1] [i_1] [i_1]))) : ((~(arr_6 [i_0] [i_1] [i_1 - 4] [i_8])))));
                    arr_26 [i_8] [i_0] [1] [i_0] = (min(((0 ? 1 : (((arr_7 [i_0] [0]) ? 65523 : 9470454500021710625)))), (((9223372036854775807 + ((((!(-127 - 1))))))))));
                }
            }
        }
    }
    var_23 = ((31 & (0 >> 1)));
    #pragma endscop
}
