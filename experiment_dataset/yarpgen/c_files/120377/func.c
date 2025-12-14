/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120377
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
    var_10 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 1847180740)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))))));
    var_11 = min((((/* implicit */int) var_7)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)-110)) : (((/* implicit */int) (signed char)(-127 - 1)))))) ? (((((((/* implicit */int) var_1)) + (2147483647))) >> (((var_6) + (2815134954319010606LL))))) : (((/* implicit */int) ((signed char) (signed char)(-127 - 1)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)109)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32736))) : (arr_2 [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) var_9)) : (arr_0 [i_0]))) == (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))));
                arr_5 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 511)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32802)))))))) ^ ((((~(arr_0 [i_0]))) ^ (((/* implicit */unsigned long long int) min((var_3), (((/* implicit */long long int) -511)))))))));
            }
        } 
    } 
}
