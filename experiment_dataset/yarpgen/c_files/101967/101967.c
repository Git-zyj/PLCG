/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_13 = (((((var_8 ? -78 : var_3))) ? ((var_9 ? var_1 : var_0)) : ((var_1 ? var_10 : var_7))));
            var_14 = var_8;
        }
        var_15 = (((min(var_6, var_7)) / 1));
        var_16 = (max(var_16, ((min((max(var_9, (var_5 * var_2))), (((var_8 ? var_10 : var_11))))))));
    }
    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    {
                        var_17 &= var_8;
                        var_18 = (max(((max(var_4, var_11))), ((1 ? 1 : var_1))));
                    }
                }
            }
        }
        var_19 = (min(var_19, ((max(((max(var_11, var_10))), ((var_4 ? var_12 : var_10)))))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                {
                    var_20 = (min((((min(211, 201)))), (min(1, -65))));
                    var_21 = ((var_1 ? -1449305366 : 3584385210199890815));
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 0;i_8 += 1)
    {
        var_22 = (min(var_22, ((min(1, ((var_8 ? var_4 : var_0)))))));
        var_23 -= (max(244, (max(var_12, (var_7 != var_11)))));
        var_24 = (max((((((var_8 ? 1 : var_10))) ? var_11 : ((var_5 ? var_5 : var_9)))), (var_7 && 154)));
    }
    var_25 = (max(var_25, ((max((max(((var_6 ? var_9 : var_6)), ((max(18863, 1))))), var_0)))));
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 19;i_9 += 1)
    {
        for (int i_10 = 3; i_10 < 20;i_10 += 1)
        {
            {
                var_26 = (!var_6);
                var_27 = (!368);
            }
        }
    }
    #pragma endscop
}
