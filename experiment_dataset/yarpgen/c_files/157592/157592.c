/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_14 % ((-var_6 ? (var_11 + -1647338786) : ((var_10 ? 243 : var_14))))));
    var_19 = ((var_9 * (13 / var_11)));
    var_20 = ((((((91307883 < 14021642331134231820) ? ((var_16 ? 2074798703 : 4294967291)) : var_12))) ? var_13 : ((var_0 * ((var_7 << (var_8 - 160)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] [i_0] = ((((((((arr_0 [i_1 - 2]) + 2147483647)) << (((((arr_0 [i_1 - 1]) + 88)) - 11))))) < var_1));
                var_21 = (max(var_21, ((((((54769 ? var_8 : (2532055337 > var_17)))) ? (arr_0 [i_0]) : (((!((((arr_0 [i_0]) ? -11404 : var_3)))))))))));
                arr_5 [i_0] = (((((var_13 ? (((arr_0 [i_1]) / (arr_3 [i_0] [i_0]))) : (var_6 * -18046)))) < (((((arr_3 [i_0] [i_0]) * var_17)) << ((((-9223372036854775800 ? 896 : 18)) - 857))))));
                var_22 = (min(var_22, ((((((-8315 < 1158547387) / (arr_3 [i_1] [i_0]))) / ((((arr_2 [i_1 - 3] [i_1 + 1]) && (arr_2 [i_1 - 4] [i_1 - 3])))))))));
            }
        }
    }
    #pragma endscop
}
