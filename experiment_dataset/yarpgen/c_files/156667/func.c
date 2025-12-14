/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156667
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
    var_19 = var_15;
    var_20 = ((/* implicit */unsigned char) max((var_16), ((-(3828052524184562471LL)))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                var_21 ^= ((/* implicit */_Bool) (+((+(((/* implicit */int) max((var_14), (arr_1 [i_0]))))))));
                arr_6 [i_0] [i_0] = (((_Bool)1) ? (-2076172136) : (((/* implicit */int) (_Bool)1)));
                arr_7 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : ((+(-2076172132)))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */unsigned short) ((var_0) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23528)))))), (var_4)))) * (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_18))) >= ((+(134217216U))))))));
}
