/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155921
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
    for (unsigned long long int i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) > (var_2)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_0 [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18254))))))))))))));
        arr_2 [(unsigned char)3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [(unsigned char)16])) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-16497)) ? (5399203994829822744ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16496)))))) ? (((/* implicit */int) (unsigned short)1685)) : (((/* implicit */int) (short)16501))))));
        var_21 = ((/* implicit */short) ((((/* implicit */int) (((+(arr_0 [i_0]))) != (arr_0 [i_0 - 3])))) >= ((((+(((/* implicit */int) var_19)))) >> (((((((/* implicit */_Bool) var_18)) ? (var_14) : (4253965629U))) - (1234884553U)))))));
    }
    var_22 = ((/* implicit */unsigned short) min((((unsigned long long int) ((((/* implicit */int) var_5)) + (((/* implicit */int) (short)8))))), (var_18)));
    var_23 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)63155)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)63173)))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)113)) ? (((/* implicit */int) (short)25)) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((unsigned short) (unsigned short)2380)))))));
}
