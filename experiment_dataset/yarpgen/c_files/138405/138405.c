/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 7;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {
                        var_16 = (max(var_16, var_15));
                        var_17 ^= (max(((-(max(1, 252250123)))), var_0));
                        var_18 = (min(var_18, (-9223372036854775807 - 1)));
                        var_19 = (!142);
                        var_20 = (min(var_20, ((((max(0, (arr_6 [i_2 + 2] [i_3 - 1] [i_1 - 3]))))))));
                    }
                }
            }
        }
        var_21 = var_1;
        arr_10 [i_0] [i_0] = (max(((max(var_0, var_0))), (max((arr_4 [i_0] [i_0]), (arr_6 [i_0] [i_0] [i_0])))));
        var_22 = (!((min((((var_5 <= (arr_7 [i_0] [i_0] [i_0] [i_0])))), (arr_9 [i_0] [i_0])))));
    }
    for (int i_4 = 2; i_4 < 18;i_4 += 1) /* same iter space */
    {
        arr_14 [i_4] [i_4] = ((var_6 ^ (!0)));
        arr_15 [i_4 - 2] = ((-(((((arr_13 [i_4 + 1] [i_4 - 1]) >> (-116 + 117))) >> ((max((arr_12 [i_4 + 1]), -105)))))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    {
                        arr_26 [i_4] [i_5] [i_6] [i_4] [i_7] [i_6] = 56;
                        var_23 -= ((((((arr_22 [i_4]) > -var_13)))));
                        var_24 = arr_24 [i_4 - 1] [i_5] [i_5] [i_7];
                    }
                }
            }
        }
    }
    for (int i_8 = 2; i_8 < 18;i_8 += 1) /* same iter space */
    {
        var_25 = (max(var_25, (arr_23 [i_8 - 1] [i_8] [i_8 - 1] [i_8])));
        arr_29 [i_8] = ((((min(((94 <= (arr_21 [i_8]))), (42 >= 1)))) * ((((~(arr_23 [i_8 + 1] [i_8 + 1] [i_8 - 2] [i_8]))) | (arr_24 [i_8] [i_8] [i_8] [i_8])))));
        var_26 = (min(var_26, (((var_13 == ((((var_12 + (arr_11 [i_8] [i_8]))) / var_12)))))));
        /* LoopNest 3 */
        for (int i_9 = 3; i_9 < 15;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    {
                        var_27 = (arr_34 [i_8]);
                        var_28 = 1;
                    }
                }
            }
        }
        arr_39 [i_8] = (min((((((!(arr_36 [i_8] [i_8])))) | (0 || 3444130055))), (((((max(1, (arr_34 [i_8])))) >= (max((arr_21 [i_8]), 8257536)))))));
    }
    for (int i_12 = 2; i_12 < 18;i_12 += 1) /* same iter space */
    {
        var_29 ^= 1;
        var_30 = (arr_42 [14] [i_12 - 2]);
    }
    var_31 = var_14;
    #pragma endscop
}
