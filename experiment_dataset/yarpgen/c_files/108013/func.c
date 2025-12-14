/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108013
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
    var_16 = max((((/* implicit */int) (short)-10656)), (((((/* implicit */int) ((unsigned short) (unsigned short)51948))) & (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) var_9)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (min((arr_5 [i_0]), (((/* implicit */int) (unsigned short)28311)))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_4)) : ((~(((/* implicit */int) (signed char)39))))))));
                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) -1929986533)) < (1073741823U)))), (arr_6 [i_0 + 1] [i_0] [i_0 + 1]))), (((/* implicit */unsigned long long int) ((unsigned short) var_10))))))));
            }
        } 
    } 
}
