/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160097
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
    var_16 = ((((/* implicit */long long int) ((/* implicit */int) var_10))) | (var_0));
    var_17 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_10))) / (2147483647LL)))) ? (((((/* implicit */_Bool) (short)-18085)) ? (((/* implicit */int) (unsigned char)225)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_18 = min((((unsigned int) max((2147483664LL), (((/* implicit */long long int) var_15))))), (((((/* implicit */_Bool) max(((signed char)5), (((/* implicit */signed char) (_Bool)0))))) ? (((unsigned int) var_10)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)13))))))));
                arr_6 [12ULL] [i_0] = ((/* implicit */signed char) (((_Bool)1) ? (min((max((2147483656LL), (2147483664LL))), (((((/* implicit */_Bool) var_8)) ? (9223372036854775807LL) : (((/* implicit */long long int) var_9)))))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_4 [i_0] [i_0 + 1] [i_1]), (((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-120)) > (((/* implicit */int) var_15)))))))))));
            }
        } 
    } 
}
