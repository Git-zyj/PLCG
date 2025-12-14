/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_18 = arr_2 [i_0];
                arr_7 [1] [i_1] = (arr_1 [7] [7]);
                arr_8 [i_0] = (!((max(1322514314, 2972452982))));
                var_19 = var_2;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_20 = (max(var_20, (((((2972452982 ? var_14 : (!var_15))) > (min(((var_5 ? (arr_3 [i_2]) : (arr_6 [i_0] [i_0] [i_0]))), (((arr_3 [i_0]) ? var_7 : 2972452982)))))))));
                            var_21 = (((((((max((arr_1 [5] [i_2]), var_16))) ? -1322514314 : (((~(arr_11 [15] [12] [i_2] [i_3 - 4] [8] [13]))))))) ? ((~((min(var_3, var_11))))) : (1322514313 == 1322514314)));
                            arr_13 [i_0] [i_1] [i_2] [i_3 - 1] = ((2972452983 ? ((((((max((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_12 [i_0] [i_1] [i_2] [i_2] [i_2]))))) | (max(var_10, 2972452983))))) : (max(1322514290, 2972453019))));
                            var_22 = ((2972453005 * (((min(2972453008, (arr_11 [i_3 - 3] [i_3 - 1] [i_3] [i_3] [i_3] [i_3 + 1])))))));
                        }
                    }
                }
            }
        }
    }
    var_23 = (min((((min(2972452982, var_3)) * (var_8 * var_11))), var_13));
    var_24 = ((1322514265 ? 1322514297 : 2972452959));
    #pragma endscop
}
