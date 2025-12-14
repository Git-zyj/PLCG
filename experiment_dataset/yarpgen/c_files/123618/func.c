/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123618
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && ((((_Bool)1) || (((/* implicit */_Bool) var_2))))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((((/* implicit */_Bool) var_18)) || (((/* implicit */_Bool) var_0)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 24; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((-4676892251570618441LL) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-27)))))))), (min((((/* implicit */unsigned long long int) (unsigned char)112)), (17513948980278814341ULL))))))));
                var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_8)) ? (min((arr_2 [i_0] [i_0]), (var_6))) : (max((var_1), (((/* implicit */long long int) (unsigned char)143)))))) >= (((/* implicit */long long int) (~((~(((/* implicit */int) (signed char)27)))))))));
                var_22 *= ((/* implicit */unsigned short) (+(((/* implicit */int) ((var_11) == (((/* implicit */unsigned int) ((/* implicit */int) max((var_2), (var_3))))))))));
                var_23 = ((/* implicit */unsigned char) min((((((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)130), ((unsigned char)125))))) / ((+(arr_2 [i_0] [i_0]))))), (((/* implicit */long long int) var_4))));
                arr_5 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) max((var_11), (((/* implicit */unsigned int) var_12))))) - (arr_1 [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : ((((~(var_14))) + (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)97)))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */long long int) var_0);
    var_25 = ((/* implicit */unsigned char) ((max((((/* implicit */int) var_7)), (((((/* implicit */int) var_2)) & (((/* implicit */int) var_8)))))) | (((/* implicit */int) (unsigned char)106))));
}
