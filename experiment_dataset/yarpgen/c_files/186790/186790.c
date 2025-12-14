/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_16 = (((arr_0 [i_0]) ? (~-28842) : (var_2 | 7680)));
                var_17 += var_14;
            }
        }
    }
    var_18 = (max(var_18, (((((((var_12 && 149) % ((max(var_15, 214)))))) ? (((var_7 + var_7) ? -var_4 : var_8)) : (((12348894552718023484 ? var_5 : (~var_12)))))))));

    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_19 -= (min((max(-7911, (arr_4 [i_2]))), ((var_5 ^ (arr_4 [i_2])))));
        var_20 = (min(var_20, ((((min(((536854528 ? var_10 : (arr_6 [i_2]))), (var_2 && var_13))) == (((((((arr_3 [i_2] [i_2]) ? var_5 : (arr_1 [i_2])))) ? 255 : ((max(-14441, var_13)))))))))));
    }
    for (int i_3 = 1; i_3 < 11;i_3 += 1)
    {
        var_21 = (((114688 >= 1743383299) & (((-1743383300 == ((var_13 ? 2839696849399838055 : var_4)))))));
        var_22 = (max(var_22, (((((var_15 ? (arr_6 [i_3]) : ((((arr_0 [i_3]) ? 4294967295 : var_6))))) != (arr_7 [12]))))));
        var_23 = (max(var_23, ((((max(var_2, (arr_2 [i_3] [i_3] [i_3 + 1]))) >= (arr_2 [i_3 - 1] [i_3] [11]))))));
    }
    var_24 = var_3;
    var_25 = (min(var_25, (min((((var_4 + 2147483647) << (var_11 - 5822))), var_13))));
    #pragma endscop
}
