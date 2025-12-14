/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_14 |= ((14875294616700337953 < (var_13 == -19720)));
        arr_2 [i_0] [i_0] = (arr_0 [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_15 = (-2025000421 / 1);
                        arr_11 [i_0] [i_1] [i_3] [i_2] [i_3] = ((3571449457009213674 & (((((var_8 | var_10) + 9223372036854775807)) << (((arr_9 [i_3] [i_1] [i_1] [i_0]) & 79))))));
                        arr_12 [i_3] [i_1] [i_2] [i_3] = (((14875294616700337944 & (var_5 == 116))));
                        arr_13 [i_0] [i_1] [i_1] [i_3] [i_3] = (((-11358 * 1) * (((26094 / 14875294616700337954) / (var_6 / 15986596091584240964)))));
                        arr_14 [i_0] [i_3] = ((((14875294616700337944 ^ var_6) ^ ((((arr_4 [i_1] [i_3]) & (arr_8 [i_0 + 1] [i_0] [i_0 + 1])))))));
                    }
                }
            }
        }
    }
    var_16 |= ((3571449457009213668 * (((var_7 >= var_8) % 1))));
    #pragma endscop
}
