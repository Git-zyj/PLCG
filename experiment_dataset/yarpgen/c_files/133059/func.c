/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133059
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
    var_15 = ((((/* implicit */_Bool) min((((/* implicit */int) max(((short)32256), ((short)12921)))), ((-(((/* implicit */int) var_12))))))) ? (max((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-20074))) : (var_3)))), (var_14))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) var_11))) ? (max((var_9), (((/* implicit */unsigned int) (short)20079)))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1933)))))));
    var_16 = ((/* implicit */signed char) var_14);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_17 ^= ((/* implicit */signed char) max((((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_1)))), (((((/* implicit */_Bool) arr_5 [i_2] [i_2])) && (((/* implicit */_Bool) var_12))))))), (max((((/* implicit */unsigned int) arr_2 [i_1 - 1])), (((((/* implicit */_Bool) arr_7 [i_0] [i_1 - 1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned short)14] [i_1]))) : (var_0)))))));
                    arr_9 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */long long int) min(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-20070)))))))), (((max((var_3), (((/* implicit */unsigned int) (short)-12905)))) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_6 [i_2] [i_1])) : (((/* implicit */int) (short)-1933)))))))));
                }
            } 
        } 
    } 
}
