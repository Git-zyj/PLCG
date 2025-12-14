/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10709
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
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) var_9))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_0] [i_1] &= ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-11))));
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)50882)) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)72))))))) : (((/* implicit */int) (signed char)0))));
                arr_7 [6ULL] [6ULL] [6ULL] = (+(((((/* implicit */_Bool) ((((-4777694514654242811LL) + (9223372036854775807LL))) >> (((274869518336LL) - (274869518335LL)))))) ? (((((/* implicit */_Bool) arr_5 [i_1])) ? (-274869518336LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))))) : (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-55))))))));
            }
        } 
    } 
}
