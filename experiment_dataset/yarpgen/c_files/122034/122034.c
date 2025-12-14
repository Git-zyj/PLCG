/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= ((((((1 ? 22180 : 255)))) ? (22184 / 17583497754397054390) : 22194));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_18 = (((((((max(var_1, (arr_3 [i_0])))) * 4205437770654157334))) ? (arr_2 [i_1]) : -4314));
                arr_4 [i_0] [i_0] = (min(50850, 3153920210037243952));
                arr_5 [i_0] = (((((-((min(var_13, (arr_2 [i_0]))))))) ? ((var_13 ? -1 : var_12)) : 17583497754397054362));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_19 -= (arr_7 [i_4] [i_3] [5]);
                                var_20 = -3153920210037243953;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
