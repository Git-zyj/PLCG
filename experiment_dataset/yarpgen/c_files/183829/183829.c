/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (!(((var_2 ? 101 : var_8))));
    var_14 = min(((max(90, (var_1 != var_0)))), (max(-var_7, var_10)));
    var_15 -= var_0;
    var_16 = (((((((1 ? -1957 : 1409302791))) ? (var_4 - 1) : (var_1 <= 1))) != var_4));

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_17 ^= (((((-32765 <= (-1941 != var_9)))) + ((((((arr_1 [6]) | 0))) ? ((~(arr_0 [i_0] [i_0]))) : 1956))));

        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            arr_6 [i_0] [i_1] = ((((min(((((arr_4 [i_1] [i_0]) ? var_2 : 255))), 9))) ? ((((1073725440 >> 1) + (2147483647 != var_3)))) : (((((arr_4 [i_0 - 2] [i_0]) && -81)) ? (~var_4) : var_6))));
            var_18 = 1;
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_19 = ((-(min(((min(1, (arr_2 [i_2] [i_2])))), var_0))));

            for (int i_3 = 3; i_3 < 21;i_3 += 1)
            {
                var_20 &= (((max((arr_7 [i_2] [i_2]), 0))) ? (arr_12 [i_2] [i_2]) : (arr_8 [i_2] [i_2]));
                arr_14 [i_0] [19] [6] = ((!(((var_6 ? (!0) : ((var_3 ? 0 : var_8)))))));
                arr_15 [i_0] = ((((min(255, ((max(var_3, -114)))))) ? (arr_0 [i_2] [i_3 - 1]) : ((((717281119 ? var_7 : -1)) - 227))));
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                var_21 = -var_10;
                var_22 = 1;
            }
        }
    }
    #pragma endscop
}
