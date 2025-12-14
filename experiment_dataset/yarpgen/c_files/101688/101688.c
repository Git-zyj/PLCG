/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= ((~(max((var_6 + 139611588448485376), (1736993110 > var_1)))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((((min(1, 0)))) != (max(-1736993111, 6972235509980965812))));
        var_14 = (~1);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_2] [i_0] [i_1] &= ((+(min((arr_6 [i_1 - 1] [i_1 - 1]), (arr_4 [i_2] [i_2])))));
                    var_15 += (((175 ? 18589 : 3350780409)));
                    var_16 ^= (min(((min(var_11, (arr_4 [i_1 + 2] [i_1 + 2])))), (arr_4 [i_1 - 1] [i_1])));
                }
            }
        }
    }
    var_17 &= (((!(4294967295 & var_1))));
    var_18 &= ((8127449827781642386 ? 18446744073709551615 : 270856048));
    var_19 = var_8;
    #pragma endscop
}
