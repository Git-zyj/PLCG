/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, ((min(((((44 ? var_1 : var_9)))), (min(-32765, 18446744073709551612)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_1] &= (min(180, var_0));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_13 = (+((~(((-31307 + 2147483647) >> (((arr_3 [i_1] [i_2]) - 4901874541063614413)))))));
                            arr_11 [i_1] [i_2] [i_0] = -var_7;
                            var_14 = (min(var_14, (((((((arr_8 [i_0 - 1] [i_0 + 2]) ? var_7 : (!var_5)))) ? ((((18446744073709551601 ? (arr_10 [i_3] [i_2] [i_1] [i_1] [i_0]) : (arr_4 [i_1] [i_2] [i_3]))) % (max(var_2, 3266495564552084802)))) : ((((!((max(7, (arr_1 [i_0] [2])))))))))))));
                        }
                    }
                }
                var_15 = (min(((((arr_3 [i_0 - 1] [i_0 - 1]) == (arr_9 [i_0] [1] [i_0] [i_0 - 2])))), (((arr_4 [i_0 - 2] [i_0 + 2] [i_0 - 2]) ? var_3 : var_7))));
                var_16 = (min(var_16, (-31305 & 183)));
            }
        }
    }
    #pragma endscop
}
