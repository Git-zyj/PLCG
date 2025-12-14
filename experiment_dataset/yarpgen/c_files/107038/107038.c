/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [1] [1] = (((max((2520606689 < 18446744073709551615), 9223372036854775807))) < (((1 / var_0) * 18446744073709551608)));
                var_15 = (max((max(8488288222175531353, (min(var_8, 3842330377704137144)))), 4167084549));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                var_16 = (max(var_16, var_0));
                var_17 = (((max((var_5 * 18446744073709551615), (var_13 * 21479))) + ((((819264552 + var_13) * 1)))));
                arr_12 [10] = ((((min(((8796092760064 ? 2147483641 : 48849)), (8188 * var_13)))) < (((0 * 4294967292) - (-16718 - var_10)))));
            }
        }
    }
    var_18 = (max(((max((!17041172172314305340), 4047419288))), ((((max(3509977705, 1))) ? ((max(990, 4294967295))) : (min(var_5, 17932922805658704278))))));
    #pragma endscop
}
