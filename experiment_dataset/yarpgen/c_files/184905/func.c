/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184905
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
    var_16 = ((short) ((long long int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (unsigned short)28633)) : (((/* implicit */int) (unsigned short)37212)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_0] &= ((short) ((unsigned long long int) ((unsigned long long int) (short)1)));
                var_17 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((int) (unsigned short)0))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)47)) ? (((/* implicit */int) (short)-11242)) : (((/* implicit */int) (short)-11242))))) : (((unsigned long long int) (unsigned short)9570)))), (((/* implicit */unsigned long long int) (unsigned short)29607))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6453459671711143187ULL)) ? (((/* implicit */int) (short)-11242)) : (((/* implicit */int) (signed char)109))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32756)) ? (236708850497737661ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32736)))))))));
}
