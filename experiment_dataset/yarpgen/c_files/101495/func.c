/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101495
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-83)) != (((int) (+(1736590277))))));
    var_19 = ((/* implicit */unsigned short) (~((-(((/* implicit */int) (unsigned short)5113))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_20 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) != (((/* implicit */int) arr_0 [i_0]))))) == ((+(((/* implicit */int) arr_0 [i_0])))))));
        arr_2 [(unsigned short)14] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((signed char) var_8))) : ((~(((/* implicit */int) arr_0 [i_0])))))));
        var_21 = ((/* implicit */unsigned long long int) ((1736590260) ^ (-1736590282)));
        var_22 = ((/* implicit */unsigned char) (~(((((((/* implicit */int) arr_0 [2ULL])) <= (((/* implicit */int) var_3)))) ? (((/* implicit */int) ((short) var_13))) : (((/* implicit */int) arr_1 [i_0]))))));
    }
}
