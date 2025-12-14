/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159656
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
    var_11 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((unsigned int) (-(((/* implicit */int) (unsigned char)182))))) : (((/* implicit */unsigned int) max(((-(((/* implicit */int) (short)-16511)))), (((/* implicit */int) ((((/* implicit */int) var_10)) < (((/* implicit */int) var_10))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            {
                var_12 |= ((/* implicit */unsigned char) var_3);
                var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) min((var_1), (var_10)))) + (((/* implicit */int) (short)-16511))));
                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(1989440789U)))))))));
            }
        } 
    } 
    var_15 |= var_5;
}
