/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (33554431 ? -8779163376291289563 : -1398877750);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_16 = 11714155715464363501;
                    var_17 |= (((((arr_0 [i_0 - 1]) != 50012)) ? (((-8779163376291289562 == (arr_1 [i_1 - 2] [i_0 + 1])))) : ((max(var_10, var_1)))));
                    var_18 = (((((((-5264654535611878098 ? 62 : 4))) * (arr_1 [i_0 + 1] [i_1]))) << (min(3397808105, (arr_2 [i_0 - 1] [i_1 + 1])))));
                    arr_7 [i_0 - 1] [i_1 - 1] = (min((min(var_6, ((6131353748158925653 * (arr_3 [i_0 - 1] [i_0] [i_0 + 1]))))), (arr_4 [i_1 + 1] [i_1 + 1] [i_1 + 1])));
                    var_19 = (min(((8779163376291289576 ? (arr_3 [i_0 + 1] [i_0 - 1] [i_1 + 1]) : 26311)), (((arr_3 [i_0 + 1] [i_0 - 1] [i_1 - 2]) % var_8))));
                }
            }
        }
    }
    var_20 = (-9144431434236963039 == 0);
    var_21 = var_1;
    var_22 = var_11;
    #pragma endscop
}
