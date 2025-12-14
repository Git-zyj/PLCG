/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157463
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
    var_15 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 4; i_0 < 15; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) ((short) var_11)))));
                    arr_8 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned long long int) var_10)));
                }
            } 
        } 
        var_17 += var_1;
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))))) != (((var_10) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))))));
        var_19 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) var_8))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) var_11))));
    }
}
