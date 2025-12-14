/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183517
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
    var_19 = ((/* implicit */_Bool) var_15);
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)8703)) ? (((/* implicit */unsigned long long int) 4294967289U)) : (((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((2521265572U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128)))))) : (var_13)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */signed char) max((((/* implicit */int) max(((unsigned char)24), (((/* implicit */unsigned char) arr_3 [i_1 + 2] [i_1]))))), (arr_2 [i_1 - 1] [i_1 - 1] [i_1])));
                arr_5 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))));
                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_4)), (arr_0 [i_0])))) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (max((var_13), (((/* implicit */unsigned long long int) var_17)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1])))) && (((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned char) (_Bool)0)))))))))));
            }
        } 
    } 
}
