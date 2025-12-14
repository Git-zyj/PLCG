/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169308
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_10 = ((/* implicit */_Bool) ((((((/* implicit */int) min((((/* implicit */unsigned char) var_4)), ((unsigned char)3)))) & (((/* implicit */int) min((((/* implicit */unsigned char) var_4)), ((unsigned char)253)))))) * ((-(((arr_0 [i_0] [i_0]) ? (((/* implicit */int) (unsigned char)232)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))))));
        var_11 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) min((var_8), (arr_0 [i_0] [i_0]))))))) ? (((arr_0 [i_0] [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)22)))))) : (min((((((/* implicit */_Bool) (unsigned char)234)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)20)))), (((/* implicit */int) min((arr_1 [i_0]), (((/* implicit */unsigned short) arr_0 [i_0] [i_0])))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_0 [i_0] [i_0])) * (((((/* implicit */int) var_6)) % (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) (unsigned char)36))));
    }
    var_12 -= (unsigned short)47922;
}
