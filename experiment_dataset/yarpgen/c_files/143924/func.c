/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143924
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
    var_11 ^= ((/* implicit */signed char) (_Bool)1);
    var_12 = ((/* implicit */unsigned short) ((short) ((((2147483647) + (0))) - (((/* implicit */int) var_10)))));
    var_13 = ((/* implicit */short) var_1);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 *= ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)16698)) << (((((/* implicit */int) var_6)) - (26)))))) ? (((/* implicit */int) ((((/* implicit */int) var_6)) < (((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-36)) : (((/* implicit */int) (unsigned char)120)))))) - (((((/* implicit */int) var_3)) >> (((((/* implicit */int) (unsigned short)48838)) - (48835))))));
                    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (0) : (8388352)))) ? (((/* implicit */int) var_5)) : (((((/* implicit */int) (signed char)-109)) - (((/* implicit */int) var_2))))))))));
                    var_16 ^= ((/* implicit */short) var_10);
                }
            } 
        } 
        arr_11 [i_0] = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_6)) && (var_10))) && ((((_Bool)1) && (((/* implicit */_Bool) -1286254663)))))) ? (((/* implicit */int) ((_Bool) ((var_10) || (var_10))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((_Bool) (_Bool)0)))))));
        var_17 = ((/* implicit */signed char) var_6);
    }
}
