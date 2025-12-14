/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_8, (!var_5)));

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_13 = ((+((8186 ? (arr_2 [i_0 + 1]) : (((3 ? var_1 : var_5)))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_14 = (max(var_14, (((32 + ((max(1, var_9))))))));
                        arr_11 [i_0 - 2] [i_0 - 2] [i_2] [i_3] = ((29 + (arr_10 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_0 + 1] [i_0 - 1] [i_0 - 2])));
                        var_15 = ((((min(224, (min((arr_3 [3]), var_6))))) >= (((((15 ? var_10 : 4958431563460364618))) ? 8 : (arr_5 [i_0] [i_0])))));
                        var_16 = (+-18446744073709551608);
                    }
                }
            }
        }
        var_17 = ((-(var_5 / -1)));
        var_18 = ((((((arr_7 [i_0] [i_0 - 2]) ? 8 : (arr_7 [i_0] [i_0])))) ? (((arr_1 [i_0]) ? var_8 : (arr_10 [i_0 - 1] [i_0 - 1] [i_0] [i_0 + 1] [i_0] [i_0 - 2]))) : var_2));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                {
                    var_19 = ((((((max(26, var_6))) ? var_3 : 534823108961048340))) ? var_8 : ((~(min(18446744073709551615, 1538764709)))));
                    var_20 = (((((var_4 >= (arr_7 [i_5] [i_4]))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 15;i_8 += 1)
            {
                {
                    var_21 = ((27 + 99) ? (((192 ? 15489 : (arr_18 [i_6])))) : (((arr_24 [i_6] [1] [1] [i_8]) ? 15 : 15206978794801994367)));
                    var_22 = ((15 ? var_4 : (arr_23 [i_8 + 1] [i_8 + 1] [i_8] [i_8 + 1])));
                    var_23 = (((((1042071974 ? -14 : var_6))) >= var_7));
                    arr_25 [i_6] [i_7] [i_8] = (((arr_23 [i_8] [i_8 + 1] [i_8 - 1] [i_8 - 1]) ? (arr_23 [i_8 - 1] [i_8 + 1] [i_8 - 1] [i_8 + 1]) : -865251453));
                }
            }
        }
        var_24 = (((16461 == (arr_20 [i_6] [i_6]))) ? (var_3 != var_6) : ((4294967291 ? var_1 : var_2)));
        /* LoopNest 3 */
        for (int i_9 = 3; i_9 < 15;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 14;i_11 += 1)
                {
                    {
                        var_25 = ((-(arr_32 [i_6] [i_10])));
                        var_26 ^= ((var_1 / ((8249005775029603386 ? var_0 : var_0))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
