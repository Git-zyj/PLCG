/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161382
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
    var_19 = ((/* implicit */int) (~(min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_16))))), (var_14)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 14; i_2 += 3) 
            {
                for (signed char i_3 = 4; i_3 < 15; i_3 += 4) 
                {
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_3] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) : ((+(arr_10 [i_0])))));
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0]))))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3] [i_3 - 1])))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */unsigned char) (~(var_14)));
    }
    var_22 -= ((/* implicit */long long int) var_18);
    var_23 = ((/* implicit */_Bool) var_9);
}
