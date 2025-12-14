/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        arr_10 [i_2] [8] [i_2] [i_3 + 4] = (((-(arr_2 [i_0] [8]))));
                        var_13 = 54598;
                        arr_11 [17] [17] [i_3 + 1] [18] = ((((((arr_8 [i_0] [i_1] [i_2] [i_3 + 3]) ? (arr_5 [i_0] [i_1] [i_2] [i_3]) : var_1))) ? ((max((arr_5 [i_0] [i_1] [i_0] [i_3]), 1))) : (!var_4)));
                        var_14 = -26786;
                    }
                    for (int i_4 = 3; i_4 < 19;i_4 += 1)
                    {
                        var_15 -= (+-102979943928565566);
                        var_16 = ((((arr_3 [i_1] [i_2] [i_4 - 1]) ? ((1622935609 ? 7078856701197314128 : 1895440332)) : var_5)) % (arr_9 [21]));
                        var_17 -= ((((((~(arr_8 [i_0] [i_1] [i_2] [i_4 - 3]))) ? ((~(arr_13 [i_0] [i_1] [i_2]))) : ((min(var_8, var_12)))))));
                        var_18 = ((26775 + -1) ? (arr_5 [i_1] [i_1] [i_2] [i_4 - 3]) : ((((((arr_14 [i_0] [i_4] [i_2]) ? (arr_9 [i_0]) : (arr_1 [i_4])))) ? ((max((arr_3 [16] [i_1] [i_1]), (arr_4 [7])))) : (~var_2))));
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        var_19 -= ((arr_1 [i_5 - 1]) ? 5773000050090334067 : (arr_7 [i_0] [i_1] [i_2] [i_5 - 1]));
                        arr_17 [i_0] [i_2] = ((~(arr_8 [i_0] [i_1] [i_2] [i_2])));
                        arr_18 [i_0] [i_0] [i_0] [i_2] [i_0] = 8889926566302332240;
                        arr_19 [2] [i_1] [17] [i_5 - 1] = ((7326888239691862143 ? 93 : 7479));
                    }
                    for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
                    {
                        var_20 -= (((arr_9 [i_6]) == ((((min((arr_15 [i_0] [i_1] [i_2]), var_5))) ? (arr_15 [i_0] [15] [i_0]) : (arr_15 [i_1] [i_1] [i_2])))));
                        var_21 = (arr_2 [i_0] [i_1]);
                        var_22 = 27161;
                    }
                    var_23 = var_8;
                    arr_23 [i_0] [i_0] [i_1] [i_0] = ((((((arr_3 [i_0] [9] [i_2]) ? (arr_15 [i_0] [i_1] [i_2]) : 93))) ? ((min(1, ((-(arr_21 [i_0] [i_0] [i_2] [i_2])))))) : (~var_5)));
                }
            }
        }
    }
    var_24 = ((-((var_8 ? (~var_0) : (var_4 * 127)))));
    var_25 -= (((!(((37016 ? var_0 : var_1))))));
    #pragma endscop
}
