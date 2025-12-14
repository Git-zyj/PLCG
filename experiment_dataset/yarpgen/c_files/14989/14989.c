/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_16 = 3123837744292968855;

        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            var_17 = (max(var_17, -1909630823776439927));
            var_18 += 4398046511103;
            var_19 = (min(var_19, 3123837744292968855));
        }
        var_20 += 2822001775;
        arr_4 [i_0] = 2147483633;
        var_21 -= 7;
    }
    var_22 = 0;
    #pragma endscop
}
