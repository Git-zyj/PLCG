/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= ((9475 ? (((!((max(var_16, -8624294495184225904)))))) : (171 < 9482)));
    var_19 |= ((var_9 ? var_8 : (((max(var_7, var_15)) & (56075 > var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_20 ^= (min((((arr_0 [2]) ? (arr_0 [12]) : (arr_0 [12]))), (arr_0 [8])));
                arr_4 [i_0] [i_0] [i_1 + 1] = var_17;
                var_21 = (max(var_21, ((((arr_1 [i_0 - 1]) ? (9475 % 9490) : (((((2133533396 ? var_5 : 2))) ? (((arr_2 [i_0] [4] [4]) ? (arr_2 [i_0 + 1] [2] [i_1]) : var_17)) : (((arr_1 [i_0]) ? 9475 : var_10)))))))));
                var_22 = (!var_9);
                var_23 = ((var_1 ? (((arr_2 [5] [i_0] [i_1 - 1]) ? (arr_3 [i_0] [i_0]) : 2702)) : (arr_0 [i_0])));
            }
        }
    }
    var_24 = (((((var_1 >> (4160037817 - 4160037790))))) ? -var_10 : (-5221085887171974661 % 2043440348));
    #pragma endscop
}
