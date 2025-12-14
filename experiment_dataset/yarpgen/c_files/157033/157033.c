/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -1419520786754805188;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_12 = (((arr_0 [i_0]) && ((30516 || (arr_0 [i_0])))));
        var_13 = ((1419520786754805171 ? (((~1419520786754805162) | ((1419520786754805167 << (((((arr_1 [i_0]) + 31932)) - 37)))))) : (arr_1 [i_0])));
        var_14 -= (arr_0 [4]);

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_15 = (max((((~3005109697) | (1289857598 ^ 1289857598))), (((~3005109697) ^ (~-1856464745)))));
            var_16 = ((+((((arr_1 [i_0]) > 49479)))));
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            arr_6 [i_0] = (((max((arr_1 [i_0]), (arr_2 [i_2] [i_0])))) || (1419520786754805188 >= -5433098720192674748));
            var_17 ^= (max(3005109688, (~3)));
            arr_7 [i_0] = (arr_5 [i_0] [i_0]);
        }
    }
    for (int i_3 = 1; i_3 < 14;i_3 += 1)
    {
        var_18 -= 12263509558154391923;
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 4; i_5 < 13;i_5 += 1)
            {
                {
                    var_19 = (((arr_14 [i_4]) / ((-1419520786754805188 ? (arr_11 [i_3 + 1] [i_3 + 1]) : (arr_12 [i_3] [i_3 - 1] [i_5 + 2])))));
                    var_20 = (min((max((arr_5 [i_5] [i_5]), (min(23, 3005109697)))), 749308695));
                    var_21 ^= (!9565594168613310574);
                }
            }
        }
    }
    var_22 = (min(var_22, (var_6 != var_4)));
    #pragma endscop
}
