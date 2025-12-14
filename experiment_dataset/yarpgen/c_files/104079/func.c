/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104079
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
    var_14 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)21517)) ? (((/* implicit */int) (unsigned short)21517)) : (((/* implicit */int) (unsigned short)21517))))) / ((-(10989682156245679761ULL)))))) ? (((var_12) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)44019)) ? (((/* implicit */int) (unsigned short)44018)) : (((/* implicit */int) (unsigned short)21517))))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */int) (signed char)19)) / (((/* implicit */int) (unsigned short)21511)))), (((/* implicit */int) var_2))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_4 [i_1] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned short)21517)) * (((/* implicit */int) (unsigned short)21514)))))))));
                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(5860025794592508831ULL)))) ? (((5860025794592508813ULL) << (((((/* implicit */int) (unsigned short)21517)) - (21495))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)44018)) ? (((/* implicit */int) (unsigned short)44019)) : (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-22)), ((unsigned short)21516))))))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) var_9);
}
