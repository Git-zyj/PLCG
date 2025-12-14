/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (arr_0 [13] [i_0]);
        var_14 = (min(((-((min(41764, var_8))))), (((((max(var_10, (arr_2 [i_0] [11])))) >= (((-32760 && (arr_2 [7] [i_0])))))))));
        var_15 = (((arr_2 [1] [i_0]) ? ((-(arr_3 [i_0]))) : (((!(arr_0 [1] [i_0]))))));
    }
    var_16 = ((-32764 ? var_2 : ((((14454662944385464382 ? var_2 : 524032))))));
    #pragma endscop
}
