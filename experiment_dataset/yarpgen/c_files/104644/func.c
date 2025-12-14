/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104644
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
    var_16 |= ((((/* implicit */_Bool) 7531610484352851024ULL)) ? (max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)254)), (-2507827656494976494LL)))), (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41147))));
    var_17 = min((((/* implicit */long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)0))))) ^ ((-(var_8)))))), (var_13));
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)0))))) + (10932765675527987953ULL)))) ? (min((var_7), (((((/* implicit */_Bool) var_15)) ? (576460614864470016LL) : (6498496895993871585LL))))) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)110)) & (((/* implicit */int) (unsigned short)42116)))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [1LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)2)) ? (((((/* implicit */int) arr_0 [i_0] [i_0])) / (((/* implicit */int) ((signed char) arr_1 [i_0] [i_0]))))) : (max(((+(((/* implicit */int) (unsigned char)47)))), ((+(((/* implicit */int) var_11))))))));
        var_19 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((short)-9880), ((short)-32722)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((unsigned int) min((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (0ULL))))));
    }
}
