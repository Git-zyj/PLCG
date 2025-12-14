/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_8 ? var_9 : ((-8704604278980325399 ? 1772858989 : 1772858989))));

    for (int i_0 = 4; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_12 = (max(var_12, (1 & 5408341451019510391)));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_13 = ((-125 ? 0 : 1772858978));
            arr_5 [i_0] [i_1] = (((arr_4 [i_1] [3] [i_0]) <= var_4));
        }
    }
    for (int i_2 = 4; i_2 < 21;i_2 += 1) /* same iter space */
    {
        var_14 ^= (max(((2522108307 ? 1 : -1379120714)), (((((2522108317 ? -8704604278980325399 : 549069075))) ? ((4715 ? -498405453 : var_3)) : var_5))));
        arr_9 [20] |= var_4;
    }
    for (int i_3 = 4; i_3 < 21;i_3 += 1) /* same iter space */
    {
        var_15 *= ((((max(((-498405445 ? -3997 : 76)), ((min(var_4, var_1)))))) == (arr_3 [i_3 + 1] [i_3])));
        var_16 = (min(var_16, ((((max(3996, -43))) ? 1 : -1919897564003720823))));
        arr_12 [i_3] = (max(((-8147699610611956444 ? 11353693734821586184 : -25729)), (((8147699610611956467 ? -8949 : (var_5 >= var_3))))));
    }
    var_17 ^= ((8948 ^ (121149245 == 8948)));
    var_18 |= (!var_0);
    #pragma endscop
}
