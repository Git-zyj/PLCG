/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165556
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0]))));
        var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [(_Bool)1]))))))))));
    }
    for (signed char i_1 = 0; i_1 < 20; i_1 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (arr_2 [i_1] [i_1]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_5 [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_2 [i_1] [i_1])))) ? (((/* implicit */int) (unsigned short)58726)) : (((((/* implicit */int) (signed char)(-127 - 1))) & (((/* implicit */int) var_0)))))))));
        var_15 = ((/* implicit */_Bool) var_5);
    }
    for (unsigned int i_2 = 2; i_2 < 22; i_2 += 3) 
    {
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) -2386386334750796407LL)) : (arr_8 [i_2]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)30556)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64295))) : ((~(arr_10 [i_2 + 2] [i_2 - 2])))));
        var_17 -= ((/* implicit */unsigned int) var_0);
    }
    var_18 = ((/* implicit */short) var_7);
}
