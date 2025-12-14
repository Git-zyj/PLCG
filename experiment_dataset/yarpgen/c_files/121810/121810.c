/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-((var_2 ? ((var_3 ? var_11 : var_3)) : (((var_7 ? var_1 : var_4)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = ((((((((1068510798 ? 1438143957 : 2856823338))) ? (min(var_0, var_2)) : (~var_9)))) ? (((((max(var_9, var_7))) ? ((var_5 ? var_8 : var_6)) : (((var_2 ? var_2 : var_6)))))) : ((~((var_1 ? var_8 : var_11))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_14 = ((((((var_6 + 2147483647) >> ((((var_4 ? var_4 : var_1)) - 3832139417842872497))))) && ((max(var_0, var_3)))));
                            arr_11 [i_2] [i_2] [i_2] [i_2] [i_0] = ((((var_1 ? var_11 : var_11)) / ((~((var_9 ? var_11 : var_5))))));
                            var_15 -= ((-((~(~var_6)))));
                            arr_12 [i_2] [i_2] [i_1] [i_2] = (max((max(((max(var_2, var_5))), ((15 ? 3169 : 0)))), (max((max(var_11, var_3)), (((var_6 ? var_1 : var_1)))))));
                            var_16 = ((-((((var_4 ? var_2 : var_1)) - (var_5 % var_0)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
