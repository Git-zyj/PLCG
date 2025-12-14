/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_2 + 1] = ((((!((max(20446, (arr_6 [i_0] [i_1] [0])))))) && (arr_2 [i_1])));
                    arr_9 [i_1] [i_1] [i_1] [i_1] = ((-(((!(arr_7 [i_2] [i_1] [i_2 + 1]))))));
                }
            }
        }
    }

    for (int i_3 = 1; i_3 < 7;i_3 += 1)
    {
        arr_14 [i_3 + 1] [i_3] = (((((-(arr_3 [i_3 + 3] [i_3 + 1])))) ? ((-(min(2147483638, 2003061371604910316)))) : var_2));
        var_20 = -2147483636;
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        var_21 += 65535;
        var_22 &= (arr_18 [i_4]);
    }
    var_23 = (min(var_23, (((((((~var_1) - ((max(var_14, 1)))))) ? ((var_2 ? 64 : 2147483635)) : ((((var_15 ? 602 : var_15)))))))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            {
                var_24 = (min(var_24, (arr_22 [i_5])));
                arr_26 [i_5] [i_5] [i_6] = ((1 ? var_4 : (~26)));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 23;i_8 += 1)
                    {
                        {
                            var_25 = (arr_23 [i_5]);
                            var_26 = (max(var_26, ((max(((-(arr_21 [i_8 + 2]))), ((((arr_21 [i_8 + 2]) >= (arr_21 [i_8 + 2])))))))));
                            arr_31 [i_5] [i_5] [i_5] [i_5] = (arr_17 [i_5] [i_6]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
