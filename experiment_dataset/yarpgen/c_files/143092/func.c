/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143092
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
    var_19 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned long long int) var_10))));
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)96)), (var_15)))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) : (var_14)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-95)))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) : (max((30U), (((/* implicit */unsigned int) -1540454261)))))) : (var_7)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_21 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) var_3)))))) == (((4294967290U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)122)))))));
        var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) -7719701322778875479LL))));
        var_23 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)64011))));
        arr_2 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)64033))));
    }
}
