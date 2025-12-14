/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((var_0 ? var_2 : -23646))));
    var_12 *= var_10;
    var_13 = 23670;
    var_14 &= 24;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_15 -= (max((arr_1 [i_0]), ((((216 <= (-2147483647 - 1))) ? (arr_1 [6]) : ((220 ? (arr_0 [i_0]) : (arr_1 [i_0])))))));
        arr_2 [i_0] [1] = (((arr_0 [i_0]) ? ((((arr_0 [i_0]) ? 28 : (arr_0 [10])))) : (((((arr_0 [i_0]) ? 8 : -5507812205915270660)) | (((243 ? -23646 : 215)))))));
    }
    #pragma endscop
}
