/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!255);
    var_18 = (min(var_18, var_9));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            arr_4 [i_1] = (((((arr_3 [i_1 - 1] [i_1 + 2] [i_1 + 3]) >> var_6)) * (!var_3)));
            var_19 &= ((((!(((var_4 ? 141 : var_4))))) ? ((((184 || (((65535 ? 61440 : 128))))))) : var_0));
        }
        var_20 += -9156;
    }
    #pragma endscop
}
