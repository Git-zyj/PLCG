/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-var_3 ? var_7 : 18614));
    var_15 ^= 1865675053;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_16 = (max(var_16, ((((min(((17804568123393760315 << (-6972820062216279912 + 6972820062216279935))), (((20657 ? 18614 : (arr_1 [20])))))) * ((2114908169866421772 ? 642175950315791301 : (-32767 - 1))))))));
        var_17 = (min(((-109 ? -22263 : (((-9223372036854775807 - 1) ? (arr_1 [i_0]) : -1573713538)))), (min(52479, (arr_1 [i_0])))));
    }
    #pragma endscop
}
