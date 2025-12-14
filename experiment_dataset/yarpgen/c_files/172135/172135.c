/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_14 = ((((~(min(var_4, var_11)))) >= (((min(var_13, (max(var_6, var_4))))))));

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_15 = (min(var_8, (min(var_8, (max(var_7, var_8))))));
                    var_16 = (min((min((min(var_2, var_0)), ((min(var_5, var_10))))), ((max((min(var_1, var_4)), (max(var_4, var_1)))))));
                    var_17 = (((min(((min(var_6, var_1))), var_13))) ? (min(-1765225083, -6399527279708606095)) : ((var_3 ? var_7 : var_8)));
                    var_18 = (max((~var_9), (min(((max(var_1, var_2))), ((var_1 ? var_0 : var_11))))));
                    var_19 = max(((min((!var_10), (min(var_3, var_13))))), ((var_5 ? (max(var_10, var_7)) : var_12)));
                }
            }
        }
    }
    var_20 = (min(var_20, (((var_2 + (min(((var_5 ? var_9 : var_1)), (max(var_3, var_9)))))))));
    var_21 = var_6;
    #pragma endscop
}
