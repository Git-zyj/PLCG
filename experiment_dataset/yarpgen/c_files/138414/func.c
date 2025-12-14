/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138414
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
    var_13 = ((/* implicit */int) var_9);
    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) -4515589031230151314LL)) ? (max((((/* implicit */unsigned long long int) (short)16)), (10012791608516891784ULL))) : (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) var_9)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */int) max((((unsigned int) ((((/* implicit */long long int) 2063640720U)) % (4514582639079670238LL)))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_0] [i_1] [i_0])))))));
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 68451041280ULL)) ? ((((-(((/* implicit */int) (signed char)-9)))) >> (((((2231326575U) % (((/* implicit */unsigned int) ((/* implicit */int) (short)30850))))) - (7760U))))) : (((((/* implicit */int) arr_0 [i_0] [i_1])) % (((/* implicit */int) var_1))))));
            }
        } 
    } 
}
