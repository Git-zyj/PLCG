/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((((max(1505351782, 32743)) & -32752)), (-32743 || -32758)));
    var_21 = (max(var_21, ((max(44666, 35072)))));
    var_22 = ((var_18 ? var_8 : -var_15));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [11] &= (min((max(-32752, -7706165996956073592)), 1));
        arr_3 [i_0 - 1] = ((((32753 ? (arr_0 [i_0] [i_0]) : ((((arr_0 [0] [i_0]) >= var_6))))) < 1));
        arr_4 [i_0] = ((max(7706165996956073587, 1)));
        arr_5 [i_0] [4] = (!1);
        var_23 = (max(var_10, 32753));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_24 = (89 ? 32753 : -19181);
        arr_8 [i_1] = 35072;

        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            arr_11 [i_1] [i_1] [i_2 + 1] = ((36417 ? ((((!(~30464))))) : ((var_10 ? (arr_6 [1]) : (1 + 134201344)))));
            var_25 = -32752;
            var_26 = (max(((max((arr_9 [1] [1] [12]), 0))), ((4191 ? (!32758) : ((min(-19196, 84)))))));
        }
    }
    for (int i_3 = 2; i_3 < 10;i_3 += 1)
    {
        var_27 ^= (arr_1 [i_3] [i_3]);
        var_28 *= ((max(23367, 6601044751377691611)));
        var_29 = -19177;
    }
    #pragma endscop
}
