/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((13688708328728465975 ? (var_10 < var_6) : ((255 ? 170 : 1))))) ? ((((((11 ? 65535 : 1947352853))) ? var_0 : 1))) : (((3207119566 < 78) ? (2481237496 * 14) : var_0))));
    var_12 = min((((var_2 <= (((-484844369 ? 0 : 23)))))), (min(var_10, 62612)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = ((((0 ? 255 : 10)) >> (((~15586556618725829333) - 2860187454983722270))));
                var_14 = ((((((var_3 ? 11 : -31310))) ? (arr_2 [i_1]) : (arr_2 [i_1]))));
            }
        }
    }
    var_15 = (((var_6 * 3) ? var_5 : ((65535 ? 0 : -1051817782643541711))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 17;i_4 += 1)
            {
                {
                    var_16 = (0 / 255);
                    var_17 = (max(((min((min(var_0, var_1)), 18))), (((var_9 + (arr_6 [9] [7]))))));
                    var_18 = (((((6112028352968542596 ? 0 : 116))) || (arr_9 [i_2] [i_3])));
                    arr_13 [i_2] [i_4] [i_3] [i_4 + 1] = (((-1 == 20) - 250));
                    var_19 = (max(((((arr_8 [i_4 + 3] [i_3] [i_4]) ? ((2481237496 ? -88 : 1)) : ((min(0, 17524)))))), (arr_12 [i_4])));
                }
            }
        }
    }
    #pragma endscop
}
