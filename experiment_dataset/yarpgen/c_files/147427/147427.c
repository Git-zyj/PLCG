/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_6, var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_20 = (((~var_15) > ((max(((((arr_2 [i_0] [i_1]) < -4737044066867414256))), var_14)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_21 = 0;
                                var_22 = (min(var_22, ((((((max(var_12, 4737044066867414256)))) == (1 && 255))))));
                                var_23 *= (max(((((!var_7) >= (arr_9 [i_0] [i_1] [i_2] [7] [i_4] [7])))), ((255 ? (min(var_4, 4737044066867414255)) : (~4263447075)))));
                            }
                        }
                    }
                }
                var_24 = ((((!(arr_6 [i_0] [i_1])))) + (arr_6 [i_0] [i_0]));
                arr_11 [i_0] = (min(((10 ? -4737044066867414245 : -4737044066867414259)), (((-((13 >> (-4737044066867414256 + 4737044066867414260))))))));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_25 = (min(((min(1, (max((arr_14 [i_0] [i_1] [8] [i_7]), -1))))), (arr_7 [i_7] [i_5] [1] [i_0])));
                                var_26 = (max((min(167, ((4032 >> (((arr_8 [i_0] [i_6]) - 15590)))))), (((((var_17 != (arr_0 [i_0] [i_1])))) >> (((arr_0 [i_0] [i_0]) - 190))))));
                                arr_19 [i_5] [i_6] [i_7] = (max((((!(var_4 == 4340966372583495516)))), -var_3));
                                var_27 &= ((-(((((-(arr_3 [0] [i_5])))) ? ((1 * (arr_10 [i_0] [3] [i_0] [i_6] [i_7]))) : var_11))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
