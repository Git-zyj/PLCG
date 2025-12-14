/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15947
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(min((1183554799), (((/* implicit */int) (signed char)37))))))) ? (var_2) : (((/* implicit */unsigned long long int) var_0))));
    var_14 = ((/* implicit */unsigned short) ((unsigned int) (~(((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)25))))))));
    var_15 = ((/* implicit */int) var_1);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 3447712453U)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-((+(((/* implicit */int) (signed char)-30))))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0] [8LL]) : (arr_1 [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (signed char)-37)))))))))));
    }
}
