/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] &= ((~((~((var_7 ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0])))))));
        arr_3 [i_0] [i_0] = 1;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_15 &= ((min((((arr_4 [i_1]) == (arr_5 [10]))), (((arr_6 [i_1]) && var_0)))));
        var_16 = (max(var_16, (arr_4 [i_1])));
        var_17 &= (min((arr_4 [i_1]), ((((((var_9 ? 66 : (arr_6 [i_1])))) ? (((arr_5 [i_1]) ? 32767 : (arr_4 [i_1]))) : var_4)))));

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_18 &= ((+((((arr_5 [i_1]) == var_0)))));
            var_19 = (((((arr_5 [i_1]) ? (arr_4 [i_1]) : var_8))));
        }
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            var_20 &= ((((((arr_9 [13] [i_3 + 3]) / (arr_10 [i_1] [i_1] [i_3])))) ? (((arr_7 [i_3 - 1] [i_3 + 1] [i_3 + 3]) & (arr_7 [i_3 + 2] [i_3 + 3] [i_3 + 2]))) : var_1));
            arr_12 [i_3] = var_0;
            var_21 = ((((((arr_7 [i_1] [i_3] [i_3]) >> (((((arr_10 [i_3] [i_1] [i_1]) ? 66 : (arr_7 [i_1] [i_3 + 3] [i_3]))) - 45))))) || ((((arr_9 [i_3] [i_3 + 1]) ? (arr_9 [i_1] [i_3 + 1]) : (arr_9 [1] [i_3 + 2]))))));
            var_22 = (max(var_22, (arr_7 [i_1] [i_3] [i_3])));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            arr_17 [i_1] = (((((((arr_8 [i_1]) ? ((-(arr_7 [10] [i_4] [i_4]))) : ((min((arr_7 [0] [i_4] [i_1]), -32757))))) + 2147483647)) >> (((min(-32767, ((-11 ? (arr_8 [i_4]) : 3)))) + 32770))));
            var_23 &= ((32759 || ((((161 ? var_12 : (arr_7 [i_1] [i_1] [i_4]))) >= var_9))));
        }
        for (int i_5 = 2; i_5 < 19;i_5 += 1)
        {

            for (int i_6 = 4; i_6 < 18;i_6 += 1)
            {
                var_24 = ((1 ? ((max(var_10, (22 - var_5)))) : (min(-32760, (arr_15 [i_5 - 1] [i_6 - 3] [i_6])))));

                for (int i_7 = 1; i_7 < 19;i_7 += 1)
                {
                    arr_28 [i_1] [i_5] [i_6 - 3] [7] = (((((((((arr_23 [i_1]) ? var_13 : (arr_19 [i_1] [i_5])))) ^ (min(var_7, (arr_26 [i_1] [i_7 - 1] [i_6 + 2] [i_6 + 2] [i_7 - 1])))))) ? ((min((((arr_4 [i_6]) ? -32760 : (arr_7 [i_5] [i_6] [i_5]))), var_4))) : (((arr_26 [i_6] [i_6] [i_6 - 1] [i_6 - 4] [i_6]) ? var_3 : (arr_26 [i_1] [i_5 - 2] [i_6] [i_6 - 4] [i_7 + 1])))));
                    var_25 -= (((arr_25 [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_7] [i_7]) / ((((arr_25 [i_7 + 1] [i_7] [i_7 - 1] [i_7 - 1] [i_7 + 1]) ? (arr_25 [i_7 + 1] [i_7] [i_7 - 1] [11] [i_7]) : (arr_25 [i_7 + 1] [i_7] [i_7 - 1] [i_7] [i_7 - 1]))))));
                    var_26 |= ((!(arr_7 [i_5 - 1] [i_5 - 2] [i_5 - 1])));
                    arr_29 [i_1] [18] [i_6] [7] [i_7] = (((-127 - 1) - (((1 || ((((arr_5 [i_1]) ? var_6 : 217))))))));
                }
                /* vectorizable */
                for (int i_8 = 1; i_8 < 19;i_8 += 1)
                {
                    arr_34 [i_8] [i_5 - 1] [i_8] = (~248);
                    arr_35 [i_8] = (arr_6 [17]);
                    arr_36 [i_5 + 1] [i_8] [i_8 + 1] = (((arr_30 [1] [1] [i_6] [i_8] [i_1]) ? ((((arr_23 [i_1]) ? var_11 : (arr_20 [i_5])))) : var_6));
                }
            }
            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                var_27 = (min((arr_21 [i_1] [i_5] [i_9]), var_4));
                var_28 &= 34566;
            }
            arr_39 [i_5] [i_1] [i_1] = 123;
            var_29 -= ((((!((((arr_15 [i_1] [17] [i_1]) & 31))))) && 896480095));
        }
        var_30 = ((!(arr_6 [i_1])));
    }
    var_31 = (min(var_31, var_12));
    var_32 = (((var_6 * ((var_4 ? 7861626246834164763 : var_6)))));
    var_33 ^= var_3;
    #pragma endscop
}
