/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 0;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_20 = ((~((~(arr_6 [i_1] [i_1 + 3] [i_1 - 2] [i_1])))));

                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        var_21 = (max(var_21, (((var_18 ? (((((-29270 || 49648) || var_4)))) : (arr_4 [i_0]))))));
                        arr_10 [i_1] &= 1;
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 22;i_4 += 1)
                    {
                        var_22 = ((2677073553 / ((1617893743 ? 1 : 2677073553))));
                        var_23 = -29246;
                        var_24 = ((!(arr_9 [i_2] [1] [i_4 + 1])));
                    }
                }
                var_25 = ((((min(1, (arr_1 [i_0 - 1])))) || ((((((1 ? 1 : -462))) ? (!var_10) : ((var_16 ? 14619880464646825621 : (arr_8 [i_1] [i_1] [i_1 + 2] [i_1 - 2]))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 3; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 14;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 14;i_9 += 1)
                        {
                            {
                                arr_27 [i_7] [14] = var_16;
                                var_26 = (min(1, 1));
                                var_27 = (arr_15 [i_5] [i_6]);
                            }
                        }
                    }
                    var_28 += 1;
                    arr_28 [i_5 - 3] [i_7] [i_5 - 1] = ((0 ? (97 <= -1) : (9 >= 861296786)));
                }
            }
        }
    }
    #pragma endscop
}
