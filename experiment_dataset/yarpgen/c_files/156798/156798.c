/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((min(var_2, ((10685 ? var_12 : 661173048981789477))))) ? (((((min(3472230655, var_4))) ? var_3 : var_10))) : (((min(var_2, var_8)) - ((max(-10701, 4294967284)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_14 [i_2] [i_1] = (((var_7 % (arr_9 [i_1 - 1] [i_1 - 1] [i_1 + 1]))) != ((((arr_12 [i_1 - 1] [i_1] [i_1 - 1] [i_1] [i_1] [i_1 - 1]) ? 255 : 21))));
                                var_17 |= (((~1) ^ (((~10685) ? (~10690) : ((-10686 ? 858419662 : 3472230660))))));
                                var_18 = 17785571024727762121;
                                var_19 = (((~65529) ? ((-(arr_3 [i_1 + 1] [i_1]))) : 1));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        {

                            for (int i_7 = 1; i_7 < 14;i_7 += 1)
                            {
                                var_20 = ((((min((arr_13 [i_0] [i_0] [i_0] [i_1 + 1] [i_1]), (!3300175858)))) ? var_2 : ((((((3472230660 ? 235599111 : 5524157192087077720))) ? (~1) : var_14)))));
                                var_21 = ((((((-(((12922586881622473896 < (arr_8 [i_7 - 1] [7] [i_1] [i_1] [i_0])))))) + 2147483647)) << ((((max(255, (arr_20 [i_7 - 1] [i_1] [i_1] [i_1 + 1])))) - 255))));
                            }
                            for (int i_8 = 0; i_8 < 16;i_8 += 1)
                            {
                                var_22 ^= ((-31 ? (-5429378920139403645 < 1) : (!-21686)));
                                var_23 = (min(((min((arr_17 [i_1] [i_1] [i_1] [i_6]), (arr_21 [4] [i_5])))), (((((arr_7 [i_1]) ^ -5429378920139403626)) & (!1)))));
                            }
                            arr_26 [i_0] [i_1] [i_0] [i_0] [i_0] = (((-32767 - 1) ? (min(var_12, 60820)) : ((min(((1 ? -10705 : var_1)), 14)))));
                            var_24 ^= (arr_6 [i_1 + 1] [6] [i_5] [1]);
                            var_25 = (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]);
                        }
                    }
                }
                var_26 *= 60797;
            }
        }
    }
    #pragma endscop
}
