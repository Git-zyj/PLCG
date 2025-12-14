/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = min(var_1, ((min(-894213225, 7682))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = (((((min(46415, (arr_2 [i_0] [i_0]))) != ((min((arr_0 [i_0]), (arr_1 [i_0] [i_0])))))) ? var_2 : ((((26203 >= (arr_2 [14] [14]))) ? var_5 : 8560847363624079301))));
        arr_4 [i_0] = ((!((min((arr_0 [i_0]), 46415)))));
    }

    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        var_14 = (min(var_14, (((~(((arr_6 [i_1 - 1]) ? (((7682 << (((((arr_5 [22] [22]) + 3638167937909803213)) - 28))))) : -4971238599220856454)))))));
        arr_7 [i_1] = (-var_10 - -3974915806684949190);
    }
    #pragma endscop
}
