/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, 67));
    var_17 = (((((min(32767, 6837)))) / var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_1] [3] [i_0] = ((var_14 ? ((((arr_2 [i_0]) > (arr_4 [i_0] [i_0])))) : (~4)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_18 *= ((((((((((arr_6 [i_1]) >= (arr_3 [10]))))) / (((arr_0 [6]) ^ 9223372036854775807))))) ? (min(33, (((arr_8 [i_0] [i_0] [2] [2]) ^ 7534)))) : (((-27 ? 5184066445464694038 : (((arr_6 [i_2]) ? -7534 : 1)))))));
                            var_19 = (min(var_19, ((min(((var_0 ? (arr_3 [0]) : ((28 ? (arr_10 [i_0] [i_1] [12] [12] [i_3] [i_0]) : (arr_6 [i_3]))))), (((!(arr_1 [i_2])))))))));
                            var_20 -= ((((2951990296 >= (arr_4 [0] [i_1 - 1]))) ? ((var_7 ? var_11 : -19854)) : (arr_4 [0] [i_1])));
                            var_21 = (arr_3 [i_0]);
                        }
                    }
                }
                arr_12 [i_0] [i_0] [i_1] = ((+(max((arr_8 [i_1 - 1] [i_1] [i_1 + 1] [i_0]), (arr_4 [i_0] [i_0])))));
            }
        }
    }
    #pragma endscop
}
