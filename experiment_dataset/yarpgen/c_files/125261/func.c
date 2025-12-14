/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125261
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
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((unsigned char) (+(((/* implicit */int) max((((/* implicit */signed char) var_5)), (var_3))))))))));
    var_21 &= ((/* implicit */_Bool) ((((/* implicit */long long int) max((((/* implicit */int) var_13)), ((+(-94292716)))))) ^ (((((/* implicit */_Bool) min((94292716), (-94292716)))) ? ((((_Bool)1) ? (var_11) : (((/* implicit */long long int) 2260806033U)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_19)) ? (-1261322045) : (((/* implicit */int) (_Bool)1)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_22 *= ((/* implicit */unsigned short) ((signed char) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))));
                var_23 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(signed char)23] [i_1]))) : (3489064307U)))) ? ((-(((/* implicit */int) (!((_Bool)1)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483392)) ? (((/* implicit */int) (short)-29796)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (_Bool)1)) : (var_1)))));
                var_24 -= ((/* implicit */unsigned long long int) ((67108736) - (((/* implicit */int) (signed char)3))));
            }
        } 
    } 
}
