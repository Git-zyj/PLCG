/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163327
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
    for (long long int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 10306586307824558085ULL)) ? ((-9223372036854775807LL - 1LL)) : ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */unsigned long long int) ((int) (_Bool)1))) : (((((/* implicit */_Bool) 1078793665)) ? (8140157765884993510ULL) : (10306586307824558105ULL)))))));
                var_11 *= ((/* implicit */_Bool) 16436626537527187273ULL);
                var_12 = ((((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) << ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775799LL))) + (28LL))))) % (((/* implicit */int) ((_Bool) 10306586307824558054ULL)))))) ? (max((((/* implicit */unsigned long long int) 9223372036854775807LL)), (((10306586307824558114ULL) - (10306586307824558105ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)15692))))) : ((~((-9223372036854775807LL - 1LL))))))));
                var_13 -= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (10306586307824558085ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)39)))))) && (((/* implicit */_Bool) 594097460U))))), (9700165099364560302ULL)));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) (unsigned short)7);
}
