/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13419
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
    var_17 = ((/* implicit */signed char) min((((/* implicit */long long int) var_7)), (((((/* implicit */_Bool) var_10)) ? (max((var_12), (((/* implicit */long long int) var_11)))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) + (var_11))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_0 [i_0] [(short)4])) ? ((+(((/* implicit */int) arr_2 [(signed char)5])))) : (-1)))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((+(((/* implicit */int) arr_2 [i_0])))) % (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) arr_2 [13LL])))), (((/* implicit */int) arr_0 [i_0] [i_0]))))) : ((~(max((var_14), (((/* implicit */unsigned long long int) arr_1 [5U]))))))));
        var_19 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [11])) + (var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(short)9]))) : (((802012618U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))))), ((~(min((((/* implicit */unsigned int) arr_1 [14])), (var_15)))))));
    }
}
