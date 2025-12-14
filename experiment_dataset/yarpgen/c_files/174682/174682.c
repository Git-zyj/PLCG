/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = (max(var_11, ((((((-((4623142534319142094 ? (arr_0 [i_0]) : 18692))))) ? (((~(~85)))) : ((11 ? (-28 * 1) : (var_9 / -8140))))))));
        var_12 = 1005831113013386828;
        var_13 = (((min(((min(63, 1))), ((307073435472900354 >> (-121 + 156))))) / (~-103)));
    }
    var_14 = 12469;
    #pragma endscop
}
