/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124398
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
    var_17 = ((/* implicit */unsigned short) var_2);
    var_18 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_15)) ? (var_12) : (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) var_1))))) ? (((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned int) var_10))))) ? (var_13) : (((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned int) var_10))))))) : (((/* implicit */unsigned long long int) var_2))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 15; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8178463147952049627LL)) ? (((/* implicit */unsigned long long int) 4294967287U)) : (11772971396108954997ULL)))) ? (max((((/* implicit */unsigned int) var_7)), (6395708U))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (2739839030U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0 - 1])))))));
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((9071460865320819562LL), (((/* implicit */long long int) 1555128291U))))) ? (max((16490912573510117140ULL), (1003036950665200522ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)88))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) 576460202547609600ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)102))) : (4288571595U)));
}
