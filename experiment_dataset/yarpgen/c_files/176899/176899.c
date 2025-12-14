/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= var_11;
    var_19 = ((var_17 ? ((11341025427370853089 ? 184 : (max(11341025427370853080, var_2)))) : var_7));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = (((((var_12 ? var_2 : var_5))) ? (max((min(var_2, 7105718646338698510)), var_13)) : ((var_3 ? (!11341025427370853112) : (max(243, var_13))))));
                    var_20 = var_17;
                    var_21 *= (max((!var_7), (min(11341025427370853089, (min(var_13, 1))))));
                    var_22 = var_0;
                }
            }
        }
    }
    #pragma endscop
}
