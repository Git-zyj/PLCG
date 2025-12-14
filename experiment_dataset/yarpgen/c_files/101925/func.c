/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101925
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
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) (short)-12599))) ? (((((/* implicit */_Bool) min((var_1), (((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) 0)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-6360572735271373543LL))) : (((/* implicit */long long int) -466159714)))) : (((/* implicit */long long int) ((((/* implicit */int) var_10)) & (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))));
    var_14 = ((/* implicit */unsigned long long int) var_6);
    var_15 = ((/* implicit */unsigned short) (!(((2455997503216395072LL) >= (((/* implicit */long long int) min((var_5), (((/* implicit */unsigned int) var_7)))))))));
    var_16 = ((/* implicit */unsigned char) min(((+(((/* implicit */int) var_10)))), (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (4) : (((/* implicit */int) var_11))))) <= (((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */unsigned int) 2080374784)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (((((/* implicit */_Bool) (short)-4255)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-70))))) : (((/* implicit */unsigned int) -14))))), (((((/* implicit */_Bool) arr_2 [i_0 + 2])) ? (arr_2 [i_0 - 1]) : (((/* implicit */long long int) -2080374784))))));
                var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned short) ((6360572735271373543LL) <= (((/* implicit */long long int) -2080374776))))))));
            }
        } 
    } 
}
