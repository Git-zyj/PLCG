/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        var_12 = (9212083274521078435 / 9212083274521078423);
        var_13 = (min((arr_1 [14]), (((((-114628192 >= (arr_1 [i_0 + 1]))) ? ((4127147391 >> (((arr_0 [i_0]) - 1292155402983762693)))) : 96)))));
        var_14 = (arr_0 [i_0]);
        var_15 = (max(var_15, 1735924011265732363));
    }
    var_16 = (var_7 >> (var_11 + 4917871335421694256));
    #pragma endscop
}
