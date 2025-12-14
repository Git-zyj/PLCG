/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((!(var_12 >= 37639)));
    var_15 = (5634167275076748663 ? -24855103 : 1339757942);

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_16 = 138;
        var_17 = var_8;
        var_18 *= (~15590041567211436524);

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_19 = arr_4 [i_0] [i_1] [i_1];
            var_20 = (((~var_10) ? ((var_13 / (arr_4 [i_1] [i_1] [i_0]))) : (arr_4 [i_0] [20] [i_1])));
            var_21 -= var_3;
            var_22 = (arr_5 [i_0] [i_1] [i_0]);
        }
    }
    #pragma endscop
}
