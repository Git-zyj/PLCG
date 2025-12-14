/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((-((var_3 ? var_5 : var_0)))) < (((max(var_2, -21517)) | (~150)))));
    var_12 = ((((max(5511592060289475727, var_1))) ? var_1 : (!42)));
    var_13 = (min(var_13, (((((max(var_4, var_1))) * (8 / var_3))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_14 = ((-(8 & 1511428364)));
                var_15 = (min(var_15, (arr_1 [i_0 - 1])));
                arr_6 [i_0] [6] = (((((max((arr_3 [i_0]), 9)))) >= (min(((min(255, (arr_0 [i_0 + 3] [i_1])))), var_7))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_16 = ((((((-22 != (21510 ^ -14))))) != ((~(((arr_2 [i_1] [i_3]) ? var_8 : (arr_1 [i_0])))))));
                            var_17 = (min(var_17, (arr_7 [11] [i_2] [i_2])));
                        }
                    }
                }
                arr_11 [i_1] [i_1] = (((-14 ? (arr_10 [10] [i_1] [i_0] [6] [i_0 - 1]) : ((((arr_0 [i_0 - 1] [i_1 - 2]) ^ (arr_9 [i_0] [i_0] [i_0] [11])))))));
            }
        }
    }
    #pragma endscop
}
