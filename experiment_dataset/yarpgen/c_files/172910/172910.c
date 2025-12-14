/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, 2962745074));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_18 = -30307;
        arr_4 [i_0] = ((((min(-69, 0))) ? (max((((3163498362512285142 ? 15 : var_14))), (min(15283245711197266500, 18446744073709551612)))) : (max((min(35204, 15283245711197266473)), 35211))));

        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {

            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                var_19 = (((~(max(1167356779, -1208644529)))));
                arr_9 [i_0] [i_0] = (((min(1208644514, ((min(12, 219)))))) ? ((min(-1208644529, -13))) : (~15283245711197266496));
                arr_10 [i_0] [i_0] [i_0] [i_0] |= ((-12 ? -6624184343994797212 : 15283245711197266514));
                var_20 ^= ((18446744073709551599 ? (-1208644529 + 115) : 2139150355));
            }
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        var_21 *= 3374690324731685279;

                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            var_22 -= ((!((min(67645734912, (max(12, 8725724278030336)))))));
                            arr_18 [i_0] [i_4] [i_3] = (max((min(((min(56463, -13))), (max(289712184, var_13)))), (((-289712200 ? var_15 : -48)))));
                            var_23 = (max(var_23, -1));
                        }
                        for (int i_6 = 1; i_6 < 13;i_6 += 1) /* same iter space */
                        {
                            var_24 = (~-var_3);
                            arr_23 [i_0] [i_0] [i_1 + 1] [i_3] [i_3] [i_3] [i_0] = (~var_7);
                            var_25 = ((max(var_13, 13)));
                            arr_24 [i_0] [2] [i_0] [i_3] [i_0] [i_4] [i_3] = (max(((var_8 ? 124 : ((197 ? 2147483647 : -289712184)))), -7));
                        }
                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 13;i_7 += 1) /* same iter space */
                        {
                            arr_27 [i_3] [i_4] [i_1 - 1] [i_1 - 1] [i_3] [i_1 - 1] [i_0] = (35221 || 0);
                            var_26 = -18;
                        }
                        /* vectorizable */
                        for (int i_8 = 1; i_8 < 13;i_8 += 1) /* same iter space */
                        {
                            var_27 = 289712185;
                            var_28 = 14;
                        }

                        for (int i_9 = 2; i_9 < 13;i_9 += 1) /* same iter space */
                        {
                            var_29 += 3227131517;
                            var_30 = -468995835;
                            arr_34 [i_9] [i_9 + 2] [i_9] [i_9] [i_9] = (min(((255 ? (3566935934 * 48) : 0)), ((min(2962745068, 4095)))));
                            var_31 = max((-23 || 8229684601804765352), (max(var_12, (30282 / 2956))));
                        }
                        /* vectorizable */
                        for (int i_10 = 2; i_10 < 13;i_10 += 1) /* same iter space */
                        {
                            arr_38 [i_0] [i_1] [i_0] [i_4] [i_0] = (14923948373293577776 / var_15);
                            var_32 = 18446744073709551615;
                            var_33 *= (((30307 * 1) ? var_0 : (var_15 / 216815265)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
