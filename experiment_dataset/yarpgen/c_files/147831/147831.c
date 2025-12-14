/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {

                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            var_18 = (max(var_18, 1));
                            var_19 = ((((((~(arr_10 [0]))) ^ ((223 ? -9100725686340267463 : var_5))))));
                            var_20 = ((max((arr_9 [i_1]), (2221 && 208))));
                            var_21 = (max(var_21, ((((((-(arr_6 [i_0 - 1])))) ? (((arr_12 [i_0] [i_1] [i_2] [i_3] [i_4]) ? ((43 ? 139 : 2419120693915202348)) : (((var_11 ? var_1 : (arr_12 [i_0] [8] [i_2] [i_3 + 1] [i_4])))))) : -var_3)))));
                            var_22 = (max(var_22, (((((var_14 ? (arr_7 [4] [4] [i_4]) : (arr_7 [0] [i_1] [i_2]))) > (arr_9 [4]))))));
                        }
                        var_23 = var_12;
                    }
                    var_24 = 46;
                    var_25 = 1889751803;
                    var_26 = (!((((((arr_14 [i_0 - 1] [i_1] [i_1] [1] [i_1] [i_0 - 1] [i_2]) >= 56))) >= (arr_1 [i_0 - 1]))));
                }
                var_27 = (max(var_27, ((((((var_10 ? ((1 ? (arr_4 [0]) : 0)) : (arr_6 [i_0 - 1])))) ? ((((arr_12 [8] [i_1] [i_0] [i_1] [i_0]) ? (min((arr_5 [4] [4]), 268435448)) : var_11))) : (min((max(1183810331, var_15)), (var_6 << 1))))))));
                var_28 = (var_4 || 14937946292715669086);
                var_29 = ((((var_12 ? (((((arr_11 [i_1] [i_1] [i_0] [i_0] [i_0] [i_1]) != 1513885177)))) : var_8)) % (((var_9 & 1650262266) ? ((45 ? var_1 : var_14)) : var_15))));
            }
        }
    }
    #pragma endscop
}
