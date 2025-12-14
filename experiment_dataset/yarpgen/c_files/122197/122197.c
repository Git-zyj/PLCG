/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_17 = (min(var_17, (((1024 ? 36 : 25385)))));
            arr_4 [i_0] [i_0] [i_0] = ((((!(arr_0 [i_0] [i_1]))) || ((max(1703939259, ((7963117295259446353 ? 20057 : 868521780)))))));
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_18 += ((!(arr_0 [i_0] [i_2])));
            var_19 += (-1703939272 ^ 45480);
            var_20 *= (arr_3 [i_0] [i_2]);
            arr_7 [i_0] [i_2] [i_0] = (((((min(5315805152463177052, 1526233594)) & (((max(249, (arr_5 [i_2]))))))) >> (((min((arr_0 [i_0] [i_0]), ((-(arr_6 [i_0] [18]))))) - 67))));
        }
        var_21 ^= ((-((var_4 ? ((6989767971152331785 ? -901339186133056424 : (arr_1 [i_0]))) : 25))));
        var_22 = ((16140901064495857664 ? -13113 : 0));
    }
    var_23 = ((!(((17652 ? (var_11 > var_13) : var_14)))));
    var_24 = ((var_5 - (max(((var_16 ? var_14 : 123)), var_3))));
    #pragma endscop
}
