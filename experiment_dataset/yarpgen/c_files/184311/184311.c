/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_0 != 86);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_18 [i_4] [i_4] [i_4] [i_2] [i_4] [i_4] = ((+(((arr_14 [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_1]) / (arr_14 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2])))));
                                arr_19 [i_0] [i_0] [4] [i_4] [i_0] [i_0] = ((max((((arr_13 [9] [9] [i_2 + 1]) ? 4067888523181690405 : (arr_6 [i_0] [11]))), (!-1409603300))));
                                arr_20 [i_4] [i_1] = (max(((((((((arr_17 [i_3] [i_2 + 1]) + 9223372036854775807)) >> (var_19 - 124))) >= 2871773435))), (((arr_9 [i_4] [5] [i_2 - 1] [i_1]) >> (56 - 33)))));
                                arr_21 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4] [i_2] = (((((~(arr_15 [i_4])))) == (((((-1409603294 ^ (arr_12 [i_0] [i_1] [i_2] [i_3] [i_4])))) ? (549755809792 & 39873) : ((max((arr_8 [10] [10]), (arr_4 [i_3] [i_2] [i_0]))))))));
                            }
                        }
                    }
                }
                var_21 = (arr_11 [14] [i_1] [i_1] [i_1] [14]);
            }
        }
    }
    #pragma endscop
}
