/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, (((var_9 << (var_12 - 1))))));
    var_19 = (max(var_19, 7));
    var_20 = 24;

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0] = -32767;
        arr_4 [7] [i_0 + 2] = (((((24 ? 9223372036854775798 : -32765))) ? 16 : (28 | 65535)));
        arr_5 [i_0 + 3] = ((((((576460752302374912 ? 18446744073709551594 : ((34 ? 32766 : 65516)))) + 2147483647)) << (65535 - 65535)));
        var_21 = ((1 ? 0 : 0));
    }
    #pragma endscop
}
