/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115369
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
    var_10 = ((/* implicit */short) max((var_10), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */short) var_1)), (var_2)))), (((unsigned long long int) var_6))))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_0))) / (((((/* implicit */_Bool) var_9)) ? (2305843009213693951LL) : (var_3)))))))))));
    var_11 = ((/* implicit */_Bool) var_5);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        var_12 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) % ((-(var_5))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((2305843009213693936LL) / (((/* implicit */long long int) ((/* implicit */int) var_4)))))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_0])))))) ? (((/* implicit */unsigned long long int) 6042413199349881517LL)) : (((((/* implicit */_Bool) (~(7660759768477398343LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (arr_0 [i_0] [i_0]) : (var_9)))) : (arr_2 [i_0 + 1])))));
        arr_5 [i_0] = (((-(min((((/* implicit */unsigned int) var_0)), (arr_3 [i_0] [i_0]))))) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)3866)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2))))))))));
    }
    var_13 = ((/* implicit */short) var_1);
}
