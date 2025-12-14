/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148946
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_18 = var_13;
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_4 [3U] = ((/* implicit */int) var_4);
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 3; i_3 < 11; i_3 += 3) 
                {
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */signed char) ((arr_6 [i_1] [i_1] [i_1]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_1] [i_1 - 1])))));
                        var_19 = ((/* implicit */unsigned short) ((int) 318543522U));
                        arr_14 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) 0)) : (-1LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [(unsigned short)10])))));
                    }
                } 
            } 
            arr_15 [i_1] [i_1] [i_1] = ((/* implicit */int) ((arr_3 [i_1 - 1]) && (((/* implicit */_Bool) arr_10 [i_1 - 2] [i_1 - 2] [i_1] [i_1]))));
        }
    }
}
