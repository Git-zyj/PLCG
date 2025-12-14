/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_13 = (((arr_10 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4]) ? ((((4294967295 || (arr_11 [i_0] [i_0]))) ? (min(40222, (arr_9 [i_0] [i_1] [i_2] [i_3] [i_4]))) : ((3321758174 ? (arr_9 [i_4] [i_3] [i_2] [i_1] [i_0]) : (arr_0 [i_4]))))) : (min((arr_9 [i_4] [i_4 + 3] [i_4 + 3] [i_4] [i_4]), (((arr_0 [i_4]) & (arr_10 [i_0] [5] [i_0] [i_3] [i_4 - 1] [i_1])))))));
                                var_14 = (min(var_14, (((((((arr_7 [i_1] [i_2] [i_1] [i_4]) ? 0 : (((52 ? (arr_6 [i_4] [i_1] [i_0]) : 40211)))))) ? ((-(arr_9 [i_2] [i_1] [i_2] [i_3] [i_4]))) : ((max(((((arr_11 [i_0] [i_0]) >= (arr_4 [i_0] [i_0])))), 453346573802910857))))))));
                                var_15 = (max(var_15, (((((min(15210, (arr_5 [i_4 + 2])))) < ((1 ? (arr_10 [i_2] [i_4 - 1] [i_4] [i_4] [i_4 - 1] [i_4 + 3]) : (arr_10 [i_0] [i_4 + 1] [i_0] [i_4] [i_4 + 1] [i_4 + 3]))))))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        arr_17 [i_0] [i_2] [i_0] |= ((~((4294967269 ? (arr_13 [i_5] [i_2]) : (arr_13 [i_1] [i_1])))));
                        var_16 -= (1704065416965508127 ? 7662879970904301860 : (((-(3321758184 >= 25310)))));
                    }
                }
            }
        }
    }
    var_17 = (1 * 10783864102805249753);
    #pragma endscop
}
