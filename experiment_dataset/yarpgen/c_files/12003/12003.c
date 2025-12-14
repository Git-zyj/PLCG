/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((var_7 <= (~var_1))) ? 235 : ((((((var_11 + 2147483647) >> (var_8 + 127)))) / (~var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] = (max(((((max(var_13, 113))) ? var_1 : var_13)), (((2147483647 ? 1 : 1792)))));
                var_15 = (min(var_15, var_9));
                var_16 = ((((((!-36) ? (max(var_12, (arr_1 [i_0]))) : (arr_3 [9] [i_0])))) || (((32760 ? -1499490135 : 1442144149)))));
                arr_5 [i_0] [i_0] = (((((21 ? 2895 : (-2147483647 - 1))) / (255 <= var_1))) & (((!(arr_1 [i_0])))));
                arr_6 [i_0] [8] [i_1] = var_1;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {

                for (int i_4 = 1; i_4 < 18;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_17 = ((max(((var_4 ? 0 : 3633082055), (!var_5)))));
                                var_18 = var_1;
                                arr_19 [i_4] [i_3] = ((~((~(var_0 ^ var_4)))));
                                arr_20 [i_2] [i_3] [i_3] = ((4294967280 >> ((((((arr_10 [i_4] [i_3]) >> (var_4 - 4004814037))) == (~127))))));
                                arr_21 [i_2] [i_3] [i_3] [i_5] = ((var_0 ? ((max(10, (((arr_15 [i_3] [i_5]) ? var_5 : var_8))))) : ((((var_0 ? var_9 : var_0)) / (var_6 || 116)))));
                            }
                        }
                    }
                    var_19 = var_5;
                    arr_22 [i_3] [i_3] = (((max((var_5 >> 1), (var_7 && 1)))) >= (min((-2147483647 - 1), (arr_10 [i_2 - 1] [i_4 + 1]))));
                }
                arr_23 [i_2 - 2] [i_2] |= (~var_9);
            }
        }
    }
    var_20 = var_11;
    #pragma endscop
}
