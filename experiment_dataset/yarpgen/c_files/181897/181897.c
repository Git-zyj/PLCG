/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, 3160153659));
    var_15 ^= (((18446744073709551615 + ((max(var_13, var_3))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [6] = (((((~((-33 ? 33 : 40))))) ? (((((!(arr_1 [14]))) ? (17703657379815101474 || 1) : (1 && 13621907676193650522)))) : ((((((arr_1 [i_0]) % 30))) ? (var_11 / -109) : 528482304))));
                    var_16 = (max(var_16, (((-1 / (max((arr_3 [i_1 - 1] [i_0] [i_1 - 1]), (arr_3 [i_1 - 1] [i_0] [i_1 - 1]))))))));
                }
            }
        }
    }
    var_17 &= (-((var_11 ? 743086693894450165 : (((max(var_5, 33)))))));
    #pragma endscop
}
