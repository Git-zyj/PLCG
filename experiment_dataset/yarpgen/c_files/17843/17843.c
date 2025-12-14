/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= var_0;
    var_19 = max((max(var_17, ((var_9 ? var_7 : var_17)))), ((((var_14 || var_13) >> ((((var_7 ? var_12 : var_1)) + 59))))));

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_20 = (max(-4822221549913218753, (arr_1 [i_0])));
        var_21 = (min(var_21, ((((((!((min(-4822221549913218749, 9006682793109275776)))))) >> ((((min(-7, (arr_0 [i_0 - 1] [i_0 + 1])))) + 24)))))));
        arr_2 [1] [i_0 - 3] = ((((12 >> (((max(var_6, -14)) - 8751308569045485650)))) - ((((var_14 || (arr_0 [7] [7])))))));
        var_22 = ((var_16 - (((arr_0 [i_0] [i_0]) >> (2147483647 - 2147483617)))));
        var_23 += (((((arr_1 [i_0]) ? var_17 : -1))));
    }

    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_6 [i_1] = (min((min((arr_3 [i_1]), (arr_4 [i_1] [i_1]))), (((arr_3 [i_1]) % var_14))));
        arr_7 [18] = 20;
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        arr_10 [i_2] [i_2] = var_6;
        var_24 ^= ((min(((~(arr_5 [17])), (65535 >= 18)))));
    }
    #pragma endscop
}
