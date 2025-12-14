/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [4] = ((var_11 < (min(-6297588412899363177, var_8))));
        arr_5 [i_0] [i_0] = (((min(((min(var_1, 61862))), (((arr_3 [i_0]) ? var_2 : 1879048192)))) >= ((((var_10 + var_12) == ((-604918877033596046 ? 753091757095921468 : var_16)))))));
        arr_6 [1] = (((-(var_10 && var_6))));
        var_17 += (min((~var_5), ((((arr_3 [i_0]) && (((131071 ? var_0 : -7735190902848740670))))))));
    }
    var_18 ^= (((((-((753091757095921448 ? 51533 : var_9))))) && (((((var_13 ? 215 : var_14)) & var_0)))));
    #pragma endscop
}
