/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16852
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned int) min(((unsigned short)57347), (var_5))))))) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
    var_20 = ((/* implicit */unsigned short) max((var_20), (var_0)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) min(((-(((/* implicit */int) var_15)))), (((/* implicit */int) (unsigned short)57347))))) * (((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0]))))))))))));
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) max(((~(arr_2 [i_0]))), (min((arr_2 [i_0]), (arr_2 [i_0]))))))));
        var_23 = ((unsigned short) (!(((/* implicit */_Bool) var_7))));
        var_24 = ((/* implicit */short) arr_0 [3U]);
    }
}
