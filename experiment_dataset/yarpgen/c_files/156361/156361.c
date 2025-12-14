/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_16 = ((((((arr_2 [i_1] [i_0] [i_0]) ? (arr_0 [i_0 - 1]) : ((((arr_0 [i_0]) || (arr_1 [i_0 - 1] [i_1]))))))) || ((((max(10, 20171))) <= (17010711145445135763 == 20171)))));
                var_17 -= (((arr_0 [i_0 + 3]) ? (arr_0 [i_0 + 2]) : (((arr_0 [i_1]) % (arr_0 [i_1])))));
                var_18 += (((((arr_2 [0] [13] [13]) + (arr_0 [i_0 + 1]))) | (arr_2 [5] [i_1] [5])));
            }
        }
    }
    var_19 ^= ((((max((17010711145445135770 % 20182), 56))) ? ((var_15 ? (var_10 != var_12) : (-20171 & 161))) : var_15));
    var_20 = ((var_6 << ((((((var_4 ? var_6 : var_15))) < (max(var_2, var_12)))))));
    var_21 = var_7;
    var_22 = ((((max((var_14 || var_10), var_1))) ? var_14 : ((((var_11 < var_2) ? (var_12 < var_8) : var_6)))));
    #pragma endscop
}
