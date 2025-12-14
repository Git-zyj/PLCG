/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_12 ^= (max(10, 8959204307319447091));
        arr_2 [i_0] = (1460845647740726051 <= -6220815887625557774);
        arr_3 [14] |= 4;
        arr_4 [i_0] = ((arr_1 [i_0]) / (((arr_1 [i_0]) | -6220815887625557762)));
    }
    var_13 = ((!((max(((0 ? 12369821960166841099 : 17)), var_3)))));
    var_14 = ((+(((4294967295 & 2147483647) ? (255 || var_9) : 244))));
    #pragma endscop
}
