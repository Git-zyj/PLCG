/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_17 = 102;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_18 = (min(-102, (max(-8, 4))));
                                arr_13 [i_0] [i_4] [16] [i_3] [i_0] = (((((arr_5 [i_0] [7] [i_0]) > ((var_12 ? 211 : (arr_5 [14] [i_3] [i_2]))))) ? (var_4 / var_16) : 2));
                                arr_14 [i_0] [8] [i_2] [i_3] [1] [9] = ((((max((arr_0 [i_0]), (arr_0 [i_0])))) ? (arr_0 [i_0]) : (((1364102802 ? 2930864492 : 2930864480)))));
                            }
                        }
                    }

                    for (int i_5 = 2; i_5 < 17;i_5 += 1)
                    {
                        arr_17 [i_0] = (((((!var_12) && (!var_4))) ? ((((((arr_2 [2]) - -75)) == (arr_11 [4] [4] [2] [13] [i_0])))) : ((1364102802 ? (var_14 || var_13) : ((var_10 ? (arr_4 [i_0]) : -4236))))));
                        var_19 ^= var_14;
                        arr_18 [i_5] [17] [i_0] [1] [7] [i_5] = ((!(((-(arr_5 [i_1 + 1] [i_5] [13]))))));
                    }
                    for (int i_6 = 1; i_6 < 15;i_6 += 1)
                    {
                        var_20 = (((((max(var_3, var_10)) ^ 1)) % var_11));
                        var_21 = ((((((153 < 17850083523113771132) ? 45 : 62))) ? (((((var_7 ? (arr_9 [i_0] [i_1] [i_2] [i_0]) : (arr_1 [i_1])))))) : ((4195298460 ? (max(var_3, var_13)) : (arr_2 [i_0])))));
                    }
                }
                for (int i_7 = 2; i_7 < 14;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        arr_27 [i_0] [i_0] = 25907;
                        arr_28 [1] [i_1] [i_0] [3] = (arr_25 [i_0] [5] [16] [i_8]);
                        arr_29 [i_0] [i_0] [i_1] [8] [i_7] [i_0] = ((((((arr_20 [i_0 - 2] [i_0]) ? (arr_23 [i_0 - 2] [10] [i_0]) : (arr_20 [i_0 - 2] [i_0])))) ? ((var_9 / (arr_20 [i_0 - 2] [i_0]))) : var_0));
                    }
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        var_22 = (!(arr_5 [i_0] [i_1] [8]));
                        var_23 = 0;
                    }
                    arr_32 [i_0] = ((((!(((-4236 ? var_3 : var_10))))) ? (+-1) : ((var_4 ? (arr_3 [i_0]) : ((25646 & (arr_0 [i_0])))))));
                }
                arr_33 [i_0] [i_0] = (min(3749287234579323726, ((max(-77, var_16)))));
            }
        }
    }
    var_24 = (max(var_24, ((((((var_11 - (1 + 2305843007066210304)))) ? (max((var_2 - 110), var_8)) : (min((var_16 - 2930864488), -26)))))));
    #pragma endscop
}
