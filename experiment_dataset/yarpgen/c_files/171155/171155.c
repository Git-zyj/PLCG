/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((!var_15) ? var_4 : (((var_0 == ((var_9 ? var_11 : var_4)))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 10;i_4 += 1)
                    {
                        {
                            var_17 += var_14;
                            arr_13 [8] [i_0] [6] [i_2] [0] = var_0;
                            var_18 = (max(var_18, (!var_14)));
                        }
                    }
                }
                arr_14 [i_2] [i_1] = ((!(var_0 < var_1)));
                var_19 = var_10;
            }
            for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
            {
                var_20 = (min(var_20, var_6));
                var_21 ^= var_10;
                var_22 = var_11;
            }
            for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
            {
                arr_19 [i_0] = ((-(!var_10)));
                var_23 = var_7;
            }
            arr_20 [i_0] = ((var_1 == ((var_2 ? var_11 : var_6))));
        }
        for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
        {
            var_24 = (min(var_24, 2753157724225689723));
            arr_23 [i_0] [i_0] [i_0] = ((((!var_5) * var_0)));
            arr_24 [5] [5] [i_0] |= ((-27629 ? 2753157724225689725 : -64));
        }
        var_25 = -13;
        arr_25 [i_0] = var_13;
        var_26 = ((var_6 ? var_10 : var_0));
    }
    #pragma endscop
}
