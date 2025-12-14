/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168709
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
    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned short) (signed char)1))))), (((unsigned long long int) var_3)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 4; i_1 < 8; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 4734242957754018665ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2] [(unsigned short)0]))) : (var_6)))) != (-659419945026562695LL))))));
                    var_15 = max((min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) : (-659419945026562695LL))), (((/* implicit */long long int) ((18446744073709551615ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29898)))))))), (((/* implicit */long long int) (!((_Bool)1)))));
                }
            } 
        } 
    } 
}
