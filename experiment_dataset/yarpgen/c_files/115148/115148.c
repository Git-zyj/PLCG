/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_16 = (33553408 >> (90 - 40));
        var_17 = ((((((arr_0 [i_0]) & (arr_1 [i_0])))) ? ((168994590963981841 ? 2603611180 : (-9223372036854775807 - 1))) : (arr_1 [i_0])));

        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            arr_5 [i_1] = (arr_1 [i_1]);
            arr_6 [i_1] [i_1] [i_1] = (arr_2 [i_1] [i_1] [i_1]);
        }

        for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
        {
            var_18 = (max(((((min((arr_2 [6] [i_2] [i_2]), (arr_4 [2])))) ? (arr_4 [i_0]) : (((arr_0 [4]) ? (arr_1 [i_0]) : (arr_3 [i_0] [i_2] [i_0]))))), (((!(((9223372036854775802 ? (arr_1 [i_0]) : (arr_8 [i_0])))))))));
            var_19 = ((((((arr_7 [i_2]) ? 1099511627760 : ((((!(arr_0 [i_0])))))))) ? (((arr_1 [i_0]) ? (arr_4 [i_0]) : 15872)) : (arr_8 [i_2])));
            arr_10 [i_0] = (((((arr_4 [i_2]) ? (arr_0 [i_0]) : (arr_9 [i_2]))) ^ (arr_4 [i_2])));
        }
        for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
        {
            arr_13 [10] [i_3] = (arr_9 [i_3]);
            arr_14 [i_3] = (((((((var_10 ? -168994590963981841 : 9223372036854775807))) ? (arr_12 [i_0] [i_3] [i_0]) : (arr_12 [i_0] [i_0] [3]))) <= ((var_9 ? 118 : ((~(arr_12 [i_0] [i_0] [i_0])))))));
        }
        var_20 = (min((min((arr_1 [1]), (((arr_7 [i_0]) & (arr_12 [i_0] [i_0] [i_0]))))), (((((max((arr_8 [i_0]), var_14))) >= (((arr_7 [i_0]) ? (arr_4 [i_0]) : (arr_1 [i_0]))))))));
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            arr_21 [i_5] = ((((!(arr_7 [i_4]))) ? var_13 : ((min((arr_8 [i_5]), (arr_1 [i_4]))))));
            arr_22 [i_4] [i_5] [i_5] = (((((arr_17 [i_4]) ? (!12542193966913448678) : ((-43 ? (arr_7 [1]) : (arr_15 [i_4]))))) == ((((arr_3 [i_4] [i_5] [i_5]) ? (arr_3 [i_4] [i_5] [i_5]) : (arr_3 [i_4] [i_5] [i_5]))))));
        }
        arr_23 [0] = (((arr_7 [i_4]) ? (((arr_7 [i_4]) ^ (arr_7 [i_4]))) : (((((arr_7 [i_4]) <= (arr_7 [i_4])))))));
    }
    #pragma endscop
}
