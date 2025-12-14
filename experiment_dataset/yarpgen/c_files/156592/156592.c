/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;
    var_13 = var_3;
    var_14 = (min(((~(var_6 ^ 1515371299))), (61574 | 33795)));
    var_15 = (var_8 < -4184690629771826258);

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        var_16 = (arr_1 [1]);
        arr_4 [i_0 + 1] [i_0 - 2] = ((!((!(arr_0 [i_0 - 2] [i_0 - 2])))));
    }
    for (int i_1 = 2; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_17 = (min(((((~(arr_8 [i_1] [i_1 + 1]))) | -4184690629771826263)), ((~(((arr_7 [i_1 - 1] [i_1 - 1]) ? 0 : (arr_5 [i_1])))))));
        var_18 = (min(((((max((arr_5 [6]), var_0))) * (max((arr_2 [i_1 - 2]), (arr_3 [i_1 - 1]))))), ((max((arr_7 [i_1] [i_1 + 1]), (arr_7 [i_1] [i_1 + 1]))))));
        arr_9 [i_1] = (!1515371300);
        var_19 = -1;
    }
    for (int i_2 = 2; i_2 < 10;i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] = (((min((arr_11 [i_2 - 1]), (arr_11 [i_2 + 1])))) + ((min(var_8, (arr_11 [i_2 - 1])))));
        arr_13 [i_2] = (-(min(((min(-126, 79))), -var_1)));
        var_20 = ((min((arr_1 [i_2 - 2]), var_9)));
    }
    #pragma endscop
}
