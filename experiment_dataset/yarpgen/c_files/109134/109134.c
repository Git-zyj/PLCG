/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0 + 1] [i_0 - 1] = ((((((var_0 - var_10) || (0 != 65250)))) * ((((var_10 || var_10) != (((arr_1 [i_0]) & (arr_0 [i_0] [i_0]))))))));
        arr_3 [6] = (((((((var_5 >> (((arr_1 [1]) - 7513685065311415029))))) ^ (((arr_0 [i_0] [0]) / (arr_1 [9]))))) / (((((((1 / (arr_0 [i_0 + 1] [i_0 + 1])))) || (10571504063811820379 / 173)))))));
    }
    var_11 = ((((((var_1 & var_3) != (var_10 <= var_2)))) ^ (7308523458296170957 <= -7140778745531268066)));
    #pragma endscop
}
