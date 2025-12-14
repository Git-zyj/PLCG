/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184883
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= (((((-2147483647 - 1) / ((var_6 ? 9007199254740991 : -9007199254740991)))) | (((max(0, -9007199254740976)) ^ (min(67, -9007199254740976))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = (min(var_12, (arr_2 [i_0] [i_0])));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_13 -= -3538123942427140064;
            var_14 = ((((max(-9007199254740991, 783645172209761482)) & (arr_0 [i_0] [i_1]))));
            var_15 = (((((arr_4 [i_0] [i_0] [i_0]) ? 9007199254740967 : ((-(arr_4 [i_0] [9] [20]))))) ^ ((((((((0 || (arr_1 [i_0]))))) < (((arr_2 [i_1] [i_1]) ? (arr_1 [i_0]) : 122880))))))));
            arr_7 [i_0] = (min((min(2, -9007199254740964)), (((-9007199254740965 > (arr_4 [i_0] [i_1] [i_1]))))));
            var_16 = 9007199254740995;
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    {
                        var_17 = (max((min(-9007199254740964, ((-9007199254740976 ? -1347495703552074925 : 56)))), (((((-(arr_12 [i_2] [i_4]))) ^ -2018508700)))));
                        var_18 = (min(var_18, (((((arr_10 [i_3 - 3] [i_2] [i_2] [i_4]) << (arr_10 [i_3 - 1] [i_2] [17] [i_4])))))));
                    }
                }
            }
            arr_14 [i_0] = (max((min(1, ((max(1, 32))))), ((((min(35150012350464, 0)) - (max(9007199254740958, -56)))))));
        }
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            var_19 = -9007199254740962;
            var_20 = (max(((((arr_5 [i_5]) ? (arr_5 [i_5]) : 1))), 288230371856744448));
        }
    }
    #pragma endscop
}
