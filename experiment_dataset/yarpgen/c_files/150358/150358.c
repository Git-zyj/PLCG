/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((((((var_4 ? var_4 : var_1))) ? ((var_7 ? var_8 : -3802935654848122791)) : (max(var_3, -1088018749354934463)))), var_9));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_11 = max(((var_7 ? 8361753149898186098 : (((~(arr_1 [i_0])))))), var_6);
        arr_2 [i_0] [i_0] = ((!((((var_0 + 9223372036854775807) >> (-6708422347445905000 + 6708422347445905036))))));
        arr_3 [i_0] = arr_0 [i_0] [i_0];
    }
    #pragma endscop
}
