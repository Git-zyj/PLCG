/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_18 ^= var_12;
        var_19 -= arr_0 [i_0];
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        arr_6 [1] [1] = ((!(~var_5)));
        var_20 = (((((min((arr_4 [i_1]), (arr_4 [i_1 - 1]))))) + (((arr_2 [i_1 - 1]) ? ((var_6 + (arr_0 [i_1]))) : (((arr_2 [i_1 - 1]) * var_6))))));
    }
    var_21 = (8796025913344 ? 12942576020901505312 : 12942576020901505312);
    #pragma endscop
}
