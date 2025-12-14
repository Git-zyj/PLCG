/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165398
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
    var_11 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) max((var_1), (((/* implicit */long long int) var_7))))) < (var_0))))));
    var_12 |= (((((-(var_5))) > (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (var_5))))) ? (((/* implicit */unsigned long long int) min((min((((/* implicit */int) var_7)), (var_3))), (var_3)))) : (max((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) arr_1 [i_0 - 1]);
        arr_3 [i_0] = ((/* implicit */unsigned short) min((((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_1 [i_0 + 1]))) & (((/* implicit */long long int) ((((/* implicit */int) var_4)) + (((/* implicit */int) var_9))))))), (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) var_9)) % (((/* implicit */int) var_2))))), (max((arr_0 [13ULL]), (arr_0 [i_0 + 1]))))))));
        var_13 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((arr_0 [i_0 + 1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */long long int) arr_0 [i_0 - 1])) : (arr_1 [i_0 - 1]))) : (arr_1 [i_0 - 1])));
    }
}
