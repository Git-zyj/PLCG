/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121092
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
    var_10 = ((/* implicit */signed char) var_8);
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) max((var_5), ((unsigned char)239)))) ? (((/* implicit */int) ((_Bool) ((_Bool) var_3)))) : (max((((((/* implicit */int) var_5)) - (((/* implicit */int) (unsigned char)16)))), (((((/* implicit */_Bool) (unsigned char)251)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)45624))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) (signed char)34))));
                    var_13 = ((/* implicit */long long int) max((((((/* implicit */_Bool) (short)11558)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5)))), ((((_Bool)1) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)26350))))));
                }
            } 
        } 
    } 
    var_14 = (signed char)34;
    var_15 = ((/* implicit */signed char) (short)-1);
}
