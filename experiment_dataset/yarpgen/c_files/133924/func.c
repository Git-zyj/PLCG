/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133924
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
        arr_2 [i_0] &= ((/* implicit */unsigned short) (((((_Bool)1) ? (((/* implicit */int) (short)27173)) : (((/* implicit */int) (short)-27200)))) / (((/* implicit */int) (short)-27175))));
        var_12 = ((((/* implicit */int) arr_0 [i_0] [i_0])) * (((/* implicit */int) arr_0 [i_0] [i_0])));
    }
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)-27163)) ? (var_0) : (((/* implicit */unsigned int) var_3)))))));
    var_14 -= ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_1)))) ? (var_6) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11)))) >> (((var_7) - (1522724876U))))))));
    var_15 &= ((/* implicit */short) max((((((/* implicit */long long int) ((/* implicit */int) (short)-27182))) / (5845226684385852772LL))), (((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) var_1))))))));
}
