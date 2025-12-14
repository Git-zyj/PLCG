/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109701
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_1 [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) (unsigned char)229);
                    var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))));
                    var_21 *= (unsigned char)49;
                }
            } 
        } 
    }
    var_22 = min((var_16), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_10)))) | (((((/* implicit */int) (unsigned char)24)) ^ (1081295043)))))));
    var_23 = ((/* implicit */unsigned char) min((var_23), (min((((unsigned char) ((((/* implicit */unsigned long long int) var_1)) != (var_3)))), (((/* implicit */unsigned char) var_15))))));
}
