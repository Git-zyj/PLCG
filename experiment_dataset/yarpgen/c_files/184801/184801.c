/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [4] = ((5329 ? 1152239657364493262 : 7182967864754586234));
        var_13 = (arr_1 [i_0] [i_0]);

        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            arr_5 [11] = 236;
            var_14 *= ((-1 > (94 ^ 5438)));
        }
        var_15 = (min(var_15, (arr_3 [i_0] [5])));
    }
    var_16 &= (max(var_11, -16104));
    var_17 = ((((!((max(1, 160))))) ? (((((769064153 ? 243 : 6120699072371577415))) ? -15572 : 1)) : var_9));
    var_18 = (min(var_3, (~var_0)));
    #pragma endscop
}
