/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 10;i_4 += 1)
                            {
                                var_11 = 2951518342;
                                var_12 = (min(var_12, var_2));
                                var_13 ^= 1;
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 1;i_5 += 1)
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_0] [i_5] [i_3] [i_5] = (!875205995096425605);
                                arr_17 [i_0] [i_0] [i_1 - 4] [i_2] [i_3 + 1] [i_5] = 11292;
                                var_14 = (((((54248 >> (-115 + 138)))) ? 0 : var_8));
                                var_15 = ((var_6 ? (arr_9 [i_0] [i_1 + 2] [i_2] [i_5]) : 54246));
                                arr_18 [i_0] [i_1] [i_0] [i_3 + 1] [i_5] [i_5] = ((((!(arr_12 [i_0] [i_1 + 2]))) ? (45399 != 1) : var_2));
                            }
                            arr_19 [i_1 + 1] [i_0] = (min((min((arr_10 [i_1 - 2] [i_1 - 3] [i_1 - 2] [i_3 + 2] [i_3 + 1] [i_3 - 1]), 19)), (max((arr_5 [i_1] [i_2]), 39949))));
                        }
                    }
                }
                var_16 = 3317556973;
            }
        }
    }
    var_17 = ((((max((var_10 <= 17571538078613126011), 1))) << 1));
    var_18 ^= (((((~(65531 * var_10)))) > (min(((min(var_10, 1343448955))), var_9))));
    var_19 = var_8;
    #pragma endscop
}
