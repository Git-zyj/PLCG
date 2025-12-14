/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((!32767) ? (-32767 - 1) : var_9));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [17] = (arr_0 [i_0] [3]);
        arr_3 [i_0] [i_0] = (min((max((((!(arr_0 [i_0 - 1] [i_0])))), ((~(arr_0 [i_0] [i_0]))))), (((!((((arr_1 [9] [i_0]) ? (arr_1 [i_0] [i_0]) : 221497312))))))));
    }
    var_20 = ((+((-(((-32767 - 1) ? var_2 : var_9))))));
    #pragma endscop
}
