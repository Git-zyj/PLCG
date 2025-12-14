/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_14 -= 100;
                    var_15 *= 12;
                }
            }
        }
        var_16 -= ((~(max(var_1, (var_1 > 158)))));
        var_17 &= ((993 ? (((~(arr_2 [i_0])))) : -var_3));
        var_18 ^= 63488;
    }

    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_19 = (+(min(((((arr_11 [i_3]) || var_11))), -var_2)));
        var_20 = max((arr_12 [i_3]), var_8);
        var_21 *= (arr_13 [i_3]);
        arr_14 [i_3] = (((arr_13 [i_3]) * 2044));
    }

    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        var_22 = (max(var_22, (((((((arr_4 [i_4] [i_4] [i_4]) > 19126))) % (((((min((arr_4 [15] [i_4] [i_4]), 46411))) && (((1317671557 ? 51225 : 27349)))))))))));
        var_23 = (((50660 / 9223372036854775798) >= var_6));
        var_24 -= (((24298 << (19124 - 19123))) + (~247));
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        var_25 = (min(var_25, ((max(((~(arr_18 [i_5]))), ((min(var_13, 1))))))));

        for (int i_6 = 2; i_6 < 22;i_6 += 1)
        {
            var_26 = ((((((((var_2 ? var_10 : 1813211878)) >= (1 | 57344))))) - ((-(arr_19 [21])))));
            var_27 = ((~(min((arr_17 [i_6 - 1]), 0))));
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        var_28 -= (((var_10 ? var_10 : var_4)));
        arr_25 [i_7] = ((~(arr_21 [i_7])));
    }
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        var_29 = (min(var_29, ((((((var_6 - -27) >= (((var_6 + 2147483647) << (var_7 - 58))))) ? ((((var_2 && 1) < (arr_7 [i_8] [i_8] [i_8] [i_8])))) : ((~(arr_6 [i_8]))))))));
        var_30 = ((((((arr_26 [7]) || (arr_7 [i_8] [i_8] [i_8] [i_8])))) < (arr_23 [i_8])));
        var_31 = (((((arr_5 [i_8]) - var_3)) <= (!1)));
    }
    #pragma endscop
}
