/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123302
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((max(((max(1, -2088459639))), ((301290351 ? 18205 : 140737488355327))))) ? (((((max(1, 2088459639)) >= 253)))) : var_12));
    var_20 -= var_13;
    var_21 = (2088459649 << (1885503701 - 1885503701));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_22 ^= (max(9223372036854775800, (-9223372036854775807 - 1)));
        arr_2 [3] = (min(((max((max(1, -2)), (!0)))), (max(62869, 1))));
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        var_23 &= 254;
        var_24 += (((65533 & -1834696868) & -299372899));
        arr_5 [i_1 - 1] [i_1] |= (min((max(26464, 4801180670678985820)), (-2237247847698610770 + 1)));
    }
    #pragma endscop
}
