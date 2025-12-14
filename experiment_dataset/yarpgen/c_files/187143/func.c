/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187143
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
    var_12 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned short) min((((/* implicit */int) ((short) 8259929011490947545ULL))), ((+(((/* implicit */int) arr_2 [i_0] [i_0]))))));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)62)), ((unsigned short)65508)))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) arr_1 [i_0] [i_0])))))));
    }
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        var_14 = ((int) arr_4 [i_1]);
        var_15 = ((/* implicit */unsigned int) min(((-(((/* implicit */int) (_Bool)0)))), (max((min((((/* implicit */int) arr_0 [i_1] [i_1])), (65535))), (65535)))));
    }
    for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
    {
        var_16 = ((/* implicit */int) (+(min((((/* implicit */unsigned long long int) arr_1 [i_2] [i_2])), (max((var_2), (((/* implicit */unsigned long long int) -2039848844))))))));
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((((/* implicit */int) arr_4 [i_2])) ^ (((/* implicit */int) arr_4 [i_2])))) > (((((/* implicit */_Bool) arr_2 [14LL] [14LL])) ? ((~(((/* implicit */int) var_8)))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)14010)) && (((/* implicit */_Bool) (unsigned char)147))))))))))));
    }
}
