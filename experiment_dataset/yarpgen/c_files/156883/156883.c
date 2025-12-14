/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156883
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    var_19 = (arr_0 [i_1]);

                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        var_20 = (2047 < 49);
                        arr_13 [i_1] [i_1] [i_2] [i_2] [i_3] = ((((max((arr_9 [i_1] [i_2] [1] [i_1]), ((min(49, 1)))))) || ((!(((1 ? (arr_1 [i_1] [i_1]) : var_3)))))));
                    }

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {

                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 9;i_5 += 1)
                        {
                            arr_21 [1] [i_1] [7] [i_1] [i_0] = (((!var_18) << (1048575 - 1048558)));
                            var_21 = ((-1919437420 ? 207 : (arr_9 [i_1] [i_2 + 1] [6] [i_2])));
                            arr_22 [i_0] [i_0] [i_1] [i_4] [8] = (((((18446744073709551615 ? (arr_3 [i_2]) : (arr_12 [3] [i_1] [i_1] [i_4] [i_4])))) ? 4293918720 : (-13870 | 4294967295)));
                            var_22 = (min(var_22, ((((arr_12 [1] [i_2 + 2] [i_2 + 2] [i_4] [i_5]) + 9007199254740991)))));
                            var_23 = (((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]) >> (-var_16 - 7313551099860278620)));
                        }
                        var_24 = (min(((((arr_8 [i_0] [i_1] [i_1]) ? (max((arr_3 [i_0]), (arr_0 [i_0]))) : (((arr_12 [i_0] [i_1] [i_0] [i_4] [i_4]) / (arr_14 [i_1] [5])))))), (min(4294967274, (arr_19 [i_2 + 2] [i_2] [i_2] [2] [i_2 + 1] [2] [i_2 + 1])))));
                    }
                }
            }
        }
    }
    var_25 = var_14;
    var_26 = (63 >= 18437736874454810624);
    var_27 = (~0);
    #pragma endscop
}
