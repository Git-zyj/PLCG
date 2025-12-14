/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_0));
    var_14 = (!1055233495261409068);
    var_15 += (((~0) ? ((((var_3 == (!var_11))))) : var_9));
    var_16 = (min(var_16, var_9));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_17 = ((((!(arr_2 [i_2])))) - (143 | -82));
                    var_18 = (min((min(var_2, var_4)), var_3));
                    var_19 = -49;
                    var_20 &= ((!(!143)));
                    var_21 = (min(((((var_1 >> (((arr_3 [i_0 + 2]) - 16501068692772769022)))))), (arr_8 [17])));
                }
            }
        }
    }
    #pragma endscop
}
