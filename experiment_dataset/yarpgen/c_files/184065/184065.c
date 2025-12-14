/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= 14336;

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_11 = 51384;
        var_12 = (((((var_5 | (((arr_2 [i_0 + 2] [1]) ? var_8 : var_7))))) ? (arr_1 [i_0]) : (arr_0 [i_0])));
        arr_3 [i_0] [i_0] = 4294967295;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 18;i_3 += 1)
                {
                    {
                        var_13 = (((((arr_8 [i_0] [i_0 + 2] [i_0]) && (arr_8 [i_0] [i_0 - 1] [i_0]))) ? ((((((255 ? var_4 : 1))) || -8914))) : (!1)));
                        arr_14 [i_0] [i_0] [1] [1] = (arr_10 [i_0]);
                        var_14 -= (min(254, 24));
                        var_15 ^= (arr_8 [i_0 - 1] [2] [i_3]);
                        var_16 = (max(-0, 2037862509));
                    }
                }
            }
        }
    }
    var_17 = 51205;
    var_18 = (var_1 - (((63 ? 9223372036854775807 : 233))));
    #pragma endscop
}
