/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    var_18 = ((0 ? (arr_9 [i_2 - 1] [i_1 + 1] [i_0]) : (((39468 + -4189686382992712411) ? 3258623827 : ((34 ? var_16 : (arr_5 [i_0] [8] [i_0])))))));
                    arr_10 [i_2 - 1] [i_1 + 1] [i_1] [i_0] &= ((-102 >= ((696365434 ? (arr_4 [i_0]) : 1471277147))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        var_19 = ((9203669643934794444 ? 8531 : 240));
                        var_20 = (arr_12 [i_0] [1] [i_3] [i_4]);
                    }
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            var_21 = (min(var_21, ((((~var_2) ? ((-32742 ? (arr_4 [3]) : 13225736918648948686)) : ((((arr_14 [i_0] [i_1] [i_3]) ? -1524685887 : -2097152))))))));
                            var_22 = ((-((4778017138964886310 ? (arr_11 [i_0] [i_0]) : 350252838))));
                            var_23 = var_2;
                            arr_24 [i_6] [i_6] [i_5] [13] [i_1] [i_1] [i_0] = (arr_0 [i_0]);
                        }
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            var_24 = ((var_16 ? -6737625392341848948 : 54651));
                            var_25 = ((1 >> (5878044684809242565 - 5878044684809242555)));
                        }
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            arr_31 [i_0] [i_1] [i_3] [i_5] [i_8] = ((~(arr_4 [i_3])));
                            arr_32 [1] [i_5] [i_3] [i_3] [i_1 - 4] [i_0] = (100 ? 1 : -32758);
                        }
                        var_26 = (arr_13 [1] [i_5] [i_1 - 4] [i_0]);
                    }
                    var_27 = (max(var_27, 1));
                }
                var_28 = (min(var_28, (((((((arr_19 [i_1 - 1] [i_1 + 1]) ? 18 : (arr_19 [i_1 + 1] [i_1 + 1])))) ? (((var_5 ? 241 : (arr_29 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] [i_1 - 3])))) : ((((min(8672450590144725937, 27042))) ? ((48 ? (arr_23 [i_1] [i_1] [3] [i_1 - 1] [i_0] [i_0] [i_0]) : (arr_3 [i_0]))) : 15240)))))));
                var_29 = ((((-(max(var_6, 3270530255305278138)))) + (+-114)));
            }
        }
    }
    var_30 = (min(((((((var_17 ? var_16 : 1))) || 1))), var_12));
    var_31 = 20913;
    #pragma endscop
}
