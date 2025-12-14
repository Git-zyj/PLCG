/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_3 [i_0] = (arr_0 [i_0 + 1]);
        var_11 -= (!3448195060);
    }
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 22;i_4 += 1)
                    {
                        {
                            var_12 = (((!28672) | (((!((!(arr_11 [i_1 + 1] [i_1 + 1] [i_4 + 2]))))))));
                            var_13 = ((+(((arr_9 [i_1 - 1] [i_2]) ? 65 : (arr_9 [i_1 + 1] [i_2 - 1])))));
                        }
                    }
                }
                arr_16 [i_1 - 1] [i_2] |= var_7;
            }
        }
    }
    #pragma endscop
}
