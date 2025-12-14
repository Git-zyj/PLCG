/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101956
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_0]))));
        var_18 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */int) ((signed char) var_13))) : (((((/* implicit */_Bool) 8181979416706314302LL)) ? (((/* implicit */int) (unsigned short)56412)) : (((/* implicit */int) var_12)))))))));
        var_20 = ((/* implicit */signed char) arr_2 [i_1]);
    }
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */long long int) max(((+(((/* implicit */int) (unsigned char)148)))), (((/* implicit */int) var_6))))) + (var_4)));
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) var_2)), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)39876))))))) ? (((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned char)102)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_14)))), (((((((/* implicit */int) var_16)) + (2147483647))) >> (((((/* implicit */int) (unsigned short)39884)) - (39854)))))))) : (((((/* implicit */_Bool) min((((/* implicit */short) var_10)), (var_16)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */int) (unsigned char)148)) : (((/* implicit */int) (unsigned short)39876))))) : (var_4)))));
}
