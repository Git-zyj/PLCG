/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106784
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned char)189)))) : (var_14)));
                var_21 = max((((unsigned long long int) (unsigned short)31966)), (((/* implicit */unsigned long long int) (+(((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (var_6))))))));
                var_22 &= (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max(((signed char)73), (((/* implicit */signed char) (_Bool)1))))), (min((279223176896970752ULL), (((/* implicit */unsigned long long int) (short)768))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) min((9223372036854775807LL), (((/* implicit */long long int) min((var_8), (((/* implicit */unsigned short) var_10)))))));
}
