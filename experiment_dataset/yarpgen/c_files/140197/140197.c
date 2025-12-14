/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((max((max(var_4, var_3)), ((var_8 ? 12689937526178198394 : 14445044965443087791)))) <= var_2));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    var_17 &= var_0;

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            var_18 = 11012757305789865201;
                            arr_14 [i_0] [i_1] [i_2] [i_0] [i_4] = (arr_3 [i_1] [i_1]);
                            var_19 = (arr_1 [i_0 + 1]);
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_17 [i_5] [i_5] [16] [i_3] &= (((arr_5 [8] [i_3] [8] [i_3]) ? (arr_5 [i_1] [i_3] [i_3] [i_1]) : -4020247757881562724));
                            var_20 &= (((arr_6 [i_2 - 1] [i_2 - 3] [i_0 - 1] [i_0]) || var_6));
                            var_21 &= (-4020247757881562729 - -332542026);
                        }
                        var_22 = (((7433986767919686415 ^ var_3) ^ (arr_0 [i_0 + 1] [i_2 - 3])));
                        var_23 &= -4020247757881562742;
                    }
                }
            }
        }
        arr_18 [i_0] [i_0] = (var_11 + 7433986767919686444);
    }
    for (int i_6 = 2; i_6 < 12;i_6 += 1) /* same iter space */
    {
        var_24 = ((!((!(((var_3 << (var_14 - 121))))))));

        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            var_25 &= ((var_6 ? ((var_14 ? -4020247757881562759 : 14247801169097572423)) : (((arr_1 [i_6 + 2]) ? (arr_1 [i_6 - 1]) : 17969844786144579427))));
            var_26 = arr_11 [i_6 - 1];
            arr_24 [i_7] [i_6] [i_6] = var_8;
            var_27 &= ((((-(-7368234811591881287 - var_2))) & (((((((arr_19 [i_7]) || var_10)) || (arr_19 [i_6])))))));
        }
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 12;i_8 += 1) /* same iter space */
    {
        var_28 = 1;
        var_29 = (arr_12 [i_8 + 2] [i_8 - 2] [i_8 + 1] [i_8 - 1] [i_8] [8] [0]);
    }
    var_30 = ((var_7 < (11012757305789865171 || 4020247757881562742)));
    var_31 = 10618509616148217271;
    #pragma endscop
}
