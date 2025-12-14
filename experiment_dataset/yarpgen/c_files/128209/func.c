/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128209
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
    var_16 = ((/* implicit */_Bool) min((((/* implicit */int) var_5)), (((((/* implicit */int) min(((unsigned short)16), ((unsigned short)65535)))) * ((-(((/* implicit */int) (unsigned short)1389))))))));
    var_17 = ((/* implicit */_Bool) ((var_8) / (((/* implicit */unsigned int) (~((~(((/* implicit */int) (unsigned short)65523)))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_18 = ((/* implicit */_Bool) (((-(((/* implicit */int) arr_0 [i_0])))) ^ (((/* implicit */int) arr_1 [i_0]))));
        arr_2 [i_0] = (!(((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)6)), (((var_4) ? (((/* implicit */int) (unsigned short)21433)) : (((/* implicit */int) var_13))))))));
        var_19 = ((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))), ((-(((/* implicit */int) max((var_6), ((unsigned short)65535))))))));
        var_20 = arr_1 [i_0];
        arr_3 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) (unsigned short)8329))))), (var_8)));
    }
}
