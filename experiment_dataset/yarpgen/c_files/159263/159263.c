/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                var_20 = 4294967274;
                arr_7 [i_0] [i_0] [i_0] |= min((arr_2 [10] [10]), (arr_0 [i_1] [i_1 + 1]));
                arr_8 [i_0] [i_0] [i_0] &= (((((arr_4 [i_1 - 1] [i_1 - 2] [i_1 - 2]) > (arr_4 [i_1 + 1] [i_1 + 1] [i_1 + 1])))) / 86);
                arr_9 [i_0] [i_1] = (min(var_12, (((arr_1 [i_0]) ? (arr_1 [i_1 - 1]) : (arr_1 [i_1 - 3])))));

                /* vectorizable */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_21 = (~var_1);

                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            var_22 = (arr_16 [i_1] [i_1 + 2] [i_1] [i_1]);
                            var_23 = 2129556176;
                            var_24 = ((((4294967277 ? (arr_15 [i_0] [i_1] [i_0] [i_0]) : -8663581211080165554)) * var_19));
                            arr_21 [i_1] [i_4] [i_3] [i_1] [i_2] [i_1] [i_1] = (!-91941434);
                        }
                        var_25 = (arr_15 [i_1 - 2] [i_1 + 1] [i_2 - 1] [i_2 - 1]);
                        var_26 = ((~((var_18 ? var_11 : (arr_19 [i_1] [i_2] [i_1] [i_1] [1] [i_1] [i_1])))));
                    }
                    var_27 = 1;
                    var_28 ^= (-9223372036854775807 - 1);
                    var_29 = (arr_3 [i_1] [i_1] [i_0]);
                }
            }
        }
    }
    var_30 = (((((var_14 ? (!var_17) : (min(var_10, var_3))))) ? var_1 : (((min(0, (-127 - 1)))))));
    var_31 = 29141;
    #pragma endscop
}
