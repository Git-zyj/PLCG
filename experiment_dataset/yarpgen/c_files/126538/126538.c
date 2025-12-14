/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += var_2;
    var_18 += (((((~((var_4 ? var_0 : 26))))) >= var_7));
    var_19 = (((((var_3 ? ((6498973543110067006 ? var_16 : var_13)) : -var_12))) - var_13));

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_20 = var_7;
        var_21 = (((!(arr_1 [i_0]))) ? (arr_1 [i_0]) : var_12);
        var_22 = (max((min(26, (max(-1801726372, -26)))), (~9)));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        var_23 ^= (arr_2 [i_1]);
                        var_24 = (min(var_24, ((((max(6498973543110066995, ((min(192, (arr_6 [i_3] [i_4])))))) == (((~(min((arr_8 [i_3] [i_2] [i_1]), var_13))))))))));
                        var_25 = max(255, (max((arr_0 [i_3]), (~0))));
                        var_26 = ((var_15 + (((arr_3 [i_1]) ? (((arr_0 [6]) + 1525254263)) : (((arr_0 [i_3]) - 251))))));
                    }
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        var_27 |= ((-(arr_13 [18] [i_2] [i_3] [i_2])));
                        var_28 = (min(var_28, (((((max((arr_15 [i_1] [i_5]), (arr_9 [i_1] [i_2] [i_3] [i_5])))) ? ((((~-6498973543110067006) && ((((arr_10 [i_1] [i_1] [i_1]) ? 5 : 65510)))))) : (arr_6 [i_1] [i_1]))))));
                    }
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        var_29 = (arr_16 [i_3]);

                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            var_30 = (((!(((var_12 ? var_0 : (arr_11 [11] [i_2] [i_3] [13])))))));
                            var_31 = (((((min(var_5, var_13)))) ? var_15 : ((~(arr_5 [i_1] [i_2] [i_1])))));
                        }
                    }
                    for (int i_8 = 1; i_8 < 16;i_8 += 1)
                    {
                        var_32 = var_2;
                        var_33 = 6498973543110067006;
                    }
                    var_34 ^= (min((712892508543822881 % -6498973543110066992), ((((min(var_11, var_7))) ? (min(var_5, 14)) : (arr_1 [i_3])))));
                    var_35 = (~var_12);
                    var_36 = (min(var_36, (arr_17 [i_3] [i_2] [i_3] [i_1] [i_1] [i_3])));
                }
            }
        }
        var_37 = (min(var_37, (((-(arr_19 [i_1] [i_1] [i_1] [i_1] [i_1]))))));
    }
    var_38 = var_7;
    #pragma endscop
}
