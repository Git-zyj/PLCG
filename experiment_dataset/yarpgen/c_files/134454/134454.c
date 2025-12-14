/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_14 = (+(max((arr_2 [i_1 + 4] [i_1 + 4] [i_2 - 1]), (arr_2 [i_1 - 1] [i_0] [i_2 - 1]))));

                        for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
                        {
                            var_15 &= max((arr_11 [i_2 - 1] [i_2 - 2] [21] [i_2 + 2] [i_2 - 1] [i_2 - 2]), ((((~3032084425419659803) || (arr_5 [i_0] [i_0] [i_2 + 4])))));
                            var_16 |= (max((1152921504606846944 ^ 3491934432), ((max(0, 480)))));
                            var_17 = (arr_5 [i_4] [i_1] [i_4]);
                            var_18 |= ((((1565492784 ? 20179 : -3117366005795357156)) >= var_8));
                        }
                        for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                        {
                            var_19 = (min(((~(-127 - 1))), ((((((arr_7 [i_0] [7]) && (arr_13 [17] [17] [i_2] [i_2] [i_2]))) && var_6)))));
                            var_20 = (max(var_20, (((~(!var_10))))));
                        }
                        for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                        {
                            var_21 = ((((min(var_3, var_6)))));
                            var_22 = ((((!((min(var_11, (arr_6 [i_3] [i_1 + 3] [i_2])))))) || ((max((arr_4 [i_2 + 4] [i_1 + 1]), (arr_4 [i_2 + 1] [i_1 + 1]))))));
                            var_23 -= (max((~1), (min((arr_3 [i_0]), ((max(1565492776, (arr_16 [i_0] [i_0] [i_2 - 2] [i_3] [i_0] [i_0] [i_3]))))))));
                            var_24 = (((max((~2892861005), var_13)) > var_3));
                        }
                        for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
                        {
                            var_25 *= (arr_19 [i_0] [i_1] [i_1] [i_3] [i_3] [i_7]);
                            var_26 = (max(var_8, (min((arr_8 [i_1 + 2] [i_1 + 2] [i_2 - 1] [i_2 - 2]), (!var_5)))));
                            arr_22 [i_7] [i_1] = (arr_12 [i_0] [i_2 - 1] [i_1 + 2] [i_7] [i_0]);
                        }
                    }
                }
            }
        }
        var_27 = var_2;
        var_28 = 680126132414692447;
    }
    for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
    {
        arr_26 [i_8] [i_8] = ((((((((var_2 >> (((arr_7 [i_8] [i_8]) - 163))))) ? (((arr_2 [i_8] [i_8] [i_8]) ? var_9 : var_11)) : var_5))) ? var_13 : (var_13 >> var_13)));
        var_29 *= ((max(var_8, (arr_23 [i_8]))));
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 22;i_9 += 1)
    {
        var_30 = (((arr_28 [i_9 - 1]) % (arr_29 [i_9 + 1])));
        var_31 = (arr_27 [i_9 + 1] [i_9 + 1]);
        var_32 = (((arr_27 [i_9 + 1] [i_9 - 1]) + var_3));
        arr_30 [i_9] = ((!(((~(arr_29 [i_9]))))));
    }
    var_33 = var_12;
    #pragma endscop
}
