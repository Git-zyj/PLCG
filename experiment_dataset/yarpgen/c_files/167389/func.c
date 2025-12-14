/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167389
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
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_12 *= ((/* implicit */unsigned long long int) (+(((-2974807593398933325LL) & (((/* implicit */long long int) -1230270271))))));
                var_13 *= ((/* implicit */unsigned long long int) (+(((min((-107516693), (((/* implicit */int) var_2)))) - (((-1230270261) - (((/* implicit */int) (signed char)-32))))))));
                var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) -7188887244037998842LL))));
                var_15 *= ((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) 1230270270))))), (min((arr_4 [i_1]), ((short)0)))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) 4233116104U);
}
