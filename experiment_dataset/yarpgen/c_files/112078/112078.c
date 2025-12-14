/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = ((min(73, (arr_1 [i_0] [i_0]))) < (11537450741219380054 | 14055135485439450978));
        var_12 ^= (max(((((2879090834 < (arr_1 [9] [1]))) ? (min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))) : ((24776 ? (arr_1 [i_0] [i_0]) : -14814)))), ((((1415876462 ? 14814 : 32905))))));
        arr_3 [i_0] [i_0] = ((((((((24776 ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))) ? ((-14796 ? 1979168974 : 206118583)) : (~1)))) ? (max((min(3968, (arr_0 [i_0] [i_0]))), 14826)) : ((8611536137680240525 ? ((max(-14797, 91))) : (((2287641797 < (arr_1 [i_0] [i_0]))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_13 ^= 288089638663356416;
        arr_6 [i_1] = 14844;
    }
    var_14 ^= ((!(((8611536137680240530 & (((1979168974 ? var_9 : 169))))))));
    #pragma endscop
}
