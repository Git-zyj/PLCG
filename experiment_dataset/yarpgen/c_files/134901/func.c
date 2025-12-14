/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134901
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_4 [(unsigned short)7] [i_0] = ((/* implicit */short) (-(((/* implicit */int) ((signed char) max((((/* implicit */unsigned char) (_Bool)1)), (arr_1 [i_0] [i_0])))))));
        arr_5 [i_0] = ((/* implicit */unsigned short) (-(max((((/* implicit */int) arr_0 [i_0])), ((-(((/* implicit */int) var_8))))))));
    }
    var_15 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-16858))))), (((((/* implicit */_Bool) var_12)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)17619))))))));
}
