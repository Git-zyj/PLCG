/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180767
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */int) max((((unsigned int) 2305843008139952128ULL)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)0)) && (((/* implicit */_Bool) 18446744073709551598ULL)))))));
                    var_18 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((short) 2285490076U))), (((((/* implicit */_Bool) 2009477216U)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 3807146416U))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) ((int) 536739840))), (((18ULL) ^ (((/* implicit */unsigned long long int) 1814088045U)))))), (((/* implicit */unsigned long long int) var_14))));
}
