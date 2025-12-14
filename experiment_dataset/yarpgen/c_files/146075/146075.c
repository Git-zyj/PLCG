/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = (0 ? -234 : (arr_0 [i_1] [i_0]));
                arr_6 [i_0] [1] [i_1] = ((-11 >= ((((arr_0 [i_1] [i_0]) ? 3494816934 : 7714754585863467864)))));

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_16 = (max((((arr_1 [i_2]) & (((arr_3 [i_1] [i_0] [i_1]) & (arr_3 [14] [i_1] [i_1]))))), (((~(~var_15))))));
                    var_17 |= (max(-7714754585863467864, var_4));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
                {

                    for (int i_4 = 3; i_4 < 14;i_4 += 1)
                    {
                        var_18 = (-7714754585863467864 >= 1);
                        var_19 = (arr_9 [1] [i_1] [i_3] [i_4]);
                        var_20 |= (16954732559664084049 << (572638545 - 572638524));
                    }
                    for (int i_5 = 3; i_5 < 14;i_5 += 1)
                    {
                        var_21 += (((arr_11 [i_5 - 1] [i_5 - 1] [10] [i_1]) == (arr_11 [i_5 - 1] [i_5 - 1] [0] [i_0])));
                        var_22 = (max(var_22, (arr_13 [i_0] [i_3] [i_1] [i_0])));
                        var_23 = 3722328763;
                    }
                    arr_16 [i_1] [i_1] [i_1] = 3722328751;
                }
                for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                {
                    arr_19 [i_0] [i_1] [i_1] [i_1] = max((arr_1 [i_0]), -7714754585863467841);
                    var_24 ^= (arr_1 [i_0]);
                    arr_20 [i_0] [i_1] [i_1] [12] = ((((((arr_12 [i_0] [i_1] [i_6]) & (arr_12 [i_1] [i_1] [i_6])))) ? (~1359230645) : ((((!(arr_12 [i_0] [i_1] [i_6])))))));
                }

                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    var_25 = (max((max(2935736651, (arr_9 [i_0] [i_0] [9] [i_0]))), (((1359230662 & (arr_15 [i_0] [i_1] [i_1] [i_7]))))));
                    var_26 = (min(var_26, ((min(7714754585863467863, 9697577660901986639)))));
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        {
                            var_27 = (~((((((arr_9 [i_0] [i_9] [i_8] [6]) ? (arr_21 [i_9] [i_0]) : 74589946333652256))) ? var_6 : ((((arr_25 [i_0] [i_8] [i_1] [i_0]) || -7714754585863467841))))));
                            arr_29 [i_1] [i_1] [i_8] [i_9] = (min((arr_7 [i_1]), (min(7714754585863467867, (arr_18 [i_0] [i_1] [i_8] [3])))));
                        }
                    }
                }
            }
        }
    }
    var_28 = var_11;
    #pragma endscop
}
