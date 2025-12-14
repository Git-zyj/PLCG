/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184347
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
    for (short i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3009396343U)) ? (((/* implicit */int) (signed char)-50)) : (((/* implicit */int) (_Bool)1))));
        var_15 *= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (536857792) : (((/* implicit */int) arr_1 [i_0 - 2]))))));
        var_16 = ((/* implicit */signed char) max((((unsigned short) arr_1 [i_0 + 1])), (((/* implicit */unsigned short) (_Bool)1))));
    }
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_7)), (var_10)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((unsigned char) var_5))))))))));
    var_18 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((-1270894591), (((/* implicit */int) var_12))))) ? (16058923704770838048ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) -1270894591)))))), (3ULL)));
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_8)) : (1270894590)));
    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) var_0))));
}
