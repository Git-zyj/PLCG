/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118485
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
    var_18 *= ((/* implicit */signed char) ((((((/* implicit */int) (unsigned char)0)) << (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)9)) : (((/* implicit */int) var_11)))))) == (((var_10) ? ((-(((/* implicit */int) var_16)))) : (((/* implicit */int) max(((unsigned char)0), ((unsigned char)0))))))));
    var_19 ^= ((/* implicit */signed char) (unsigned char)246);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            {
                var_20 |= ((/* implicit */unsigned char) ((((/* implicit */int) var_14)) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)41429)) ? (((/* implicit */int) (unsigned short)22531)) : (((/* implicit */int) var_16))))) ? ((((_Bool)0) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_17)))) : (((var_14) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11))))))));
                var_21 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) min(((unsigned short)65535), (((/* implicit */unsigned short) (short)71))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)41429)) & (((/* implicit */int) (unsigned short)41429))))) : (((var_9) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (short)13211))))))), (((/* implicit */long long int) max((min((((/* implicit */int) var_17)), (-1))), (((((/* implicit */_Bool) (signed char)-57)) ? (((/* implicit */int) (unsigned char)246)) : (((/* implicit */int) (unsigned char)255)))))))));
                arr_5 [i_1] [(_Bool)1] [(_Bool)1] &= ((/* implicit */unsigned char) ((_Bool) (+(((/* implicit */int) (_Bool)0)))));
                var_22 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)0)))) - (((((/* implicit */_Bool) 3)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)6237))))));
            }
        } 
    } 
}
