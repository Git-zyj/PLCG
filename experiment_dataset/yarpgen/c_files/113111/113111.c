/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, (((var_17 ? (var_15 - 2724109180) : (max(var_14, var_8)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_19 = (min(var_16, ((((((arr_2 [i_1]) ? 54508 : 8184))) ? ((var_6 ? 2402496378 : var_8)) : 11028))));
                var_20 = (((((14770331879771086594 ? var_10 : 54508))) ? (arr_0 [i_1]) : (arr_2 [i_1])));
                var_21 = (max((((arr_3 [i_1]) ^ var_17)), (((((-(arr_1 [i_0])))) ? (arr_0 [i_1]) : (arr_3 [i_0])))));
            }
        }
    }
    var_22 *= ((((max(var_8, var_1))) <= ((var_7 ? var_8 : (var_0 || var_3)))));
    var_23 = var_11;
    #pragma endscop
}
