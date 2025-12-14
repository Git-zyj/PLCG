/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_14 -= 290700802;
        arr_3 [i_0] = (var_12 & var_1);
        arr_4 [i_0] = ((var_6 % (max(19126, ((var_3 ? var_5 : 0))))));
        arr_5 [11] [11] = ((((((228 >> (((arr_1 [i_0] [i_0]) - 306285247)))))) ? (941359142 | 255) : ((((~-5017) && (171 > var_1))))));
        var_15 = var_0;
    }
    var_16 = ((((((max(2312, 3025660916))) ? (((var_7 ? var_5 : 2882756285119071772))) : (~var_10))) ^ 4294967295));
    #pragma endscop
}
