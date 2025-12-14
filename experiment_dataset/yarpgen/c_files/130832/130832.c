/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -var_9;
    var_15 = (min(var_15, (((!(((33 > var_4) <= (-8 == 46667))))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_16 = (max(var_16, ((((-2147483627 + 2147483647) << (!1023))))));
        arr_3 [10] &= ((1045 + (min(1349644602, 12013))));
        var_17 = ((1010 ? 1072489408 : ((min(((979 ? 1035 : -4500)), (1084970457 % 1015))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 4; i_2 < 17;i_2 += 1)
        {
            var_18 = (min(var_18, ((max(1072489429, -8)))));
            var_19 -= ((((127 ? 3666963255 : (((1 ? 16 : 31732))))) & (~var_9)));
            var_20 ^= (max((max(var_1, (arr_8 [i_2 - 3]))), ((((arr_8 [i_2 - 4]) && 2373)))));
            var_21 = (max(var_21, ((max((~var_2), (~1453129110))))));
            arr_9 [i_2] [i_1] &= (31725 - 5);
        }
        var_22 = (((((((((!(arr_4 [i_1])))) > (((!(arr_7 [i_1] [i_1])))))))) % (arr_8 [i_1])));
        var_23 = (max(var_23, var_12));
    }
    #pragma endscop
}
