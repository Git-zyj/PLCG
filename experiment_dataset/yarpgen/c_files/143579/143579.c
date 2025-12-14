/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_7 [1] [1] = var_9;
                arr_8 [i_0] = (~(((-13061 ? -13044 : 17419951578430386735))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_17 *= ((var_0 ? ((((1 != (arr_11 [i_0] [i_1] [3] [i_3] [i_4]))) ? (((((arr_1 [i_4] [17]) != -13061)))) : (arr_9 [i_0 + 1] [i_0 + 1]))) : (((((13082 ? 32767 : 32787)) | (arr_13 [i_0] [i_1] [i_2] [i_3] [i_4]))))));
                                var_18 = ((arr_13 [i_1 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1]) ? ((min((arr_13 [i_1 - 1] [i_1 - 1] [i_0 - 1] [i_0 - 2] [i_0 - 2]), (arr_13 [i_1 - 2] [i_1] [i_0 - 1] [i_0] [i_0 - 2])))) : (arr_13 [i_1 + 1] [i_1] [i_0 - 1] [i_0 + 1] [i_0 + 1]));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 ^= (~var_14);
    var_20 = ((-32767 ? 58 : 13093));
    var_21 = (min(var_21, ((max(((max(((var_12 ? var_7 : var_10)), (var_7 && 13061)))), (~var_1))))));
    var_22 = ((((((var_13 || ((min(var_3, var_3))))))) * ((max(var_12, var_3)))));
    #pragma endscop
}
