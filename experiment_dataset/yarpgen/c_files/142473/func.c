/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142473
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
    var_18 = ((/* implicit */unsigned short) var_6);
    var_19 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 9172940589177942569ULL)) || (((/* implicit */_Bool) ((unsigned short) var_14))))) ? (max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_13)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1)))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) (unsigned short)10501))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_4 [i_1 + 1] [i_1 - 1] [i_1 + 1])) >= (((/* implicit */int) arr_0 [i_1 + 1] [i_1 + 1])))) ? (((/* implicit */int) arr_0 [i_1 - 1] [i_1 + 2])) : ((-(((/* implicit */int) arr_4 [i_1 + 1] [i_1 - 2] [i_1 + 2]))))));
                arr_5 [i_1 + 2] [i_0] [i_0] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) (short)-22477)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)28474)))));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((unsigned int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) * (14881130861475813689ULL)))))))));
}
