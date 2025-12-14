/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_20 -= ((((((min(var_19, (arr_0 [i_0])))) ? ((var_10 ^ (arr_1 [i_0]))) : ((var_11 + (arr_0 [i_0]))))) / ((~((min((arr_0 [i_0]), (arr_1 [i_0]))))))));
        arr_2 [i_0] [i_0] = ((((((var_7 % (arr_0 [i_0]))) <= (((arr_0 [i_0]) << (var_17 - 10701))))) ? ((~(((arr_0 [i_0]) & var_2)))) : (0 / 1)));
        var_21 *= ((((!((((arr_0 [i_0]) ? var_5 : var_0))))) ? (((((!(arr_1 [i_0])))) / 1)) : ((max((arr_1 [i_0]), (arr_0 [i_0]))))));
        var_22 += (((((~(((arr_1 [i_0]) >> (arr_1 [i_0])))))) ? ((685748850 ? 255 : -3059032000777044827)) : ((min(((var_16 ? (arr_1 [i_0]) : 1)), var_13)))));
    }
    var_23 &= (((((max(var_14, var_13)) ? (!var_4) : ((var_6 ? var_17 : var_15))))));
    var_24 = var_4;
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            {
                var_25 = (arr_4 [i_1]);
                var_26 *= ((~(((arr_8 [i_1] [i_1] [i_2]) ? (arr_8 [i_1] [i_1] [1]) : (arr_8 [i_2] [i_1] [i_1])))));
            }
        }
    }
    #pragma endscop
}
