/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12194
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((-665764201), (((/* implicit */int) var_4))))) ? (3273488834U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)172)))))))))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */short) (((((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) (short)-9801)), (var_6)))) : (var_8))) < (((/* implicit */unsigned long long int) var_5))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) -4574939754160924045LL);
}
