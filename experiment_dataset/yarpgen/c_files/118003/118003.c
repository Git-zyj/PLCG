/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    var_11 = (max((min((18072705269184944018 - var_4), -3532925865153061566)), (((!(((8319568472924706821 ? 18072705269184944018 : 0))))))));
    var_12 = var_7;

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_13 = ((((min((arr_2 [i_0]), (arr_2 [i_0])))) ? (65529 <= 963424492) : ((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))));
        var_14 = (min(var_14, 65535));
        var_15 = ((-(((((65529 ? 7609640358402108880 : 10127175600784844807))) ? var_5 : (max((arr_1 [i_0] [i_0]), -5))))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_5 [2] [i_1] = (((!(((374038804524607598 ? 1 : 8319568472924706821))))));

        for (int i_2 = 2; i_2 < 15;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                arr_11 [i_1] [9] [i_2] = ((((((arr_9 [i_1] [i_2 - 2] [i_3]) ? 14574135921417341698 : -2100377032))) ? (arr_9 [i_1] [i_2 - 2] [i_1]) : (((((arr_9 [i_3] [i_2] [1]) != (arr_9 [i_1] [i_2 - 1] [i_3])))))));
                arr_12 [i_2] = ((!((((arr_8 [i_2 - 1] [i_2 + 1] [i_2 + 1]) ? ((min(var_6, (arr_3 [i_1])))) : (((!(arr_7 [i_1] [i_1])))))))));
            }
            var_16 *= (((((5559 ? (arr_3 [i_2 - 2]) : (arr_3 [i_2 - 2])))) ? ((~(arr_2 [i_2 - 2]))) : (((arr_3 [i_2 + 1]) ? var_7 : 65535))));
        }
        /* vectorizable */
        for (int i_4 = 2; i_4 < 15;i_4 += 1) /* same iter space */
        {
            var_17 = (((arr_10 [i_1] [i_1] [i_1]) >= (arr_10 [i_1] [i_1] [i_1])));
            arr_15 [i_1] = ((5104931211750950907 ? (arr_14 [i_1] [i_1] [i_4]) : 15));
        }
        arr_16 [1] = ((var_7 ? (((arr_0 [i_1] [i_1]) ? (arr_4 [i_1] [i_1]) : (arr_0 [i_1] [i_1]))) : (arr_0 [i_1] [i_1])));
    }
    for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
    {
        arr_19 [i_5] [i_5] = (min(((((1 ? (arr_17 [i_5]) : (arr_9 [i_5] [i_5] [i_5]))) ^ (((max((arr_3 [i_5]), 21)))))), ((((arr_2 [i_5]) ? 247 : (arr_18 [i_5]))))));

        for (int i_6 = 2; i_6 < 14;i_6 += 1)
        {
            arr_22 [i_5] = (!8319568472924706821);
            arr_23 [i_5] [i_5] = (((((arr_0 [i_6 + 1] [i_6 - 2]) ? (arr_0 [i_6 + 1] [i_6]) : 0)) >> ((((min((arr_21 [i_6 + 2]), 1))) ? 0 : (var_4 / -5104931211750950907)))));
            var_18 = (arr_10 [i_6 - 1] [i_6 + 1] [i_6]);
            var_19 = (arr_3 [i_5]);
        }
        for (int i_7 = 0; i_7 < 0;i_7 += 1)
        {
            var_20 = (((((var_9 ? 65535 : var_0))) / 3872608152292209905));
            var_21 = ((~((min(1, (arr_1 [i_7] [i_5]))))));
        }
    }
    #pragma endscop
}
