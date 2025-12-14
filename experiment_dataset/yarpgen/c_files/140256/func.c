/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140256
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 += ((/* implicit */int) var_3);
        var_17 = ((/* implicit */_Bool) var_15);
        arr_3 [11] [i_0] = ((/* implicit */unsigned int) (-(((int) 5109498160667475094ULL))));
    }
    for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        var_18 += ((/* implicit */short) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) ((((var_3) < (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) ? (((/* implicit */int) ((short) var_9))) : (((/* implicit */int) arr_0 [(short)7])))))));
        arr_7 [i_1] [i_1] = ((/* implicit */_Bool) arr_1 [i_1]);
        var_19 = (+(((((/* implicit */_Bool) arr_1 [3U])) ? (var_7) : (-1474596686))));
        var_20 += max((((unsigned int) arr_4 [i_1] [(signed char)2])), (((/* implicit */unsigned int) ((_Bool) var_1))));
    }
    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-((-(var_9)))))))))));
    var_22 = ((/* implicit */unsigned int) (short)-11670);
}
