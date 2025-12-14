/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((9624 <= var_6) ? ((32704 ? var_6 : 32704)) : -1)) >> ((((max(var_7, (max(var_16, -9640))))) - 97))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_20 = (~var_12);
        var_21 = (arr_1 [i_0] [5]);
        var_22 = var_10;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] [4] = (281472829227008 / ((max(var_10, 856697706))));
        arr_5 [i_1] = (arr_1 [i_1] [4]);
        var_23 = ((0 ? var_9 : ((var_16 - (arr_3 [i_1] [i_1])))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = ((max(var_11, 100)));

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_24 = (min(-9624, 32699));
            arr_12 [i_2] [i_2] = (min(((((~64) / 192))), (min(1096156318, var_17))));
        }
        arr_13 [i_2] = (i_2 % 2 == 0) ? (((var_17 || ((((((arr_6 [i_2]) + 2147483647)) >> (var_10 - 3538153264))))))) : (((var_17 || ((((((((arr_6 [i_2]) - 2147483647)) + 2147483647)) >> (var_10 - 3538153264)))))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        var_25 = (min((((arr_7 [6]) + 3)), ((min(9645, -9625)))));
        arr_16 [7] [i_4] = (((min(3772446080126068829, 253)) | (((1 ? -9625 : 9640)))));
        var_26 = (((~var_10) + var_13));
        arr_17 [i_4] = (((((((max(var_14, 9640))) < (64 && 14674297993583482779)))) & (((-9645 && (((var_16 ? var_17 : var_8))))))));
    }
    var_27 = var_0;
    #pragma endscop
}
