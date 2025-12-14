/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= var_6;

    /* vectorizable */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        var_18 = (((((arr_1 [i_0] [i_0]) ? 5743 : (arr_0 [i_0]))) >> ((((1998599800 ? 4294967295 : (arr_1 [i_0] [i_0]))) - 4294967291))));
        arr_2 [i_0] = var_4;
        arr_3 [i_0] = (((((var_2 ? 2296367496 : var_5))) ? (arr_1 [i_0] [i_0]) : (((arr_1 [i_0 - 2] [i_0]) | (arr_1 [i_0] [1])))));
    }
    for (int i_1 = 2; i_1 < 23;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_19 *= (((var_14 - var_0) ? -43 : 43));
                            var_20 = (max(var_20, ((((var_16 ? (arr_16 [i_1] [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 1]) : (arr_16 [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 1])))))));
                        }
                    }
                }
            }
            arr_17 [20] = min((arr_7 [i_1 - 2] [i_1 - 2]), (((((((arr_8 [i_1] [i_1] [i_2]) == var_6))) <= (arr_14 [i_1] [i_1 - 1] [i_1] [i_1 - 1])))));
            var_21 = (var_6 % 5743);
            var_22 = 219;
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    {
                        var_23 = (((((1 >> (var_2 - 152)))) % (((arr_10 [i_1 - 2]) >> (((arr_10 [i_1 + 1]) - 13355240513394979068))))));
                        arr_25 [i_1] [i_1] [i_6] [i_7] [i_8] &= (((min((-28856 ^ var_9), (arr_11 [i_1] [i_6] [i_8])))) ? (((((86 ? 28856 : 1))) ? var_1 : (((-(arr_8 [i_1 + 1] [i_6] [i_8])))))) : ((min((min(195780924, var_15)), var_15))));
                        var_24 = ((((((((arr_5 [i_6] [i_8]) / (arr_19 [i_8] [i_8] [i_7 - 1]))) << ((((-1622024806793196929 ? var_2 : var_13)) - 157))))) ? ((min((arr_5 [i_7 + 1] [i_7 - 2]), (arr_5 [i_7 + 1] [i_7 - 1])))) : (arr_8 [17] [10] [i_8])));
                        var_25 = ((((((!(arr_7 [i_7] [i_8]))))) & 5554814846693094878));
                    }
                }
            }
        }
        var_26 = (min(((min(-5743, var_16))), var_12));
        arr_26 [i_1] = (min((((5743 << (1622024806793196929 - 1622024806793196915)))), (((arr_9 [i_1] [i_1 + 1] [i_1] [i_1 - 2]) ^ (arr_4 [i_1 - 1])))));
        arr_27 [i_1] &= (min((((((min(var_15, 10759))) && 0))), -8533120777828370582));
    }
    /* vectorizable */
    for (int i_9 = 3; i_9 < 12;i_9 += 1)
    {
        var_27 += ((525240258 + (arr_21 [i_9] [i_9 - 2])));
        var_28 = ((((23759 ? 7947279944596272672 : 28856)) - (((-17490 ^ (arr_11 [i_9] [15] [i_9]))))));
        arr_30 [i_9] = ((((-608268905 * (arr_8 [i_9 + 3] [16] [i_9]))) / (arr_11 [19] [i_9 - 1] [2])));
    }
    /* vectorizable */
    for (int i_10 = 1; i_10 < 17;i_10 += 1)
    {
        var_29 = ((arr_19 [5] [5] [i_10 + 2]) || (arr_13 [i_10] [i_10] [i_10 - 1] [i_10 + 2]));
        var_30 = (((((~0) + 2147483647)) << (var_4 - 7880)));
    }
    #pragma endscop
}
