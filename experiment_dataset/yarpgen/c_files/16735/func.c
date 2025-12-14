/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16735
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
    var_11 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (((unsigned long long int) ((long long int) (signed char)-109)))));
    var_12 = ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */unsigned long long int) 8257536U)) : (12481940893308416554ULL)));
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) min((((/* implicit */int) (signed char)-99)), (2147483647)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)57853)) - (((/* implicit */int) (unsigned char)79))))) : ((-(0ULL)))))));
                var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((unsigned char) (-(((((/* implicit */_Bool) (unsigned char)177)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)127))))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_5) ? (((var_3) & (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((/* implicit */int) var_6)) : ((-((+(((/* implicit */int) (unsigned char)79))))))));
}
