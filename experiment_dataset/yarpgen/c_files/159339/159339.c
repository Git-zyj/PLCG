/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_17 = 4294967295;
                                var_18 &= (((((7952165368570555408 ? (max(1, 30785)) : var_11))) ? (((min(2597074550, 4294967295)) / 32767)) : (arr_6 [8] [8])));
                                var_19 = var_12;
                            }
                        }
                    }
                    arr_14 [i_1] [i_1] = (arr_13 [7] [13] [i_0] [i_0] [7]);
                }
            }
        }
    }
    var_20 = (((((max(var_1, var_10)))) ? 3462944430818111640 : var_1));
    var_21 = (((((var_10 ? -1 : -33488928602310090))) ? (var_15 + var_14) : ((((max(var_8, 1)) | var_12)))));
    #pragma endscop
}
