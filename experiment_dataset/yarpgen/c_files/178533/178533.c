/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= ((((((min(var_11, 127))) % var_5)) != (((!((max(44812, 20700))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((((((arr_2 [i_0]) ? (arr_2 [i_1]) : 246))) > (max(((((arr_2 [i_0]) & (arr_2 [i_0])))), ((var_13 ? 1620178522 : 4134910994))))));
                var_17 = (((((~(~var_0)))) >= (((~var_1) * ((((arr_2 [2]) >> (var_0 + 30382))))))));
            }
        }
    }
    var_18 = (max(-43099876, ((var_14 ? ((var_12 >> (var_15 - 29))) : ((43099872 ? var_11 : 32762))))));
    #pragma endscop
}
