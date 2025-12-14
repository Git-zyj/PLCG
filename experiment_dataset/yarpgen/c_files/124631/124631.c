/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((((var_12 ? var_5 : var_6))) ? (14567790021510741976 ^ var_6) : (((var_4 ? var_7 : var_12))))) | (((((0 || var_8) && (((-2088088788 ? -2088088775 : var_11)))))))));
    var_20 = ((8 << (2147483632 - 2147483606)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_1] = (((((((((arr_0 [i_1] [i_0]) ? var_9 : 10073))) ? ((-19829 ? (arr_3 [5] [10]) : (arr_1 [i_0]))) : (((var_7 ? (arr_2 [i_0] [i_1] [i_0]) : var_13)))))) ? (((((((arr_3 [i_0] [i_0]) <= var_16))) <= (((arr_3 [7] [3]) ? var_14 : var_0))))) : ((((((2147483639 ? (arr_2 [0] [i_0] [7]) : (arr_0 [10] [9])))) <= (((arr_2 [i_0] [i_0] [i_1]) ? -113 : var_11)))))));
                var_21 = ((((((((var_16 & (arr_3 [i_0] [i_0])))) ^ ((var_14 ? (arr_1 [i_1]) : (arr_2 [i_0] [i_1] [4])))))) ? ((((((arr_1 [i_0]) ? (arr_2 [i_0] [i_0] [i_0]) : (arr_1 [i_1])))) ? (((32743 ? 2147483632 : 32753))) : (((arr_1 [i_1]) >> (222403208 - 222403184))))) : (((((((arr_1 [i_1]) ? -32730 : var_2))) ? ((18446744073709551615 ? (arr_3 [i_0] [i_1]) : var_9)) : (-26693 & 1))))));
            }
        }
    }
    var_22 = (((((19828 || var_10) ? ((4294967295 >> (var_16 - 124350218))) : (var_11 | 113))) | (((((var_17 ? 15 : 3669062865))) ? (((-32767 - 1) - var_11)) : (var_5 * 25)))));
    #pragma endscop
}
