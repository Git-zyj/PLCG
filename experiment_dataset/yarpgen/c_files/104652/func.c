/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104652
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
    var_19 = ((/* implicit */unsigned long long int) ((max((((3687251313598673320LL) - (var_2))), (((/* implicit */long long int) min((((/* implicit */unsigned short) var_6)), (var_1)))))) > (((((long long int) -3687251313598673321LL)) | (((/* implicit */long long int) (+(((/* implicit */int) var_16)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (~((-(((/* implicit */int) arr_1 [i_0 - 2])))))))));
        arr_2 [i_0] [(unsigned short)0] &= ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0 - 1])) >> ((((+(((/* implicit */int) arr_1 [i_0])))) + (6350)))));
    }
    var_21 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((var_5) * (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)195))) - (-3687251313598673341LL))) : (((/* implicit */long long int) (+(((/* implicit */int) var_0))))))), (((/* implicit */long long int) var_14))));
    var_22 *= ((/* implicit */unsigned char) var_3);
}
