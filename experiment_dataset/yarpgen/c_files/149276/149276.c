/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 0;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = 235;
        arr_3 [i_0] = (0 >= 1514497118);
        arr_4 [i_0] = (max((max(((1740 ? 7021432658718591045 : (arr_1 [i_0]))), (arr_0 [i_0] [i_0]))), -var_5));
        arr_5 [i_0] = var_12;
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 4; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 12;i_5 += 1)
                        {
                            {
                                arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (max((arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]), (arr_20 [i_2 + 1])));
                                var_14 = ((max(var_8, 7326454094592064794)));
                                var_15 -= (arr_13 [i_1] [i_1] [i_1] [i_1]);
                                var_16 = (((arr_7 [i_4 - 1] [i_4 - 1]) != ((65535 ? 14885495406661673411 : (-9223372036854775807 - 1)))));
                            }
                        }
                    }
                    var_17 = (((((((min(-164162576, 65514))) ? 9223372036854775788 : 18446744073709551609))) ? var_4 : 0));
                    var_18 = (((~231) > (arr_9 [i_1] [i_1])));
                }
            }
        }
        var_19 = (((arr_11 [i_1]) & 19597));
        arr_22 [i_1] = (min((arr_7 [i_1] [i_1]), (min((((var_10 >> (var_2 - 8559830249830001356)))), (max(0, 3909382589507299044))))));
    }
    #pragma endscop
}
