/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= ((((!7247625850355797847) ? 7247625850355797855 : 22)) > var_4);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_21 = (max(var_21, ((((((!var_16) + ((max((arr_1 [i_0] [i_1]), var_0))))) - (!var_2))))));

                for (int i_2 = 4; i_2 < 12;i_2 += 1)
                {
                    arr_9 [i_0] = 2791355862;
                    arr_10 [i_0] [4] = 11199118223353753756;
                }
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    arr_13 [i_0] [i_0] [1] = (((((((-(arr_4 [i_0 + 2] [3])))) ? var_6 : (arr_1 [1] [i_0]))) - 345648913));
                    arr_14 [i_0] [i_1] [i_0] = ((!(((-(509046761 - 696552231))))));
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    arr_18 [i_0 + 2] [i_4] [i_0] [i_0] = (((arr_0 [2]) > (-118 + 1)));

                    for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                    {
                        var_22 = ((1250398094 > (var_19 != var_4)));
                        var_23 = (arr_4 [i_0] [i_5]);
                        arr_22 [i_0] [i_1] [2] [i_5] [i_5] = ((-(arr_19 [i_0 + 1] [i_0 + 2] [i_0] [i_4] [8])));
                    }
                    for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                    {
                        arr_26 [i_0] [i_1] [7] [i_0] = ((0 * (arr_25 [i_0])));
                        var_24 ^= (((((-5 | (arr_12 [i_1] [8] [i_1])))) ^ (((arr_7 [i_0] [i_4] [i_6]) & var_17))));
                        var_25 = -1;
                        arr_27 [i_0] [i_0] = (((((!(arr_2 [i_0] [i_0]))))) / (arr_21 [i_0] [12] [4] [4] [i_0]));
                        var_26 = (arr_24 [i_0] [i_4] [i_4] [i_4]);
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {

                        for (int i_8 = 1; i_8 < 12;i_8 += 1)
                        {
                            var_27 = ((!(13715415207082125294 * -1343337113606560864)));
                            var_28 = (!(9689720176295150050 && 57925));
                        }
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            var_29 = (((!(arr_0 [i_7]))));
                            var_30 = (!11199118223353753769);
                            var_31 = (-9 / 3895650488516763725);
                        }
                        var_32 = (!9223372036854775807);
                    }
                }
                var_33 = 3598415066;
            }
        }
    }
    #pragma endscop
}
