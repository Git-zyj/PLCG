/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_20 = (max((((((-(arr_3 [i_0])))) ? (min(1, (arr_3 [i_0]))) : 1)), var_6));
        arr_4 [i_0] = ((-((-(arr_1 [i_0] [i_0])))));
        arr_5 [i_0] [i_0] = ((((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_2 [i_0])))) ? ((((max((arr_2 [i_0]), 1))) ? (((var_9 || (arr_2 [i_0])))) : ((min(4, 168))))) : ((((max(var_6, (arr_0 [i_0])))) ? (!228) : (!var_15)))));
    }
    var_21 = (min(var_21, (max((((var_14 >> 27) & 31)), ((((228 ? 0 : 25746))))))));
    #pragma endscop
}
