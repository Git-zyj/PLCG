/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175829
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
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) var_3))) ? (((((-926703901764176633LL) < (((/* implicit */long long int) var_10)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5)))) : ((~(((((/* implicit */int) (unsigned short)0)) >> (((((/* implicit */int) var_9)) - (39162)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_7 [15ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)(-32767 - 1))), (1309996816527853371ULL)))) && (((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */unsigned short) ((((/* implicit */int) var_9)) > (var_10)))))))));
                var_15 = ((/* implicit */short) max((min((((unsigned int) (unsigned short)26779)), (((/* implicit */unsigned int) ((arr_0 [i_0]) > (((/* implicit */int) var_0))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)10472)) ? (524287) : (((/* implicit */int) (unsigned char)143)))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))));
}
