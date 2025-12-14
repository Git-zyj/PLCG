/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((min(0, 1289197308))) ? var_15 : (((var_7 % 1545511289) ? (max(var_10, var_8)) : (((var_11 ? var_13 : var_2))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [20] = 3005769971;
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_17 *= (max(3005770014, ((~((34670 ? 30866 : 3005769988))))));
                        var_18 ^= ((34670 ? (((arr_9 [i_1 - 1]) ? (min(1289197308, 1289197308)) : 1545511289)) : (((((var_15 ? 13501 : var_5))) * (min(var_9, 0))))));
                        var_19 = var_0;
                    }
                }
            }
        }
        arr_12 [i_0] [i_0] = max((!-1306363791), 4125521768);
    }
    var_20 = -1545511266;
    var_21 = var_2;
    #pragma endscop
}
