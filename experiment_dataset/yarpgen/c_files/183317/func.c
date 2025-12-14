/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183317
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(2443192727902238967ULL)))) ? (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : (4294967295U)));
                var_19 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)90))) + (358792073041808852LL)))), (max((((/* implicit */unsigned long long int) (((_Bool)1) && (((/* implicit */_Bool) (signed char)-1))))), (min((((/* implicit */unsigned long long int) var_0)), (15ULL)))))));
                arr_4 [i_1] [i_1] = ((/* implicit */unsigned short) var_14);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? ((+(((/* implicit */int) var_12)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (~(((/* implicit */int) var_13))))))))));
}
