/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162626
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = (arr_1 [1]);
        arr_3 [i_0] = ((((~(18446744073709551611 > 9223372036854775807))) | (max(((min(var_3, var_10))), ((9 ? 2 : (arr_2 [i_0])))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_20 = var_14;
                    arr_9 [i_0] [1] [i_0] = (255 * 18446744073709551611);
                    arr_10 [i_1] [i_1] [i_1] [i_1] = ((((32755 >> (var_13 + 1012459079))) < ((((var_16 ^ 63) && 1)))));
                }
            }
        }
        arr_11 [i_0] [i_0] = ((((((arr_7 [i_0] [i_0]) + (min(1, 1353614925389688029))))) ? (((((arr_2 [i_0]) + 2147483647)) << 0)) : ((((5 ? 15360 : var_16)) | (arr_2 [i_0])))));
    }
    var_21 = var_9;
    #pragma endscop
}
