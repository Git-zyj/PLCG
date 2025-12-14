/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_17 = (arr_9 [i_0] [i_1] [i_1]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_18 = (arr_3 [i_1] [i_2] [i_3]);
                                var_19 = (max(var_19, 1));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            {
                arr_22 [i_5] = ((((arr_10 [i_5] [i_5]) ? (arr_3 [i_5] [i_5] [i_5]) : ((min(var_3, (arr_21 [i_5])))))));
                var_20 = (max(var_20, (((((((arr_11 [i_5]) >> (((max((arr_6 [i_5] [i_5] [i_6] [i_6]), -5311498675437744986)) - 9))))) ? ((((min(var_10, var_15))) ? (((min((arr_16 [i_5] [i_6]), 1)))) : (arr_20 [i_5]))) : 8338517820617269223)))));
                var_21 = (((arr_10 [i_5] [i_6]) ? (arr_10 [13] [13]) : (~1)));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 0;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        {
                            var_22 &= ((((!(~-4655))) ? (min((((arr_19 [i_5]) ? var_15 : (arr_21 [i_5]))), ((max((arr_19 [i_6]), (arr_16 [i_5] [1])))))) : (!var_4)));
                            var_23 = (min((~var_12), (arr_15 [i_5] [i_5] [i_5] [i_8])));
                        }
                    }
                }
            }
        }
    }
    var_24 = (min(var_24, (!var_6)));
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 15;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 17;i_10 += 1)
        {
            {
                var_25 = ((!(arr_7 [i_9 + 2])));
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 17;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        {
                            var_26 = (max(var_26, (((((!(arr_10 [2] [i_9 + 1]))) ? var_5 : var_10)))));
                            var_27 |= (((~(arr_5 [i_9 + 3] [i_10 + 1]))));
                        }
                    }
                }
                var_28 = (max(var_28, ((min((((max(var_16, var_5)))), (arr_31 [i_9] [2] [i_10]))))));
                arr_38 [i_10] = (arr_10 [i_10 + 1] [i_10 + 1]);
            }
        }
    }
    #pragma endscop
}
