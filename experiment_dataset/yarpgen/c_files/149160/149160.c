/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_19 = (max(var_19, ((max((!var_1), var_12)))));
                var_20 = 18198;
                var_21 = (((~(arr_5 [i_0 + 2] [i_1]))));
                var_22 *= ((-32760 ? -12307 : -32752));
                arr_6 [i_0] [i_0] [i_1] = ((var_6 ? ((-var_9 - (((arr_0 [i_1]) - var_9)))) : ((-((32758 + (arr_0 [i_0])))))));
            }
        }
    }
    var_23 = (min(var_23, (((((!(((var_10 ? var_0 : var_13))))) && (((((min(-10561, var_9))) ? var_18 : var_14))))))));
    var_24 = ((!(var_6 && var_4)));
    var_25 = (min(var_25, ((max(-32745, (((var_3 * var_10) ? ((var_15 >> (-1 + 5))) : ((var_8 ? var_7 : var_7)))))))));
    #pragma endscop
}
