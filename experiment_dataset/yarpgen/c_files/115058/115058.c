/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_10;
    var_17 = var_5;
    var_18 = var_3;

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_19 = (min(var_19, ((min(var_5, (arr_0 [i_0]))))));
        arr_2 [19] = ((min((min((arr_1 [i_0 - 1] [i_0]), -1830671800)), ((~(arr_1 [i_0] [3]))))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_20 = (max(var_20, (((((((-1852176284 ? (arr_3 [i_1] [9]) : 4294967271)) - (((var_2 ? (arr_4 [i_1]) : 1830671797))))) >= (~var_11))))));
        arr_5 [i_1] = (arr_3 [i_1] [i_1]);
        var_21 = (min(var_21, 54));
        var_22 ^= 59;
    }
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        arr_8 [i_2] [i_2] |= (max(1852176279, var_6));
        arr_9 [i_2] = -1;

        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            arr_13 [0] = var_5;
            arr_14 [i_2] = (((((max(-1830671800, 39))) ? (arr_10 [i_2 - 1] [i_2 + 2] [i_2 + 1]) : -5)));

            /* vectorizable */
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                arr_18 [i_2 + 2] [i_2 - 1] [i_2 - 1] = ((((39 > (arr_7 [i_2 + 1])))));
                arr_19 [i_4] [i_4] [i_4] = 2147483637;
                var_23 = ((((((arr_3 [15] [i_2]) + 4294967244))) ? ((25207 ? 3000900155 : (arr_6 [i_2]))) : 82));

                for (int i_5 = 2; i_5 < 9;i_5 += 1)
                {
                    var_24 = (max(var_24, (arr_16 [i_2 + 1])));
                    arr_23 [i_2] [i_3] [3] [i_5] = 2147483637;
                    arr_24 [i_2 - 1] [i_3] [i_4] [i_5 + 2] = (((arr_17 [i_2 + 1]) ? (arr_11 [i_5 + 2] [i_5 + 1] [i_5 - 1]) : (arr_11 [i_5 - 1] [i_5] [i_5 - 1])));
                    arr_25 [1] [i_3] [i_3] [i_4] [i_4] [i_5 + 1] = (arr_0 [i_2 - 1]);
                }
            }
            /* vectorizable */
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                arr_28 [1] [i_3] [i_3] [i_3] = 1;
                arr_29 [i_2] [i_2 + 2] [i_2 - 1] = arr_22 [i_6] [i_6] [3] [i_3] [i_2];
                arr_30 [i_2 - 1] [i_2] [5] [8] = (54 >= var_11);
                var_25 = (max(var_25, var_4));
            }
            for (int i_7 = 2; i_7 < 8;i_7 += 1)
            {
                arr_34 [i_2 + 1] = (((-(arr_21 [i_2] [i_7 + 1]))));
                arr_35 [i_2] [i_2] = (arr_22 [i_7 + 1] [i_3] [i_2] [i_2] [i_2 - 1]);
                arr_36 [6] = ((~(max((arr_31 [i_2 - 1]), 4294967242))));
                var_26 = (min(var_26, (((((((arr_32 [i_2 + 1] [i_2 + 1] [i_2 - 1]) + (((arr_22 [i_2] [i_2] [i_2] [i_3] [i_7]) ? -11 : 1299828005))))) != ((~(max((arr_17 [1]), var_3)))))))));
            }
            arr_37 [i_2 + 1] [i_3] [i_2] = (max(((((11758 ? 7 : -157756697)))), (min((~7244), (((157756693 >= (arr_16 [i_2]))))))));
        }
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            arr_40 [i_2] [6] = (arr_17 [i_2 + 1]);
            arr_41 [i_8] [1] = (arr_3 [5] [i_2 + 2]);
            arr_42 [i_8] [i_8] [i_8] &= (arr_26 [7] [1] [i_8] [i_8]);
            arr_43 [i_2] [0] = 2128498242227457602;
            arr_44 [2] [i_8] [i_8] = ((~(arr_6 [i_2 - 1])));
        }
        for (int i_9 = 3; i_9 < 8;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    {
                        arr_54 [i_9] [i_9] [i_9] = (min(-1852176273, (min((min(1575185311, 14012938315755936738)), 118))));
                        arr_55 [i_2 - 1] [i_9] [i_10] = (127 ^ -6428);
                    }
                }
            }
            arr_56 [i_2] [i_9] [i_9 + 1] = (-7345015813574883929 + -1852176283);
        }
    }
    #pragma endscop
}
