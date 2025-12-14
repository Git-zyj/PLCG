/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156873
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) ((unsigned int) (unsigned char)40)))) ? (((unsigned int) (~(15873320778357501847ULL)))) : (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) (_Bool)1))) ^ (((/* implicit */int) arr_1 [i_0 + 2] [i_1])))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (unsigned int i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_1] [4LL] [i_2] = (((_Bool)0) ? (5ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0 - 1] [i_3 - 1] [i_2]))));
                                arr_14 [i_0] [i_2] [i_0 + 2] [i_1] [14ULL] = max((15446294236314143910ULL), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) arr_7 [i_2] [i_3 - 1] [i_3] [i_3 + 1] [i_3] [i_3])), ((unsigned short)35589)))));
                                var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((25ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27081)))))) ? (max((((/* implicit */long long int) (short)2455)), (arr_5 [13U] [13U] [(_Bool)1]))) : (((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_1] [i_2] [i_1])) >> (((((/* implicit */int) var_8)) - (25718))))))))) : ((+(14ULL))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_13 -= ((/* implicit */_Bool) (unsigned short)35589);
    var_14 -= (!(((/* implicit */_Bool) min((((unsigned int) (unsigned short)49325)), (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0)))))))));
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) (-(var_5))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 180840768U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38454))) : (var_2)))) ? (((/* implicit */long long int) ((unsigned int) 28ULL))) : (((-2907414837937253590LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-10)))));
    var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (((-(((/* implicit */int) var_11)))) >= (((/* implicit */int) (short)-2465)))))) <= ((+(((((/* implicit */_Bool) (signed char)9)) ? (var_7) : (((/* implicit */unsigned long long int) 2907414837937253590LL))))))));
}
