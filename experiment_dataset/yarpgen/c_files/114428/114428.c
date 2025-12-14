/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((max(var_4, 209))) ? 317984974 : 13987541305879047045)) << (-96 + 120)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_14 [10] [10] [i_2] [20] [i_4] &= ((((~((var_11 ? -19 : -8)))) * ((((((317984974 ? 175 : 4))) >= 144115188071661568)))));
                                arr_15 [i_1] [i_1] [i_1] [5] [i_0] = ((+((-(((arr_4 [i_0]) ? (arr_13 [i_1] [i_3] [i_4 - 1]) : 8))))));
                                arr_16 [i_4 - 1] [i_3] [i_2] [i_3] [i_0] [i_0 - 2] [i_2] = 1;
                                var_19 = ((((((!-933197923) && (((1 ? 0 : 223)))))) >> (((((min((arr_7 [i_0 - 3]), -19))) || (!31180))))));
                                var_20 = (223 ? ((min((arr_9 [i_1] [i_2] [i_4]), 933197923))) : ((((!(((2698251123 ? (arr_10 [i_0] [i_3] [i_2] [i_0 + 1] [i_0]) : var_14))))))));
                            }
                        }
                    }
                }
                arr_17 [i_0] [i_0] = 28;
            }
        }
    }
    var_21 &= (min((((min(755002917315723989, var_14)))), (((((755002917315724005 ? 3353090943629730659 : 7383483132242967188))) ? 2661452445 : var_0))));
    #pragma endscop
}
