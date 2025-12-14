/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108739
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
    var_20 = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_1)), (((((/* implicit */int) var_3)) + (((/* implicit */int) var_11))))));
    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)98)) && (((/* implicit */_Bool) ((((/* implicit */int) (short)24153)) | (((/* implicit */int) (unsigned char)98)))))))), ((~(-548382314861557408LL))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_22 = max(((+(548382314861557407LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) 7288891010226755213LL)) ? ((~(((/* implicit */int) var_16)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) var_3))))))));
                var_23 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_0 [i_1] [i_0])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551611ULL)) ? (((/* implicit */int) arr_3 [9U] [8U])) : (((/* implicit */int) arr_4 [15ULL]))))))) ? (((((/* implicit */_Bool) (unsigned char)169)) ? (12419438790007775948ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 10872494728155710820ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)10))) : (719820100132522007LL))))))))));
            }
        } 
    } 
}
