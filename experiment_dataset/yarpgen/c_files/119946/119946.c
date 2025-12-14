/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((128 ? -1 : -13))) ? (!1) : var_3));
    var_17 = (((((var_8 ? (1 < var_12) : (min(var_3, var_1))))) ? ((-(~var_9))) : var_13));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_2] [i_1] [i_1] = (1 && 4);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_12 [i_0 + 1] [i_0 + 1] [i_2] = (min((((-32767 - 1) ? 1 : 1)), (arr_1 [i_2])));
                                arr_13 [i_0] [i_2] [0] [i_0] = arr_9 [i_3] [i_2] [i_2 + 1] [i_3] [i_4] [i_0];
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
