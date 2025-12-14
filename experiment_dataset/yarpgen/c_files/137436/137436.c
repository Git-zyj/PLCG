/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += (((((-(4794284049164149918 / 4794284049164149915)))) ? ((((1 ? var_8 : var_6)) | var_3)) : (((((((var_5 + 9223372036854775807) >> (4794284049164149918 - 4794284049164149879))) == (var_11 && 12909745078221185499)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_14 = ((((min(5536998995488366122, (!37)))) ? ((0 ? 18446744073709551588 : 0)) : (arr_7 [i_0] [i_1] [i_0])));
                arr_8 [i_0] = (min(-var_1, (((arr_3 [i_0] [i_1]) / var_0))));
                var_15 = (min((((-(1 / var_9)))), var_5));
            }
        }
    }
    #pragma endscop
}
