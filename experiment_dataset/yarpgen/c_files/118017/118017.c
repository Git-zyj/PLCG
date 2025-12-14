/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [0] [0] [i_0] = ((((max((((0 ? 1 : 178))), (((arr_3 [4]) ? (arr_3 [i_1]) : (arr_1 [i_0])))))) ? ((((arr_0 [i_0 + 1] [i_1 + 2]) * (arr_2 [i_0 + 1] [i_0 - 1])))) : (max(((((arr_0 [8] [4]) / (arr_2 [8] [i_1])))), ((var_0 ? (arr_1 [i_0]) : (arr_1 [i_0])))))));
                arr_5 [i_0] = (((((~1) + 2147483647)) >> (((max(((((arr_1 [i_0]) ? (arr_3 [i_0]) : (arr_2 [3] [8])))), ((var_5 ? var_3 : var_5)))) - 6835924657854145010))));
                var_11 = ((((((arr_3 [8]) & (arr_0 [10] [1])))) ? ((max((arr_3 [i_0 + 1]), (arr_3 [i_0 - 1])))) : (((((arr_2 [i_0] [i_0]) | (arr_0 [4] [4]))) - (((15 != (arr_1 [i_0]))))))));
            }
        }
    }
    var_12 *= (min((max(var_5, ((4611650834055299072 ? 1 : 4494803534348288)))), (((((var_6 << (var_9 - 51880)))) / (var_7 / var_7)))));

    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        var_13 ^= (((((((-127 - 1) ? 11862 : 32443)))) * ((((8578861447037025671 ? (arr_2 [i_2] [i_2]) : (arr_7 [6]))) / (((arr_2 [22] [i_2]) ? var_5 : (arr_6 [i_2])))))));
        arr_9 [i_2] = var_9;
        var_14 = (((arr_0 [i_2 - 1] [i_2 - 1]) * (max((min((arr_1 [i_2]), -1678873318131880287)), ((-19577 ? (arr_1 [i_2]) : (arr_0 [21] [12])))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {
                    var_15 = (((((var_6 ? var_10 : -32748))) << (((((arr_0 [i_3] [i_3]) ^ ((-1795221670 ? (arr_11 [12] [i_3] [0]) : var_9)))) - 7890))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_20 [i_2] [6] [6] [3] = max((((((var_5 ? (arr_16 [1] [i_3] [i_2] [5] [i_5] [13]) : (arr_14 [i_2] [13] [i_4])))) ? -var_8 : var_0)), ((((arr_11 [i_2 - 1] [i_2 - 1] [0]) ? (arr_11 [i_2 - 1] [i_2 - 1] [4]) : (arr_6 [i_2 - 1])))));
                                arr_21 [i_2] [11] [i_2] [13] [i_2] [12] [i_2] = (((((!(arr_2 [i_2] [i_2 - 1])))) % (arr_2 [i_2] [i_2 - 1])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            {
                                var_16 = ((((2314082727 ^ -74) ? ((min((arr_14 [i_2] [i_7] [i_7]), (arr_3 [i_2])))) : (arr_0 [i_2 - 1] [i_2 - 1]))));
                                var_17 = var_10;
                            }
                        }
                    }
                }
            }
        }
        var_18 = (((((11629 ? -10266 : 18245750117893644093))) / (-1 * 6781)));
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        var_19 *= (arr_26 [3] [i_9]);
        var_20 = (((arr_26 [i_9] [17]) ? (0 | 65534) : ((5296112216651848044 ? 5 : 0))));
    }
    #pragma endscop
}
