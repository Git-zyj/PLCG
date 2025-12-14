/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164072
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((signed char) (unsigned char)196))), (24U)));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1073737728)) ? (((/* implicit */unsigned long long int) 24U)) : (562949953421311ULL)))) ? (((/* implicit */int) max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))) : ((+(((/* implicit */int) var_9))))));
        arr_4 [i_0] [i_0] = ((4294967272U) < (1612166516U));
        arr_5 [i_0] = ((/* implicit */short) max(((+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) var_3)))))), (((/* implicit */int) max((min((((/* implicit */unsigned char) arr_1 [i_0])), (var_2))), (((/* implicit */unsigned char) min((var_0), (var_0)))))))));
    }
    var_10 = ((/* implicit */int) (+(((long long int) ((var_8) & (var_8))))));
    var_11 = ((/* implicit */_Bool) (~(max((((/* implicit */int) ((unsigned short) var_4))), (var_7)))));
}
