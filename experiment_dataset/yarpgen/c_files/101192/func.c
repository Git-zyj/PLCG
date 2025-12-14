/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101192
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
    var_20 = var_3;
    var_21 |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) ^ (var_4)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((((/* implicit */int) arr_1 [i_0])) << (((((/* implicit */int) arr_0 [i_0])) - (27))))) & ((~(((/* implicit */int) arr_0 [i_0]))))));
        var_22 |= ((((((/* implicit */int) arr_1 [i_0])) * (((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_0 [i_0])))))) | (((((((/* implicit */int) arr_0 [i_0])) / (((/* implicit */int) (unsigned char)109)))) * (((/* implicit */int) ((_Bool) 5ULL))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */long long int) ((short) min((((((/* implicit */_Bool) 5ULL)) ? (arr_4 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44688))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)13)) >= (((/* implicit */int) arr_1 [i_1]))))))));
        var_24 = ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_1])) >= (((/* implicit */int) arr_1 [i_1]))))) >= ((~(((/* implicit */int) (unsigned char)37)))));
    }
}
