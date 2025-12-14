/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, var_3));
    var_16 = ((((((((-1 ? var_9 : 1))) || (((3542520013 ? 9 : 0)))))) == var_13));
    var_17 = (var_10 ? (((var_12 ? -var_11 : ((752447284 ? var_6 : 752447283))))) : (max(var_3, (var_14 | 0))));
    var_18 = (min((((((31 ? var_10 : 120))) ? (((var_1 ? var_10 : var_8))) : ((752447283 ? var_14 : var_1)))), var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((((!(((-2686 ? (arr_2 [7] [i_0]) : (arr_1 [i_1] [i_0])))))) ? (((~177) ^ (((arr_1 [i_0] [i_1]) ? 1 : 50214)))) : (((arr_5 [i_1] [15] [i_0]) & (arr_5 [i_1] [i_1] [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_12 [i_3] [i_1] = (min((arr_2 [i_3] [i_0]), (arr_2 [i_1] [i_2])));
                            arr_13 [i_0] [i_2] [i_3] = ((!(arr_5 [i_1] [i_2] [i_3])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_19 = (min(var_19, (((((((-(arr_15 [i_4]))))) + (max((((arr_15 [i_4]) + (arr_8 [i_0] [i_0] [i_0]))), ((((arr_18 [15] [i_0] [i_4] [i_1] [i_0] [i_0]) < (arr_11 [i_0])))))))))));
                            arr_19 [i_0] [i_4] [1] [i_0] = (arr_10 [i_5] [i_0] [i_1] [i_0]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        {
                            var_20 = (((((((arr_15 [i_6]) >= 1))) + (arr_20 [i_0] [16] [i_6 + 3]))) - (arr_7 [i_0] [i_1] [i_6 - 1]));
                            var_21 = (max(var_21, ((((((92109042 ? (arr_1 [i_6 + 2] [i_6 + 4]) : (arr_15 [i_7])))) ? ((((max((arr_7 [i_7] [i_6] [11]), (arr_23 [i_7] [i_6] [i_1] [i_0])))) ? ((752447278 ? 332886619 : (arr_3 [i_0]))) : (arr_16 [i_7] [i_6] [i_1] [i_0]))) : (arr_9 [i_0] [i_0] [i_6] [i_7]))))));
                            arr_26 [i_7] [i_1] = (((((91860480 ? -1583126508 : 234))) && 9122));
                            var_22 -= (min((min(-1, 1)), ((((arr_9 [i_6 + 3] [8] [i_6 + 4] [i_6 + 2]) && ((max(-2660, 2685))))))));
                            var_23 = (min(var_23, ((((((((461587815920257460 ? 17 : -10140))) ? (arr_9 [i_0] [i_1] [i_6] [i_7]) : ((-1416710613 ? 54228 : 1)))) == ((((((arr_24 [i_7] [i_0]) ? (arr_23 [i_7] [i_6] [i_1] [i_0]) : (arr_0 [i_0] [i_7])))) ? -1 : (((arr_9 [i_0] [i_0] [i_6] [i_7]) ? 68 : (arr_9 [i_0] [i_1] [i_0] [i_0]))))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
