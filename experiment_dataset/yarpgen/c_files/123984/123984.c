/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= (var_14 & 2571814131);
    var_19 = (var_1 + var_12);

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_20 = (max(var_20, (((!((max(1723153159, (((arr_3 [i_0] [i_0]) ? 4202269737 : (arr_1 [i_0])))))))))));
        var_21 = (2571814136 ? (min((arr_0 [i_0]), (arr_1 [5]))) : (~3848113253));
        var_22 = min((arr_2 [i_0] [i_0]), (((arr_1 [i_0]) ? (~3919221215) : (min(3919221196, var_16)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_23 *= ((~2571814131) ? (arr_1 [i_1]) : (arr_6 [i_1]));
        var_24 = ((!(arr_5 [i_1])));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
    {
        var_25 = ((((-(arr_2 [3] [i_2])))) ? (!2571814136) : var_4);
        var_26 |= arr_8 [i_2];
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    var_27 = (!var_7);
                    var_28 = (((arr_13 [i_4] [i_3] [i_3] [i_2]) >= (arr_13 [i_2] [i_3] [i_4] [i_3])));
                    var_29 = ((arr_3 [i_4] [i_3]) ? 1723153164 : (arr_3 [i_4] [i_3]));
                }
            }
        }

        for (int i_5 = 2; i_5 < 11;i_5 += 1)
        {
            var_30 = (min(var_30, (~3758096384)));
            var_31 = -4294967284;
            var_32 = 2571814122;
        }
        var_33 = arr_1 [i_2];
    }
    #pragma endscop
}
