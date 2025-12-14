/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175750
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */int) var_2)) == (((/* implicit */int) var_2))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))))))));
        arr_4 [(_Bool)1] [i_0] = ((/* implicit */unsigned char) var_5);
        var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((short) var_2)), ((short)28952)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) << (((((/* implicit */int) arr_2 [i_0 - 1])) - (55626)))))) : (((((/* implicit */_Bool) ((unsigned long long int) var_8))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) * (2017394233U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_7))))))));
        var_12 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))));
    }
    for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        var_13 = ((/* implicit */unsigned char) ((unsigned int) max((((/* implicit */unsigned char) var_6)), ((unsigned char)150))));
        arr_8 [i_1] = var_4;
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 8135014863373468405ULL)) && (((((/* implicit */_Bool) arr_7 [i_1])) || (((/* implicit */_Bool) var_9))))));
    }
}
