/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_1] = ((((((((var_13 ? 14189 : (arr_1 [i_0])))) ? (~14189) : ((var_6 ? (arr_1 [i_0]) : var_12))))) ? var_16 : (max(14206, ((2290364069495303451 | (arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1])))))));
                arr_5 [i_1] [i_1] [i_0 + 1] = (arr_3 [i_1] [i_0] [i_0 - 1]);

                for (int i_2 = 3; i_2 < 12;i_2 += 1)
                {
                    var_20 |= 2350253502;
                    var_21 = (((((~(arr_8 [1] [1] [i_0 + 1])))) * (min((max((arr_3 [i_0 + 1] [i_1] [i_1]), (arr_7 [6]))), (((var_10 && (arr_7 [i_2]))))))));
                    arr_9 [i_0 - 1] [i_1] [i_1] [i_2] = (max((((51329 != (arr_8 [14] [i_2] [i_2])))), (((arr_2 [i_0] [i_1]) ? (arr_7 [i_0 - 1]) : (max((arr_7 [i_2 - 3]), (arr_1 [11])))))));
                }
                for (int i_3 = 2; i_3 < 13;i_3 += 1) /* same iter space */
                {
                    var_22 = (((((((((arr_2 [2] [i_0 - 1]) ? var_5 : (arr_3 [i_1] [i_3] [i_3])))) ? (arr_0 [i_0]) : (((!(arr_8 [2] [2] [i_0 + 1]))))))) ? ((var_4 ? (var_18 || 0) : (max((arr_0 [i_0 - 1]), var_17)))) : (16156380004214248183 == var_3)));
                    var_23 = ((51338 ? var_13 : (min(-1, var_8))));
                }
                for (int i_4 = 2; i_4 < 13;i_4 += 1) /* same iter space */
                {
                    var_24 |= (arr_8 [i_0] [i_0] [1]);
                    var_25 = (min(var_25, var_15));
                    arr_15 [i_0] [i_1] [2] = ((~(arr_11 [i_1] [i_1] [4])));

                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        arr_18 [i_0 - 1] [i_1] [i_4] [i_5] = (!(((80 / (min((arr_3 [i_5] [i_5] [i_5]), (arr_11 [i_5] [6] [i_5])))))));
                        arr_19 [i_0] [i_0] [i_1] [i_4] [i_4] [i_5] = (min((arr_1 [i_0 - 1]), (((((var_7 ? (arr_8 [i_0 + 1] [i_0 + 1] [i_0 + 1]) : (arr_11 [i_5] [i_5] [6])))) ? (arr_8 [i_0 - 1] [i_1] [i_5]) : (!var_11)))));
                    }
                }
                var_26 = ((((((2350253507 ? (arr_11 [i_1] [i_0 - 1] [i_0 + 1]) : (arr_11 [i_1] [i_0 + 1] [i_0 + 1]))) + 9223372036854775807)) >> ((min(1, 23634)))));
                var_27 = (min(((max(1, var_16))), ((((((((arr_0 [i_0]) + 2147483647)) >> (var_7 - 1618268321)))) ? (arr_6 [1] [i_1]) : 1))));
            }
        }
    }
    var_28 ^= (var_3 ? var_6 : var_19);
    var_29 = ((((~(!var_13))) * var_18));
    #pragma endscop
}
