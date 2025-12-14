/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_15 = ((((max(43452, ((max((arr_3 [i_1] [i_1] [i_1]), (arr_3 [i_1] [i_0] [i_1]))))))) ? (((4842 & var_4) + (arr_2 [i_0]))) : (((arr_3 [i_1] [i_0] [i_1]) ? (arr_3 [i_1] [i_1] [i_0]) : (arr_3 [i_1] [i_1] [i_1])))));
                var_16 = ((((((var_8 != var_2) && ((((arr_3 [i_1] [i_1] [i_1]) ? 60694 : var_12)))))) != ((-((min(var_6, (arr_2 [i_0]))))))));
                arr_4 [1] [i_1] |= ((!((min(((var_2 ? var_4 : (arr_3 [16] [i_1] [i_1]))), (((-2147483647 - 1) ? (arr_0 [2]) : (arr_0 [i_0]))))))));
                var_17 = -var_14;
            }
        }
    }
    var_18 = (min(var_18, (((((((1 + -7771264135584275160) & (((518055594 ? var_4 : var_12)))))) ? (((!var_10) % ((max(1, var_6))))) : ((var_7 ? (!var_14) : var_13)))))));
    var_19 = (max(var_19, var_2));
    #pragma endscop
}
