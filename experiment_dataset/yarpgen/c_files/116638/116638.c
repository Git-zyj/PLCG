/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= (((((1 ? 1500422931924429848 : 6243943081705535706))) ? (var_11 / var_11) : var_11));
    var_15 = var_11;

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        var_16 = (((arr_0 [i_0]) || (((-(arr_1 [i_0 - 2]))))));
        var_17 ^= (((min(var_8, (min((arr_1 [i_0]), var_12)))) % (((var_0 < var_8) ? 6811927983368922445 : (min(var_11, var_4))))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_18 ^= ((((var_2 >= ((max(var_1, var_13)))))));
                        var_19 *= ((~(((((arr_9 [i_0] [16] [16]) < var_7)) ? ((((var_8 != (arr_12 [i_0 + 1] [i_0 + 1] [i_2] [i_3]))))) : (max(var_13, (arr_4 [i_0] [i_1 - 1] [i_3])))))));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_18 [i_0 + 1] [i_1] [i_2] [i_2] [i_3] [i_4] = 2397009490188709243;
                            var_20 = (+((1 ? -9134703214074753868 : (((arr_2 [i_1 - 1] [i_2]) ? 3013117232 : 1500422931924429840)))));
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_21 = (arr_1 [i_1]);
                            var_22 = (((arr_14 [i_0] [i_0] [i_2] [i_3] [i_2] [i_5]) >= (((((arr_19 [i_0 + 1] [i_1] [i_2] [i_3] [i_5]) + 2147483647)) << (var_0 - 50)))));
                            var_23 = (((((~((var_2 ? var_4 : var_8))))) ? (((arr_0 [i_3]) ? (((arr_1 [i_0]) ? (arr_3 [11] [i_1 + 1] [i_5]) : 14053)) : (((min(var_2, var_9)))))) : ((((arr_4 [i_0 - 1] [i_2] [i_5]) * var_9)))));
                        }
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            var_24 = (min(var_24, ((((+((var_6 ? (arr_2 [i_2] [i_3]) : (arr_9 [i_1] [i_2] [i_2])))))))));
                            var_25 = ((~((var_13 ? (((var_9 ? (arr_9 [i_0] [i_2] [i_6 - 1]) : var_11))) : (arr_20 [18] [i_1] [i_1 - 1] [i_2] [i_2] [i_3] [i_6 - 1])))));
                            var_26 = var_4;
                            arr_23 [i_0] [i_1 - 1] [i_2] [i_6] [i_6 - 1] = (min(((var_3 ? var_8 : ((~(arr_1 [i_2]))))), 53));
                        }
                    }
                }
            }
        }
    }
    var_27 = (((min((0 * var_13), ((min(11866, 106)))))) ? var_5 : (((var_8 ? (var_9 ^ var_9) : var_13))));
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 18;i_9 += 1)
            {
                {
                    var_28 = ((arr_2 [i_8 - 1] [i_9 + 2]) ? -2393406256 : ((1500422931924429844 >> (11223744143629166298 - 11223744143629166242))));
                    arr_33 [i_7] [i_7] [i_7] [i_9] = (min(((+((var_9 ? (arr_32 [i_7] [i_8] [i_9]) : (arr_30 [i_7] [i_8] [i_9 - 1]))))), ((((arr_3 [i_8 - 1] [i_8 + 1] [i_9 + 1]) != (arr_3 [i_8 + 2] [i_8 + 1] [i_9 - 1]))))));
                }
            }
        }
    }
    #pragma endscop
}
