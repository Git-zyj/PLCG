/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            var_16 = ((-((min((arr_0 [i_1 + 3]), (arr_3 [i_1 + 3]))))));
            var_17 = var_6;
        }
        var_18 += (((var_5 - 65535) ? ((max(-var_13, var_9))) : (max(var_6, (max(65532, 18336801098186984274))))));
    }
    var_19 = ((((((-31218 + var_6) ? var_3 : (((max(var_5, var_10))))))) + (min(var_0, ((var_2 ? var_13 : var_1))))));
    #pragma endscop
}
