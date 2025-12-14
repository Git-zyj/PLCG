/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167326
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
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) var_2)), (((((/* implicit */_Bool) (unsigned short)19359)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) || (((/* implicit */_Bool) max((((((/* implicit */_Bool) -4818966222930755752LL)) ? (((/* implicit */int) (unsigned short)19359)) : (((/* implicit */int) var_6)))), (((/* implicit */int) (!(var_8)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_3 [(unsigned short)13] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0] [6LL])) < (arr_0 [i_0] [i_0])));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)41))))) ? (((/* implicit */int) ((signed char) var_10))) : (((/* implicit */int) (signed char)-24))));
        var_16 = (!(((/* implicit */_Bool) (-(arr_0 [i_0] [i_0])))));
        arr_5 [14] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) 4818966222930755751LL))));
    }
    var_17 = ((/* implicit */int) ((_Bool) -4708854352941090839LL));
}
