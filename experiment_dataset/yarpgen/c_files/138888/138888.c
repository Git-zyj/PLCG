/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 18;i_4 += 1)
                            {
                                var_18 += (65535 | -91);
                                var_19 ^= 102;
                                var_20 ^= -99;
                            }
                            for (int i_5 = 0; i_5 < 18;i_5 += 1)
                            {
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_13 [i_0]);
                                arr_18 [i_0] = (((((2897916579 ? var_0 : var_3))) % (min(var_5, var_15))));
                                arr_19 [i_0] [15] [15] [15] [i_3 - 2] [i_0] [i_5] = 2897916594;
                            }
                            var_21 += (((var_16 ? (~2858748198) : -6359318923149476143)));
                            var_22 = (arr_6 [i_0] [i_0] [2]);
                        }
                    }
                }
                var_23 = (-13596 / -11197743331027240755);
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 16;i_7 += 1)
                    {
                        {
                            var_24 = (max(((13577 ? (((2262157216 >> (8216780468554105996 - 8216780468554105986)))) : ((-99 ? (arr_15 [i_0] [i_0] [i_6] [i_6]) : 6917529027641081856)))), (!var_17)));
                            arr_24 [i_0] [i_1 - 2] [i_1 - 1] [i_1 - 2] = (max(4294967295, -90));
                            var_25 = (min(var_25, -4294967295));
                        }
                    }
                }
            }
        }
    }
    var_26 = var_12;

    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        arr_29 [i_8] = (max(((var_2 & (arr_20 [i_8] [i_8]))), ((min(28128, 13577)))));
        arr_30 [i_8] = (min(var_14, 2498393855599918791));
        arr_31 [i_8] = (((var_1 && -13578) || (-23514 || 121)));
    }
    for (int i_9 = 1; i_9 < 10;i_9 += 1)
    {
        var_27 = (max(var_27, (((!(((arr_4 [0] [i_9]) || var_14)))))));

        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {
            arr_39 [i_9] [i_9] [i_9] = ((23514 / (((var_9 ? var_1 : var_8)))));
            var_28 = ((((!((((arr_9 [i_9 + 2] [i_9] [i_9] [i_9] [i_10] [i_10]) ? 135 : var_3))))) ? (1 < var_12) : (((var_12 || (((3111791444 ? 1 : 65511))))))));
            var_29 = (max(var_29, (((((((14 ? (arr_7 [i_9 + 2] [i_9 + 2]) : var_12)) > (~-7342349200044917117))) ? (var_0 - var_3) : (arr_10 [i_9] [i_9 + 1] [i_10] [i_9 + 1]))))));
        }
    }
    var_30 ^= var_4;
    var_31 = (min((((~(5389143415546714318 != 1)))), var_2));
    #pragma endscop
}
