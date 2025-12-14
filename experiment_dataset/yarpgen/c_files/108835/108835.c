/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = min((((13993323859423250851 & 13993323859423250855) - -415788363)), ((var_3 ? 4453420214286300788 : (!13993323859423250860))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_21 = -6698168504618734211;
        var_22 = (arr_0 [i_0]);
    }
    var_23 = ((((min((13993323859423250822 % 13993323859423250858), ((min(var_8, var_1)))))) || ((((var_6 ? var_2 : var_1)) > var_3))));
    #pragma endscop
}
