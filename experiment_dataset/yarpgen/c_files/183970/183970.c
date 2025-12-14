/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_13 >> (0 * -2735844142617400723)));
    var_20 = (var_7 - var_5);

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 16;i_3 += 1)
                {
                    {
                        var_21 = ((((((-29563 && (((23533 ? 7603750810156223504 : var_12))))))) * (((0 ? 16502422488995568252 : var_8)))));
                        var_22 = ((-(arr_5 [i_2] [i_3] [i_3 - 4])));
                        arr_10 [i_3] [i_3 + 1] [i_2] [i_3] [i_3] |= 1209094619;
                    }
                }
            }
        }
        var_23 = (((((((-1209094619 ? 1 : 1209094630)) + ((3827088293 ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : (arr_4 [i_0] [i_0])))))) || ((((((~(arr_4 [i_0] [i_0])))) ? ((-(arr_6 [i_0] [i_0] [i_0]))) : (((16480302847262085650 && (arr_0 [i_0])))))))));
        var_24 *= ((((max((arr_8 [i_0] [i_0] [i_0] [i_0]), ((var_11 ? 1 : var_8))))) ? (((1 - var_4) ? ((var_10 ? var_8 : 2760150520039794486)) : 0)) : (((arr_1 [i_0]) | (var_3 ^ var_5)))));
    }
    for (int i_4 = 2; i_4 < 15;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                {
                    arr_19 [i_4] = ((!(arr_9 [i_4] [i_5] [i_4] [i_4])));
                    var_25 *= ((((min(var_2, ((var_0 ? (arr_17 [1] [i_5]) : (arr_0 [i_4])))))) ? var_5 : (((var_12 || (!27204))))));
                }
            }
        }
        arr_20 [i_4] [i_4] = ((var_4 | (max((arr_6 [i_4] [i_4] [i_4]), ((~(arr_11 [i_4])))))));
        var_26 = ((-((var_6 ? (arr_14 [i_4] [i_4] [i_4]) : (arr_14 [i_4 - 2] [i_4] [i_4])))));
    }
    var_27 ^= var_14;
    var_28 |= ((!(((max(var_17, 6654042257200277097))))));
    #pragma endscop
}
