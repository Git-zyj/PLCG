/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;
    var_13 = -29881;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_14 += (arr_0 [i_0]);
            var_15 = (max(var_15, (((((min((~-13), 4851350665214132043))) ? ((((((arr_4 [i_0]) ? (arr_3 [i_0]) : var_4))) ? (arr_4 [i_1]) : (arr_4 [i_0]))) : (((-4851350665214132044 ? -2 : 4191))))))));
            arr_5 [4] [4] [i_1] = (max((((~((~(arr_0 [i_0])))))), (arr_4 [i_0])));
            arr_6 [i_1] [0] &= (((4294967295 ^ 61345) && 4851350665214132040));
        }
        var_16 = (((min((((arr_0 [i_0]) ? (arr_4 [i_0]) : var_1)), ((var_3 ? (arr_4 [i_0]) : 4851350665214132068)))) > (((arr_4 [i_0]) & 0))));
    }
    for (int i_2 = 4; i_2 < 15;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    {
                        arr_19 [i_2] [i_2] [i_2] [i_5] [i_2] = (((max(((!(arr_15 [i_3] [i_4] [i_5])), (!3787773316117470376))))));
                        arr_20 [i_2] [i_2] [i_3] [1] [i_5] [i_2] = (((((-4851350665214132057 ^ (-9223372036854775807 - 1))) & (arr_9 [i_2] [i_3]))));
                    }
                }
            }
        }
        arr_21 [i_2] = var_4;
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 10;i_8 += 1)
            {
                {
                    arr_31 [i_7] &= (((((var_7 & (arr_0 [i_8 + 1])))) ? (((~(((8192 && (arr_25 [i_6]))))))) : (min((arr_18 [0] [i_8 - 1] [i_8] [i_8] [i_8 - 1] [i_8 + 1]), (arr_29 [i_7] [i_7])))));
                    var_17 = (~-4611686018427387904);
                }
            }
        }
    }
    var_18 &= var_7;
    #pragma endscop
}
