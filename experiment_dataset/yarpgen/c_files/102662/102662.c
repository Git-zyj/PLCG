/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= ((!(var_2 ^ var_17)));
    var_20 = (max(var_20, ((var_2 && ((min(0, 406601847798540505)))))));
    var_21 = min(var_4, (-47 / 3028157006));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_22 ^= (!var_10);
        var_23 = (((~var_17) ^ (~3028156992)));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_24 &= ((~(var_17 + var_9)));
        var_25 &= (max((max((arr_5 [i_1]), var_5)), ((-(arr_5 [i_1])))));
    }
    #pragma endscop
}
