/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= (max((min(((var_9 ? var_9 : 255)), -65994212)), (max((max(var_2, var_11)), (var_10 * 0)))));
    var_18 = (max((((((0 ? 783296815033276588 : 0))) ? 255 : 245)), (((1 == ((max(var_4, 1))))))));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_19 = (max(var_19, ((((arr_3 [i_0 + 1]) % (((~var_8) % ((max(var_2, 255))))))))));
        arr_4 [i_0 + 1] [i_0] |= (~(((24352 < 255) | 245)));
        var_20 = (min((((var_12 ? var_10 : var_11))), var_8));
    }
    var_21 = ((6996582984828766842 ? -18893 : 4294967295));
    #pragma endscop
}
