/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_10 = (min(var_10, (((-(min(2808870840, var_9)))))));
            var_11 = (max(var_11, (arr_4 [i_0] [4])));
            var_12 = (min(var_12, (((-(((arr_3 [i_0 - 1]) ? (arr_3 [i_0 + 1]) : (arr_3 [i_0 + 1]))))))));
        }
        var_13 ^= (var_5 % 1);
        var_14 = (min(var_14, ((((arr_1 [i_0 - 1]) == ((~(arr_1 [i_0 - 1]))))))));
    }
    var_15 = (max(var_15, (--20385)));
    #pragma endscop
}
