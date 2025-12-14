/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107741
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) max((max((((/* implicit */int) ((_Bool) 5435805175329979219ULL))), ((~(((/* implicit */int) arr_1 [i_0] [i_0])))))), (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [6]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_7) : (var_6)))))))));
        arr_5 [i_0] = ((/* implicit */int) (unsigned short)2657);
    }
    for (signed char i_1 = 0; i_1 < 13; i_1 += 3) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [(short)0]))) / (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) : (6U)))));
        var_16 += ((/* implicit */short) min((((/* implicit */unsigned long long int) arr_2 [(unsigned char)9])), (13010938898379572396ULL)));
        var_17 = ((/* implicit */int) ((min((((/* implicit */unsigned int) (unsigned short)2679)), (((unsigned int) var_5)))) - ((~(4294967288U)))));
    }
    var_18 *= ((/* implicit */unsigned long long int) var_11);
}
