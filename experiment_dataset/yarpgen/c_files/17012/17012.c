/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, ((max(var_8, ((min(61, 32767))))))));
    var_19 = ((var_3 ? var_6 : ((((((var_3 ? var_7 : var_15))) + (min(var_11, var_17)))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, (arr_6 [10] [10])));
                    var_21 = (((arr_3 [i_0]) + (((1 ? (arr_7 [i_2]) : var_7)))));
                }
            }
        }
        var_22 = (max(var_22, ((max(((65535 ? var_0 : ((((-6904 + 2147483647) >> (-6904 + 6909)))))), ((~(arr_2 [i_0]))))))));
    }
    var_23 |= ((var_15 ? -1284538781 : var_6));
    #pragma endscop
}
