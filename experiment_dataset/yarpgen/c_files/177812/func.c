/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177812
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
    for (short i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned short) max((max((min((-5839414053363613884LL), (((/* implicit */long long int) arr_0 [(short)12])))), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) ((min((((/* implicit */int) var_10)), (var_2))) ^ (((/* implicit */int) var_10)))))));
        arr_2 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(var_2))))));
        var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))), ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_0))))))));
        arr_3 [i_0] = ((/* implicit */short) ((unsigned char) 3272409667U));
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((long long int) var_17)) + (((/* implicit */long long int) (+(arr_1 [i_0]))))))) ? (((/* implicit */int) ((signed char) max((arr_1 [i_0]), (((/* implicit */int) arr_0 [(_Bool)1])))))) : (min((((/* implicit */int) (short)-22962)), (arr_1 [i_0 - 1])))));
    }
    var_23 = ((/* implicit */unsigned short) var_15);
}
