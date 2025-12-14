/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_2 || var_1);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] = ((!(arr_0 [20])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_16 = (arr_12 [i_0] [i_1] [16] [i_2 + 1] [i_2] [i_4]);
                                var_17 -= ((-((-((3655 ? 56 : 4001592119))))));
                            }
                        }
                    }
                    var_18 &= ((((max(((min(15872, -25982))), (min(var_13, 210))))) ? -var_9 : ((((-(arr_8 [i_0] [i_1] [i_0] [i_2]))) + var_5))));
                    var_19 = (min(var_19, (((((((~(arr_12 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0])))) || (((27823 ^ (arr_1 [i_2]))))))))));
                }
            }
        }
    }

    for (int i_5 = 1; i_5 < 20;i_5 += 1)
    {
        var_20 = ((max((arr_15 [i_5]), (max((arr_13 [i_5]), var_5)))));
        var_21 = ((((arr_13 [i_5 + 3]) - (arr_14 [i_5]))));
        var_22 = (arr_14 [i_5]);
    }
    for (int i_6 = 2; i_6 < 17;i_6 += 1)
    {
        var_23 = arr_12 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6 - 2];
        var_24 = (((arr_10 [i_6] [i_6] [i_6] [i_6] [i_6]) - (max(3339015032, 15070396726130412286))));
        var_25 = (max((((((arr_11 [i_6] [i_6] [i_6]) << (((arr_18 [i_6]) - 2017221958)))) - (arr_6 [i_6] [2]))), ((((arr_4 [i_6]) || ((((arr_12 [0] [i_6] [i_6] [i_6] [i_6] [i_6]) ? (arr_3 [i_6] [i_6 + 3]) : var_11))))))));
    }
    var_26 = -1170240985;
    #pragma endscop
}
