/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (((1 ? 288230376151646208 : 1996789288)))));
    var_17 = (var_6 >= 2298178008);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_18 = (max(var_18, ((((((~(arr_3 [12])))) ^ (min((max(1854200906, 3478991663)), -100)))))));

                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    var_19 = ((((((var_0 ? var_4 : ((~(arr_0 [i_0] [i_0]))))) + 2147483647)) << (((-1316248605 | 18446744073709551615) - 18446744073709551615))));
                    arr_8 [i_0] [i_1] [11] [i_2] = (i_0 % 2 == zero) ? (((((((((arr_6 [i_0] [i_0] [i_0] [i_0]) ? var_3 : 3019752879)) >> ((var_12 & (arr_6 [i_0] [i_0] [i_1] [i_2])))))) ? (~815975634) : (((min((arr_7 [i_1] [i_0]), (arr_5 [i_0 - 2] [i_1])))))))) : (((((((((arr_6 [i_0] [i_0] [i_0] [i_0]) ? var_3 : 3019752879)) >> ((((var_12 & (arr_6 [i_0] [i_0] [i_1] [i_2]))) - 116))))) ? (~815975634) : (((min((arr_7 [i_1] [i_0]), (arr_5 [i_0 - 2] [i_1]))))))));
                    var_20 = ((((max((arr_3 [i_0]), 0))) ? ((min(2440766390, 1854200906))) : (((arr_3 [i_0]) ? 133 : -1))));
                }
                var_21 = (((((max((arr_2 [i_0] [i_0] [i_0 - 1]), (arr_1 [i_0]))) + 9223372036854775807)) >> (((min((arr_6 [7] [i_0] [i_0 + 1] [i_0 + 1]), (arr_2 [i_0] [i_0] [i_0 - 2]))) + 1071259115))));
            }
        }
    }
    var_22 = ((!(((var_5 ? var_9 : 149)))));
    #pragma endscop
}
