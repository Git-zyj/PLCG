/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125529
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_4 [i_0 + 1] = (-var_14 ? 2731904159472723185 : (2005698394 / -9223372036854775799));
        var_16 = (~2005698394);
        arr_5 [i_0 + 1] = ((~(-127 - 1)));
        var_17 = 9;
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        arr_8 [i_1] = (max(12, -2005698417));
        var_18 = (min(var_18, ((((((1 && ((min(2480586064, 2005698396)))))) << ((((-1 ? var_13 : 1)) - 16319814518069904635)))))));
    }
    var_19 = var_5;
    var_20 = ((65502 << (((max((2005698411 == -2005698388), 9007197107257344)) - 9007197107257341))));
    #pragma endscop
}
