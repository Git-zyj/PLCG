/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116683
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
    var_13 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) max((((/* implicit */short) (_Bool)1)), ((short)9353)))), (9223372036854775807LL))))));
    var_14 = ((/* implicit */short) ((((/* implicit */int) var_0)) | (((/* implicit */int) ((((/* implicit */unsigned long long int) (-(8191U)))) > (var_2))))));
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) <= ((+(((var_12) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-62)))))))));
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (2197786895U) : (((/* implicit */unsigned int) (+(((/* implicit */int) max((((/* implicit */unsigned short) var_10)), (var_7)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_17 += ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2097180400U)) ? (1957885290U) : (var_5)))), (((((/* implicit */_Bool) (signed char)-62)) ? (((/* implicit */unsigned long long int) 2097180397U)) : (var_12)))))) ? (((/* implicit */unsigned long long int) (((((~(((/* implicit */int) var_7)))) + (2147483647))) >> (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_0)) - (65368)))))))) : (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)1))))), (((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])) + (var_12)))))));
                arr_7 [i_1] [4LL] [3ULL] = ((/* implicit */unsigned long long int) ((3017527300U) >= ((((_Bool)1) ? (2097180411U) : (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)62)))))))));
                arr_8 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_0))) + (2097180400U))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-62)) > (((/* implicit */int) (short)-31614))))))))) & (((/* implicit */int) (!(((/* implicit */_Bool) 3017527307U)))))));
            }
        } 
    } 
}
