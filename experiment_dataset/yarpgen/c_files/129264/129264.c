/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_19 = (max(var_19, (arr_15 [i_0] [18] [i_2] [i_3] [i_0])));
                                var_20 |= ((var_3 + 7036345574475247132) % 4901344087092662526);
                            }
                        }
                    }
                }
                var_21 = (min(var_21, 5852708826822042939));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 12;i_7 += 1)
            {
                {
                    arr_24 [i_6] [i_6] = ((((18446744073709551615 ? (arr_1 [i_6 + 1] [i_7 + 1]) : (arr_1 [i_6 - 1] [i_7 - 1])))) ? (((arr_0 [i_6]) ? (arr_0 [i_6]) : (arr_0 [i_6]))) : var_9);
                    arr_25 [i_7] [i_6] [i_5] = (((((arr_3 [i_6 + 1] [i_7] [i_7 - 1]) % var_8)) <= (arr_3 [i_6 - 1] [i_7] [i_7 + 1])));
                    var_22 = ((((17618499326367391553 + (var_9 <= 12564496693910658260))) <= (min((arr_17 [i_6 + 1] [i_7 - 2]), (arr_17 [i_6 + 1] [i_7 - 2])))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            {
                                var_23 = ((var_9 ? ((5852708826822042953 ? 8 : var_1) : (((arr_19 [i_5] [i_6]) ? var_5 : 11769194622958355406)))));
                                var_24 = (min(var_24, ((((min((144115170895986688 % var_8), ((5852708826822042947 ? var_14 : (arr_7 [i_7]))))) < (~23))))));
                                arr_30 [i_6] [6] [i_7] [i_8] [i_9] = (-((5852708826822042940 ? var_6 : 0)));
                            }
                        }
                    }
                    arr_31 [i_7] [i_6] [10] = ((12594035246887508687 > (!9028096281474819224)));
                }
            }
        }
    }
    #pragma endscop
}
