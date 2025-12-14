/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= (var_13 | 116);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_1] [6] [i_0] &= ((94 != ((var_7 + (arr_4 [0] [i_1])))));

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_18 = (max(var_18, ((((((arr_2 [6]) ? (arr_7 [i_0 + 3] [4] [i_1 - 1]) : (arr_2 [6]))) - (((121 ? -121 : 112))))))));
                    arr_8 [i_0] [i_1] [i_1] = ((((arr_3 [i_0 + 3] [i_1] [i_2]) ? 3630578952 : -127)));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        arr_15 [i_0] [i_1] [i_0] = (((arr_4 [i_1] [i_0]) ? (((-103 ? (arr_10 [i_1] [i_1] [i_1]) : -123))) : ((-111 ^ (arr_6 [i_1] [i_0] [i_3] [i_4])))));
                        var_19 *= (((arr_13 [i_1] [8] [8] [i_1 - 3] [i_3]) + (arr_13 [i_0] [i_1 - 1] [i_1 + 2] [i_1 - 1] [i_1 + 2])));
                    }
                    arr_16 [i_0] [i_1] [i_3] = 4294967295;
                }
            }
        }
    }
    #pragma endscop
}
