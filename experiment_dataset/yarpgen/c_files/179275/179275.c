/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 += (((11289 <= 0) ? (((((-1 ? 8984251202950989110 : 31))) ? (((-23794 ? 1 : 1))) : (var_0 - var_5))) : (((!var_9) - (max(var_2, 8984251202950989110))))));
        var_14 = (var_7 - var_8);
        var_15 += 9462492870758562523;
    }
    var_16 = ((!(((131071 ? (((9462492870758562523 ? 3671172353 : 0))) : ((var_12 ? 18608 : 9462492870758562519)))))));
    #pragma endscop
}
