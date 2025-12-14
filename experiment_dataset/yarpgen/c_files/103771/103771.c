/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_12 = 38471;
                var_13 = var_9;
            }
        }
    }
    var_14 = ((((((((var_6 ? 1 : -16700946))) ? (max(-3579165436134217504, var_9)) : 16700940))) ? ((((max(var_2, var_8))) ? 12187382732942919865 : 16700949)) : -5359));

    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_15 = ((((((((var_9 ? var_6 : -875602268))) ? 23290832 : ((48249 ? var_11 : -1))))) ? var_4 : 0));
        arr_10 [i_2] = 373385360;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 16;i_4 += 1)
            {
                {
                    var_16 ^= var_6;
                    var_17 = -5386;
                    var_18 = var_7;
                    arr_15 [i_4] [i_3] [i_4] = var_9;
                }
            }
        }
    }
    var_19 = (max(var_19, (((var_10 ? (((((var_7 ? 5368 : 37))) ? var_7 : (((var_11 ? -16777216 : 1))))) : ((((max(1, 34))))))))));
    #pragma endscop
}
