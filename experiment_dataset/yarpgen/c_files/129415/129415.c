/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (!-var_0);
    var_11 = 7529;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] [9] = ((((((arr_2 [i_0]) ^ var_6))) ? (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0]))) : (((arr_2 [i_0]) ? 35283 : (arr_2 [i_0])))));
        var_12 = ((var_8 ^ (max(((((arr_0 [i_0]) > -81))), ((14676263193444901664 ? 123 : 17536265467399548901))))));
        var_13 = (max(((7246094984184369662 ? 7832321334364931415 : 13066240492206559976)), (arr_0 [i_0])));
        var_14 = (max(var_14, ((((((7535 != (arr_2 [i_0])))) ^ (((!(((var_5 ? 1 : var_6)))))))))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 12;i_1 += 1)
    {
        arr_8 [i_1] = -23315;
        arr_9 [i_1] = 8709181468298659066;
        var_15 ^= ((((arr_7 [i_1]) <= 13325303953578076237)));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_16 = (max(var_16, (((-((7534 ? 11200649089525181954 : 57982)))))));
        var_17 += ((((max(167, -4616013399881254718))) ? ((max((arr_13 [i_2]), (arr_10 [i_2])))) : 1));
        var_18 = (arr_11 [i_2]);
        arr_14 [i_2] = ((-4708922442585137685 ? 17231 : 82));
    }
    #pragma endscop
}
