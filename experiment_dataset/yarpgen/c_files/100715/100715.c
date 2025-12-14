/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_13 = (((arr_1 [i_0]) ? var_5 : ((-(arr_0 [i_0 + 3])))));
        var_14 = (min((arr_0 [i_0]), ((((max((arr_0 [i_0]), var_2))) ? (((!(arr_0 [i_0])))) : (arr_1 [i_0])))));

        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            var_15 = (min(var_15, (((!(((((max(var_0, (arr_3 [i_0] [i_0])))) ? (((!(arr_3 [i_0] [i_1])))) : (((arr_3 [i_0] [i_1]) ? var_0 : var_1))))))))));
            var_16 = (max(var_16, 29));
        }
        for (int i_2 = 2; i_2 < 15;i_2 += 1)
        {
            arr_8 [i_0] [i_0] = var_4;
            var_17 += (max(((9 ? 17205012545618025760 : (((var_1 ? 38 : 1))))), ((((arr_6 [i_0 + 2]) ? var_1 : (arr_2 [i_0]))))));
            arr_9 [i_0] [i_0] [i_2] = ((((max((min(var_6, (arr_6 [i_0]))), (arr_6 [i_2])))) ? ((((((arr_2 [i_2 + 1]) ? (arr_6 [i_0]) : var_6))) ? ((max(var_11, (arr_3 [i_2] [14])))) : var_4)) : var_4));
        }
        arr_10 [i_0] = var_1;
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_18 = (max(var_18, (((-((~(max((arr_5 [i_3] [i_3] [i_3]), var_3)))))))));
        var_19 = (arr_11 [5]);
    }
    for (int i_4 = 3; i_4 < 18;i_4 += 1)
    {
        arr_18 [16] = ((!(((~((var_2 ? var_9 : var_9)))))));
        arr_19 [i_4] [i_4] = (max((max((((var_9 ? (arr_15 [13]) : (arr_16 [i_4])))), (min(var_5, (arr_17 [i_4]))))), (arr_17 [i_4])));
    }
    var_20 &= ((205 ? (((51 ? 1 : 203))) : var_10));
    var_21 = ((!(((220 ? 1 : 1)))));
    var_22 = var_4;
    #pragma endscop
}
