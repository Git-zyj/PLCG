/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163946
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min(((-(((/* implicit */int) var_1)))), ((~(((/* implicit */int) var_15)))))))));
        arr_4 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)233)), ((-(((/* implicit */int) (unsigned char)124)))))))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) ((((arr_2 [i_0]) > (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))))) : (min((arr_2 [i_0]), (arr_2 [i_0])))));
        var_16 = ((/* implicit */unsigned int) ((int) ((((/* implicit */int) var_15)) * ((-(((/* implicit */int) var_6)))))));
    }
    var_17 |= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)26456)) ? (((/* implicit */int) (unsigned short)13437)) : (((/* implicit */int) (unsigned char)124))));
}
