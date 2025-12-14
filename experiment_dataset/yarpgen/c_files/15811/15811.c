/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15811
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0] = (((((((((arr_3 [i_1] [i_0] [i_0 - 3]) ? 0 : (arr_0 [i_0])))) ? (min(17593549221731484561, var_10)) : (2257445334 || var_8)))) ? (min((min(924686469, 41949)), ((min((arr_3 [5] [i_1 + 2] [i_0]), var_3))))) : (((((39 && (arr_3 [i_0 - 3] [i_1 - 2] [i_0 - 1]))) ? ((var_11 ? -1948043734 : (arr_0 [i_0]))) : ((((arr_1 [i_0]) && (arr_1 [i_0])))))))));
                arr_5 [0] &= (max(((((((var_14 > (arr_2 [i_1])))) << (((min((arr_1 [8]), -1948043734)) + 1948043759))))), (min(((max(-1948043734, 1948043734))), ((var_6 ? 9078644002476646768 : 0))))));
                arr_6 [i_0] [i_0] = ((((max((((arr_1 [i_0]) - var_6)), ((min((arr_0 [i_0]), var_4)))))) ? ((((((arr_2 [i_0]) ? (arr_2 [i_0 - 2]) : (arr_1 [i_0]))) << ((((min((arr_3 [i_0] [i_1] [i_1 + 2]), 255))) - 77))))) : (max(((((arr_1 [i_0]) ? var_12 : var_7))), ((var_1 ? (arr_2 [i_0 + 1]) : var_0))))));
                var_16 = (((max((((arr_0 [i_0]) ^ -1240266827359344028)), (((1 ? var_3 : 0)))))) ? ((((764429294 ^ var_7) & (-8347 && 0)))) : ((((var_15 ? var_4 : var_1)) * ((((arr_2 [i_0]) * var_8))))));
            }
        }
    }
    var_17 = ((((min((((var_13 << (var_7 + 3667111129225344869)))), (min(var_0, 1))))) && ((((((var_7 ? var_8 : 1))) ? (max(18446744073709551615, 1)) : (var_5 == var_0))))));
    #pragma endscop
}
