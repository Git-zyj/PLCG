/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (max((~var_11), ((-(max(var_16, 3371346601))))));
        arr_5 [i_0] [i_0] = 3371346626;
        arr_6 [i_0] = ((-(((arr_1 [i_0] [i_0]) + (arr_3 [i_0])))));
        arr_7 [8] &= (max(((min((arr_3 [8]), (arr_2 [i_0 - 1])))), (arr_2 [i_0 - 2])));
        arr_8 [i_0] [i_0] = (((194 ? ((4645912892001137079 | (arr_1 [i_0] [i_0]))) : (max(923620669, 10898119986877289559)))) >> 1);
    }
    var_20 = var_19;
    var_21 = (~var_15);
    #pragma endscop
}
