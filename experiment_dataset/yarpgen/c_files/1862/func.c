/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1862
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
    var_20 = ((/* implicit */_Bool) (-2147483647 - 1));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_21 = ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : ((+(((/* implicit */int) (unsigned short)65535)))));
        var_22 += ((/* implicit */unsigned short) (short)(-32767 - 1));
        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (~(((/* implicit */int) ((unsigned char) arr_1 [(_Bool)1]))))))));
    }
    for (short i_1 = 2; i_1 < 21; i_1 += 4) 
    {
        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)0))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) & (arr_2 [i_1])))))) || (((/* implicit */_Bool) (unsigned short)63))));
        var_25 = ((/* implicit */unsigned int) ((unsigned char) (-(((/* implicit */int) (unsigned short)65473)))));
    }
}
