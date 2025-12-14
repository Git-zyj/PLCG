/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105552
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
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned int) min((var_10), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) var_9))) ? (((/* implicit */int) var_5)) : (((((_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))))))));
        var_11 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((int) ((long long int) var_1)))), (120389942U)));
        var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((_Bool) var_0)) ? (var_9) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_8))))))), (var_3))))));
        arr_2 [9ULL] |= ((/* implicit */unsigned int) var_8);
    }
    var_13 = ((/* implicit */unsigned long long int) ((_Bool) var_4));
    var_14 = ((11U) | (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (_Bool)0)))));
    var_15 = ((/* implicit */unsigned short) (!(((_Bool) (short)12501))));
}
