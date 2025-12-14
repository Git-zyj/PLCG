/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108414
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
                var_19 |= (min(2008530784, -53));

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    arr_7 [i_0] [i_0] [i_1] [i_0] = (i_1 % 2 == 0) ? (((((-(arr_5 [i_1] [i_1])))) ? (((((arr_5 [i_1] [i_1]) + 9223372036854775807)) >> (((arr_5 [i_1] [i_2]) + 4560271170990545210)))) : ((-(arr_5 [i_1] [i_1]))))) : (((((-(arr_5 [i_1] [i_1])))) ? (((((arr_5 [i_1] [i_1]) + 9223372036854775807)) >> (((((arr_5 [i_1] [i_2]) + 4560271170990545210)) - 1011620580181735617)))) : ((-(arr_5 [i_1] [i_1])))));
                    arr_8 [5] [i_1] [i_1] [i_0] = (((((~11987) + 2147483647)) >> (((min(15, (arr_1 [i_1]))) + 627150468))));
                }
                for (int i_3 = 2; i_3 < 19;i_3 += 1)
                {
                    var_20 = (min(var_20, (((-(min(((min(var_4, (arr_5 [i_0] [i_1])))), (min(2008530792, 7768429553608595160)))))))));
                    var_21 = (((((14 ? (arr_9 [i_3 + 2] [i_3 - 2]) : (arr_9 [i_3 - 1] [i_3 + 1])))) != (((min(67108863, 76)) % (arr_2 [i_3])))));
                    var_22 = 49893;
                    arr_11 [i_0] [15] [i_1] = ((arr_10 [i_0] [i_1]) ? (1 != var_12) : (((arr_10 [i_3] [i_1]) ? (arr_10 [i_0] [i_1]) : 6315)));
                }
                for (int i_4 = 1; i_4 < 19;i_4 += 1)
                {
                    var_23 = (min((((arr_12 [i_4 + 2] [i_4 + 2] [i_4 + 1]) ? 17305 : 12994821048649370160)), (((!(arr_13 [i_4] [i_4 + 1] [i_4] [i_4]))))));
                    arr_14 [i_1] = ((-(~-61)));
                    arr_15 [i_1] [i_1] [i_1] = (min(-6026928933381252388, ((((((~(arr_1 [i_1])))) ? ((-74 ? -11982 : var_0)) : -var_4)))));
                }
                arr_16 [i_0] [i_0] &= 6515;
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 2; i_5 < 12;i_5 += 1)
    {
        arr_19 [i_5] = ((1540068367 ? 3082220152 : 3474385285));
        var_24 = (min(var_24, 9390));
        var_25 = ((var_0 ? (arr_9 [i_5 + 1] [9]) : ((var_6 ? -77 : 3318060304))));
    }
    var_26 ^= (min(var_12, var_3));
    #pragma endscop
}
