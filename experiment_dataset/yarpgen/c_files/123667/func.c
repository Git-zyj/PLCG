/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123667
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
    var_12 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) min((((/* implicit */unsigned int) var_5)), (4294967280U))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)21059))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_13 = ((/* implicit */int) min((var_13), (min((((/* implicit */int) min((((/* implicit */short) arr_0 [i_0 + 1])), ((short)21072)))), (((((/* implicit */int) (unsigned short)34435)) | (((/* implicit */int) arr_0 [i_0 + 1]))))))));
        arr_2 [i_0 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((int) arr_1 [i_0]))) & (arr_1 [i_0 + 1])))) ? (((/* implicit */int) arr_0 [16])) : (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5))))));
        arr_3 [13U] = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_0 [i_0 + 1])), ((-(((/* implicit */int) (unsigned char)237))))));
        var_14 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((long long int) 0))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (arr_1 [i_0]))) << (((/* implicit */int) ((((/* implicit */_Bool) 13309979827985977975ULL)) && (((/* implicit */_Bool) (unsigned char)137)))))));
    }
    var_15 = (-(22));
}
