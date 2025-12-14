/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((((min(var_10, var_1))) - ((-64 ? -77 : var_8))))) ? ((var_1 ? var_15 : var_1)) : (((var_14 >= var_4) ? (!var_5) : var_16))));
    var_18 = var_16;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, ((max((((!(arr_5 [i_0] [i_0] [i_2])))), ((((((arr_2 [i_1]) * (arr_5 [i_0] [i_1] [i_2 - 1])))) ? (arr_5 [i_0] [i_0] [i_0]) : (arr_5 [i_1] [18] [i_1 + 1]))))))));
                    var_20 = (min(var_20, ((max(((var_5 ? var_16 : ((4 ? var_11 : (arr_1 [i_1]))))), ((((((arr_5 [5] [i_1] [5]) == -43))) | ((var_16 ? var_7 : -2)))))))));
                }
            }
        }
    }
    var_21 &= (var_7 ^ var_14);
    #pragma endscop
}
