/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (((var_12 ? var_4 : (max((min(var_14, var_2)), ((var_5 ? var_11 : var_7)))))))));
    var_17 = (max(var_17, ((((((~677503697) > 3552681354090969338)) ? ((((((var_12 ? 4124647938 : 3552681354090969338))) ? var_3 : (719367979 < 4124647955)))) : -var_7)))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_18 = (min(var_18, (((~(((((((!(arr_1 [i_0]))))) >= 4124647955))))))));
        var_19 = (min(var_19, (arr_0 [i_0])));
        arr_2 [i_0] [i_0] |= (((((-((min(var_3, var_14)))))) ? (min((arr_1 [15]), (((arr_1 [i_0]) & var_8)))) : (((min(((((arr_0 [i_0]) > var_6))), (arr_0 [i_0])))))));
    }
    for (int i_1 = 4; i_1 < 22;i_1 += 1)
    {
        var_20 = (arr_6 [i_1 - 2]);
        var_21 += ((~(arr_3 [i_1 - 1])));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            {
                var_22 = (170319344 * 61082);
                arr_11 [6] = 739926354;
            }
        }
    }
    #pragma endscop
}
