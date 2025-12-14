/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145970
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
    var_15 = ((/* implicit */signed char) min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)3))) * (3220912377U))), (((/* implicit */unsigned int) ((((/* implicit */int) var_12)) + (((/* implicit */int) var_6)))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_0])) | (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (var_14))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(short)0] [(short)0]))) : (((((((/* implicit */unsigned long long int) 1074054918U)) | (4692877990006988855ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(unsigned short)3] [i_0])))))));
        var_16 = ((/* implicit */unsigned short) 15539790558369746864ULL);
        var_17 = ((/* implicit */short) ((unsigned int) (!(((/* implicit */_Bool) var_7)))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) min((var_7), (var_7)));
    }
    var_18 = ((/* implicit */unsigned char) var_2);
}
