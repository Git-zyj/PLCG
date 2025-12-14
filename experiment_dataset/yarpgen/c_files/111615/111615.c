/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((!(-var_4 + -var_7)));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_15 = (((max((min(var_4, var_5)), (((-(arr_0 [10] [10])))))) << (((arr_3 [i_1] [i_0 - 2]) - 32))));
                var_16 -= ((((((!-79) ? (((arr_2 [5] [5]) ? (arr_4 [8] [8]) : var_9)) : ((18446744073709551608 ? var_8 : var_10))))) ? (((((var_1 ? (arr_2 [i_0] [i_1]) : 79)) * ((((arr_0 [i_1] [7]) / var_12)))))) : (((((1 ? -46 : 992))) ? (arr_0 [i_1] [i_0]) : var_7))));
                var_17 = max((((-1 - 56) ? (min(var_7, 56)) : var_3)), ((((var_4 + 2147483647) >> (((((-32746 + 2147483647) << (1 - 1))) - 2147450875))))));
            }
        }
    }
    #pragma endscop
}
