/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min((max((min(var_12, var_6)), (!var_8))), (max((!14), (min(var_10, var_4))))));
    var_20 = (min((min(((max((-32767 - 1), -886042740))), (min(4141645662, var_7)))), ((min((!10124), (~var_13))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 = (max(var_21, ((min(((min(14174, -var_10))), ((min(var_1, (arr_2 [i_0])))))))));
        var_22 = (min(var_22, ((+(min((!1161958684465502500), (~1)))))));
        var_23 = (min((arr_0 [i_0]), ((min(2013265920, 162)))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        var_24 = (~78);
        arr_7 [i_1] = ((!(((~(arr_6 [4]))))));
    }
    var_25 = (min((min((~var_8), (min(var_5, 1849599411)))), var_0));
    #pragma endscop
}
