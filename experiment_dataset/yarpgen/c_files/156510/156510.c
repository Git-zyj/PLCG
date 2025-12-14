/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_4 [9] [i_0] [i_1] = (max(((((min(3, 0))) ^ var_10)), (!var_10)));
                arr_5 [i_0] [i_0] &= (((((((((arr_1 [i_1]) ? (arr_3 [i_0]) : 947413046))) ? 2802841019 : (((var_6 ? (arr_1 [i_0]) : (arr_3 [i_1]))))))) ? -var_1 : (((-var_7 ? (max(2147483647, (arr_0 [i_0]))) : (((127 && (-2147483647 - 1)))))))));
                var_11 ^= var_5;
            }
        }
    }
    var_12 |= var_8;
    var_13 = ((((!((min(var_10, var_5))))) ? (((((var_5 ? 16560007150615133612 : var_0))) ? ((max(var_5, var_6))) : (min(var_6, 1886736923094418014)))) : ((min(var_6, (min(var_4, -2147483645)))))));
    var_14 = (!240);
    #pragma endscop
}
