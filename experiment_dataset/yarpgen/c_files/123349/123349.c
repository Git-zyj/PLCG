/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    var_12 = (max((-27486 % 13779982418990914832), var_1));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_13 = var_3;
        arr_2 [i_0] [i_0] = ((((var_4 <= (3 / 1830303864087230660)))));
        var_14 = 16616440209622320984;
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_5 [i_1] = ((1830303864087230632 ? 0 : 63034));
        var_15 = (((!4051350933) ? ((((1830303864087230631 ? 8191 : var_0)) << (26 - 18))) : (min(((-(arr_3 [i_1] [i_1]))), ((~(arr_3 [i_1] [i_1])))))));
    }
    var_16 = 2429849104;
    #pragma endscop
}
