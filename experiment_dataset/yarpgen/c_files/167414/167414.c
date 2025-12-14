/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!1752915883049539239);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_21 = ((((((!var_3) ? ((((var_15 <= (arr_1 [i_0] [i_1]))))) : (((arr_2 [i_0] [i_0] [i_0]) ? 5613657177922674780 : var_18))))) ? 180 : (!35255)));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_1] [i_1] = ((((min(((~(arr_2 [i_0] [i_1] [i_3]))), (-1414929719 == -10872)))) ? 35037 : ((((max((arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), var_18))) ? (!8) : (!var_15)))));
                            var_22 = ((+(((arr_5 [i_1] [i_1 - 1] [i_1] [i_1]) + (arr_5 [i_1] [i_1 - 1] [i_1 + 1] [i_1 + 1])))));
                            var_23 = ((((((65535 && var_16) % (arr_1 [i_0] [i_1])))) && (65520 != var_3)));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] = (!1);
                                arr_21 [i_0] [i_4] [i_4] [i_5 - 1] = 0;
                            }
                        }
                    }
                }
                var_24 -= var_15;
                var_25 = max(((-(arr_19 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_0] [i_0]))), (((-1930537073 ? (arr_9 [i_0] [i_1 + 1] [i_1] [i_1 + 1] [i_1] [i_1 + 1]) : (arr_8 [i_1 + 1])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 3; i_7 < 22;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                {
                    var_26 = (31 != var_10);
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 22;i_11 += 1)
                        {
                            {
                                var_27 = ((((((arr_35 [i_7] [i_8] [i_10]) <= 466323630))) - ((-1 + (~-10872)))));
                                arr_39 [i_7] [i_8] [i_9] [i_8] [i_7] = -6192948624992255333;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
