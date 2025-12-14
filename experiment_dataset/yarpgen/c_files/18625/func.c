/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18625
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-27)), ((unsigned short)40379))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (arr_1 [i_0] [i_0])))) ? (((((/* implicit */_Bool) 3321144718U)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_1 [i_0] [i_0]) > (arr_1 [i_0] [i_0]))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) % (((/* implicit */int) arr_0 [i_0])))))));
        var_12 = ((/* implicit */long long int) max((arr_0 [i_0]), (((/* implicit */short) arr_2 [i_0] [i_0]))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_0 [i_0])), ((~(((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) ^ (3321144718U)))))));
    }
    var_13 = ((/* implicit */unsigned short) var_10);
}
