/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += (max((min(((var_10 << (var_2 - 21470))), (var_5 != var_4))), (min(((min(var_7, var_7))), (min(var_10, var_9))))));
    var_14 |= (min((((!(~var_9)))), var_7));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 |= (var_0 ^ var_4);
                    arr_8 [3] [i_1] = ((((max((!287299293), var_12))) ^ ((~((min(var_2, var_7)))))));
                    var_16 = (max(var_16, (((!(((~var_5) <= var_8)))))));
                }
            }
        }
    }
    #pragma endscop
}
