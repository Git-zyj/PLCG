/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 72;
    var_19 = (((((189 ? (14215 + 14215) : ((14203 ? var_6 : -14215))))) & 131068));
    var_20 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] [i_0] = (min((14211 - 200), ((14214 | (max(4294836216, 4294836227))))));
                arr_6 [i_0] [6] = (arr_4 [i_0] [17]);
                arr_7 [i_0] [i_0] = (((arr_3 [18]) ? (max(193, ((7593 ? 14214 : -14204)))) : (!16383)));
            }
        }
    }
    #pragma endscop
}
