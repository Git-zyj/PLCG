/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172774
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
    var_17 *= ((/* implicit */signed char) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (unsigned short)33491)) : (((/* implicit */int) (unsigned short)32040))));
    var_18 = ((/* implicit */unsigned short) var_1);
    var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (((((/* implicit */_Bool) 2306557652U)) ? (18446744073709547520ULL) : (((/* implicit */unsigned long long int) 789152950U)))) : (((/* implicit */unsigned long long int) -16LL)))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) arr_0 [i_0]);
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((signed char) ((unsigned long long int) (~(((/* implicit */int) (unsigned short)32036))))));
        var_21 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)46))) : (arr_0 [i_0 - 2])))) ? (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))))), (((unsigned int) (unsigned char)35)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_12) != (min((((/* implicit */unsigned long long int) var_3)), (arr_1 [i_0])))))))));
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_13) / (((/* implicit */long long int) ((/* implicit */int) var_15)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32024))) / (4095ULL))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) / (18446744073709547520ULL))))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 3) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */long long int) (unsigned short)58190);
        var_23 *= ((/* implicit */unsigned short) 6LL);
    }
    for (unsigned long long int i_2 = 2; i_2 < 9; i_2 += 3) /* same iter space */
    {
        arr_8 [i_2] [i_2] = ((/* implicit */int) var_15);
        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) (+(((((long long int) 15LL)) * (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)48574)) ? (2306557663U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31)))))))))))));
    }
}
