/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_18 = (min(((((arr_1 [i_0 - 1] [i_0 - 2]) || (arr_0 [i_0 - 1] [i_0])))), (arr_1 [i_0 - 1] [i_0 - 1])));
        var_19 = ((!(((((((arr_2 [i_0]) | 3210952053))) ? (((arr_0 [i_0 - 2] [i_0 - 2]) ^ (arr_0 [i_0] [i_0]))) : ((-(arr_0 [i_0] [i_0 - 1]))))))));
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        var_20 -= ((+(((min((arr_1 [8] [i_1]), -451142305366782181)) ^ (arr_5 [i_1 + 2])))));
        var_21 = (min(var_21, ((((arr_2 [i_1 + 1]) / (arr_1 [i_1 + 1] [i_1 - 1]))))));
    }
    var_22 += var_15;
    #pragma endscop
}
