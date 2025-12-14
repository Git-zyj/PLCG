/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(((max(var_2, var_2))), (~5713690474771567328)));
    var_11 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_12 -= (arr_2 [1]);
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_2] [12] &= (~var_3);
                            arr_13 [0] [i_1] [i_1] = (i_1 % 2 == zero) ? (((5713690474771567309 ? (((arr_4 [i_2 - 3] [i_2 - 3] [i_1]) << (((arr_4 [i_2 - 3] [i_2 - 3] [i_1]) - 151)))) : (arr_4 [i_2 - 3] [i_2 - 3] [i_1])))) : (((5713690474771567309 ? (((arr_4 [i_2 - 3] [i_2 - 3] [i_1]) << (((((((arr_4 [i_2 - 3] [i_2 - 3] [i_1]) - 151)) + 96)) - 15)))) : (arr_4 [i_2 - 3] [i_2 - 3] [i_1]))));
                            arr_14 [i_0] [i_0] [8] &= (-5713690474771567328 != 5713690474771567341);
                            var_13 = (((min((arr_7 [i_1 + 1] [i_1 - 2] [i_1]), (~-5713690474771567310))) >> (min((arr_6 [i_0] [i_0] [8]), ((0 >> (((arr_8 [1] [i_1 - 2] [i_3]) - 228402362))))))));
                        }
                    }
                }
            }
        }
    }
    var_14 &= var_0;
    var_15 = ((var_3 << (var_6 - 19007)));
    #pragma endscop
}
