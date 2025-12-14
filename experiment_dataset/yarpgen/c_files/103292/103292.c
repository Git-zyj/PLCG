/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0 + 1] = (((((((max((arr_1 [i_0]), (arr_0 [i_0] [5])))) ? (~var_11) : ((var_2 ? (arr_1 [i_0]) : var_8))))) ? 244 : var_5));

        for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
        {
            var_14 = (max(var_14, var_0));

            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                arr_9 [i_0] [1] [1] [13] = (((((585387965 << (65472 - 65466)))) ? ((min((((arr_8 [18] [i_0] [i_0 - 2] [i_0]) ? var_3 : 12)), var_2))) : 6506948762184380153));
                var_15 = (max(var_15, (((((~(arr_7 [i_0] [i_0] [i_2 - 1] [i_2 + 2]))) / (min(var_11, (arr_7 [i_0] [i_1] [i_2 - 1] [i_1]))))))));
            }
            arr_10 [6] = var_1;
            arr_11 [12] = ((~(min((arr_1 [i_0 + 1]), (arr_1 [i_0 + 1])))));
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
        {
            arr_15 [i_0] [i_0] [2] = 6506948762184380153;
            arr_16 [i_0] [i_0] [21] = ((arr_5 [i_0 - 2] [i_0 - 2]) ? (((((arr_5 [i_0 - 1] [1]) <= var_6)))) : (((arr_7 [i_0 + 1] [i_0 - 1] [i_0 - 2] [i_0 - 1]) ? (arr_7 [i_0 - 1] [i_0] [i_0 - 2] [i_0]) : var_2)));
        }
    }
    var_16 += var_1;
    #pragma endscop
}
