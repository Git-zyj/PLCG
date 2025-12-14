/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (((max((min(var_8, var_11)), (~14898485269659146392))) ^ ((((((14898485269659146384 ? var_10 : 3548258804050405247))) ? 31799 : var_5)))))));
    var_15 = ((~(((var_1 && (((var_1 ? var_12 : var_10))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [1] [i_2] = var_6;

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_16 = ((~((((127 ? 3548258804050405247 : var_7)) | (((78 ? (arr_2 [i_0]) : 27361)))))));
                        var_17 = (((((var_9 == var_6) >= (var_12 > 14898485269659146419))) ? ((~(var_3 * 14898485269659146371))) : (arr_1 [i_0])));
                        var_18 = ((-(min(3548258804050405211, (arr_4 [i_1 - 2] [i_1] [i_1 - 3])))));
                        arr_12 [i_3] [i_1] [i_1] [i_3] = (((~121) ? ((((arr_2 [i_1 + 1]) || var_6))) : var_3));
                        var_19 *= ((((max(((((arr_1 [i_0]) * 1))), (var_11 * 127)))) ? ((-var_7 ? (var_4 < 14898485269659146404) : (var_7 - 14898485269659146404))) : (((var_0 ? var_5 : (((120 ? var_9 : 10401))))))));
                    }
                    var_20 = (max((((var_6 > (var_1 || var_7)))), (max(((min((arr_10 [i_0] [i_0] [i_0]), (arr_2 [i_0])))), var_5))));
                }
            }
        }
    }
    #pragma endscop
}
