/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~126100789566373888);

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_21 *= (!var_6);
        var_22 = ((!(--307286115612285991)));
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (-((~(arr_5 [i_1] [i_1 + 1]))));
        arr_7 [i_1] &= ((!(~var_15)));
        arr_8 [i_1] = ((!(!7152798694697852195)));
    }
    for (int i_2 = 2; i_2 < 18;i_2 += 1) /* same iter space */
    {
        var_23 -= ((-(((!(~-1814342153126871253))))));
        var_24 = (min(var_24, (((~((~(~var_13))))))));
        arr_13 [i_2] &= ((((!(!1502776078454522984)))));
    }
    for (int i_3 = 2; i_3 < 18;i_3 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_4 = 2; i_4 < 19;i_4 += 1)
        {
            arr_20 [i_3] [i_3] = ((~(~var_13)));
            var_25 = (!-1502776078454522993);
            var_26 = 2187450207352292755;
            var_27 ^= ((!(arr_12 [i_4])));
            var_28 = (~16121);
        }
        var_29 = (min(var_29, ((~(~6022943930357005163)))));
        var_30 &= (((~(!-2203051615768183388))));
    }
    /* LoopNest 3 */
    for (int i_5 = 3; i_5 < 9;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 10;i_7 += 1)
            {
                {
                    arr_31 [i_6] [i_6] [i_6] [i_7] = ((!(((~(!549755813887))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 4; i_9 < 10;i_9 += 1)
                        {
                            {
                                arr_37 [i_5] [i_5] [i_5] [i_6] [i_5] = ((!(!32767)));
                                var_31 = (min(var_31, (~8511521440516146508)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 11;i_11 += 1)
                        {
                            {
                                var_32 = (max(var_32, (((!(arr_32 [i_5] [i_6] [i_11] [i_5]))))));
                                arr_44 [i_5 + 1] [i_5] [i_5] [i_6] [i_5 - 2] = ((-(((!(arr_33 [i_11] [i_6] [i_11] [i_10]))))));
                                arr_45 [i_5] [i_5] [10] [i_6] [i_7 - 1] [i_6] = -1227552917211382324;
                            }
                        }
                    }
                }
            }
        }
    }
    var_33 = (~7890790276427199192);
    #pragma endscop
}
