/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189493
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
    var_13 = ((/* implicit */long long int) -934740306);
    var_14 = ((/* implicit */unsigned long long int) min((var_4), (((unsigned char) var_0))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_3 [i_0] = min(((~(arr_1 [6] [i_0]))), (((/* implicit */long long int) arr_2 [i_0] [i_0])));
        arr_4 [i_0] = ((/* implicit */int) -1763618710424283295LL);
        arr_5 [i_0] = ((/* implicit */unsigned long long int) min((arr_0 [i_0]), (arr_0 [i_0])));
        arr_6 [i_0] [i_0] = ((/* implicit */short) max((((min((arr_1 [9U] [(unsigned char)0]), (((/* implicit */long long int) -1793323426)))) ^ (((/* implicit */long long int) arr_2 [i_0] [i_0])))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)65)), (arr_1 [i_0] [i_0])))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)48804))))) : (((((/* implicit */_Bool) (unsigned char)191)) ? (((/* implicit */unsigned int) arr_0 [(short)0])) : (14520976U))))))));
        arr_7 [i_0] = ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_2 [i_0] [i_0])), (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) arr_2 [i_0] [i_0])) : (arr_1 [0LL] [i_0])))))) ? (((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(signed char)7] [i_0]))))), (arr_0 [i_0])))) : (min((((/* implicit */long long int) arr_0 [i_0])), (max((15LL), (((/* implicit */long long int) (unsigned char)210)))))));
    }
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        arr_11 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((5LL), (((/* implicit */long long int) (unsigned char)210))))) ? ((~(arr_10 [i_1]))) : (max((7440281259998138732LL), (arr_10 [i_1])))));
        arr_12 [5LL] = ((((/* implicit */_Bool) max((arr_10 [i_1]), (((/* implicit */long long int) arr_8 [i_1]))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)111)), (301814750U)))) : (min((arr_10 [i_1]), (((/* implicit */long long int) 1274708584)))));
    }
}
