/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_11 *= ((191 ? -7227472777022117054 : (~11219271296687434561)));
        var_12 ^= ((3230061847 ? (5 + 2891052238) : -1015808));
    }
    var_13 = (((((-((1125899906842624 ? 2766212626 : -546585966025085151))))) ? (!3230061847) : 81));
    var_14 = ((~(((~75) ? ((1064905448 ? 7227472777022117054 : 16712206905729936694)) : -445305975))));
    #pragma endscop
}
