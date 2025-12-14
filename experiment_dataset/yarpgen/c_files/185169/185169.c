/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max((min((!var_11), 9223372036854775791)), var_3));
    var_14 = ((3148276224642860903 ? 70368744177664 : -12));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_15 = (min(var_15, ((((!(((-(arr_5 [i_0] [i_1 + 1] [i_2])))))) ? (((((max(65535, 4294967283))) ? ((var_12 ? var_0 : var_5)) : 1))) : (max(5916427899564647850, (((var_12 / (arr_4 [i_1]))))))))));
                    arr_7 [i_0] [i_1] = var_0;

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_16 = (((arr_0 [i_0] [i_3]) / (((((3263032431 ? 19 : 768058850015972660))) ? -var_9 : (8507594525363051743 != -50)))));
                        var_17 |= (((!(var_5 && var_2))));
                    }

                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        arr_14 [i_4] [6] = (65498 ^ 12530316174144903750);
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = (min(17660184266140077173, ((((((var_5 ? (arr_4 [i_0]) : (arr_10 [i_4] [i_2] [i_1] [5] [1])))) || (1 == var_0))))));
                        var_18 = (min(var_18, 4294967280));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        var_19 = ((-7876022692618016480 ? 5916427899564647850 : 1));
                        var_20 = (max(var_20, (((782258336 ? var_2 : (((!(-9223372036854775807 - 1)))))))));
                    }
                }
            }
        }
        var_21 -= ((((min(0, 2430633643))) ? ((((!(((-7655470646595636362 ? 12530316174144903773 : -1436857961))))))) : 12530316174144903766));
        var_22 *= 0;
        var_23 = var_5;
    }
    var_24 = ((var_7 <= ((((((-24 ? 12346333776696736005 : var_4))) ? ((var_3 ? 130560 : var_3)) : ((min(-782258313, 3964924131))))))));
    #pragma endscop
}
