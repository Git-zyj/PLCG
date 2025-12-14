/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109172
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
    var_19 = ((/* implicit */unsigned int) max(((~((~(13447116988031355372ULL))))), (((/* implicit */unsigned long long int) (-((~(((/* implicit */int) var_2)))))))));
    var_20 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_2)), (((((var_2) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) << (((((((/* implicit */_Bool) (unsigned char)155)) ? (2147483631) : (((/* implicit */int) var_8)))) - (2147483594)))))));
    var_21 = ((/* implicit */signed char) ((33554431LL) >= (((/* implicit */long long int) ((/* implicit */int) (short)28350)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (long long int i_2 = 4; i_2 < 12; i_2 += 2) 
            {
                {
                    var_22 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)6213)) ? (32212254720ULL) : (((/* implicit */unsigned long long int) 1123368387))))) ? (((((/* implicit */_Bool) (~(arr_1 [i_0] [i_1])))) ? (((((/* implicit */_Bool) var_4)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) var_17))))) : (((/* implicit */long long int) -962088237)))) : ((~(min((((/* implicit */long long int) arr_3 [i_2] [i_0] [i_0])), (0LL)))))));
                    arr_9 [(short)10] [i_0] [(short)10] [i_2] = ((/* implicit */unsigned int) min((((/* implicit */short) (!(max(((_Bool)1), ((_Bool)1)))))), (arr_5 [i_0])));
                    var_23 = ((/* implicit */_Bool) var_0);
                    arr_10 [i_0] [i_1] [i_2 - 1] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((unsigned short) var_10))), ((((!(((/* implicit */_Bool) 9264767330676464717ULL)))) ? (((((/* implicit */_Bool) 10283754188625667649ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (16322643258741707642ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3667746821U))))))))));
                }
            } 
        } 
    } 
    var_24 |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (+(-840164772)))) ? ((~(939524096))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))) & ((+(((/* implicit */int) var_16))))));
}
