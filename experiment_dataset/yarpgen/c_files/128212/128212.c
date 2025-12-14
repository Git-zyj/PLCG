/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= ((((((16380 ^ 1) ? var_12 : (var_2 & var_8)))) + ((var_12 ? var_0 : -var_10))));
    var_14 &= ((max(var_3, (16106127360 / 16380))) | (((var_10 | (-4606227735616802864 | 16380)))));
    var_15 ^= 18446744065119617024;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_16 ^= 5197261727035016577;
                    var_17 -= (((((167 ? var_12 : 63))) ? ((var_5 ? 16384 : (arr_3 [i_0 - 1]))) : (arr_0 [i_0 + 4])));
                    var_18 = (min(var_18, var_4));
                    var_19 += 112;
                    var_20 = (max(var_20, var_9));
                }
            }
        }
    }
    #pragma endscop
}
