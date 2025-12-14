/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((max(-1041, (~var_17))) <= (max(46748, (min(-7492, 1048575))))));
    var_21 = (((var_8 | -393254356321948738) ^ 393254356321948737));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_22 = (((max((arr_2 [i_0]), (arr_2 [i_0]))) << (((max((arr_2 [i_0]), (arr_2 [i_0]))) - 4530877508732611612))));
        arr_4 [i_0] = (arr_0 [i_0]);
        var_23 = (max(var_23, var_2));
    }

    for (int i_1 = 4; i_1 < 15;i_1 += 1)
    {
        var_24 ^= (((max((arr_0 [i_1 - 4]), (arr_0 [i_1 + 1]))) ? (min((arr_3 [i_1 - 2]), 18446744073709551615)) : (((arr_1 [i_1 + 3]) ? 13176618585664325324 : (((1 ? 393254356321948737 : -393254356321948753)))))));
        var_25 = ((max((((~(arr_0 [i_1])))), (((arr_6 [i_1]) ^ var_5)))));
        var_26 = (min(var_26, (((!((((1 && 393254356321948737) ? (var_2 % var_2) : ((~(arr_0 [i_1])))))))))));
    }
    #pragma endscop
}
