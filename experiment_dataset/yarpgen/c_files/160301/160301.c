/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, 40881));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((var_4 ? ((2747182930990541196 ? 40881 : (arr_1 [i_0 - 1]))) : (~var_10)));
        var_15 = (((~15699561142719010418) ? (arr_1 [i_0]) : 2747182930990541198));
        arr_5 [i_0] = -var_13;
        arr_6 [i_0] = ((min((arr_0 [i_0]), (arr_1 [i_0]))));
        var_16 = ((+((((arr_3 [i_0 + 2]) == (arr_3 [i_0 + 1]))))));
    }
    for (int i_1 = 3; i_1 < 8;i_1 += 1)
    {
        arr_10 [i_1] = (((arr_8 [i_1]) | (((arr_3 [i_1]) ^ ((max(var_4, 3754331895)))))));
        var_17 = 0;
        var_18 &= 56;
    }
    #pragma endscop
}
