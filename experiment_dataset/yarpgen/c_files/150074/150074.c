/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= (max(var_5, (((max(var_8, 72057594037665792)) | ((min(573032563, var_7)))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 8;i_2 += 1)
                {
                    var_14 = var_2;
                    arr_8 [0] [i_1 - 2] [i_0] [0] &= (arr_4 [i_0 - 3]);
                    arr_9 [i_0] [i_0] [i_2] = (+(((arr_4 [i_0 - 2]) & 254)));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 9;i_3 += 1)
                {
                    arr_12 [i_0] = 205;
                    var_15 -= (((arr_6 [i_3] [i_3 + 1] [i_3] [i_0 - 2]) >> (((arr_6 [i_0 - 2] [i_3 + 1] [i_1 + 1] [i_0 - 2]) - 48))));
                }
                var_16 = (max(var_16, 3099037521));
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 9;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 8;i_5 += 1)
                    {
                        {
                            arr_20 [i_0] [i_4] [i_1] [i_0] = ((~((max(var_4, 148)))));
                            var_17 = (max(var_17, 65535));
                            var_18 = (min(var_18, var_11));
                            var_19 += var_9;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
