/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10773
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
    var_10 &= var_3;
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 17349930042570508040ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) (~(var_9)))) ? (var_4) : (max((((/* implicit */unsigned long long int) var_7)), (var_4)))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [i_0 + 3])), (((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 3])))))))) ? (((/* implicit */int) min((min((arr_1 [i_0 + 2]), (arr_1 [i_0]))), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0 + 2])) || (((/* implicit */_Bool) arr_1 [i_0 + 2])))))))) : (((/* implicit */int) (!(((((/* implicit */_Bool) arr_1 [i_0 + 2])) && (((/* implicit */_Bool) var_8)))))))));
        var_12 = (i_0 % 2 == zero) ? (((/* implicit */unsigned char) max((var_1), (((/* implicit */long long int) max((((((/* implicit */int) arr_0 [i_0] [i_0])) << (((((/* implicit */int) arr_0 [i_0] [i_0 + 3])) - (250))))), (((/* implicit */int) arr_1 [i_0])))))))) : (((/* implicit */unsigned char) max((var_1), (((/* implicit */long long int) max((((((/* implicit */int) arr_0 [i_0] [i_0])) << (((((((/* implicit */int) arr_0 [i_0] [i_0 + 3])) - (250))) + (17))))), (((/* implicit */int) arr_1 [i_0]))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        var_13 = ((/* implicit */unsigned int) ((min((min((((/* implicit */long long int) arr_1 [i_1])), (var_7))), (((/* implicit */long long int) ((((/* implicit */int) var_8)) << (((((/* implicit */int) arr_3 [i_1])) - (21203)))))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [8U]))))))))));
        arr_6 [i_1] [(short)7] = ((/* implicit */long long int) arr_4 [i_1]);
        arr_7 [(unsigned char)4] = ((/* implicit */long long int) var_9);
    }
}
