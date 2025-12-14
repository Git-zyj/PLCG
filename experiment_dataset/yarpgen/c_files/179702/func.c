/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179702
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
    var_20 ^= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_14)))) ? (((/* implicit */unsigned long long int) ((unsigned int) ((signed char) var_16)))) : (((((/* implicit */_Bool) (short)-25233)) ? (9559863204584011168ULL) : (8886880869125540470ULL)))));
    var_21 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_12))))) ? (((/* implicit */long long int) max((var_10), (((/* implicit */unsigned int) var_0))))) : (((((/* implicit */_Bool) var_14)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_17)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) var_9);
                arr_7 [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */int) var_11)), (((((/* implicit */_Bool) 8886880869125540453ULL)) ? (((/* implicit */int) (unsigned char)84)) : (((/* implicit */int) (unsigned char)111))))));
            }
        } 
    } 
}
