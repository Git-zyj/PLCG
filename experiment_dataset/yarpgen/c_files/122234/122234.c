/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_4 [i_0] [i_0] = ((6132392492910931781 ? (~1) : (((arr_1 [i_0] [i_1]) ? (arr_1 [i_1] [i_1]) : (arr_1 [i_1] [i_1])))));
            arr_5 [i_0] [i_0] = ((((arr_3 [i_0] [i_1]) ? (((arr_0 [i_0]) ? 7 : -32)) : ((538286429 ? var_12 : 162840345)))) << (((-162840346 + 162840409) - 11)));
            var_18 = (-1 ? ((((((162840343 ? -8 : 8127493041860029042))) ? (min(var_11, -162840363)) : (!1190718320199296767)))) : 402653184);
        }
        var_19 = ((((min((((arr_3 [i_0] [i_0]) ? (arr_3 [i_0] [i_0]) : 288230375077969920)), 4669))) % (arr_1 [8] [i_0])));
        arr_6 [i_0] = 3665506569;
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 19;i_2 += 1)
    {
        var_20 ^= (((arr_7 [i_2 - 1]) >= 30));
        arr_9 [i_2] [i_2] = (((arr_8 [i_2 + 2] [i_2 + 2]) ? (arr_8 [i_2 - 1] [i_2]) : (arr_8 [i_2 + 1] [i_2 - 1])));
    }
    var_21 = ((((!(13608118364490833391 != 9223372036854775800))) ? (((var_5 << ((((var_10 ? 6 : var_5)) - 5))))) : ((var_9 ? ((var_17 ? var_10 : var_0)) : var_1))));
    #pragma endscop
}
