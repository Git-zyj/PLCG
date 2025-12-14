/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137753
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) max(((signed char)7), ((signed char)18))))));
                    var_17 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)12))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)18))))) : (max((-1LL), (((/* implicit */long long int) (_Bool)0)))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((unsigned long long int) (_Bool)1))))) ? (((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (12824064829858098908ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (signed char)1)))) : (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)170))) : (6181169724742159570ULL))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) 758676133632864344ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43866))) : (-8632657151388853372LL))))))));
}
