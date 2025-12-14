/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168619
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
    var_16 = var_12;
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) min((((((((/* implicit */_Bool) (unsigned short)3503)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_9))) << (((min((var_13), (((/* implicit */long long int) var_5)))) + (78LL))))), (((/* implicit */long long int) max((((((/* implicit */int) (signed char)-90)) > (((/* implicit */int) var_11)))), (var_15)))))))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) ((int) var_2)))))));
        var_19 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0])) ? (((9100261903168505649LL) + (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22844)))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) (unsigned short)3503);
        arr_3 [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) + ((-9223372036854775807LL - 1LL))))));
    }
}
