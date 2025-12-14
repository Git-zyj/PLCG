/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = min(158, 9132801721732314242);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_15 &= 1293377112;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_16 ^= var_6;
                                var_17 = ((-(arr_7 [i_0] [i_0 + 1] [i_0])));
                                var_18 = (max(var_18, ((((((arr_8 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1]) ? (arr_8 [i_0] [i_0] [i_0] [i_0 - 1]) : 3709227064)) < (((((arr_8 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1]) && (arr_8 [i_0] [i_0] [i_0 - 1] [i_0 - 1]))))))))));
                            }
                        }
                    }
                    var_19 = (((arr_11 [i_0] [i_0 - 1]) ? (arr_2 [i_0 - 1] [i_0 - 1]) : (arr_2 [i_0 + 1] [i_0 - 1])));
                }
            }
        }
    }
    var_20 = (max(var_20, (((((((var_11 ? var_12 : var_13))) || var_0)) ? (((1 ? 4290772992 : 50))) : var_10))));
    #pragma endscop
}
