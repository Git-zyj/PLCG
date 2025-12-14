/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168369
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
    var_20 = ((/* implicit */unsigned int) (unsigned short)19082);
    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((var_14), (2140525176U))))))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_6 [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55094)))))))) ? (((/* implicit */long long int) ((((var_18) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55094))))) ? ((~(((/* implicit */int) (unsigned short)33649)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)22750)) : (((/* implicit */int) (unsigned short)37834))))))) : (min((((/* implicit */long long int) ((4294967283U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10442)))))), (((long long int) (unsigned short)55094))))));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        var_22 += ((/* implicit */signed char) (+((+(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned short)10463)) : (((/* implicit */int) var_16))))))));
                        arr_11 [i_0] [1ULL] [i_1] [i_3] = ((/* implicit */_Bool) (~(((long long int) (unsigned short)2047))));
                        arr_12 [i_1] = ((/* implicit */long long int) var_4);
                    }
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((_Bool) ((((/* implicit */_Bool) (short)-5331)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((max((var_8), (((/* implicit */unsigned long long int) var_9)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_8)))))))) : (((((/* implicit */_Bool) min(((unsigned short)55078), (var_19)))) ? (((((/* implicit */_Bool) 4545058526180196551ULL)) ? (((/* implicit */long long int) 13U)) : (9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned short)63493)))))))))));
}
