/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((!1) > var_1);

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_16 = (min(var_16, 13219597309084395449));
        var_17 = (((5227146764625156158 ? -5463642913946057127 : 158)));
        var_18 = (max(var_18, ((((((65535 ? 13219597309084395463 : 502994080))) ? 76 : 65522)))));
        var_19 = ((-1 | 0) ? -5088002654583298662 : ((((((190 ? 172 : -6512489531598713724))) ? -229 : 1024))));
        var_20 = (+-5227146764625156173);
    }
    #pragma endscop
}
