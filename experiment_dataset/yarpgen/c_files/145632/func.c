/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145632
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
    var_12 = ((/* implicit */unsigned short) ((unsigned long long int) max((((/* implicit */int) ((short) (_Bool)1))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) var_5)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 4; i_0 < 9; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                for (signed char i_3 = 1; i_3 < 7; i_3 += 1) 
                {
                    {
                        var_13 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_6 [i_3 + 3] [3] [i_3 - 1] [i_3 - 1]))));
                        var_14 = ((/* implicit */unsigned int) ((unsigned long long int) (!(((/* implicit */_Bool) 921560183)))));
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) arr_4 [i_0 - 4] [i_0 - 3])))))));
    }
    var_16 = ((/* implicit */short) ((unsigned int) 1944312164U));
    var_17 = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_7)), (min((4294967295U), (((/* implicit */unsigned int) 921560183))))))) && (((/* implicit */_Bool) var_5)));
}
