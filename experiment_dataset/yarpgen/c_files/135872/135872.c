/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_17 &= (!57796829);
                arr_5 [i_0] = ((!((min((~var_13), ((-57796829 ? 3581012053 : 165)))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 13;i_4 += 1)
            {
                {
                    var_18 &= (((((((var_12 ? 155 : -57796853)) - (109 >= 664804946)))) * ((-57796856 ? var_16 : ((1496979154 ? 2515203091 : var_12))))));
                    arr_15 [i_3] [i_3] [i_3] [i_3] = (max((~var_11), (((((arr_13 [i_3] [i_3] [i_4]) == -57796826))))));
                    var_19 = (~1373738147);
                }
            }
        }
    }
    var_20 *= 1;
    #pragma endscop
}
