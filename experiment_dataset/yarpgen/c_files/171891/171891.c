/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_11 ? -var_6 : ((((var_10 ? var_1 : var_10))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_15 = (min(var_15, (((var_5 >= (!var_4))))));
                        var_16 = var_11;
                    }
                }
            }
            var_17 = ((-(((!var_3) ? (~var_8) : (var_8 + var_9)))));
            arr_12 [i_0] [i_1] = ((((max(var_3, var_12))) < ((var_13 ? var_11 : var_11))));
        }
        arr_13 [i_0] [i_0] = (-((var_6 ? var_12 : var_4)));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    {
                        var_18 = max(((-(var_3 == var_0))), ((~(!var_9))));
                        arr_22 [i_4] [i_5] = (((var_13 - var_5) && (var_1 / var_0)));
                        var_19 = (max(var_19, -var_10));
                    }
                }
            }
        }
        arr_23 [i_0] [i_0] = (+((var_12 << (((var_0 - var_5) - 4243346441)))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 19;i_8 += 1)
            {
                {
                    var_20 = (max(var_20, (((((var_2 << (var_12 - 14520))) > (var_8 <= var_5))))));
                    var_21 = (((((var_11 ? var_0 : var_10))) ? (((~(var_3 <= var_12)))) : ((var_10 >> (var_3 - 649937471)))));
                }
            }
        }
    }
    var_22 = var_3;
    #pragma endscop
}
