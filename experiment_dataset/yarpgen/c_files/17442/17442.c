/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, var_4));
    var_20 = (((((5317666068405748261 ? -524790363888392536 : 4398046511103))) > var_3));
    var_21 = (min(var_21, ((min(var_4, (!3843))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_22 = (--12);
        var_23 = -8748049668026502817;
    }
    #pragma endscop
}
