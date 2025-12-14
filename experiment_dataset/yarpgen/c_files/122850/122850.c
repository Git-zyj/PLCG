/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_16 += (max((((((1588552457 ? 17689386684963397491 : var_6)) != 16600382589135393376))), (((arr_3 [11]) >> (119 - 56)))));
        arr_4 [i_0] [i_0] = ((16600382589135393396 ? -1588552448 : 34351349760));
        arr_5 [i_0] [i_0] = -3700;
        var_17 = ((((10 && 18446744073709551605) > var_4)) ? var_11 : 1846361484574158245);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_10 [i_1] [i_1] |= -12063;
        arr_11 [i_1] = (16600382589135393376 + 1588552457);
        var_18 ^= (((((-2147483636 ? 0 : 25813))) ? -10913 : 16600382589135393377));
    }
    var_19 = (var_11 && var_9);
    #pragma endscop
}
