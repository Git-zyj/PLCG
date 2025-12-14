/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, ((((((~(!31)))) ? ((var_1 ? (max(2147483647, var_6)) : (var_6 <= var_4))) : var_2)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] = ((~(((((max(var_6, 30195))) <= (arr_4 [i_0] [i_0] [i_0]))))));
                var_11 = (max(var_11, ((max((((arr_2 [i_0]) ? (((arr_4 [i_1] [i_1] [i_0]) ? var_6 : (arr_5 [i_0]))) : ((max((arr_4 [i_0] [i_0] [i_1]), -357991379))))), var_8)))));
                var_12 = (min((((~(((arr_0 [i_0]) ? (arr_4 [i_0] [i_0] [17]) : var_5))))), (((arr_5 [i_1]) & (arr_5 [i_1])))));
                var_13 = (6796779278112603749 || 35329);
            }
        }
    }
    var_14 |= ((((min(var_2, (var_3 + 35340)))) <= ((((65517 ? var_7 : 14593)) / var_7))));
    var_15 = (min(var_15, ((((((((max(113, var_0))) << ((((224397645 ? var_1 : var_3)) - 44))))) ? var_4 : 671506661)))));
    #pragma endscop
}
