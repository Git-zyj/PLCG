/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_16 = ((((((arr_1 [i_0]) ? -3644 : (arr_3 [i_0] [i_0])))) ? 3644 : ((~(arr_3 [i_0] [i_0])))));
        var_17 = ((+((30064 ? (-32767 - 1) : 1))));
        var_18 = 1;
    }
    var_19 *= ((((((32744 || 1) * ((min((-32767 - 1), 3657)))))) ? 28 : ((min((!var_10), (var_2 >= var_13))))));
    var_20 = (min(var_20, var_6));
    var_21 -= max((((var_13 + (((-3522273881994919910 ? 76 : 1)))))), (((max(32, 15693017049817279099)) | (((max(var_9, var_11)))))));
    #pragma endscop
}
