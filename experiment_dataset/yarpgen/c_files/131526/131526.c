/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (65534 > var_10)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = 4294901790;

        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            arr_5 [i_0] = -4984191204890665547;
            arr_6 [i_0] [i_1] = (!0);
            var_14 = ((((~(arr_3 [i_0] [i_0] [i_0]))) >> (((~65534) - 4294901741))));
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            arr_9 [3] [i_0] = (((((((max((arr_8 [i_0] [i_0] [i_2]), var_4))) ? -4045080541405581672 : ((4294901761 ? 18 : -7642701067808425594))))) ? ((~(!var_4))) : ((-(arr_8 [9] [i_0] [i_2])))));
            var_15 *= ((((((((arr_0 [i_0] [i_2]) ? 1 : var_5))) * (((arr_2 [i_0] [i_2]) ? (arr_4 [i_2] [i_2] [i_2]) : (arr_3 [i_0] [i_0] [i_2]))))) >> ((((((((arr_1 [i_0]) ? var_4 : var_4))) ? (((arr_2 [i_0] [i_2]) ? var_0 : (arr_0 [i_0] [i_2]))) : (min(var_1, (arr_0 [i_2] [i_0]))))) - 5462237456674286193))));
        }
    }
    #pragma endscop
}
