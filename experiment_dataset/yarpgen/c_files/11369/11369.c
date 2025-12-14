/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= ((((var_2 ? 1 : (40515 || var_4))) << (((((-21 ? 50080 : var_0))) ? (!var_9) : 51421))));

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        var_11 = (max(var_11, ((((-(var_2 == 5170083990706825593)))))));
        var_12 = ((!((min((min(5484546446742942709, var_9)), (((31605 ? -6008635426000627615 : 1))))))));
    }

    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        arr_5 [i_1] = (((var_5 ? 39241 : (arr_3 [i_1 + 1]))));
        var_13 = (((((~(arr_2 [i_1 - 1])))) | ((~((var_1 ? 13979768723292729658 : var_8))))));
        var_14 -= (max(((var_7 ? 1 : 39241)), ((((arr_1 [i_1 - 2] [i_1]) >= var_9)))));
        arr_6 [i_1] = (((arr_4 [i_1]) ? 16255428947020273147 : 13979768723292729658));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_15 = (max(var_15, (((var_5 ? (((!(33950 + var_9)))) : ((((11205 > (-32767 - 1))))))))));
        var_16 += ((9910 ? ((((((arr_7 [11] [11]) > var_5))) % var_3)) : (((arr_8 [i_2] [i_2]) ? var_2 : (arr_8 [i_2] [i_2])))));
    }
    #pragma endscop
}
