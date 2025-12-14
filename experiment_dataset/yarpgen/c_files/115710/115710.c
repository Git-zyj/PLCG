/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-var_8 * ((((!(-2147483647 - 1)))))));
    var_20 = ((+(((var_10 > 0) >> (((15264871459571042148 / var_12) - 15264871459571042129))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_21 = (((((0 - var_16) << (0 & var_8))) * (((!(arr_2 [i_0]))))));
                var_22 = ((((((16986392407530245886 || 5689484307236708541) == (-2811077750898398862 >= 1)))) << (194 - 183)));
            }
        }
    }
    #pragma endscop
}
