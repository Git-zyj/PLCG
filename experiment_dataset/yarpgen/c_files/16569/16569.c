/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_3;
    var_19 = (!32767);

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_20 = (min(23002, 2874354812));
        var_21 = ((-25796 ? 7149301958657932119 : 76));
    }
    for (int i_1 = 4; i_1 < 16;i_1 += 1)
    {
        var_22 += ((((((arr_3 [i_1] [i_1 - 3]) - (arr_3 [i_1] [i_1 - 3])))) - (arr_3 [i_1] [i_1 - 4])));
        arr_5 [i_1] = ((var_14 ? var_9 : (((((var_10 ? 1 : var_5))) + -288230376151711743))));
        arr_6 [i_1] &= (max(var_10, (((arr_3 [i_1] [i_1 - 3]) << (var_4 - 105)))));
        var_23 = ((var_16 ? 72 : ((((arr_3 [i_1] [i_1]) ? (max(var_13, -1401838342)) : (!-23181))))));
    }
    var_24 &= (((((var_10 ? (1 - -32747) : (min(3079242580, 180))))) ? (((var_10 ? 88 : var_8))) : 1179924188));
    #pragma endscop
}
