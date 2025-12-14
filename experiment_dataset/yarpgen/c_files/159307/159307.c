/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((-9223372036854775807 - 1) ? (~var_13) : (((!(((var_2 ? 7783 : var_11))))))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_17 ^= (min(-20610, 6382771340758730158));
        arr_2 [i_0] = ((((((((64 ? (arr_0 [i_0]) : -1))) ? (arr_1 [i_0]) : 0))) ? ((7783 ? var_0 : (~236))) : (((((min(15791229924654214236, -8986128013202800160))) ? (-8986128013202800160 | 4874614701317560651) : var_5)))));
        arr_3 [i_0] = (arr_1 [i_0]);
        var_18 = (max((((arr_1 [i_0]) << (((((arr_0 [i_0]) ? 4874614701317560651 : var_7)) - 4874614701317560633)))), 5475756048631175359));
        arr_4 [i_0] [i_0] |= ((var_2 >= ((4294967295 ? (arr_0 [i_0]) : 1))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = ((var_1 ? 0 : var_0));
        arr_9 [i_1] = (((arr_6 [i_1]) ? (arr_5 [i_1] [i_1]) : (arr_5 [i_1] [i_1])));
    }
    var_19 = (var_13 ^ var_6);
    var_20 = var_4;
    #pragma endscop
}
