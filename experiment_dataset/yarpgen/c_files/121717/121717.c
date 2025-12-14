/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    var_15 = (max(var_15, (((((((((arr_5 [i_0] [16] [i_0]) ? -1 : var_5)) * (arr_5 [i_0] [i_1] [i_0])))) ? (((var_1 != (arr_5 [i_0] [i_0] [i_0])))) : ((-5099857773173864770 ? 0 : -63)))))));

                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        var_16 = ((370496778 >> (32751 - 32733)));
                        arr_9 [i_0] [i_0] [i_2] [i_3 + 2] [i_1] = (((arr_0 [i_0] [i_3]) && (arr_0 [4] [i_3])));
                        var_17 -= ((-32767 ? 14 : ((var_12 ? var_14 : 0))));
                    }
                    for (int i_4 = 1; i_4 < 18;i_4 += 1)
                    {
                        var_18 ^= (--30146);
                        var_19 = (((((-9223372036854775799 ? (arr_0 [i_2 + 1] [i_2 + 1]) : (arr_0 [i_2 - 1] [i_2 + 3])))) ? (var_6 <= -var_6) : (arr_13 [i_1] [i_1] [i_2] [i_4 - 1])));
                    }
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        var_20 = (max(var_20, 370496788));

                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            arr_18 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] [i_1] = (var_14 || 17);
                            arr_19 [i_0] [i_1] [i_2 - 1] [i_1] [i_1] = -26;
                            var_21 = -20;
                        }
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            var_22 ^= ((91 ? (max((((~(arr_11 [8] [i_1] [i_1] [i_5])))), (arr_1 [i_0] [i_0]))) : ((((!(arr_10 [i_0] [i_1] [i_1] [14])))))));
                            arr_22 [i_7] [i_1] [i_5] [2] [i_1] [i_1] [i_0] = ((((((arr_14 [i_2] [i_1] [i_2] [i_2 + 3] [i_2 - 1]) ? var_1 : 28672))) ? ((((-var_5 <= ((91 ? -28689 : 32453)))))) : var_13));
                            var_23 = (max(var_23, ((min(var_14, var_9)))));
                        }
                        var_24 = 38;
                    }
                    var_25 = (max(var_25, (((arr_2 [i_1] [i_0] [i_1]) ? (arr_4 [i_0] [i_0] [i_1]) : var_11))));
                }
                var_26 = -var_9;
                var_27 ^= var_13;
            }
        }
    }
    var_28 = ((min(var_7, -63)));
    var_29 = (min(9096818063071469989, 0));

    /* vectorizable */
    for (int i_8 = 0; i_8 < 10;i_8 += 1)
    {
        var_30 ^= 122;
        var_31 = (max(var_31, ((((arr_25 [2]) ^ var_4)))));
        var_32 *= ((15881 ? 76 : -18556));
    }
    #pragma endscop
}
