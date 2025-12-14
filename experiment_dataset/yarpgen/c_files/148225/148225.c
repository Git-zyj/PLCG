/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_13 |= (arr_2 [12]);
        var_14 = ((-(((arr_2 [i_0]) ? 1 : var_10))));
        var_15 = var_11;
        var_16 = ((((-var_5 ? 194 : (~32760))) >> (((min(((var_8 >> (var_6 - 188))), -1)) + 6))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_17 = (((((~(max(821250471, 1))))) == ((var_9 ? ((-(arr_2 [i_1]))) : (arr_3 [i_1])))));
        var_18 = (821250474 == 95);
        arr_5 [i_1] = (1 ^ -8732228932450125162);

        for (int i_2 = 4; i_2 < 9;i_2 += 1)
        {
            arr_8 [7] = (((arr_4 [i_2]) ? var_9 : (arr_4 [i_2 - 2])));
            arr_9 [9] = (((arr_3 [i_2 - 1]) >> (((arr_3 [i_2 - 1]) - 96))));
            var_19 += (160 ? 60121 : 40483);
        }
        for (int i_3 = 2; i_3 < 11;i_3 += 1)
        {
            var_20 = ((821250481 ? 5415 : -8732228932450125164));
            var_21 *= (arr_7 [i_3 + 1] [i_3 - 2]);
        }
    }
    var_22 = ((((~((min(var_2, var_0))))) | var_0));
    #pragma endscop
}
