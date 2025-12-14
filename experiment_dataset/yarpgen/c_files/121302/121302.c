/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121302
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((12 ? 56703 : 65529));
                arr_6 [i_0] = var_5;
                var_19 = var_7;
            }
        }
    }
    var_20 = (((((-(!var_12)))) ? (((min(65526, var_14)))) : (((~402653184) ? var_11 : (!var_11)))));
    var_21 = min(0, ((65523 ? var_17 : 0)));
    var_22 = (min(var_22, ((((((~(2573533184 && var_13)))) ? var_2 : (((~(~402653188)))))))));
    #pragma endscop
}
