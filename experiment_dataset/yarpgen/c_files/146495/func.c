/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146495
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
    var_15 = ((/* implicit */signed char) ((7204650415382026038LL) / (((long long int) ((10568276411448049352ULL) / (((/* implicit */unsigned long long int) var_4)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) (~(1023U)))), (10568276411448049346ULL))))));
                arr_6 [15] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1 + 2])) ? (((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)32560)) : (((/* implicit */int) (unsigned short)51989)))), (((((/* implicit */_Bool) (unsigned short)65521)) ? (((/* implicit */int) (unsigned short)1902)) : (((/* implicit */int) (unsigned short)13546))))))) : ((+(29360128U)))));
                arr_7 [i_0] = ((/* implicit */unsigned int) min((((arr_0 [i_1 - 1] [i_1]) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)122))))))), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0]))));
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)73))) * (arr_3 [i_0] [i_0] [16])));
            }
        } 
    } 
}
