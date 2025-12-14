/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101559
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        var_18 -= ((int) (~(3901998438U)));
        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) var_7))));
        var_20 ^= ((/* implicit */long long int) max((((/* implicit */int) ((((int) (unsigned char)21)) > (((/* implicit */int) (unsigned char)74))))), ((+(arr_0 [i_0 - 1])))));
        var_21 = ((/* implicit */unsigned char) (!(((((/* implicit */int) (unsigned char)72)) < (((/* implicit */int) (unsigned char)11))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 24; i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)22)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (262143U)))))));
        var_22 = ((/* implicit */unsigned short) (~((-(((((/* implicit */_Bool) (unsigned char)181)) ? (262143U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)95)))))))));
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) arr_3 [i_1] [i_1]))));
    }
    for (unsigned long long int i_2 = 1; i_2 < 24; i_2 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */_Bool) arr_7 [4] [(short)2])) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)228)) >> (((((/* implicit */int) (unsigned char)161)) - (158)))))))))));
        arr_8 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)75))))) ? (((((int) (unsigned char)0)) * (((/* implicit */int) arr_6 [i_2] [i_2])))) : (max((((/* implicit */int) arr_6 [i_2] [i_2])), (((((/* implicit */_Bool) var_7)) ? (arr_4 [i_2]) : (((/* implicit */int) arr_7 [i_2] [i_2]))))))));
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
    {
        arr_11 [i_3] = ((/* implicit */int) ((unsigned char) arr_6 [(unsigned char)18] [(unsigned char)18]));
        var_25 = ((/* implicit */unsigned int) (unsigned char)109);
    }
    var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) max((((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)219)) || (((/* implicit */_Bool) (short)24905))))) / (((/* implicit */int) var_17)))), (((/* implicit */int) ((unsigned char) var_9))))))));
    var_27 = var_17;
    var_28 = ((/* implicit */unsigned char) var_5);
}
