/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((min(((min(var_14, var_15))), ((var_13 ? 6934040520754389025 : 6229534989375350061)))) < -59833);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_1] [i_0] = (((((((-11093 + var_4) > (~var_1))))) + ((~(arr_2 [1])))));
                    var_18 = (max(var_18, ((min(((max(101, (var_11 > var_4)))), (max((var_8 | 5702), (var_1 == 2174575928))))))));
                }
            }
        }
    }
    var_19 = (((min((101 && 13492), 0)) ? (max(131, ((var_3 ? var_0 : var_4)))) : (var_0 && var_3)));
    var_20 = var_11;
    #pragma endscop
}
