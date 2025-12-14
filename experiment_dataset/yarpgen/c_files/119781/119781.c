/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_18 *= var_11;
                var_19 = ((((((((arr_3 [13] [i_1]) ? (arr_4 [i_0]) : var_8)) <= (((~(arr_3 [i_0] [i_0]))))))) / var_3));
            }
        }
    }
    var_20 += var_17;
    var_21 = (min(var_21, (((((((var_1 + var_10) ? (!var_13) : (min(var_12, var_11))))) ? ((47 ? 1217332233 : 5756396505206131905)) : ((min(((var_16 ? var_6 : var_17)), ((var_13 ? var_16 : var_12))))))))));
    #pragma endscop
}
