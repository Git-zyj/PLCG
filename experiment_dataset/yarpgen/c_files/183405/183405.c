/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_11 = (min(var_11, (((71 - (max((~15831816588166331333), ((min(var_5, var_3))))))))));
                arr_6 [i_0] = (((min((min(15831816588166331333, -21)), (!-19))) > (min(2614927485543220270, (1 + var_2)))));
                arr_7 [i_0] [i_1] [i_0] = (((((max(27033, var_8)))) % (min(var_6, (var_9 & 104)))));
                arr_8 [12] [i_0] [i_1] = (!((((20255 / -19146) / 8))));
            }
        }
    }
    var_12 = (max(15831816588166331324, var_7));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            {
                arr_14 [20] = ((!((((1 + 2614927485543220300) & (~-107))))));
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        {
                            arr_20 [i_2] [i_2] [i_4] [i_2] = ((var_3 <= (((((max(-1, 72)))) + (min(1086927227, var_5))))));
                            arr_21 [i_2] [i_4] [i_4] [11] = (~-86);
                            var_13 = ((-(2614927485543220280 ^ 2614927485543220283)));
                            var_14 *= (((((20259 ? (33632 & var_0) : ((-7 ? 89 : var_7))))) ? ((1 ? 7572640240907814005 : 7572640240907813994)) : 1));
                        }
                    }
                }
                arr_22 [i_2] [i_2] = (((((29 >> (18423371330525045267 - 18423371330525045239)))) && (((38 ? 734 : 1)))));
            }
        }
    }
    #pragma endscop
}
