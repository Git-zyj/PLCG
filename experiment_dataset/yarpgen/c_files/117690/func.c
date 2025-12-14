/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117690
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
    var_20 = ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-18449)) ? (((/* implicit */int) (short)18449)) : (((/* implicit */int) (short)-18438))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (max((((/* implicit */unsigned long long int) var_11)), (10560401061980328041ULL)))));
    var_21 = ((/* implicit */unsigned char) ((unsigned long long int) min(((+(7886343011729223578ULL))), (((/* implicit */unsigned long long int) 586183977357879270LL)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((unsigned char) 7886343011729223574ULL)))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) max(((-(((/* implicit */int) (short)-29818)))), (((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0]))))));
        arr_4 [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_1 [i_0])), (var_9)))) ? ((~(((/* implicit */int) var_0)))) : (((/* implicit */int) max((arr_2 [i_0]), (arr_0 [i_0])))))), (((/* implicit */int) ((_Bool) arr_2 [i_0])))));
        var_23 = ((/* implicit */short) max((arr_1 [i_0]), (((/* implicit */unsigned short) min((((_Bool) var_10)), (arr_0 [(short)4]))))));
    }
    var_24 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_11)))))) + (((/* implicit */int) ((7886343011729223579ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18449))))))));
    var_25 = ((/* implicit */long long int) var_8);
}
