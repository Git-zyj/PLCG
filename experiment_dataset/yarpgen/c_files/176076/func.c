/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176076
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
    var_15 = ((/* implicit */unsigned short) 989586350346474024LL);
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? ((~(((/* implicit */int) var_8)))) : ((-(((/* implicit */int) (short)-1))))));
    var_17 += ((/* implicit */unsigned char) var_9);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)9146))))), ((~(arr_0 [i_0] [i_0])))))) ? (min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (short)-3623)) : (((/* implicit */int) (short)-1)))), (((/* implicit */int) (unsigned short)30997)))) : ((~((-(((/* implicit */int) arr_1 [i_0]))))))));
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) max((2892262741718278363LL), (((/* implicit */long long int) (~(((/* implicit */int) (short)-3635))))))))));
    }
}
