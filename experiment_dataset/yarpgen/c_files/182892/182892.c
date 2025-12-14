/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_3 != (((2096616485 | ((var_1 >> (-2096616481 + 2096616497)))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] [1] = (3501758816 && 14324196030669423391);

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_13 = (min(var_13, (((0 ? 4092612722 : 1046918650)))));
            var_14 = ((-(((((arr_2 [i_0]) > 1)) ? 18371995141899400644 : (arr_5 [i_0])))));
            var_15 = (max(var_15, (((var_5 ? var_10 : (793208479 & 14324196030669423405))))));
        }
    }
    #pragma endscop
}
