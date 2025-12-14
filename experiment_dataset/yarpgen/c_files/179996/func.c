/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179996
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
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_7)))) ? (((((/* implicit */_Bool) (signed char)-100)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (var_1))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)32736)))))));
        var_13 = ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) arr_0 [i_0] [i_0])))), (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (short)11304)) : (((/* implicit */int) (short)28336))))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) -350581586);
        var_14 += ((/* implicit */unsigned short) ((signed char) (short)2379));
    }
    var_15 += ((/* implicit */short) var_6);
    var_16 = ((/* implicit */signed char) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)32)));
}
