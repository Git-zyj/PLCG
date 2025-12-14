/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = 14336;
        arr_3 [i_0] = var_10;
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 17;i_4 += 1)
                {
                    {
                        arr_15 [i_1] [i_1] = ((((arr_11 [i_3 + 2] [i_4 - 1] [i_4 + 1] [i_1]) / 290191741)));
                        arr_16 [i_1] [i_3] [i_1] [i_1] = (i_1 % 2 == zero) ? (((((((((3748 ? (arr_8 [i_1] [7] [i_1]) : 290191745))) && ((((arr_7 [i_1]) << var_9)))))) * ((((min(-19522, 183))) & 43339))))) : (((((((((3748 ? (arr_8 [i_1] [7] [i_1]) : 290191745))) && ((((((arr_7 [i_1]) + 2147483647)) << (var_9 - 1))))))) * ((((min(-19522, 183))) & 43339)))));
                        arr_17 [i_1] = 53;
                        var_13 ^= ((((min(43317, (arr_9 [i_4 - 1] [i_3 + 3])))) ? (((var_7 == (arr_9 [i_4 - 1] [i_3 - 1])))) : (((!(arr_9 [i_4 + 1] [i_3 + 3]))))));
                    }
                }
            }
        }
        var_14 = (((var_2 ^ var_2) ? ((((arr_4 [i_1]) == ((min(var_0, var_3)))))) : (min(((-(arr_5 [i_1]))), (arr_8 [i_1] [i_1] [i_1])))));
    }
    for (int i_5 = 2; i_5 < 12;i_5 += 1)
    {
        var_15 = (var_3 & 3744);
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    {
                        var_16 = 11392;
                        arr_28 [i_5] = arr_25 [i_5] [i_5] [i_5] [i_5];
                        arr_29 [i_5] [5] [i_5] = (arr_23 [i_5] [i_5] [i_7]);
                        arr_30 [i_5] [i_5] [i_5] [i_5] [i_5] = (min((((var_12 & ((~(arr_11 [i_5] [17] [10] [i_5])))))), ((((var_10 < (arr_20 [i_5] [i_5] [9]))) ? (((min(var_0, 55345)))) : -157501823072335229))));
                    }
                }
            }
        }
    }
    var_17 -= (max(((min(var_4, (var_2 <= var_12)))), (56 - 3336)));
    #pragma endscop
}
