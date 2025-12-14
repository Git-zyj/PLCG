/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_12 &= (((((((((arr_3 [i_0]) >= 27945))) > (min(1834832662, var_2))))) | (min(((127 ? 0 : -1516203608)), ((min((arr_2 [i_0]), 27935)))))));
        var_13 += (((((!((((arr_0 [i_0]) ? (arr_1 [0] [0]) : var_7)))))) ^ (((((var_6 ? 27963 : 5842078057567615031))) ? (var_7 + -75) : 3992))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_14 = (max(var_14, (((((var_0 && (arr_4 [i_1]))) || (((-(var_4 + -1049878983)))))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    var_15 = (((~(arr_4 [i_1]))));
                    var_16 = (max(((((arr_1 [i_2] [i_3]) | (arr_9 [i_3] [11] [i_2] [i_1])))), ((-127 ? (((-9223372036854775807 - 1) / 163)) : 65531))));
                }
            }
        }
    }
    var_17 -= (((1147689896 ? 3 : var_5)));
    #pragma endscop
}
