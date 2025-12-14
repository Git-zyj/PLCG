/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, ((var_0 ? ((max(8150, -892099744))) : ((8150 / (-9223372036854775807 - 1)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_12 = (9066 - 118);
                var_13 = ((!((((892099744 ^ 63) ? 22 : 40)))));
                arr_6 [i_0] [i_0] [i_0] = ((((2099184760 ? (arr_3 [i_0] [i_1]) : var_0)) << ((((1956790265 | (max(-16384, 4294967295)))) - 4294967286))));

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    arr_9 [i_2] [i_1] [i_1] = (((((3174847880 ? ((min(37183, 571))) : (1 == -32069)))) ? ((((1 && ((!(arr_8 [i_2] [i_2]))))))) : (min((((1334 << (((arr_7 [0] [i_1] [i_2]) - 18580))))), (max(3145728, var_9))))));

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_14 = (((var_8 ^ 60643) ? (max(4294967295, 1)) : -var_8));
                        arr_12 [i_1] [i_2] = (((-892099744 ? (((-(arr_11 [12] [i_1] [i_2])))) : 4291821540)) <= (((min((arr_11 [10] [i_1] [i_2]), (arr_11 [5] [i_1] [i_2]))))));
                        var_15 = ((((((arr_4 [i_0] [i_0]) ? (var_2 && var_1) : (((arr_2 [i_3] [4] [i_1]) ? 1 : 9))))) | (((1 & -8128) ? 27032 : ((var_6 ? (arr_10 [i_3] [i_3] [i_2] [i_1] [i_0]) : var_9))))));
                    }
                    var_16 += (((3145738 | var_8) && (((min(var_5, (arr_11 [i_1] [i_0] [i_1]))) == (((var_1 ? (arr_0 [i_0]) : 0)))))));
                }
            }
        }
    }
    var_17 += ((((((-127 - 1) ? 106 : 4291821532))) ? var_10 : var_4));
    #pragma endscop
}
