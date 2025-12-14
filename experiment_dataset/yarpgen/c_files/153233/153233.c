/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (!var_9);

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = (((max(((var_2 ? var_0 : var_9)), ((-8897305032229097313 ? (arr_2 [i_0]) : (arr_1 [i_0]))))) | (((-6894377067033107825 + 9223372036854775807) << (6894377067033107825 - 6894377067033107825)))));
        arr_4 [i_0] = (((((min((arr_1 [i_0]), (arr_1 [i_0]))))) <= (max(6894377067033107824, -6894377067033107846))));
    }
    var_11 = ((var_9 ? 6894377067033107825 : (~var_0)));
    var_12 = (min(((((((min(var_8, var_5)))) == ((255 ? var_4 : 786432))))), var_5));
    var_13 = var_8;
    #pragma endscop
}
