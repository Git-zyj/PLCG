/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= var_1;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_19 |= ((var_13 ? ((((((5945813548671093178 ? 838299925 : 838299929))) ? var_2 : (3456667367 / 838299910)))) : ((18446744073709551615 ? (((838299925 ? 157 : var_0))) : var_11))));
        var_20 ^= ((((838299923 != (arr_1 [i_0] [i_0]))) ? (98 + 0) : 0));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_21 = (min(var_21, ((max(33, 838299933)))));
                    arr_7 [i_0] |= (max((((((var_6 ? (arr_6 [i_1] [i_2]) : 123))) ? (min(18446744073709551599, 1)) : (arr_3 [i_2] [i_1 - 1]))), ((max(-70224719629929196, -51)))));
                }
            }
        }
        var_22 ^= (max((-10711 || 98), 1));
        var_23 = (min(var_23, (((((max(1, 3456667366))) ? (max(157, 3587704859)) : (max(((1048575 ? 3456667362 : 838299928)), 4294967295)))))));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 20;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    var_24 = (max(var_24, (((1 ? (var_3 || -1) : (arr_11 [i_4 - 1] [i_3 + 3]))))));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 22;i_7 += 1)
                        {
                            {
                                var_25 += (((arr_13 [18]) ? var_15 : (arr_12 [i_4] [i_4] [0])));
                                arr_21 [i_3] [i_4] [i_4] [i_6] [i_7] = ((var_14 ? (arr_15 [i_6 - 1] [i_4] [i_3 + 3]) : 411296709));
                            }
                        }
                    }
                    var_26 = ((137 ? ((((-104 + 2147483647) << var_2))) : ((9185725810212460312 ? 838299916 : var_4))));
                }
            }
        }
        var_27 -= (~0);
    }
    for (int i_8 = 3; i_8 < 9;i_8 += 1)
    {
        var_28 -= (max(1, (max((arr_0 [i_8 - 1]), 32444))));
        arr_25 [i_8] = (max((min((arr_10 [i_8 - 2]), 14698387333074286156)), ((max((arr_2 [i_8 + 1]), (arr_10 [i_8 - 2]))))));
        arr_26 [i_8] |= (max((min(((0 ? 65535 : (arr_22 [i_8] [i_8]))), (max((arr_5 [i_8] [i_8]), 15)))), ((1 ? (arr_12 [4] [i_8] [4]) : 11269))));
    }
    for (int i_9 = 1; i_9 < 21;i_9 += 1)
    {
        arr_30 [i_9] = min((1 || 1), ((((max(14698387333074286151, (arr_27 [i_9])))) ? ((47 ? 1 : -1)) : ((max(-1, (arr_27 [i_9 + 1])))))));
        arr_31 [i_9] [i_9] = (max(((((((11263 ? -26 : 1))) ? 2396117653 : -6))), (((arr_28 [i_9] [i_9 + 2]) | 16256854622914291006))));
        arr_32 [i_9] [i_9] &= (min(((-48 % ((0 ? var_3 : (arr_27 [i_9]))))), var_3));
    }
    #pragma endscop
}
