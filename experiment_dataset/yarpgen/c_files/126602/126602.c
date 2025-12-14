/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_12, var_0));
    var_15 += var_6;
    var_16 += var_12;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    var_17 = -56;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_18 = (min(var_18, (arr_11 [0] [0] [i_2 - 3] [i_4 - 1])));
                                var_19 = (((max(((3515077913 ? (arr_7 [i_1]) : 194)), (arr_10 [7]))) / (arr_10 [i_1 + 2])));
                                arr_13 [i_1] [i_1] [i_2] [i_2] = (((~6752) == var_5));
                                var_20 = (((((((var_2 < (arr_8 [i_1] [i_1]))) ? (arr_11 [i_0] [i_0] [i_2 - 3] [i_3 - 2]) : ((-32287 ? 1446921298 : (arr_6 [i_0])))))) ? (max(13, (109 - var_2))) : 121227699));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 12;i_6 += 1)
        {
            {
                arr_21 [i_5] [i_5] [1] = (((((((167 ? 427673760 : (arr_18 [i_5])))) ? var_8 : (~var_1))) ^ 19));
                var_21 = (min(var_21, ((min(5, ((7 ? 4262861883461622303 : 1)))))));
                var_22 = (max(var_22, ((min(var_2, (min((arr_18 [i_5 + 2]), var_6)))))));
            }
        }
    }
    #pragma endscop
}
