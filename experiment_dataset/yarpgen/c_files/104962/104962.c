/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((var_14 ? var_7 : var_7))) ? ((var_4 << (var_13 - 17268))) : 16));
    var_17 = ((~(((((var_11 ? var_15 : (-32767 - 1)))) ^ (4494803534348288 - 239)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = (((((((~var_5) > (max((arr_1 [i_0]), (arr_2 [i_0] [i_0]))))))) % ((13 ? ((-(arr_2 [17] [i_0]))) : ((((!(arr_2 [i_0] [i_0])))))))));
        arr_3 [i_0] = (((((arr_1 [i_0]) ? ((1105852314 ? var_15 : (arr_1 [i_0]))) : (arr_1 [i_0])))) > 4294967295);

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_6 [i_0] [0] [i_0] = (((((((max(var_8, var_9))) ? (arr_1 [i_0]) : (((-838761609 + 2147483647) >> (arr_1 [i_0])))))) ? var_14 : (arr_0 [i_0])));

            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                var_19 = ((1 % ((5 ? 18 : 32767))));
                arr_9 [i_1] &= (((var_9 ? ((var_13 % (arr_8 [i_0] [i_1] [i_1]))) : ((((arr_2 [i_1] [i_1]) << (var_0 - 34)))))));
            }
        }
        for (int i_3 = 3; i_3 < 15;i_3 += 1)
        {
            arr_12 [i_0] [i_0] [i_0] = var_11;
            arr_13 [i_0] [1] [i_3 - 1] = -1105852307;
            arr_14 [i_0] [i_0] = (arr_5 [i_0] [i_3 - 1] [i_3 - 3]);
        }
        var_20 = var_1;
    }
    #pragma endscop
}
