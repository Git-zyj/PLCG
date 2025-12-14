/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = 8;
                arr_4 [i_1] = (((((~(~11)))) ? ((((max((arr_1 [i_0] [i_1]), -2))))) : ((939524096 % (((-127 - 1) ? 8 : (arr_1 [i_0] [i_1])))))));
                var_21 = (max(var_21, ((((((((arr_3 [i_0] [i_0] [4]) >> (((arr_0 [i_0] [i_0]) - 2245737195)))))) ? (arr_1 [i_1] [i_0]) : (((var_9 * 0) ? (((arr_1 [i_1] [i_0]) ? -1 : var_3)) : 63)))))));
            }
        }
    }

    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_12 [i_3] = -13875;
            var_22 = (max((arr_11 [i_2 + 1] [i_3] [i_2]), (1976842182 <= -9)));
            arr_13 [i_3] [i_2] = (((((min(var_19, var_19)) ? (!18014397435740160) : (~-32459)))));
            var_23 = 8;
            var_24 = var_9;
        }
        for (int i_4 = 1; i_4 < 10;i_4 += 1)
        {
            var_25 -= (arr_14 [i_4] [i_2]);
            arr_16 [i_2] [i_4 + 2] = (max((min(((249 ? 8 : 9223372036854775807)), (0 + -8))), 4177920));
            var_26 ^= ((var_17 >> ((((-4213 ? (arr_15 [i_2 + 1] [i_4 + 2] [i_4]) : (arr_15 [i_2 - 1] [i_4 + 2] [i_2 - 1]))) - 565951192036624557))));
            var_27 = (min(((max(0, -107))), (arr_0 [i_2 + 2] [i_2 + 3])));
        }
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            var_28 = (min(var_28, (((((max(36182, (arr_9 [i_2 + 1] [i_2 + 2])))) ? (max(-9, var_2)) : (((0 ? (arr_9 [i_2 + 1] [i_2 + 3]) : (arr_9 [i_2 - 1] [i_2 + 1])))))))));
            var_29 = (((18446744073709551615 ^ (((max(var_9, var_7)))))));
        }
        var_30 = 2287828610704211968;
    }
    for (int i_6 = 2; i_6 < 12;i_6 += 1) /* same iter space */
    {
        var_31 &= var_10;
        arr_24 [i_6] = (max((((-126 || var_5) < ((max(var_4, var_8))))), var_11));
        var_32 = (max((((arr_2 [i_6 - 2] [i_6 - 1] [i_6 - 2]) | (max((arr_2 [i_6] [i_6] [i_6]), 18083793240091640565)))), (((-121 ? 254 : -7)))));
        var_33 |= ((~(max((((arr_3 [i_6] [i_6] [i_6]) | (arr_22 [i_6]))), ((min(16844, var_6)))))));
    }
    for (int i_7 = 2; i_7 < 12;i_7 += 1) /* same iter space */
    {
        var_34 = (((~(~18446744073709551615))));
        arr_27 [i_7] [i_7 - 2] = ((!(((57647 ? (!var_12) : (!4398046511104))))));
        var_35 ^= (min(-6, 0));
        var_36 &= ((12357226225744967811 - ((max(((min(var_1, 17615))), (var_18 ^ var_2))))));
        arr_28 [i_7] [i_7] = 6155285716987327280;
    }
    var_37 = (((((((var_17 ? 1396725828 : 3072)) & 4294967295))) & (((68 | 15) ? 1396725851 : 17655232327989954629))));
    #pragma endscop
}
