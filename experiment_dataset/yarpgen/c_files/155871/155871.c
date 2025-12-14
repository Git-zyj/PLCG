/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_17, var_7));
    var_20 += var_17;
    var_21 = (min(var_21, (((((max(var_9, (var_15 >= -14)))) ? (!var_4) : (max(-3830522286590550727, (var_5 + var_11))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = (min((arr_2 [i_1]), (max((arr_2 [i_0]), var_15))));

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {

                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        var_22 = (min((arr_8 [i_0] [i_0] [i_0] [i_0]), (arr_6 [i_3 - 1])));
                        var_23 |= ((!(arr_9 [i_0] [i_0] [i_0])));
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        var_24 = ((~(arr_5 [i_1] [i_4])));
                        arr_15 [i_4] [i_1] [i_2] [i_2] = (arr_6 [i_1]);
                    }
                    for (int i_5 = 1; i_5 < 6;i_5 += 1)
                    {
                        arr_18 [i_5] [i_2] = (arr_11 [i_0] [i_0] [i_0]);
                        arr_19 [i_5] [i_5 + 4] [i_2] = (min((arr_8 [i_0] [i_2] [i_2] [i_5]), (((-(arr_14 [i_2]))))));
                        var_25 |= min((arr_13 [i_5 + 4] [i_5 - 1] [i_5 + 2] [i_5 - 1] [i_5 + 1]), -2047805378);
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            arr_26 [i_0] [i_1] [i_2] [i_2] [i_6] [i_6] [i_7] = (arr_9 [i_0] [i_1] [i_0]);
                            arr_27 [i_2] [i_2] = arr_17 [i_2] [i_2] [i_7];
                            var_26 = (max(var_26, ((max((arr_23 [i_0] [i_0] [i_1] [i_2] [i_6] [i_7]), (arr_5 [i_1] [i_1]))))));
                            var_27 *= (arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                        }
                        var_28 = (max(var_28, ((min(-1, -30)))));
                        var_29 = ((0 ? (max((arr_9 [i_6] [i_2] [i_0]), (-127 - 1))) : (min((arr_8 [i_0] [i_1] [i_2] [i_6]), 576400284))));
                        var_30 += (max(1, (((arr_25 [i_0] [i_0] [i_1] [i_2] [i_6]) >= (arr_25 [i_1] [i_1] [i_2] [i_1] [i_6])))));
                        var_31 = (max((arr_23 [i_2] [i_0] [i_2] [i_6] [i_0] [i_6]), (min((arr_23 [i_6] [i_6] [i_2] [i_2] [i_1] [i_0]), 576400284))));
                    }
                    var_32 = (min((arr_7 [i_1] [i_2]), 3709110662690623725));
                    var_33 = (((min((min(-1311223981954422519, 6170779613556245766)), ((max(-1, (arr_23 [i_0] [i_0] [i_1] [i_0] [i_1] [i_1]))))))) && (!var_0));
                }
                var_34 = (max((arr_11 [i_0] [i_0] [i_1]), (min((arr_11 [i_0] [i_0] [i_1]), (arr_20 [i_0] [i_1] [i_0] [i_1])))));
            }
        }
    }
    var_35 = var_3;
    #pragma endscop
}
