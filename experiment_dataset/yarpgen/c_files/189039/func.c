/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189039
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
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)-18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_4))), (((/* implicit */unsigned long long int) ((short) 1797540337U)))))) ? (min((((/* implicit */unsigned int) (signed char)-18)), (2497426941U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((2305843009213693952ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
    var_14 = ((/* implicit */int) min((((/* implicit */long long int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-18)) : (((/* implicit */int) (signed char)-18)))) ^ (((/* implicit */int) max((((/* implicit */short) var_9)), (var_6))))))), (((long long int) var_4))));
    var_15 = ((/* implicit */signed char) var_9);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 -= ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 - 2])) ? (((/* implicit */long long int) 1797540330U)) : (var_10))));
                    var_17 = ((/* implicit */short) max(((+(((((/* implicit */_Bool) 16140901064495857661ULL)) ? (((/* implicit */int) arr_0 [i_0])) : (424348742))))), (((/* implicit */int) arr_6 [i_2] [10U] [i_2]))));
                }
            } 
        } 
    } 
}
