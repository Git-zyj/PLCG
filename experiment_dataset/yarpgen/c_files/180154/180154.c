/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((max(var_8, (~var_8))) | 1580237600));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_11 = ((!((min(1257498092, -1257498093)))));
                var_12 ^= (((((arr_1 [i_1]) ? ((max(-1257498108, 382471167451625426))) : ((15741997742241031582 ? (arr_2 [12] [i_1] [i_1]) : (arr_2 [i_0] [i_0] [i_0]))))) ^ var_6));
                var_13 = (arr_2 [i_1] [i_1] [18]);
                var_14 = 2704746331468520050;

                for (int i_2 = 4; i_2 < 19;i_2 += 1) /* same iter space */
                {
                    var_15 = var_8;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_12 [i_3] [i_2] [i_3] = (max((!0), -var_8));
                                var_16 = -2117662732;
                            }
                        }
                    }
                }
                for (int i_5 = 4; i_5 < 19;i_5 += 1) /* same iter space */
                {
                    var_17 = (((~var_8) ? (max((arr_6 [i_0] [i_0] [i_0] [i_0]), ((76156530 ? 1767398387 : var_0)))) : ((max((arr_15 [i_0] [i_1] [i_1] [i_0]), (arr_15 [i_0] [i_1] [i_5] [i_5]))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            {
                                var_18 = arr_14 [3] [3];
                                var_19 = (~((-(5556905739083148743 % 10489063))));
                                arr_22 [i_0] [i_0] [i_0] [i_6] [i_7] = var_4;
                                var_20 = (min(((var_7 ? var_3 : (min(1257498081, var_8)))), var_1));
                            }
                        }
                    }
                }
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        var_21 += (((arr_1 [i_8]) || ((min(2147483647, (arr_2 [i_9] [i_8] [i_1]))))));
                        arr_30 [i_0] = 1499671513297472499;
                        arr_31 [i_0] [i_0] [i_8] [i_8] [i_9] [i_9] = (-1606315132 + 1767398402);
                        arr_32 [i_0] [i_1] [14] [i_9] = (((arr_21 [i_0] [i_1] [i_1] [i_1] [i_0]) ? (min((arr_28 [i_0] [i_1] [i_8] [i_9]), -var_1)) : (((var_1 <= (((arr_26 [i_9] [i_8] [i_1] [20]) ^ 5556905739083148765)))))));
                    }
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        arr_35 [i_0] [8] [i_8] [11] [i_10] [i_10] = -76156512;
                        arr_36 [i_10] [7] [i_10] = var_9;

                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 21;i_11 += 1)
                        {
                            var_22 *= (((((var_7 ? var_7 : var_0))) || 5556905739083148743));
                            arr_39 [5] [i_10] [i_8] [i_10] [i_11] = ((1821985836 ? (arr_15 [i_11] [i_10] [i_1] [i_0]) : 0));
                            var_23 = ((~(arr_37 [i_10] [i_0])));
                            var_24 ^= (((arr_3 [i_0]) && 1821985829));
                        }
                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 21;i_12 += 1)
                        {
                            var_25 = (min(var_25, ((+(((arr_25 [5] [i_1] [i_1] [i_1]) ? -24 : var_0))))));
                            arr_42 [i_0] [i_10] [i_10] [i_1] [i_8] [11] [i_12] = 0;
                            var_26 = ((0 ? 4003 : (((arr_7 [i_8] [i_10]) ? 985033786 : 0))));
                            var_27 = (((arr_29 [i_0] [i_8] [11] [i_12]) ? (arr_28 [i_0] [7] [i_0] [i_12]) : var_3));
                        }
                        for (int i_13 = 3; i_13 < 19;i_13 += 1)
                        {
                            var_28 = (min(18617, (arr_13 [i_0] [i_0] [i_0] [i_0])));
                            var_29 = (min((1257498096 ^ -1947243652), (min(-763546632, -1257498096))));
                            var_30 = -914857989;
                            var_31 = -1257498097;
                            arr_47 [i_8] [i_1] [i_10] [i_1] [i_13 + 1] [i_13] = max((-331296946 % 120), var_3);
                        }
                    }
                    var_32 = (~(arr_18 [i_0] [i_0] [i_0] [i_8] [i_0]));
                    var_33 = min(21, 26);
                    var_34 -= ((!(((arr_34 [i_8] [i_0]) != (arr_34 [i_1] [i_0])))));
                }
            }
        }
    }
    var_35 = (var_4 >> (-763546618 + 763546625));
    var_36 = ((-var_5 * ((((var_6 >> (var_1 + 1532722659)))))));
    #pragma endscop
}
