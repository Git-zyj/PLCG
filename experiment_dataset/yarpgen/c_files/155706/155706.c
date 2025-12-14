/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_20 *= (((~44556) ? (~0) : (max((-1 % 18446744073709551613), (((~(-9223372036854775807 - 1))))))));
                var_21 |= ((+(((((2970958386 >> (((arr_3 [i_0] [i_1 - 1] [i_0]) - 28501))))) / (((arr_2 [4]) * 271707915994526112))))));
                var_22 = (min(var_22, (((((((arr_0 [i_0]) / (min(-7519236772866788217, (arr_3 [i_1] [i_0] [i_0])))))) && ((max((((arr_3 [i_1 - 1] [i_1] [20]) ? (-127 - 1) : (arr_3 [7] [i_1] [i_0]))), 33062))))))));
                var_23 = ((((max(17485, ((((arr_3 [i_0] [15] [i_1]) && -114)))))) ? (((((arr_3 [i_0] [i_0] [i_0]) ^ 2790904197846801535)) * (((min(400, (arr_0 [2]))))))) : (((((44549 ? (arr_1 [i_1]) : -3469105280779775910)) / (((~(arr_0 [13])))))))));
                var_24 = (((((!((-525698168 || (arr_2 [i_1])))))) * (((!7421926082891571556) ? (arr_3 [i_0] [i_0] [i_0]) : (arr_2 [i_1])))));
            }
        }
    }

    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        var_25 = ((-((max(21005, (arr_3 [i_2] [i_2] [i_2 + 2]))))));
        var_26 = (((((max(-525698168, 1277221678)))) ? (((((-9223372036854775807 - 1) + 1073479680)) - 65524)) : (((max((min(44556, 31314)), 20987))))));
    }
    #pragma endscop
}
