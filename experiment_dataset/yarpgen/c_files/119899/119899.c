/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -0;
    var_20 = (((((-(var_4 - var_10)))) ? var_1 : -68));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_21 = (!-8559403700152953704);
        var_22 = (max(65535, 11153363357530147843));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_23 |= (max((((((-127 - 1) ? 72 : 14517201061131260231)) - 65533)), (((((max(7136648673779024244, (arr_2 [i_1])))) ? -1 : 1)))));
        var_24 = (min(var_24, var_17));
        var_25 = (arr_1 [i_1]);
    }
    var_26 = ((~((-var_4 ? 107 : (!var_9)))));
    var_27 = 1115232694;
    #pragma endscop
}
