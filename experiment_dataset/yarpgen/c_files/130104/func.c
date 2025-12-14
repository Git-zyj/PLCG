/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130104
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) (signed char)-79)) + (2147483647))) << (((4294967295U) - (4294967295U)))));
                var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) (((_Bool)0) ? (17178584084201985033ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)37)))))) ? (((((/* implicit */_Bool) var_5)) ? (67108736U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)87))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_1]))))), (((/* implicit */unsigned int) (signed char)59)))))));
                var_14 = max((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)75)) | (max((((/* implicit */int) arr_1 [i_0] [i_1])), (662920986)))))), (((min((arr_2 [i_1]), (16U))) ^ (arr_3 [(unsigned short)1] [i_1] [i_1]))));
                var_15 += max((min((9223372036854775807LL), (((/* implicit */long long int) arr_3 [i_0] [i_0] [i_1])))), (((/* implicit */long long int) (-(arr_3 [i_0] [i_0] [i_1])))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)1)), (4227858560U))))))) && (((/* implicit */_Bool) var_12))));
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */int) var_1)) * (((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) > (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_2)))))))))));
    var_18 ^= ((/* implicit */long long int) (-((+(((/* implicit */int) ((var_0) <= (((/* implicit */int) var_10)))))))));
}
