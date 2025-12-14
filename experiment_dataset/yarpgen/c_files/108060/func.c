/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108060
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
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = max((3216164809791331556ULL), (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((unsigned long long int) var_10)) : (((/* implicit */unsigned long long int) var_0)))));
                var_11 = ((/* implicit */_Bool) (+(3216164809791331557ULL)));
            }
        } 
    } 
    var_12 = ((/* implicit */long long int) max((max((max((3216164809791331550ULL), (15230579263918220057ULL))), (((/* implicit */unsigned long long int) ((15230579263918220069ULL) > (var_8)))))), (((/* implicit */unsigned long long int) var_0))));
    var_13 = ((/* implicit */long long int) var_9);
    var_14 = ((/* implicit */_Bool) ((((((var_8) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58700))))) == (((((/* implicit */_Bool) -9177269433128106796LL)) ? (15230579263918220065ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
}
