/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173175
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [(_Bool)1] [i_1] |= ((/* implicit */short) max((((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) >= (((/* implicit */int) var_3)))))))), ((((_Bool)1) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (unsigned char)137)) ? (135178865U) : (131071U)))))));
                var_20 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned char) var_14))))) && (((/* implicit */_Bool) max((var_18), (((/* implicit */signed char) arr_2 [(unsigned short)16] [i_1]))))))) ? ((~(min((arr_4 [i_0] [(unsigned short)10]), (((/* implicit */unsigned int) arr_2 [6] [i_1])))))) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-97)))))));
            }
        } 
    } 
    var_21 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) -1983118388)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (255) : (((/* implicit */int) (signed char)127))))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && ((_Bool)1))))))))));
}
