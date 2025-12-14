/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (((((((var_4 & 121) * ((1730240161 >> (var_3 - 35353)))))) > (((var_3 == 0) - (var_2 | 18))))))));
    var_12 = (((((var_6 & var_0) * (var_3 / 18446744073709551615))) & (((((var_8 & var_5) != (-2738075712282932539 ^ var_4)))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_2] [i_0] = ((((((var_1 + (arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0])))) - (var_7 + 2147483647))) == ((((((-2738075712282932535 || (arr_4 [i_0] [i_0])))) >> (((-2147483642 || (arr_2 [i_0] [i_0]))))))));
                    arr_10 [i_0] = ((((((((((arr_7 [i_1]) + 2147483647)) >> (var_0 - 12102))) < (var_8 && var_8)))) > (((((((arr_7 [i_0]) + 2147483647)) >> (var_0 - 12112))) / ((1973778258 / (arr_5 [i_0] [i_1] [i_2])))))));
                }
            }
        }
    }
    #pragma endscop
}
