/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -5133785471062716607;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] [5] = (((arr_1 [3]) < var_5));
        arr_4 [i_0] = ((!-6640048064564404180) | (arr_1 [i_0]));
        var_20 = (arr_1 [i_0]);
    }
    var_21 = 7566953042819020906;
    #pragma endscop
}
