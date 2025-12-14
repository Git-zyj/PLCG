/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 4993850011692366275;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (min(28, (((max(var_8, (arr_0 [i_0])))))));
        arr_5 [i_0] [i_0] = ((((min(((max(28, 1658984921))), (arr_3 [i_0])))) || 4993850011692366307));
    }
    var_18 = max((((((min(-212566975, 13))) ? 29 : (!1)))), (((25578 ? -1 : -4364455618774578727))));
    #pragma endscop
}
