/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_18 = ((max(var_6, var_10)));
                            arr_12 [i_1 + 2] [5] [i_1 + 1] &= var_15;
                            var_19 = (max(var_19, var_11));

                            for (int i_4 = 0; i_4 < 12;i_4 += 1)
                            {
                                var_20 = var_5;
                                arr_16 [i_0] [i_0] [i_0] [1] [i_0] [i_0] [i_0] = ((5539481290886664289 ? ((19537 ? 255 : 814986657)) : 22));
                                var_21 = var_3;
                                var_22 = ((var_15 ? var_15 : ((32 ? ((var_5 ? -1373873322 : var_15)) : var_14))));
                            }
                            for (int i_5 = 0; i_5 < 12;i_5 += 1)
                            {
                                var_23 = var_1;
                                var_24 = (min(var_24, ((((((var_16 ? var_10 : var_13))) ? ((((min(var_9, var_1))) ? -18446744073709551615 : var_6)) : var_16)))));
                            }
                            for (int i_6 = 0; i_6 < 12;i_6 += 1)
                            {
                                arr_22 [i_6] [i_0] [7] [i_0] [i_0] = (9202415854152706972 % 1);
                                var_25 = var_3;
                                var_26 = ((227 == (!9244328219556844644)));
                            }
                        }
                    }
                }
                arr_23 [i_0] [i_0] [i_0] = ((!((max(var_17, var_17)))));
                arr_24 [i_1] = (min((var_0 % var_12), ((max(3479980651, 31917)))));
            }
        }
    }
    var_27 *= var_8;
    var_28 = ((min(var_8, var_9)));
    #pragma endscop
}
