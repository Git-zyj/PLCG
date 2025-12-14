/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184456
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
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        var_10 *= ((/* implicit */_Bool) min(((unsigned short)54194), ((unsigned short)20388)));
        var_11 = ((/* implicit */unsigned int) arr_0 [i_0]);
        var_12 = ((/* implicit */unsigned int) var_2);
    }
    var_13 = ((/* implicit */unsigned int) (unsigned short)45147);
    var_14 = ((/* implicit */unsigned int) (((~(((/* implicit */int) var_0)))) | (((/* implicit */int) (unsigned short)20418))));
    var_15 = ((/* implicit */unsigned short) max(((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_8)), ((unsigned short)3))))) : (((497144998U) & (229847169U))))), (((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)0)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)64121)))))))));
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)45119)) ? (max((((/* implicit */int) (unsigned short)12288)), (((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) var_2)))))) : (((min((var_5), (var_4))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0))))));
}
