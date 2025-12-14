/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!var_11);
    var_18 &= ((var_11 ? (~15004) : ((((1 || (((var_4 ? var_10 : var_9)))))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_19 = (min(var_19, ((((((var_3 * (arr_2 [i_0])))) ? (arr_1 [i_0]) : ((max(-318292010, 4294967295))))))));
        var_20 |= (max((arr_1 [i_0]), (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
        var_21 = ((((!(!-14705))) ? ((((((arr_2 [i_0]) ? 384 : var_9))))) : ((((max(var_4, 0))) ? (((arr_3 [i_0]) ? var_0 : var_10)) : (!-318292010)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_6 [i_1] = ((var_13 ? (!var_13) : -102));
        var_22 += 13422712398916170841;
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 20;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        var_23 = 50;
                        arr_15 [i_1] [i_1] [15] [i_1] [i_1] = (arr_11 [i_3 - 1]);
                        var_24 = 25092;
                        var_25 *= ((-(arr_13 [i_3 + 2] [i_2] [i_3] [i_2])));
                    }
                    for (int i_5 = 4; i_5 < 21;i_5 += 1)
                    {

                        for (int i_6 = 3; i_6 < 21;i_6 += 1)
                        {
                            var_26 = (max(var_26, (((((arr_11 [i_1]) && 524284))))));
                            arr_24 [i_1] [i_3] [i_5] [i_6] = (arr_23 [i_3] [i_6] [1] [i_5] [i_3] [i_2] [2]);
                            var_27 -= (((arr_7 [i_5 - 1] [20] [i_5]) ? 67108864 : 26583));
                        }
                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            arr_29 [i_1] [i_5] [i_3] [i_2] [i_1] = (arr_5 [i_1] [i_2]);
                            arr_30 [i_1] [i_1] = (arr_19 [i_1] [i_1]);
                        }
                        var_28 = (((arr_17 [i_3 - 1] [i_3 + 2] [i_3 - 1] [i_1]) ? (arr_17 [i_3 - 2] [i_3 - 2] [i_3 + 2] [i_1]) : 4080));
                    }
                    var_29 = var_16;
                }
            }
        }
    }
    #pragma endscop
}
