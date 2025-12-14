/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17565
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0] = ((((((/* implicit */_Bool) 0)) ? (arr_1 [i_0]) : (((/* implicit */long long int) min((((/* implicit */int) arr_0 [i_0] [i_0])), (1546568151)))))) >= (((/* implicit */long long int) (((!(((/* implicit */_Bool) -1546568163)))) ? ((-(((/* implicit */int) arr_0 [i_0] [i_0])))) : ((+(1546568151)))))));
        var_10 = ((/* implicit */int) 2578328053U);
        arr_3 [i_0] = ((/* implicit */signed char) var_9);
    }
    var_11 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((1546568151) - (var_5)))))))));
    var_12 = max((((((/* implicit */_Bool) (~(var_4)))) ? (var_7) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1716639242U)) ? (-1546568151) : (-1546568151)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) 1546568151))) ^ (((/* implicit */int) (!(var_3))))))));
    var_13 = max((1546568146), (((/* implicit */int) (!(((/* implicit */_Bool) min((-1546568151), (((/* implicit */int) (unsigned short)65535)))))))));
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1546568156)) ? (((/* implicit */unsigned long long int) 1546568156)) : (0ULL)));
}
