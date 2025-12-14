/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171001
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
    var_16 = ((/* implicit */_Bool) (short)31430);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_17 = ((/* implicit */_Bool) ((((((((/* implicit */long long int) ((/* implicit */int) (short)-27436))) ^ (4095LL))) - (((long long int) -1272540081)))) - (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)38013)) : (((/* implicit */int) (short)2675)))))));
        arr_2 [i_0] = (+(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-27436))))));
    }
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_18 = ((/* implicit */unsigned long long int) ((1481628087487967882LL) >= (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */long long int) 1581935695)) % (4095LL))))))));
                        var_19 |= ((/* implicit */signed char) ((((((/* implicit */_Bool) 4294967295U)) ? (1581935695) : (((/* implicit */int) (_Bool)1)))) <= ((+(((/* implicit */int) (short)-32087))))));
                        var_20 -= ((/* implicit */unsigned short) ((((min((arr_3 [i_1]), (arr_3 [i_2]))) + (2147483647))) << (((((-1272540081) + (1272540104))) - (23)))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)32764)), (-4095LL)))) ? (((/* implicit */int) ((short) min((4099LL), (6274655995463131013LL))))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (-1LL)))) ? (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (short)32089)) - (32060))))) : (-1272540081)))));
        var_22 = min((((/* implicit */unsigned short) (short)-32087)), ((unsigned short)26811));
    }
}
