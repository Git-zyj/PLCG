/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        var_14 = ((3593101123949283451 <= ((max(66, 46)))));
        var_15 = (min((max(29486, ((815007096 ? -29514 : 63)))), (815007109 < 4467570830351532032)));
        var_16 = 64;
    }
    var_17 = var_8;
    var_18 = var_7;
    var_19 = (min(var_19, 60604));
    var_20 = (min(var_20, (max((8941043503002736663 / 815007100), ((((224 % 13979173243358019606) ? var_10 : (0 >= 13979173243358019583))))))));
    #pragma endscop
}
