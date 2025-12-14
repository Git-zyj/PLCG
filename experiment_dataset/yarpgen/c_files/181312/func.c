/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181312
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
    var_11 = ((/* implicit */unsigned int) min(((~(((((/* implicit */int) (_Bool)1)) + (var_8))))), (var_4)));
    var_12 = ((/* implicit */int) min((var_12), (((var_7) ? (var_4) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (var_4)))) ? ((~(((/* implicit */int) (_Bool)1)))) : (var_8)))))));
    var_13 = ((((/* implicit */int) var_10)) == (((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) var_7))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0]))))))) ? ((-(((var_7) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) 9)))))) : ((+(min((((/* implicit */unsigned int) (_Bool)1)), (var_9)))))));
        arr_3 [i_0] = ((/* implicit */int) (_Bool)0);
        var_14 = ((/* implicit */int) arr_0 [i_0]);
        var_15 += ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 1769018387U)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) (_Bool)1))))) ? (min((((/* implicit */int) ((1635906567U) >= (arr_0 [i_0])))), (((arr_1 [(_Bool)1]) ? (-1411629886) : (((/* implicit */int) var_7)))))) : (((/* implicit */int) arr_1 [2U]))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] = ((min((arr_0 [i_1 - 1]), (arr_0 [i_1 - 1]))) ^ (((min((2525948909U), (((/* implicit */unsigned int) arr_1 [i_1])))) * (min((arr_0 [i_1]), (((/* implicit */unsigned int) arr_5 [(_Bool)1])))))));
        var_16 = ((/* implicit */int) arr_5 [i_1 - 1]);
    }
}
