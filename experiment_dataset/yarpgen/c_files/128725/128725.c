/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_14 = (min(var_14, 7314621888266084622));
                var_15 = (arr_2 [i_1]);
                var_16 = (max(var_16, (((((((arr_3 [i_1 - 1] [i_1 + 1] [i_1 - 1]) ? (arr_3 [i_1 + 1] [i_1 + 1] [i_1]) : (arr_3 [i_1 + 1] [i_0] [i_1])))) ? ((min((arr_3 [i_1 - 2] [i_1 - 2] [i_1 - 2]), (arr_3 [i_1 + 1] [i_1] [i_0])))) : ((~(arr_3 [i_1 - 2] [i_1] [i_1 - 2]))))))));
            }
        }
    }
    var_17 = (((((var_12 ? (!1813383598) : var_1))) ? var_7 : (var_8 / var_12)));
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {
                var_18 *= (((arr_4 [i_2]) != (((arr_9 [0] [0]) ? ((((arr_3 [i_2] [i_3] [i_2]) ? var_10 : (arr_8 [14] [i_2 - 2])))) : (-9223372036854775807 - 1)))));
                var_19 ^= (((((var_10 >> (((arr_9 [2] [i_3]) + 7288543198106077516))))) != (arr_9 [16] [i_3])));
                var_20 = (((((var_7 ? (((arr_4 [8]) & (arr_9 [i_2] [i_3]))) : (min((arr_8 [1] [i_3]), 2747530598113324266))))) ? ((max(0, -5392478880034723667))) : ((((!(((var_10 ? 511 : (arr_3 [i_2] [i_2] [i_3]))))))))));
            }
        }
    }
    #pragma endscop
}
