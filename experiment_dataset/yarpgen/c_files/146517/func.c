/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146517
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_10 = ((/* implicit */signed char) max(((-(arr_2 [i_0] [i_0]))), (arr_2 [i_0] [i_0])));
        var_11 = ((/* implicit */unsigned char) arr_2 [i_0] [i_0]);
        var_12 = ((/* implicit */signed char) min((min((min((arr_2 [i_0] [i_0]), (((/* implicit */unsigned int) arr_1 [i_0])))), (((/* implicit */unsigned int) ((unsigned char) var_5))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (signed char)24)) : (((/* implicit */int) arr_0 [7U]))))) ? (((((/* implicit */_Bool) -276017133)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) max(((((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (5955029233046789008ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (12491714840662762607ULL)))) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) arr_1 [i_0])))))));
        arr_4 [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [(short)15])) / (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 0)))))) : (var_3))), (max((((/* implicit */unsigned int) ((unsigned short) arr_0 [i_0]))), (max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned int) var_4))))))));
    }
    var_13 = ((/* implicit */_Bool) var_4);
    var_14 = ((/* implicit */long long int) var_4);
    var_15 = ((/* implicit */int) var_5);
}
