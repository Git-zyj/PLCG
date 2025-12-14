/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_18 = 2014330542;
                            var_19 = (min(var_19, ((((((1 ? 10834 : 1))) ? (-1340619299 / -1340619302) : (~186))))));
                            var_20 = -1340619299;
                            var_21 = (max(97, ((((arr_2 [i_1]) == 0)))));
                            var_22 = ((var_0 == (((12564 || (arr_5 [i_0 - 1] [i_3]))))));
                        }
                    }
                }
                var_23 = min(-119, 2147483619);

                for (int i_4 = 1; i_4 < 12;i_4 += 1) /* same iter space */
                {
                    var_24 = (arr_5 [i_0] [i_1]);
                    arr_12 [3] [i_1] [i_1] = ((((((44002 ? -1340619299 : (arr_3 [i_0])))) ? 4398045986816 : (arr_8 [i_1] [4] [i_4 - 1] [i_0] [i_4]))));
                    var_25 = (min(var_25, (min((~-90), ((min((arr_4 [i_0 + 3] [i_1]), 0)))))));
                }
                for (int i_5 = 1; i_5 < 12;i_5 += 1) /* same iter space */
                {

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_26 = 4013160215740275012;
                        var_27 = (min((arr_14 [i_5]), (arr_8 [6] [i_1] [i_6] [i_5] [i_1])));
                        var_28 += ((4294967284 ? (((min(251, 1)))) : ((var_11 ? (arr_5 [i_6] [i_1]) : ((min(569908304, 120)))))));
                    }
                    for (int i_7 = 1; i_7 < 12;i_7 += 1)
                    {
                        var_29 = ((1249658677 - (~1)));
                        arr_20 [i_1] [i_5] [i_5] [i_5] [i_7 - 1] [i_5] = (max((min((((-5848124458460816107 && (arr_1 [i_0 + 1] [i_0])))), (3313827474 | 10530776642728259820))), 2147483647));
                    }
                    arr_21 [i_0] [i_1] [i_5] [i_5 + 3] = ((26472 ? ((-11274 * (arr_5 [i_0] [1]))) : (max((arr_2 [i_0 - 2]), (arr_5 [i_0 + 1] [i_1])))));
                }
            }
        }
    }
    var_30 = var_10;
    var_31 = var_17;
    var_32 = var_10;
    #pragma endscop
}
