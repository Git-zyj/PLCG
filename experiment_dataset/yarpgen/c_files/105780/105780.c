/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_13 = 67108848;
        arr_3 [i_0] = ((!((min(-67108848, 67108842)))));
    }
    for (int i_1 = 3; i_1 < 22;i_1 += 1)
    {
        arr_7 [i_1] = (max((((!((max(-67108850, -67108849)))))), (min((min(-67108843, -67108842)), (67108842 + -67108850)))));
        var_14 = ((!((min(-67108846, -67108848)))));
        arr_8 [i_1] |= (max((min(((67108829 ? 67108847 : 67108838)), (67108849 & -67108839))), (67108841 || 67108837)));
    }
    var_15 = (max(var_8, (max((min(67108841, 67108849)), (67108821 == 67108842)))));
    #pragma endscop
}
