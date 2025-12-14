/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((((var_10 ? -1906113287534681069 : 4294967271))) / (min(8934228136700468347, -1)))) % (min((min(1906113287534681061, 9512515937009083283)), var_13))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [5] = (arr_1 [i_0]);
        arr_4 [7] = var_12;
        var_17 = (min(1, (!13)));
        var_18 = (min(var_18, (((1 || (((9512515937009083285 ? 3646709625 : 14579795490895965141))))))));
    }
    var_19 = 3646709625;
    #pragma endscop
}
