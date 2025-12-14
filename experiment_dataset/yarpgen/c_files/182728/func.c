/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182728
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 11; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_10 |= ((((/* implicit */_Bool) (unsigned short)7750)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (((((/* implicit */_Bool) 6694781781279380693ULL)) ? (min((((/* implicit */unsigned long long int) 4214624612U)), (11751962292430170923ULL))) : (6694781781279380689ULL))));
                                var_11 *= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (((((/* implicit */_Bool) ((0ULL) >> (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) 887784767U)) : (6694781781279380697ULL)))));
                                var_12 -= ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) : (12627008466288753395ULL)));
                            }
                        } 
                    } 
                } 
                var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
                var_14 = ((/* implicit */unsigned long long int) ((short) (signed char)61));
                var_15 *= ((/* implicit */signed char) (unsigned char)240);
                var_16 = ((/* implicit */unsigned int) (~(-1LL)));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) -1LL)) - (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) -2138693594)) : (12627008466288753395ULL))))) >= (((((/* implicit */_Bool) (unsigned short)52227)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (6694781781279380689ULL))))))));
}
