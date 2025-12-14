/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163376
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
    for (unsigned long long int i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 558459739U)) ? (-65536) : (((/* implicit */int) min((((/* implicit */short) var_2)), (var_10))))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) -65539)) ? (((/* implicit */int) (short)19187)) : (((/* implicit */int) (unsigned short)54688))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (((((_Bool)1) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10848))))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)54687)) ? (((/* implicit */int) (unsigned short)10859)) : (((/* implicit */int) (unsigned char)87))))))))));
                            var_17 = ((((/* implicit */_Bool) (-(var_3)))) ? (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 1770965156)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))))) : (max((2375630453U), (((/* implicit */unsigned int) var_12)))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_4 = 2; i_4 < 18; i_4 += 2) 
                {
                    for (signed char i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        for (signed char i_6 = 1; i_6 < 19; i_6 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (~(3045938540U)))) ? (((((/* implicit */long long int) 65535)) / (-664502012117850227LL))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) / (1950078516U))))));
                                var_19 = ((/* implicit */unsigned int) (+(min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_0)) : (-65536))), (((((/* implicit */_Bool) 1633790140U)) ? (((/* implicit */int) (signed char)82)) : (66060288)))))));
                                var_20 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)63839)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)54687))))))) ? (((((/* implicit */_Bool) (unsigned short)10847)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)238))) : ((-(0ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_9) : (((/* implicit */unsigned long long int) var_1))))) || (((/* implicit */_Bool) -3514501358793132218LL))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? ((-(((/* implicit */int) var_8)))) : (((/* implicit */int) (unsigned char)113))))) ? (((/* implicit */int) var_8)) : (min((((/* implicit */int) max((var_0), (((/* implicit */short) var_8))))), (((((/* implicit */_Bool) (short)7770)) ? (((/* implicit */int) (unsigned char)26)) : (((/* implicit */int) (_Bool)0))))))));
}
