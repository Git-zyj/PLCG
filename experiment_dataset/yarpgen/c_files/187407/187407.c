/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((!((min((max(var_9, var_2)), ((max(-51, 355))))))));
    var_19 ^= (min((!1), (min((!-102793412), (min(var_2, var_2))))));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_20 = (min((min((min(var_7, 0)), (!var_10))), (((!((min((arr_2 [i_0] [i_0]), (arr_0 [i_0] [i_0])))))))));
        arr_3 [i_0] = (max((min((min(50, 1561731671)), (!-74))), (min((max(42, 2733235624)), ((min(var_10, (arr_0 [i_0] [i_0]))))))));
    }
    var_21 = (min((!0), (min((min(var_0, -933841948)), (!var_1)))));
    var_22 = (min(var_15, (min(((min(var_12, var_13))), (max(-101, 6985964978038409486))))));
    #pragma endscop
}
