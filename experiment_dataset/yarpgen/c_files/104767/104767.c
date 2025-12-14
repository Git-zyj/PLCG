/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((var_14 && (~var_13))) ? (((-427374999391608065 + (var_12 < var_13)))) : var_16));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_19 = (min(((6647970712132873643 ^ (min(-1892274813391819180, 6)))), var_3));
            var_20 *= ((min((var_17 <= var_10), 18432498677987809992)) >= ((((16880289085912063141 && (var_1 - var_16))))));
        }
        arr_6 [i_0] [i_0] = (!7791682160511242280);
    }
    #pragma endscop
}
