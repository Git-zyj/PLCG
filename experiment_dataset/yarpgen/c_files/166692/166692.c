/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (min((max(5525, -9223372036854775786)), (((1 ? 371230666 : -15788)))));
        var_10 = var_5;
    }

    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_11 = 251;
            arr_7 [i_2] [9] = (max((arr_6 [i_2] [1]), (max((arr_3 [i_1] [i_1]), (((6180796742218959365 ? var_9 : 43889)))))));
            arr_8 [i_1] |= (max(100, -371230654));
        }
        var_12 ^= -1786500905936185925;
        var_13 = ((((((8323072 / var_5) ? (arr_1 [i_1]) : ((10199362608049295449 ? -7227 : -371230651))))) / ((-6180796742218959394 ? -5415918817463273385 : 1))));
        var_14 += (arr_3 [i_1] [i_1]);
    }
    #pragma endscop
}
