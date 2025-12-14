/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((((223 ? 6568364760344171676 : 21))) ? (((var_7 ? ((var_11 ? var_2 : var_9)) : (~var_9)))) : ((32 ? 65525 : 9066903799834152340)));

                for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
                {
                    arr_9 [i_1] = ((var_3 ? (((((-793746321 ? 35 : 35))) ? (((var_3 ? var_12 : var_0))) : var_3)) : var_4));
                    var_15 = (((((~-4327) ? var_11 : ((35 ? var_2 : 1))))) ? ((var_6 ? 107 : 111)) : -127);
                    arr_10 [i_0] [i_0] [i_1] [i_1] = ((20294 ? 16043127002998576273 : 65493));
                }
                for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
                {
                    var_16 = (max(var_16, 10770992483366935555));
                    var_17 = ((var_4 ? var_13 : var_7));
                    arr_13 [i_1] [i_0] [i_0] [i_1] = ((((((((var_10 ? var_10 : var_7))) ? ((var_4 ? var_1 : var_3)) : (~var_10)))) ? var_10 : (~var_9)));
                    var_18 *= var_2;
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
                {
                    arr_17 [i_0] [i_1] [i_4] [i_1] = var_8;
                    var_19 = var_3;
                    var_20 = (min(var_20, ((((~var_5) ? var_8 : ((var_6 ? var_8 : var_0)))))));

                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        arr_21 [i_1] [i_1] [i_5] = (((((var_13 ? var_7 : var_13))) ? var_9 : ((var_9 ? var_9 : var_0))));
                        arr_22 [i_0] [i_0] [i_1] [i_1] [i_4] [i_5] = var_9;
                        arr_23 [i_1] [0] [i_1] [i_1] [2] = ((((var_6 ? var_13 : var_7))) ? (!var_9) : ((var_7 ? var_4 : var_10)));
                    }
                    var_21 = ((var_11 ? (((var_6 ? var_6 : var_4))) : ((var_9 ? var_3 : var_11))));
                }
                arr_24 [i_1] = var_0;
            }
        }
    }
    var_22 = ((var_11 ? var_13 : var_6));
    var_23 = ((~(((~var_4) ? (((var_8 ? var_2 : var_1))) : var_7))));
    #pragma endscop
}
