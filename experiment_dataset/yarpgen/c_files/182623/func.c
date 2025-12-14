/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182623
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4026531840U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-27909))))) ? (max((4611686018418999296ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32747)))))) || ((!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (4775286U))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_0] = max((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (signed char)2)) + (((/* implicit */int) (_Bool)1))))))), (7404476926123861551ULL));
                arr_7 [i_0] = ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 3981603112336940270ULL)) ? (((/* implicit */unsigned long long int) 2147483648U)) : (5012701117511710354ULL)))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)28488)) : (((/* implicit */int) (_Bool)1))))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (7404476926123861568ULL)))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 11042267147585690065ULL)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) + (((((/* implicit */_Bool) (unsigned char)252)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32150))))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) max(((short)-1), (((/* implicit */short) (signed char)89))))))))));
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-425)) ? (((((/* implicit */_Bool) 11042267147585690046ULL)) ? (((/* implicit */unsigned long long int) 2571094984U)) : (548706985365793390ULL))) : (((/* implicit */unsigned long long int) var_13))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)64)), ((-9223372036854775807LL - 1LL))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1125899906842112LL)) ? (((/* implicit */int) (unsigned char)105)) : (((/* implicit */int) (signed char)-32))))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)28)) : (((/* implicit */int) (signed char)-59))))) : (2693170548192841223ULL)))));
}
