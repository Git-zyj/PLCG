/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164292
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
    for (short i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */long long int) max((((/* implicit */int) (signed char)-116)), (((min((-243031510), (((/* implicit */int) (unsigned short)38584)))) & (869463577)))));
                var_17 *= ((/* implicit */short) max((-3607978321148467076LL), (((/* implicit */long long int) (signed char)-54))));
                var_18 ^= ((/* implicit */short) ((min((869463575), (arr_5 [i_1 - 1]))) ^ (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_1 + 2]))))));
            }
        } 
    } 
    var_19 = ((/* implicit */int) ((var_1) ? (max((var_7), (((/* implicit */long long int) ((((/* implicit */_Bool) 611647122U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)64))))))) : (((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_3)))) | (min((var_2), (((/* implicit */long long int) var_0))))))));
    var_20 = ((/* implicit */unsigned int) var_9);
    var_21 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_1)), ((unsigned char)85)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -6935307418294950767LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_12)))) : (max((10727116599142527792ULL), (((/* implicit */unsigned long long int) (short)31533))))))));
}
