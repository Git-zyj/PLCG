/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127658
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
    for (unsigned char i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        var_18 += ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) min(((unsigned short)22343), (((/* implicit */unsigned short) (unsigned char)226))))) || (((((/* implicit */_Bool) (unsigned char)134)) && (arr_3 [i_0 + 1]))))));
        var_19 = ((/* implicit */unsigned short) (~(min((arr_2 [i_0 - 1]), (arr_2 [i_0 - 1])))));
    }
    for (unsigned short i_1 = 1; i_1 < 20; i_1 += 2) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */short) arr_3 [i_1]);
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) ((short) arr_2 [i_1])))) >= (((((((/* implicit */int) arr_1 [i_1])) > (((/* implicit */int) arr_5 [i_1])))) ? (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) (unsigned char)120)))) : (((/* implicit */int) arr_3 [i_1 - 1]))))));
        arr_10 [i_1] [i_1] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) arr_3 [i_1 + 1])) : (((/* implicit */int) arr_3 [i_1 + 1])))), ((~(((/* implicit */int) arr_3 [i_1 + 1]))))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1])) ? (arr_7 [i_1]) : (arr_7 [i_1])))) || (((/* implicit */_Bool) ((unsigned int) ((arr_2 [i_1]) < (((/* implicit */long long int) 4294967295U))))))));
    }
    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) var_3))));
}
