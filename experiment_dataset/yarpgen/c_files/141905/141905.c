/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -var_18;
    var_20 = ((var_17 | ((-((var_3 ? var_2 : 1))))));
    var_21 = (max((~var_4), 1));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [9] [i_1] = (((--0) ? ((((!(51 || 1))))) : (((arr_3 [17] [17]) - (((max(1, var_3))))))));
                var_22 = ((~(((((-107 ? (-32767 - 1) : var_18))) | (max(var_10, var_15))))));
                arr_6 [13] [i_0 + 1] = (max((((-(var_14 | 1143261885)))), (arr_1 [1])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            {
                arr_12 [i_3] = (max(var_14, (((((~var_7) + 2147483647)) >> (384629287033955783 - 384629287033955778)))));
                arr_13 [i_3] [i_3] [i_3 - 1] = (max((max((((var_0 ? var_14 : 0))), (min(32767, (arr_11 [i_3]))))), (arr_10 [i_3])));
            }
        }
    }
    #pragma endscop
}
