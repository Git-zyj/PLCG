/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(1, (min((var_7 + 3577501592118755700), -var_11))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_17 = ((((min(var_0, (max(var_6, var_11))))) && -1));
                var_18 = (arr_3 [i_1 + 1] [i_1 + 1] [i_1 - 2]);
                var_19 = 74;
                arr_5 [i_0] [i_0] = (((((3272527078 ? var_6 : (((~(arr_2 [i_0] [i_0] [i_0]))))))) ? ((((((-4976389362523066357 + 9223372036854775807) >> (86 - 31)))) ? (((var_4 ? 453336264 : var_9))) : (~var_11))) : (((var_8 ? (~750754943) : (~1))))));
                var_20 = (min(((max(1, -27))), (((!var_4) ? (arr_3 [i_0] [i_0] [i_0]) : var_9))));
            }
        }
    }
    #pragma endscop
}
