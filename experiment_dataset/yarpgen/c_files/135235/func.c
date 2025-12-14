/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135235
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_8))))) : (max((((/* implicit */long long int) 2477700686U)), (arr_0 [i_0] [i_0]))))))));
        arr_3 [i_0] [10LL] = ((/* implicit */short) ((((/* implicit */_Bool) ((min((((/* implicit */long long int) arr_2 [i_0] [i_0])), (arr_0 [i_0] [i_0]))) - (arr_0 [i_0] [i_0])))) ? (((/* implicit */int) min((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0])))) : (((/* implicit */int) ((unsigned char) arr_2 [i_0] [i_0])))));
        arr_4 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((arr_1 [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1084)))))), (arr_1 [i_0])));
    }
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((-(((/* implicit */int) var_10)))), (((/* implicit */int) (unsigned short)58463))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_0)));
    var_16 = var_2;
}
