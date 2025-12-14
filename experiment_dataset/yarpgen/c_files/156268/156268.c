/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((max((max(1450244266, var_14)), ((3477521094 ? 5429859537583310426 : var_6)))) << (var_14 - 750122270985066267)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_16 -= (((((arr_10 [i_3 + 1] [i_3 + 1] [6] [i_3 - 1]) ? (arr_10 [i_3 - 1] [i_3 + 1] [18] [i_3 + 1]) : var_6))) ? (((47782 ? 70 : 7483879226667842563))) : ((((max(8195577345159188354, 0))) ? (((arr_7 [18] [18] [14]) ? 10251166728550363274 : 168)) : (10251166728550363262 - var_14))));
                                arr_16 [8] [i_2] [1] [i_2] [i_0] = var_3;
                            }
                        }
                    }
                    var_17 ^= ((((((((arr_3 [i_1]) ^ (arr_5 [i_0] [i_1]))) | 11557495991076544892))) ? var_10 : (((arr_9 [i_0]) ? (arr_9 [i_1]) : (arr_9 [i_0])))));
                    var_18 += (((min(((-120 ? 4583106775968437065 : 252)), var_5)) & ((((arr_1 [i_0]) ? var_10 : (arr_1 [i_0]))))));
                }
            }
        }
    }
    var_19 = max(var_7, var_11);
    #pragma endscop
}
