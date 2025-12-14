/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_11 &= ((-1195396665 ? ((max((arr_0 [i_1 - 1]), var_4))) : (min((((var_1 + 2147483647) >> 1)), (arr_0 [i_0])))));
                arr_5 [i_0] [i_0] = (max(((113 ? -7616311794398353910 : -83)), (arr_2 [i_0] [i_1])));
                var_12 = (((max((max(var_0, (arr_1 [i_1]))), (((3393838895210246406 == (-32767 - 1))))))) | ((max((arr_3 [i_1 - 1] [i_1 - 1] [i_1 + 1]), -83))));

                /* vectorizable */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    var_13 = ((-(11565561455872194537 == var_3)));

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        var_14 = var_10;
                        var_15 *= ((-7948904906147346352 != (!8191)));
                        var_16 = 6881182617837357078;
                    }
                    var_17 += ((((var_8 ? 0 : 11565561455872194543)) | (arr_4 [1] [i_1 - 2] [i_2])));
                    var_18 ^= ((2019054326 ? (arr_2 [i_1 - 1] [i_2 + 3]) : var_6));
                }
            }
        }
    }
    var_19 = (!6881182617837357078);
    #pragma endscop
}
