/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (!var_6)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_20 = ((-var_17 ? (arr_3 [i_2]) : (((arr_1 [i_2]) & 64))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_14 [7] [8] [i_1] [21] [8] [i_4] [11] = (((56038 & 3) && ((max(0, 78)))));
                                arr_15 [7] [i_3] [i_1] [7] [7] [i_3] = (1 & 29038);
                                arr_16 [2] [i_1] [i_1] [i_3] [i_4] = (arr_13 [i_0] [i_3] [15]);
                            }
                        }
                    }
                    var_21 = -var_15;
                    var_22 = 189;
                }
                var_23 = (arr_12 [i_0] [1] [i_0] [11] [i_0] [i_0] [1]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            {
                var_24 = (min((arr_4 [i_5] [2] [i_6]), ((~(arr_4 [i_5] [i_5 + 3] [i_6])))));
                var_25 = (max(var_25, ((((!182) < (arr_13 [i_5 + 3] [14] [i_5 + 1]))))));
                arr_23 [i_5] [i_5] [i_6] = ((-(min((arr_3 [i_5 + 3]), (arr_9 [i_5 + 2] [i_5 - 1] [i_5])))));
                var_26 = (((arr_13 [i_6] [i_6] [12]) ? 5574576385175774358 : ((min(229, 2568044353)))));
            }
        }
    }
    #pragma endscop
}
