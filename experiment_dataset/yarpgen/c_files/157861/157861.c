/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 127;

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_1] [i_4] = var_4;
                                var_11 = (max(var_11, (((((arr_8 [i_3] [i_3]) ? (arr_8 [i_3] [i_3]) : 8191)) | (arr_8 [i_3] [i_3])))));
                                var_12 = (max(var_12, ((min(194, 57336)))));
                                var_13 = (max(var_13, ((min(1875509216, 13835058055282163712)))));
                                var_14 = var_1;
                            }
                        }
                    }
                    arr_16 [5] [i_1] [5] [23] = ((((((arr_0 [i_0 + 1]) ^ (arr_0 [i_0 - 1])))) % (((arr_3 [i_0 + 1] [i_1] [i_1]) - (arr_9 [i_1])))));
                    var_15 = (min(var_15, (arr_0 [i_1])));
                    var_16 = (min(var_16, (((((var_5 == (arr_7 [14]))) ? (arr_5 [16] [i_1] [16]) : (max((arr_11 [i_0] [14]), (arr_7 [8]))))))));
                    var_17 = (min((1573752510 < -214925120), 214925120));
                }
            }
        }
        var_18 -= (((((((51 ? (arr_11 [22] [22]) : 8199))) / (arr_9 [10]))) * (((min(-1, (arr_4 [i_0] [22] [i_0 - 1])))))));
    }
    #pragma endscop
}
