/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, var_1));
    var_20 = ((((((var_0 ? var_18 : var_7)))) ? ((((var_15 * var_9) ^ 20))) : (((min(var_18, var_18)) * (((min(236, var_9))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_21 = (min(var_21, (((((((((-1 ? var_2 : (arr_5 [6])))) ? ((min(20, -118))) : (arr_0 [i_1])))) ? (arr_5 [i_0]) : ((((min(var_17, 117))) ? 18446744073709551615 : ((min(var_1, 2147483647))))))))));
                arr_6 [i_1] = (-876248985 ^ 1048575);
                arr_7 [i_1] = ((((((arr_4 [i_1] [i_1]) ? var_9 : (arr_3 [i_1])))) ? ((((((arr_2 [14]) ? (-9223372036854775807 - 1) : (arr_3 [i_0])))) ? (((arr_1 [i_0] [i_1]) * var_1)) : (arr_0 [i_1]))) : (((((var_11 ? (arr_3 [i_1]) : -1344496148))) ? (arr_0 [i_0]) : (min((arr_4 [i_1] [i_1]), (arr_1 [i_0] [18])))))));
                var_22 -= min(-118, (arr_4 [4] [4]));
            }
        }
    }
    #pragma endscop
}
