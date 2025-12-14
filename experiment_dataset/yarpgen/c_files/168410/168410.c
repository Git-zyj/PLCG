/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((max(-89, 97)))) | (2598604187613179288 & 2911547179));
        var_20 = var_9;
        var_21 = (((min(86, 109)) << ((((((~(min(var_0, 1663824635)))) + 349113663)) - 19))));
    }
    var_22 = (min(((((((32819 >> (-73 + 84)))) ? (max(-2506209, -18)) : ((min(-96, 1)))))), (((100 ^ var_13) + (((9496534352748999242 ? var_10 : var_0)))))));
    var_23 = (((max((max(var_13, 113)), (((12486 ? var_10 : 1741294728))))) < ((((((max(6344862296421733725, 674402870871560106))) || (var_17 ^ var_7)))))));
    var_24 = (((((12499 ? var_4 : (-1633836292227756969 ^ 123)))) ? ((((var_14 <= (8916003841166571246 | var_6))))) : (max((-1743176335 && 1659273983), (min(var_14, 3970204208))))));
    #pragma endscop
}
