/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_11 ? ((min((~var_8), var_4))) : var_10));
    var_15 = (min(var_15, (((((var_11 ? ((max(var_0, var_6))) : 10233)) << (var_3 - 678618582735879213))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_16 = ((((((arr_1 [i_0]) >> (-127515968 + 127515979)))) ? (((!((max(var_11, 65535)))))) : (((var_10 || (arr_1 [i_0]))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_17 *= (((arr_2 [i_4] [i_4] [i_4]) >= (!var_6)));
                                var_18 += -67;
                                arr_10 [i_1] [i_1] = (arr_7 [i_0] [i_1] [i_2] [i_2] [i_1]);
                                var_19 -= var_13;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
