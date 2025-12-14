/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!var_11);
    var_21 = ((~(((!var_5) ? 78 : 32767))));
    var_22 = var_15;

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_23 = var_13;
                        var_24 = var_17;
                        var_25 += -var_11;
                    }
                }
            }
            var_26 = ((~(--1)));
        }
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            var_27 = (!192);
            arr_15 [i_0] [i_4] = var_12;
            var_28 = ((-((var_13 ? (!var_7) : var_16))));
        }
        var_29 -= (((!var_11) ? (!-var_19) : (!var_14)));
        arr_16 [i_0] = 3291709489;
        var_30 = (--var_18);
    }
    for (int i_5 = 3; i_5 < 11;i_5 += 1)
    {
        var_31 ^= var_2;
        var_32 = 58;
        var_33 = var_4;
    }
    #pragma endscop
}
