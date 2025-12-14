/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = ((-(26274 - 26288)));
                arr_4 [i_0] [i_0] = 7980208396567834379;
                var_13 = ((((max(1, var_1))) ? (arr_2 [i_0] [i_0]) : (1 != -773608033582204381)));
                var_14 = (arr_2 [i_0 - 3] [i_0]);
                arr_5 [i_0] [i_0] = (max(var_2, (arr_0 [i_0 + 4])));
            }
        }
    }
    var_15 = var_8;
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 7;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_16 = var_7;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {
                            var_17 = ((var_4 != ((var_9 ? (!var_8) : (arr_10 [i_2 - 1] [i_2 + 3] [i_2] [i_2 - 1])))));

                            for (int i_6 = 2; i_6 < 7;i_6 += 1)
                            {
                                var_18 = ((var_9 ? (max((arr_2 [i_3] [i_3]), var_3)) : ((((((1 ? 39248 : 123145302310912)) > (((var_10 ? (arr_14 [i_2] [i_6]) : var_1)))))))));
                                arr_16 [i_2 + 3] [i_3] [i_3] = ((~(((~(arr_1 [i_2 + 1] [i_3]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = var_1;
    #pragma endscop
}
