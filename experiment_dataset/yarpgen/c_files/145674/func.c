/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145674
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
    var_19 = (unsigned char)242;
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((((/* implicit */int) arr_0 [(_Bool)0])) + (2147483647))) >> (((/* implicit */int) arr_1 [(unsigned short)2])))))));
        arr_2 [i_0] = ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) ((unsigned short) (_Bool)1))));
    }
    for (unsigned char i_1 = 2; i_1 < 21; i_1 += 3) 
    {
        var_21 = ((/* implicit */signed char) var_13);
        var_22 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_11)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-13))) : (((var_7) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))));
        arr_5 [i_1] [i_1] = ((/* implicit */_Bool) max(((+(var_17))), (((min((var_3), (((/* implicit */unsigned long long int) arr_4 [(unsigned char)4])))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) - (((/* implicit */int) arr_4 [i_1])))))))));
        var_23 = ((unsigned char) (signed char)3);
        arr_6 [i_1] [i_1] = ((/* implicit */int) var_11);
    }
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        arr_10 [i_2] [11] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_8 [i_2]))));
        var_24 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1959650210624046804ULL)) ? (((/* implicit */int) arr_8 [i_2 + 1])) : (((/* implicit */int) arr_8 [i_2 + 1]))))), (max((((/* implicit */unsigned long long int) 1166536213)), (((unsigned long long int) arr_3 [i_2] [i_2]))))));
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2 + 1] [i_2 + 1])) ? (((/* implicit */int) arr_7 [i_2 + 1] [i_2 + 1])) : (((/* implicit */int) arr_7 [i_2] [i_2 + 1]))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_9)) >> (((((/* implicit */int) arr_7 [i_2 + 1] [i_2 + 1])) - (2775)))))) : (((long long int) arr_7 [i_2 + 1] [i_2 + 1]))));
    }
}
