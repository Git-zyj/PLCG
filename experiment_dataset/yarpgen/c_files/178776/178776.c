/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(65535, (max(65535, var_6))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((var_9 | ((((arr_0 [i_0 + 1]) ? (arr_1 [i_0 + 1] [i_0]) : var_3)))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] = (32423 % 3937664028);

                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        arr_11 [i_0] = ((-(~var_3)));
                        arr_12 [i_1] [i_2] = (1724299078795563213 && -5);
                    }
                }
                arr_13 [i_1] [i_0] = (((((((((arr_10 [i_1] [i_1] [i_0] [i_1]) ? var_1 : var_6))) ? var_1 : (1091805470640464686 < -2048)))) || ((((var_12 ? 11977413316178262177 : -1)) < (~0)))));
            }
        }
    }
    var_18 = (max(((var_13 ? var_14 : 242)), (((var_7 ? var_7 : var_14)))));
    var_19 = (max(((max(-10792, var_8))), 130));
    #pragma endscop
}
