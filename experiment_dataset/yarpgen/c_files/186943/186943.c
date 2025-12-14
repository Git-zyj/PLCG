/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_10 &= ((!(!33185)));
        arr_4 [i_0] = 2;
        arr_5 [i_0] [i_0] = -292546895;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_8 [i_1] = (((((~(min(var_2, (arr_7 [i_1])))))) | (((((8580977731220862466 ? 1364489469 : -20831))) ? (659904814 | 13714) : (min((arr_6 [i_1]), (arr_6 [i_1])))))));
        var_11 = (-20831 < 2016100927);
    }
    var_12 = 9156;
    #pragma endscop
}
