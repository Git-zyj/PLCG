/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= (var_1 * (((((9223372036854775807 ? var_1 : var_11))) ? (9223372036854775807 / 7) : var_6)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_14 = (min(var_14, ((max((!-9223372036854775807), (((arr_2 [i_0] [i_1]) < (arr_4 [i_0] [i_1] [i_1]))))))));
                var_15 = (min(var_15, (((((((((var_9 / (arr_4 [i_1] [i_1] [i_1])))) || (var_8 / 1)))) < (((var_10 || (((var_4 ? (arr_4 [i_0] [i_1] [i_0]) : (arr_0 [i_0] [i_1]))))))))))));
                var_16 = (min(var_16, ((((((((min((-9223372036854775807 - 1), (arr_2 [i_0] [i_0])))) ? (((-8790954637655396630 + 9223372036854775807) >> (arr_0 [i_1] [i_1]))) : (var_7 ^ var_2)))) || ((((((!(arr_0 [i_0] [1]))))) > (min(-21395, (arr_2 [i_1] [i_0]))))))))));
            }
        }
    }
    var_17 *= var_3;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 19;i_3 += 1)
        {
            {
                var_18 = ((((((arr_11 [i_3 - 2] [i_3 - 2] [i_2]) | 1))) && (((arr_11 [i_3 - 2] [i_3 - 2] [i_3 + 2]) <= (arr_11 [i_3] [i_3 + 2] [i_3])))));
                var_19 *= (((arr_10 [6]) ? (max(-3687078491151581683, -1827372414)) : (((-615355576 / ((-(arr_11 [3] [3] [i_2]))))))));
                var_20 = (((arr_10 [i_2]) ? ((var_11 ? (arr_9 [i_2]) : (arr_9 [i_2]))) : (((((arr_11 [i_2] [i_2] [i_2]) <= (max((arr_10 [i_2]), 7936595324325117021))))))));
                var_21 = ((((var_8 & (arr_11 [i_3 + 1] [i_3 + 2] [i_3])))) ? (((arr_11 [i_3 - 3] [8] [i_2]) | (arr_11 [i_3 - 1] [i_3] [i_3 - 3]))) : ((~(arr_11 [i_3 + 2] [i_3] [i_2]))));
                var_22 = ((!(!8790954637655396629)));
            }
        }
    }
    #pragma endscop
}
