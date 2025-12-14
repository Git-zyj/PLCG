/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12079
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((17590038560768LL), (((/* implicit */long long int) -553736134))))) ? (((-8264025051041672069LL) / (((/* implicit */long long int) ((/* implicit */int) (short)-25146))))) : (((/* implicit */long long int) ((((/* implicit */int) var_14)) - (((/* implicit */int) var_12))))))))));
                var_16 = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)8144)) : (((/* implicit */int) var_9))))) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-117))) <= (-3128909102338264910LL))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) (-(var_13)));
    var_18 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned short)38825)) ? (var_8) : (((/* implicit */int) var_14)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))), (var_6)));
    var_19 = ((/* implicit */unsigned short) max((((((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) == (((/* implicit */int) (_Bool)1))))) & (2147483647))), (max(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (signed char)(-127 - 1)))))));
}
