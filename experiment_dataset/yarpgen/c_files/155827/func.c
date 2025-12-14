/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155827
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
    for (long long int i_0 = 2; i_0 < 24; i_0 += 1) 
    {
        arr_2 [i_0] [0ULL] = ((/* implicit */int) ((unsigned char) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_0 [i_0] [i_0 - 2])) : (((/* implicit */int) arr_1 [i_0])))))));
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (((((-(((/* implicit */int) (_Bool)1)))) % (((/* implicit */int) (unsigned char)38)))) + (((/* implicit */int) arr_1 [(signed char)12])))))));
    }
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((max((var_17), (var_17))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned char)218))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_15)) != (((/* implicit */int) (unsigned char)211)))))) : (((((var_10) == (var_10))) ? (-4536690875628258989LL) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) var_15)), (var_3)))))))));
}
