/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_18 -= (max(((-(((arr_3 [i_1] [i_0] [i_0 + 2]) ^ 9715)))), (((max((arr_1 [i_1] [12]), (arr_0 [i_0] [i_1])))))));
                var_19 = (((((arr_1 [i_0 + 3] [i_1 + 1]) ? (arr_1 [i_0 + 2] [i_1 + 2]) : (arr_1 [i_0 + 2] [i_1 + 4]))) ^ 32767));
                arr_4 [i_0 + 3] = ((((((((var_9 ? (arr_2 [i_0] [i_0]) : (arr_1 [i_0 + 2] [i_0])))) >= (((arr_1 [i_1] [i_0]) ? var_10 : 4359828869749114537))))) * ((min(((min((arr_2 [i_1 + 3] [i_0]), (arr_3 [i_1] [i_0] [i_1])))), var_1)))));
                arr_5 [i_1] = (((arr_0 [i_0 + 2] [i_1 + 3]) || (arr_0 [i_0 + 3] [11])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            {
                arr_13 [i_3] [i_2] = ((((((arr_11 [i_2]) - (arr_11 [i_2])))) ? var_15 : ((~(((arr_0 [i_3] [i_2]) ? (arr_10 [3] [i_3] [i_2 - 1]) : 1258692629))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        {
                            arr_20 [i_2] [i_3] [i_4] [i_5] = (min(-var_16, 69));
                            var_20 = 232;
                            var_21 = 1177454667;
                        }
                    }
                }
            }
        }
    }
    var_22 *= (max((min(var_0, (var_11 % var_2))), ((((var_16 - var_4) ? var_13 : (192 < var_13))))));
    var_23 = (max(var_5, var_2));
    #pragma endscop
}
