/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((min(2860402238, 3160888649)) < (min(var_9, 16701987920182952514)))))));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_17 = (min((((10184963097472880489 > (max(251658240, -32763))))), (~var_0)));
        arr_3 [i_0] [i_0] = min((~var_8), (2080924764 <= 16709));
        var_18 = ((((~var_13) + 2147483647)) >> (((~14562124831092793611) - 3884619242616757988)));
    }
    var_19 = var_2;
    #pragma endscop
}
