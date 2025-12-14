/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -3910373655055979082;
    var_17 = (max(var_17, (((~((((var_4 ? var_1 : var_5)) >> (var_8 + 632100337))))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = (min(var_18, (((((max((((arr_4 [i_1] [i_1] [4]) >> (var_4 - 4462))), ((((arr_7 [i_0] [i_0] [i_1] [i_2]) >= 45)))))) ? (!23840) : (arr_7 [i_0 - 4] [i_0 - 4] [i_2] [i_0 - 4]))))));
                    arr_9 [i_0] [i_1] [i_1] [i_1] = (arr_2 [i_0] [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
