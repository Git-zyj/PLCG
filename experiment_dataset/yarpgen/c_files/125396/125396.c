/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [1] [i_2] [i_2] [i_2] = (((((var_3 / (min(var_4, 14142308813640315950))))) && ((max((arr_1 [i_0]), (max(65529, 384)))))));
                    var_13 = (max((((65535 ? (arr_4 [i_0] [i_1] [i_2]) : ((16 ? var_3 : 239))))), (arr_3 [i_0] [i_0])));
                }
            }
        }
    }
    var_14 = var_8;
    var_15 = (((((~(9 ^ 7602356551017670558)))) ? var_8 : 65164));
    var_16 = ((var_10 ? 10918218989776737700 : ((((~var_2) ? -1 : ((min(var_3, 240))))))));
    #pragma endscop
}
