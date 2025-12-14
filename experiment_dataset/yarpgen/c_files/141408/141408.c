/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_1, (~var_14)));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((!((((arr_0 [i_0]) - (arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_17 ^= ((((min(65517, -2093967045))) + (min(((var_10 ? 1332033269382562454 : (arr_5 [i_2] [0] [i_2]))), (((-29 ? 2234994781 : (arr_6 [i_0] [i_0]))))))));
                    var_18 = (arr_7 [i_2]);
                    arr_10 [i_0] = ((~(((16 ? (arr_3 [i_0] [i_1 - 2] [4]) : -6996877184856806407)))));
                    arr_11 [i_1] [i_2] = (arr_5 [i_0] [i_0] [i_0]);
                }
            }
        }
    }
    var_19 = var_4;

    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_20 = (-1 >= 755296831);
        var_21 *= ((755296839 >= (((arr_0 [i_3]) ? -755296848 : 12))));
        var_22 = -26;
        var_23 ^= (((1 & 4294967269) - (arr_6 [i_3] [13])));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_18 [4] [i_4] = ((~((var_1 >> (arr_7 [i_4])))));
        arr_19 [i_4] = (((((65517 ? 0 : (arr_7 [i_4])))) ? -1840541239 : (arr_6 [i_4] [i_4])));
        arr_20 [i_4] |= (arr_0 [i_4]);
    }
    for (int i_5 = 3; i_5 < 24;i_5 += 1)
    {
        var_24 = (i_5 % 2 == 0) ? ((max(((((((arr_21 [i_5]) + 2147483647)) << (((((arr_21 [i_5]) + 1813070675)) - 11))))), (min(-10, 39))))) : ((max(((((((((arr_21 [i_5]) - 2147483647)) + 2147483647)) << (((((((arr_21 [i_5]) - 1813070675)) - 11)) - 51522554))))), (min(-10, 39)))));
        var_25 |= ((~(((var_2 > 1) / (arr_23 [i_5 - 2])))));
        arr_24 [6] |= ((var_5 ? 755296833 : 6786));
        var_26 ^= 13540221670661212719;
    }
    #pragma endscop
}
