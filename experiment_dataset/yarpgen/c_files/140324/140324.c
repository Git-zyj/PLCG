/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 24;i_0 += 1)
    {
        var_11 ^= ((0 ? 3538538564 : -2535998890823921274));
        var_12 = 756428713;
        var_13 &= 7774236448614520626;
        arr_3 [i_0] [23] = (min(((((min(756428719, 3538538545))) ? ((756428711 ? 756428736 : 1)) : 3313447172)), ((-4939602670285235109 ? ((0 ? 3538538542 : 30773)) : (((61 ? 1199404684 : 7)))))));
    }
    var_14 = (max((((((-64 ? 57994 : 24240))) ? 215 : ((24 ? 7700 : 73)))), (((((-7700 ? 756428719 : 521249907))) ? 254 : 7700))));
    #pragma endscop
}
