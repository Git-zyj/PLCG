/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((max(var_13, var_1)) ? var_11 : var_6))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            {
                var_16 += (((arr_3 [i_0 - 1] [i_1 - 1]) ? (-11924 + 317354630) : ((18444492273895866368 ? -317354636 : 11928))));
                arr_4 [i_0] = (arr_2 [i_1 - 4]);
                arr_5 [i_0] [i_0] = (((max(((var_7 ? var_14 : 1137636219)), (-11912 & 47))) <= ((((arr_2 [i_0]) / (min(-782221229, -1137636235)))))));
                var_17 = (max(var_17, (arr_2 [3])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            {
                var_18 ^= ((317354630 ? (max(118, (((arr_6 [i_2] [i_2]) ? (arr_6 [i_2] [1]) : (arr_6 [i_3] [i_2]))))) : -11930));
                arr_10 [i_2] [i_2] [i_2] = ((-((317354630 ? (((-(arr_9 [14] [i_3 - 1])))) : (arr_6 [i_2 + 2] [i_3 - 1])))));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 18;i_5 += 1)
                    {
                        {
                            arr_16 [i_2] = (arr_14 [i_2] [i_4 - 1] [13] [i_2]);
                            arr_17 [i_2] [i_2] [i_2] [i_5] = (min((arr_12 [15] [i_2]), (arr_12 [i_2] [i_2])));
                            var_19 &= ((11932 ? -1137636214 : 2330802012));
                            arr_18 [i_4] [i_4] [i_4] [i_4] [i_2] = 317354655;
                        }
                    }
                }
                var_20 &= arr_14 [6] [i_2 + 1] [16] [10];
            }
        }
    }
    var_21 = ((-1137636198 ? 317354636 : 1055346287));
    #pragma endscop
}
