/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_18 = (i_1 % 2 == zero) ? ((((max((arr_0 [i_1] [i_2]), (min((arr_1 [i_0] [i_2]), var_11)))) / ((((2963785546 ? (arr_4 [i_0] [i_0]) : 3138626861)) << (((arr_3 [i_1]) - 4107720929))))))) : ((((max((arr_0 [i_1] [i_2]), (min((arr_1 [i_0] [i_2]), var_11)))) / ((((2963785546 ? (arr_4 [i_0] [i_0]) : 3138626861)) << (((((arr_3 [i_1]) - 4107720929)) - 3680209646)))))));
                    arr_7 [i_0] [i_1] [i_1] = ((-((-(arr_2 [i_0] [i_1])))));
                    var_19 = (min(var_19, (arr_4 [i_1] [i_0])));
                    arr_8 [i_1] [i_1] [i_2] [i_1] |= ((~(((arr_1 [i_2] [i_1]) ? -192267418 : 127))));
                    var_20 = ((~(~-192267418)));
                }
            }
        }
        var_21 = ((((((arr_4 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))) ? ((max(0, -1447163586))) : ((((349085980 ? 0 : 4294967290))))));
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
    {
        var_22 = max((arr_12 [9]), ((var_16 ? (arr_9 [i_3]) : 4294967281)));
        var_23 = (min((((arr_10 [i_3] [i_3]) ? (arr_12 [i_3]) : (arr_12 [i_3]))), ((((min(var_9, 3048119767))) ? (2147483647 && 64) : ((((arr_9 [i_3]) || 1447163586)))))));
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
    {
        var_24 += ((+(((arr_12 [i_4]) ? var_15 : (arr_13 [i_4])))));
        var_25 += (((((1 ? (((~(arr_11 [i_4])))) : 2814030974))) ? var_0 : (((arr_12 [20]) ? (arr_14 [18]) : (var_7 < 16376)))));

        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            var_26 = ((((((arr_9 [i_4]) ? var_12 : 49178))) ? (((arr_11 [i_4]) ? 3030935927 : (arr_9 [i_5]))) : (((~(arr_9 [i_4]))))));
            arr_19 [i_5] [i_5] = ((var_11 ? (((arr_14 [i_4]) ? (arr_18 [i_5]) : 1577049511)) : ((((((min(1, (arr_9 [22])))) && (1524057989 || var_15)))))));
        }
        var_27 = var_16;
    }
    var_28 += var_3;
    #pragma endscop
}
