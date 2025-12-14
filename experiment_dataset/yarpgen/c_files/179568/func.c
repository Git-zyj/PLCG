/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179568
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
    var_18 &= ((((/* implicit */_Bool) var_9)) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 825407585146562946LL)) && (((/* implicit */_Bool) (unsigned short)50921))))), (var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_9) < (var_9))))) != (var_4))))));
    var_19 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)65535)), (3862567652706373647LL)))) && (((/* implicit */_Bool) var_15)))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_4 [i_0] [(signed char)14] = ((/* implicit */short) max(((~(min((1320073911), (((/* implicit */int) (signed char)34)))))), (((((/* implicit */int) (unsigned short)59524)) - (((((/* implicit */_Bool) (unsigned short)4)) ? (((/* implicit */int) (unsigned char)84)) : (1320073911)))))));
                arr_5 [i_1] [i_0 - 2] = (~(((((/* implicit */_Bool) (unsigned short)59524)) ? (((/* implicit */int) (unsigned char)168)) : (((/* implicit */int) (!(((/* implicit */_Bool) -1320073912))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) var_15);
}
