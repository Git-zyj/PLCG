/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11316
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
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_19 -= (+(((((/* implicit */_Bool) (short)-4)) ? (((((/* implicit */int) (short)3)) - (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1)))));
                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)39)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -326846885)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16403))) : (-5793858465652286004LL)))) : (((min((arr_0 [i_0] [i_1]), (((/* implicit */unsigned long long int) var_18)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-101)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) ((signed char) (short)4));
}
