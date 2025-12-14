/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(((var_11 ? 13635732359661235485 : var_7)), var_2));
    var_13 = ((((15621662128406749212 ? var_1 : 7535404115873887870)) == var_8));

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_14 ^= 83;
        var_15 ^= (!1796705273);
    }
    var_16 = ((!(1342092732 <= var_10)));
    #pragma endscop
}
