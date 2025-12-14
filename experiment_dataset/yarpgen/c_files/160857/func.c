/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160857
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
    var_11 = (_Bool)1;
    var_12 = ((/* implicit */short) ((((/* implicit */int) var_1)) / ((+(((/* implicit */int) (_Bool)1))))));
    var_13 &= ((/* implicit */unsigned long long int) (((((~(((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) (_Bool)1))))))) + (2147483647))) >> (((/* implicit */int) ((unsigned char) (_Bool)1)))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) (-(((unsigned int) (unsigned short)21114))));
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) var_3))));
        var_15 = ((/* implicit */_Bool) min((max((var_8), (((/* implicit */unsigned int) var_7)))), (((/* implicit */unsigned int) var_3))));
    }
}
