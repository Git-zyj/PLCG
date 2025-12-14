/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163452
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
    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)0)))))));
    var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_3)))))));
    var_15 = ((/* implicit */short) min((((/* implicit */int) var_9)), (min((((/* implicit */int) var_1)), ((+(((/* implicit */int) var_6))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 24; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (~(min((((/* implicit */long long int) var_7)), (9223372036854775807LL))))))));
                var_17 += ((/* implicit */long long int) (+((~(((/* implicit */int) arr_2 [i_0 + 1]))))));
                var_18 = ((/* implicit */unsigned int) (-(((/* implicit */int) min((((/* implicit */unsigned short) arr_4 [i_0] [i_0] [i_0 + 2])), (max(((unsigned short)65535), (((/* implicit */unsigned short) arr_4 [i_0] [8ULL] [i_1])))))))));
            }
        } 
    } 
}
