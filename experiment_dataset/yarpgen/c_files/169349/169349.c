/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            var_14 -= (min(((min(var_13, var_7))), (((-315701986754171391 ? -1697873790 : 49582)))));
            arr_6 [i_1] [i_0] [3] = ((45840 ? 283726776524341248 : -4523521250835211129));
            var_15 = (max(var_15, (((((arr_1 [i_0 - 2]) ? var_8 : (arr_1 [i_0 - 3])))))));
        }
        var_16 = (((max((((arr_1 [i_0 - 3]) ? 3471652469127272789 : 6221)), (!var_4))) == ((((((min(var_12, 6205))) != 49595))))));
        var_17 = (max(var_17, ((min(((!(arr_2 [i_0 + 1]))), ((!(((var_3 ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0])))))))))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 7;i_2 += 1)
    {
        arr_9 [6] = var_4;
        arr_10 [i_2] = ((var_9 ? (arr_1 [i_2 + 2]) : (((1 ? var_1 : var_12)))));
    }
    var_18 = var_9;
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            {
                var_19 = -19;
                var_20 = (((((~((1 ? 13569 : -20))))) ? 49581 : ((min((max(0, 6221)), var_12)))));
                var_21 = (0 <= 220);
            }
        }
    }
    var_22 = var_9;
    var_23 = var_0;
    #pragma endscop
}
