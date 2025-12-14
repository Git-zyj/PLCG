/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= (((((min(13820334291954988123, (-32767 - 1))))) & (((max(var_5, var_9)) / var_2))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_14 = (((62 + 13820334291954988123) != -12));
                var_15 = (max((((arr_3 [i_0]) ? (arr_5 [i_0] [i_1] [i_0]) : (arr_5 [i_1] [i_1] [5]))), (arr_3 [i_1])));
                arr_6 [i_0] [i_1] = (-32767 - 1);
                arr_7 [i_0] = (((((((max((arr_2 [i_1] [i_1]), (arr_1 [i_0])))) < (arr_0 [i_0])))) / var_3));
            }
        }
    }
    var_16 = max(var_4, var_11);
    #pragma endscop
}
