/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179790
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
    var_10 = ((/* implicit */unsigned short) min((((/* implicit */unsigned char) (_Bool)1)), (var_7)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (~(((/* implicit */int) (short)-19649))))) ? (((/* implicit */int) min(((unsigned char)128), (((/* implicit */unsigned char) arr_3 [i_0]))))) : (((/* implicit */int) ((_Bool) (short)24)))))));
                var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [11LL]))))) ? (var_1) : (((long long int) ((((/* implicit */_Bool) arr_0 [(short)8])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_3 [i_0])))))));
            }
        } 
    } 
    var_13 = ((/* implicit */short) min((((/* implicit */unsigned int) var_4)), ((-((-(67108860U)))))));
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-19648)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)50))) : (25LL)));
}
