/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = (((var_1 > var_4) ? (!var_8) : ((var_2 ? var_6 : -9083375050429572115))));
        var_12 = (var_8 / -9083375050429572110);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_13 = 9083375050429572112;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    arr_13 [i_1] [i_3] = (((((1320597645 - var_7) ? ((min(-399597833, var_1))) : (min(var_2, 5922126620050715242)))) ^ var_5));
                    var_14 = (-1116378645 >= 0);
                    arr_14 [i_1] [i_3] [i_1] [i_3] = ((((((((min(0, 278695563))) >= (-9083375050429572115 / var_5))))) * (min(var_3, var_5))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            {
                                arr_20 [i_1] [i_2] [9] [i_1] [i_1] = 10364;
                                var_15 = ((((min((1134907106097364992 / var_8), (1401081334 * var_11)))) ? (((((var_1 ? var_8 : 6067))) ? var_3 : (max(51492, var_3)))) : ((((var_4 * var_4) ? var_7 : (((var_6 ? var_5 : var_2))))))));
                            }
                        }
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {

            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                var_16 = (min(var_16, ((var_4 * (var_5 / var_0)))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        {
                            var_17 = 9083375050429572101;
                            arr_35 [i_6] [i_8] [i_1] [i_7 - 1] [i_1] [i_6] [i_1] = (var_0 >= 1090148567579104376);
                        }
                    }
                }
            }
            var_18 = (min(var_18, ((((-2147483646 / var_8) ? 1116378645 : (56 + var_4))))));
        }
        var_19 = ((((((!var_1) ? var_4 : (var_5 || var_2)))) ? (~-101165269) : var_2));
    }
    var_20 *= (((min(var_5, (min(var_9, -779996303)))) + (((var_10 ? var_4 : (-1090148567579104376 >= -175307771))))));
    var_21 = 9083375050429572089;
    #pragma endscop
}
