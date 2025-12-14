/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((~(((25 * 0) >> (1572388020 - 1572388003)))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        var_18 = (min(var_18, (((2 && (((24 ? 1 : 3))))))));
        arr_2 [i_0] = ((((0 ? 8 : 0)) < (~-1572388018)));
        var_19 = ((4294967295 && (~364799894)));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_20 ^= ((((!3737260809) && (127 / 1))));
        var_21 = (((((((4294967293 ? 813924595 : 24415)) + 65535))) ? (--129) : ((((((-24416 ? 4294967295 : 72057593970819072))) || (1 << 0))))));
        var_22 ^= (--3329);
        arr_5 [i_1] = ((-(((!(8853 & -6980))))));
    }
    var_23 = ((83 ? 1 : ((((0 != 67108863) | (524286 & -827820523))))));
    var_24 = (((~24415) | ((0 ? -31417 : 1677263453347824020))));
    #pragma endscop
}
