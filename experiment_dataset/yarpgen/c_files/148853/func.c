/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148853
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
    var_14 = ((/* implicit */long long int) var_11);
    var_15 = ((/* implicit */unsigned char) (!((!(((((/* implicit */int) var_5)) <= (((/* implicit */int) var_7))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_16 += ((/* implicit */_Bool) ((((/* implicit */_Bool) 5148027242655300968ULL)) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_1 [i_0])), (((((/* implicit */_Bool) 18209058041124440779ULL)) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))))) : ((~(((arr_1 [i_0]) ? (237686032585110837ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_17 = ((/* implicit */unsigned short) var_5);
            var_18 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (arr_2 [i_0]) : (arr_0 [i_0])));
        }
        arr_4 [9LL] [i_0] = ((/* implicit */long long int) arr_3 [i_0] [i_0] [3]);
    }
}
