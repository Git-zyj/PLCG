/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143327
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = max((((((min((((/* implicit */long long int) var_13)), (-3334880534649239950LL))) + (9223372036854775807LL))) >> (((((/* implicit */int) max((var_6), ((signed char)1)))) - (62))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7636941882134526443LL)) ? (((/* implicit */int) (unsigned char)129)) : (((/* implicit */int) (unsigned short)48920))))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (unsigned char)97)) : (1576117751))))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) (unsigned short)65522)) ? (arr_2 [i_0]) : (((/* implicit */int) min((((/* implicit */signed char) var_0)), ((signed char)7)))))) + (2147483647))) >> (((((long long int) (-2147483647 - 1))) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1483099228U))))))))));
    }
    var_17 = ((/* implicit */long long int) (~(var_14)));
    var_18 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((unsigned long long int) ((((/* implicit */int) (unsigned char)201)) << (((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4225466843U))))))));
    var_19 -= ((/* implicit */signed char) -2102560286);
}
