/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 21;i_3 += 1)
                {
                    {
                        var_20 *= ((((-(((arr_1 [i_3]) ? var_13 : 1394872617)))) != ((1 ? (((20537 ? (arr_8 [i_0] [i_1]) : 1))) : var_10))));
                        var_21 = (max(var_21, ((-((1 ? 1 : 1))))));
                        var_22 = (min(var_22, (((~(((arr_10 [1] [1] [1] [i_2] [i_3]) ? (17798369654447831769 ^ 1) : (arr_5 [i_1]))))))));
                    }
                }
            }
        }
        var_23 = (((1 != var_17) ? (min((((arr_0 [i_0]) ^ var_18)), 7)) : (((5181648132794497507 - 1395749649) + 2147137490))));
        arr_13 [i_0] [i_0] &= (max(((1 ? 2755170606 : 1)), (((((1 ? -7 : -1))) ? var_3 : (max(9309, 2755170622))))));
        arr_14 [i_0] [i_0] = 4194303;
    }
    var_24 ^= (-47 * var_4);
    #pragma endscop
}
