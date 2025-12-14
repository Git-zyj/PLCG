/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    var_11 *= var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_12 *= (((~1) ? (((((max(1, -32759))) + (~var_3)))) : var_8));
                var_13 &= var_0;
                var_14 = (min(var_14, ((((!(arr_4 [i_1 + 1] [i_0] [i_0])))))));
                var_15 *= 1;
                arr_5 [i_0] &= var_1;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 18;i_4 += 1)
            {
                {
                    var_16 = (-32767 - 1);
                    var_17 = (min(((max((arr_6 [i_2]), (arr_6 [i_2])))), (arr_6 [i_2])));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_21 [i_2] [i_2] [i_4 - 1] [i_5] = ((((max((arr_2 [i_3 + 1] [i_6 + 3]), var_0))) ? (((((arr_9 [i_2] [i_6 + 1] [i_2 + 1]) != (arr_9 [i_2] [i_6 + 1] [i_2 - 1]))))) : var_4));
                                var_18 = (max(17, -123));
                                var_19 = (min((max((arr_20 [i_2] [i_3 + 1] [i_4] [17] [i_6 + 3] [i_4] [i_4]), var_1)), ((((!var_4) && (!1))))));
                                arr_22 [i_2] [i_6] [i_6] [i_5] [3] [1] [i_2] = (var_4 & 3968);
                            }
                        }
                    }
                    arr_23 [i_2] = ((((arr_14 [i_2 + 1] [i_2 + 1]) ? var_4 : var_0)));
                    arr_24 [i_4] [i_2] [i_3 + 1] [i_2] &= ((var_5 + (max(((1 ? var_2 : var_3)), (~-1278954563)))));
                }
            }
        }
    }
    #pragma endscop
}
