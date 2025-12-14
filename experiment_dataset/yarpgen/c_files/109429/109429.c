/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((((((((arr_3 [i_0] [i_0] [i_0]) ? var_9 : var_8))) ? (((var_18 / (arr_0 [i_1])))) : (min(2453293431520012713, var_6))))) && (((((var_4 == (arr_4 [i_0] [i_0] [i_0]))) ? ((2453293431520012713 ? 2453293431520012713 : 15993450642189538913)) : (min(var_14, var_15))))));
                var_19 = ((((min(var_15, var_11))) ? (var_15 * var_15) : (15993450642189538903 - var_7)));
                arr_6 [i_1] [1] [i_0] = ((127 ? 9223372036854775808 : 5351745385623776978));
                arr_7 [i_0] [i_0] = var_1;
            }
        }
    }
    var_20 = ((((max(var_9, -var_7))) ? (((var_10 < var_12) ? var_15 : (var_3 <= 0))) : var_6));
    var_21 = var_13;
    var_22 = (max((((((var_6 ? var_4 : var_0))) ? ((var_5 ? var_8 : var_6)) : (((var_11 ? var_4 : var_4))))), (((52 ? var_4 : ((var_12 ? var_3 : var_9)))))));
    #pragma endscop
}
