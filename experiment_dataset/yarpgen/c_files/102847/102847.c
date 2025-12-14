/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (((~1) ? -19823 : ((-32759 ? 699417839115606995 : 224))));
        arr_3 [i_0] = 2;
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        arr_6 [i_1] = (!((max(-699417839115606996, 137183349007846809))));
        var_14 &= (((~(~1))));
        var_15 = (min(((97 ? -4165648764480303733 : 4200318403)), (!-4929575702845078742)));
    }
    var_16 = (!var_8);
    #pragma endscop
}
