/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((min(var_8, (min(var_15, var_10)))), ((min(var_0, ((min(var_9, var_11))))))));
    var_18 ^= var_3;
    var_19 = ((min(var_7, ((min(var_4, var_0))))));

    for (int i_0 = 1; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_20 += var_6;
        var_21 -= var_2;
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_22 = ((((((-907027527 ? 907027526 : 33))) ? var_15 : ((min(var_11, var_12))))));
        var_23 = (min(var_23, ((min(((((!var_0) > (var_2 != var_5)))), var_2)))));
        arr_5 [i_1] = var_6;
        var_24 += ((((min(((min(var_5, var_9))), var_7))) >= var_2));
    }
    for (int i_2 = 1; i_2 < 17;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_25 *= (min((!var_11), var_2));
            arr_12 [i_2] [4] [i_3] |= (min(var_12, ((min(var_14, (var_5 > var_11))))));
        }

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_26 = var_7;
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    {
                        arr_22 [i_6] [i_5] [i_4] [i_2] = (61324 ? 1 : -1296746295);
                        var_27 = var_2;
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                var_28 = (((var_4 - var_6) != (min(var_4, ((var_16 ? var_2 : var_6))))));
                arr_30 [i_2] [i_7] [i_2] = var_9;
            }
            var_29 = var_8;
            arr_31 [i_2] = var_4;
        }
        arr_32 [i_2] = var_1;
    }
    var_30 = (min((min(var_9, var_14)), ((min(1, 61324)))));
    #pragma endscop
}
