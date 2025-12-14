/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_0 + 1] [i_0] [i_1] [i_2] = (+(((var_2 || 22150) ? (arr_3 [9] [i_1]) : ((var_0 ? var_4 : var_6)))));
                    arr_10 [i_2] [i_1] [i_1 + 1] [i_2] = ((((min((((22162 ? var_7 : 3))), ((731751516 ? var_3 : var_5))))) <= -5358770939335859117));
                    var_15 = (min(var_15, (((~(((((13831 ? var_1 : var_11)) == -var_13))))))));
                    var_16 |= (min(((-22152 ? ((178 >> (8706612249599270248 - 8706612249599270228))) : ((1 ? 70 : 168)))), (max(-103, (~247)))));
                    var_17 = (max((max(((var_13 ? var_5 : (arr_3 [i_1] [i_2]))), (min(var_7, -857880908)))), ((-120 * (30231 / 1263760682)))));
                }
            }
        }
    }
    var_18 = (min(var_18, ((((((((min(-106, -26709239368907991))) ? ((var_2 >> (var_1 + 8124099585783581134))) : 594735858))) || (((((max(var_5, var_6))) ? ((var_2 ? var_11 : 6)) : (var_10 > var_6)))))))));
    #pragma endscop
}
