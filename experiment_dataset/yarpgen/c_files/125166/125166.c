/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (!-1373753057);
    var_16 = (min((((!((max(-574721460, 17564)))))), (min(var_14, 55))));
    var_17 = -1373753057;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_7 [i_1] [i_1] = ((~(220 | 1373753066)));
            arr_8 [i_0] [i_1] = ((~(arr_0 [i_1])));
        }
        var_18 = (max(var_18, (arr_1 [i_0] [i_0])));
    }
    #pragma endscop
}
