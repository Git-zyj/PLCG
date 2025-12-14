/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= ((8191 ^ (((min(-25727, var_3)) ^ (((max(138, -5425))))))));
    var_18 = 7550;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_19 = (min(var_19, 1));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_20 ^= 13165;
                                var_21 = ((-((((((872617236 ? 1 : 491489635238472881))) || 15183172270277838801)))));
                            }
                        }
                    }
                    var_22 = (((((arr_0 [i_1]) || 5444)) ? (1 < 97) : (((((131071 ? 25726 : -110))) ? -26825 : ((min(17742, -108)))))));
                }
                /* vectorizable */
                for (int i_5 = 1; i_5 < 23;i_5 += 1)
                {
                    var_23 = ((arr_10 [i_0] [i_0] [i_1] [i_1] [i_5 - 1] [i_5] [i_5 + 1]) && (arr_10 [i_0] [i_0] [i_0] [i_1] [i_1] [i_5] [i_5 + 1]));

                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        var_24 = 1496076843;
                        var_25 = (arr_13 [i_5 + 1] [i_5 + 1]);
                    }
                }

                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    var_26 ^= ((-(!var_7)));

                    for (int i_8 = 1; i_8 < 22;i_8 += 1)
                    {
                        var_27 = ((~((-(arr_12 [i_0] [i_8] [i_8] [i_8 - 1])))));
                        var_28 = ((+((((((arr_0 [i_1]) ? 15617948787266421247 : 1984))) ? (((arr_4 [1] [i_1] [i_7] [i_8 - 1]) | -3632448040566157817)) : ((15868268972303249931 ? (arr_19 [i_0] [i_7] [i_0]) : -6485825944239853093))))));
                        var_29 = ((-((17758 << (6485825944239853093 - 6485825944239853093)))));
                        var_30 = (~6485825944239853093);
                    }
                }
                var_31 = ((min((arr_11 [i_0] [i_0]), 1)));
                var_32 = (((arr_2 [i_0]) % (max(((min(-828133499125335735, var_3))), var_7))));
            }
        }
    }
    var_33 = (max(var_33, 60));
    #pragma endscop
}
