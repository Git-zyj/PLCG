/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_19 = min(((-((min(457, var_0))))), ((max(-1599639496, 238))));
                var_20 = (max(((min((min(65535, 457)), (min(65535, -8817))))), (((((arr_2 [i_0]) - var_10)) * -var_14))));
                arr_7 [i_0] [i_0] [i_0] = (i_0 % 2 == 0) ? ((max((((min((arr_2 [i_0]), -174117052)) - (((arr_2 [i_0]) - 2147483647)))), (((((-(arr_5 [i_0] [i_0]))) < (!465))))))) : ((max((((min((arr_2 [i_0]), -174117052)) + (((arr_2 [i_0]) + 2147483647)))), (((((-(arr_5 [i_0] [i_0]))) < (!465)))))));
            }
        }
    }
    var_21 = (!(((~(min(var_13, var_11))))));
    var_22 = ((var_2 * ((((var_15 != var_14) != (max(var_13, var_11)))))));
    #pragma endscop
}
