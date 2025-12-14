/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_12;
    var_17 = (((!var_6) > ((((-6964550548560316357 >= var_2) != (var_7 ^ var_10))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = -15470536442439649;
        var_18 = ((!((1681554353778036841 <= (var_1 % -5310841423069096960)))));
    }
    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {
        arr_7 [11] = ((-9223372036854775807 - 1) ? -8708325170553966440 : 5349647750961809305);
        arr_8 [i_1] = ((arr_4 [i_1] [i_1]) ? (arr_6 [10]) : (((5310841423069096949 - 21) ? (((arr_0 [i_1] [i_1]) ? var_7 : -6459892654716770709)) : (arr_5 [i_1 + 1] [i_1 + 1]))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 14;i_3 += 1)
            {
                {
                    arr_15 [i_3] [11] [i_3] = ((((var_4 ? -2992372318125628311 : (arr_6 [i_1]))) <= (~var_8)));
                    var_19 = ((9223372036854775792 || ((((arr_1 [i_2]) ? (arr_6 [12]) : (!var_13))))));
                    arr_16 [i_3 - 1] [9] [i_3] [3] = (5310841423069096932 ^ 258048);
                }
            }
        }
        arr_17 [i_1] [9] = 4388539352192205437;
    }
    var_20 = (max(var_20, ((((((9 ^ var_9) ? (var_12 - -4350009658406618236) : var_8))) ? var_4 : (max(((var_10 ? var_10 : (-9223372036854775807 - 1))), ((var_8 ? 2345685449719435497 : -5310841423069096967))))))));
    var_21 = var_12;
    #pragma endscop
}
