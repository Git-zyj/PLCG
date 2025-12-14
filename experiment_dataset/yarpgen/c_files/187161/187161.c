/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_0;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_18 = var_6;
                    var_19 = ((((max(var_5, (var_16 > var_3)))) ? (max(1, var_13)) : (-3466523231850451282 >= 228586160)));
                    var_20 = ((((max((~var_7), (arr_1 [i_0] [i_0])))) ? (((var_8 ? (arr_4 [i_0]) : (((arr_2 [i_0] [i_0]) & var_16))))) : (((((arr_3 [i_0] [3] [i_0]) ? 16462133149785871869 : 252)) >> (1984610923923679746 - 1984610923923679724)))));
                }
            }
        }
        var_21 = (min(((~(arr_7 [i_0] [i_0] [i_0]))), (((((var_7 >> (255 - 254)))) ? 1 : ((max(32, -8)))))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 23;i_5 += 1)
                {
                    {
                        var_22 = ((0 << (3725498986648842193 - 3725498986648842162)));
                        var_23 -= 120;
                        var_24 = ((((var_10 <= (((4227858432 > (arr_6 [i_0] [12])))))) ? (arr_10 [i_5] [i_4] [i_0]) : (((((var_8 > (arr_8 [i_0] [i_3] [i_0]))) ? var_8 : 54026)))));
                    }
                }
            }
        }
        var_25 = max((arr_4 [i_0]), ((-(arr_7 [i_0] [i_0] [i_0]))));
    }
    #pragma endscop
}
