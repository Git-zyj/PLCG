/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_12 *= (((arr_2 [i_0 - 3] [i_0]) ? 95 : ((((arr_0 [i_0]) != var_0)))));
        var_13 += ((((((((arr_0 [i_0]) ? (arr_3 [i_0 - 2] [i_0 - 3]) : (arr_1 [i_0])))) ? ((-93 ? (arr_2 [i_0] [0]) : 4980595996072238318)) : var_4))) && ((((~1) ^ var_4))));
        var_14 *= (arr_0 [i_0 + 1]);
    }
    var_15 = (((~var_9) * var_7));
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {
                    var_16 = (min(var_16, ((((((min(var_11, 629241566412973187)) < (((~(arr_3 [20] [i_2])))))) ? (max(var_11, (arr_11 [i_1] [i_1] [i_2 - 2] [i_2]))) : (((max((arr_8 [i_2 - 1]), (arr_8 [i_2 - 2]))))))))));
                    var_17 = (max(var_17, (((~(((min(var_11, (arr_10 [i_1] [i_3]))) % (arr_5 [i_1]))))))));
                    var_18 = (max(var_18, (((((!((((arr_2 [i_1] [i_3]) ? (arr_10 [14] [i_1]) : 8912956175683600547))))) ? (((((var_6 / var_10) && (((-2322411396925728063 ? var_1 : var_9))))))) : (arr_6 [i_1]))))));
                    arr_12 [i_1] [i_1] [i_2] [i_3] = (max(2948406761, 4980595996072238318));

                    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                    {
                        var_19 = ((((min((arr_0 [i_2 - 1]), 0))) == (((arr_4 [i_3] [i_2 - 1]) ? (arr_0 [i_2 - 2]) : (arr_4 [i_3] [i_2 - 2])))));
                        var_20 = (max(var_20, var_6));
                    }
                    for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                    {
                        var_21 = (min(var_21, (((((((1950266502 ? 6560152321803164977 : 1)))) ? (arr_16 [2] [i_2 - 1] [i_2 + 1]) : (arr_8 [i_1]))))));

                        for (int i_6 = 3; i_6 < 15;i_6 += 1)
                        {
                            var_22 = (max((max((arr_20 [i_6 - 2] [i_1] [i_2 + 1]), (arr_20 [i_6 - 2] [i_1] [i_2 + 1]))), ((((~(arr_3 [i_3] [i_3])))))));
                            var_23 = (min(var_23, ((min((((((((arr_3 [i_2] [i_2]) ? (arr_7 [i_1] [i_2 + 1] [i_1]) : var_9))) ? (min(2948406761, (arr_1 [i_1]))) : 2948406761))), var_8)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
