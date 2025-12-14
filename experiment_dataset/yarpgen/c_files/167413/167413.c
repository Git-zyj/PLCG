/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_17 = (max(var_17, (((((min((((12788 << (var_13 - 17972936424498858562)))), (min(-1, var_7))))) <= (min((13555699022408126557 & 4239871750), (min(984304043, 2097151)))))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_18 = (((((min(var_3, (arr_3 [i_1] [i_1]))))) >> (min(((4294967280 ^ (arr_0 [i_0]))), (var_15 || var_2)))));
                    var_19 = (min((arr_6 [i_1]), ((min((((arr_8 [i_2] [i_2] [i_1 - 1] [i_0]) || 10288)), (((arr_7 [i_2] [i_1] [i_0]) || -4037)))))));
                }
            }
        }
    }
    for (int i_3 = 2; i_3 < 17;i_3 += 1)
    {
        arr_14 [i_3 - 1] = (min(((((min(7, (arr_5 [i_3] [i_3] [i_3 - 1]))) > (min(3458933042, var_12))))), (((4002512587 * var_0) | (((arr_4 [i_3 + 1] [i_3 + 1] [i_3 + 1]) * var_13))))));
        arr_15 [i_3] = ((min(8191, 1)) - ((((var_0 == (((((arr_0 [i_3 - 1]) <= (arr_1 [i_3 - 1] [i_3 + 1]))))))))));
        var_20 *= (((min(3976245141, (arr_0 [i_3])))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                {
                    var_21 = (min(var_21, ((min(((min((var_8 != 32767), 11697751093490563929))), (((min(16271166435310770727, (arr_2 [i_3 - 1] [i_3 - 1]))) - (min((arr_9 [i_3] [i_3] [i_3] [i_3]), var_14)))))))));

                    for (int i_6 = 1; i_6 < 17;i_6 += 1) /* same iter space */
                    {
                        arr_24 [i_5] = (min(((((((var_13 == (arr_7 [i_3] [i_5] [i_5])))) + -1))), (2197817758 * 2775932222)));
                        var_22 += (min((-13 % -32753), (var_1 % var_7)));
                        arr_25 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_5] [i_3 - 1] = (((min((var_9 * var_15), ((((arr_1 [i_3] [i_3]) >= var_14)))))) | (min(9961772691888935282, ((min(4294967295, 4294967288))))));
                    }
                    for (int i_7 = 1; i_7 < 17;i_7 += 1) /* same iter space */
                    {
                        arr_29 [i_3] [i_3] [i_3 - 1] [i_5] [i_3] [i_3] = ((((392698444 <= 2135399046) * ((min((-32767 - 1), -24451))))));
                        var_23 = (((((arr_22 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_5] [i_3 - 1]) || 4294967282))));
                        var_24 = (min(var_24, (min((min(((((arr_23 [i_3] [i_3 + 1] [i_3] [i_3]) <= var_11))), ((32750 ^ (arr_7 [i_3 + 1] [i_3] [i_3]))))), (min((var_16 ^ var_12), (min((arr_27 [i_3] [i_3 - 2]), var_15))))))));
                    }
                    var_25 = (min((((min(2771678970, (arr_3 [i_3] [i_3]))) + (var_10 >= var_12))), (min((min(var_2, (arr_0 [i_3]))), (min(4294967273, var_7))))));
                    var_26 = (max(var_26, (((((((min(var_9, var_12)) << ((((arr_7 [i_5] [i_3] [i_5]) >= var_11)))))) != (min((min(8889565575667209459, 4064525926)), var_13)))))));
                }
            }
        }
    }
    var_27 = ((min(var_11, (min(var_8, (-32767 - 1))))) >> (min(var_7, (min(var_5, 5)))));
    var_28 = ((min((var_9 - var_0), (1187376321 | var_12))));
    var_29 = (min(((min((var_2 | -12026), var_2))), (((var_3 / 2570936364) >> (var_0 - 83134482)))));
    var_30 ^= (min((((((min(var_16, var_1)))) + (min(16870080943823490679, 6915795776901232533)))), (((1 & var_0) | ((min(var_8, var_1)))))));
    #pragma endscop
}
