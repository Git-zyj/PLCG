/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154466
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
    var_13 = ((/* implicit */unsigned int) var_7);
    var_14 -= ((/* implicit */unsigned short) (+(((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) <= (17163578719787045909ULL)))) * (((/* implicit */int) ((((/* implicit */_Bool) 12LL)) && ((_Bool)0))))))));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 18; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) min((min((((unsigned long long int) 1154227183)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_0 [i_0]))))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) var_1))))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (((((/* implicit */int) (unsigned char)56)) ^ (((/* implicit */int) min((var_6), (((/* implicit */short) (unsigned char)236))))))) : (((-2147483647) + (((/* implicit */int) (unsigned short)65408))))));
    }
    /* vectorizable */
    for (short i_1 = 1; i_1 < 18; i_1 += 2) /* same iter space */
    {
        arr_9 [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) arr_2 [i_1 - 1] [(unsigned char)0]))));
        var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) <= (17163578719787045909ULL)));
    }
    var_16 = (+(((((((/* implicit */long long int) ((/* implicit */int) (short)3050))) / (-8609058914052113825LL))) - (((/* implicit */long long int) min((var_8), (((/* implicit */int) (unsigned char)22))))))));
    var_17 = ((/* implicit */short) (-(((/* implicit */int) var_9))));
}
