/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180437
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, ((max((arr_2 [i_1]), ((~(arr_2 [i_1 + 1]))))))));

                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            var_18 = (var_13 && var_0);
                            var_19 = (9006085788153872321 / var_10);
                            var_20 = var_0;
                            var_21 = var_0;
                            var_22 = (max(var_22, ((((((var_12 || (arr_7 [i_0 - 1])))) == ((var_15 % (arr_7 [i_0 - 1]))))))));
                        }
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            var_23 = (min(var_23, ((min(9006085788153872322, -59)))));
                            var_24 &= ((!((!(arr_11 [i_0] [i_2] [i_2] [i_5])))));
                            var_25 = (max(var_25, ((((((arr_6 [i_3 - 1] [i_0 + 1]) || (arr_6 [i_3 + 1] [i_0 + 1]))) && ((max(((max(var_1, -32456))), 4294967275))))))));
                            var_26 -= arr_16 [i_5] [i_3 - 1] [i_3] [i_2] [i_0 + 1] [i_0 + 1] [i_0 + 1];
                        }
                        var_27 = (((min(9006085788153872321, 9440658285555679288)) << (9006085788153872310 - 9006085788153872252)));
                    }
                    for (int i_6 = 2; i_6 < 18;i_6 += 1) /* same iter space */
                    {
                        var_28 = 9223372036854775807;
                        var_29 = (min((((0 << (-79 + 124)))), var_5));
                    }
                    /* vectorizable */
                    for (int i_7 = 2; i_7 < 18;i_7 += 1) /* same iter space */
                    {
                        var_30 = ((var_7 | (arr_3 [i_1 + 1] [i_0 - 1])));
                        var_31 = (min(var_31, ((((arr_13 [i_7] [i_7 + 1] [i_7] [i_7 + 1] [i_0 + 1]) > -347181031)))));
                        var_32 = (((arr_15 [i_7] [i_7 - 1] [i_1 - 1]) >> (var_15 + 6573)));
                    }
                    var_33 = (min(var_33, ((((var_8 * 0) / var_2)))));

                    for (int i_8 = 3; i_8 < 18;i_8 += 1)
                    {
                        var_34 = var_3;
                        var_35 = ((((min((arr_22 [i_1 - 1] [i_0]), (arr_22 [i_1 - 1] [i_1 - 1])))) > (arr_22 [i_1 - 1] [i_0 + 1])));
                    }
                }
            }
        }
    }
    var_36 = 0;
    var_37 = ((var_6 < ((0 >> (var_2 - 4879)))));
    #pragma endscop
}
