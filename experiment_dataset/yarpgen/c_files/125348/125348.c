/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_2 ? (~var_5) : (((956824503 & var_11) | ((var_6 ? -392104892 : 0)))));
    var_14 = 1347669869;

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0 - 1] [i_0 - 3] = ((arr_0 [i_0 + 3]) ? (max(var_6, (arr_0 [i_0 + 3]))) : (((!(arr_0 [i_0 - 2])))));
        var_15 += (!var_9);
    }
    var_16 = min(((((1487052186 ? -1487052187 : 8388604)) / -8388606)), var_9);
    #pragma endscop
}
