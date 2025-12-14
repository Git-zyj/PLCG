/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = 7197408897317450367;
        var_17 &= (min(((((max(13584677670454742465, 1))) ? 13584677670454742465 : (arr_2 [i_0]))), (min((min((arr_2 [18]), 13584677670454742453)), ((17732778164933969362 ? var_8 : -12))))));
        arr_4 [i_0] = (!var_10);
    }
    var_18 = (max(var_18, ((max(5569053418777624569, 11387283870387584037)))));
    var_19 = (((((4862066403254809154 ? (-9223372036854775807 - 1) : ((var_13 ? var_6 : var_12))))) ? var_15 : var_10));
    #pragma endscop
}
