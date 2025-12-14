/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170165
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)110)) < (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)146)) & (((/* implicit */int) var_19))))) ? (((/* implicit */int) min(((unsigned char)57), (var_17)))) : (((((/* implicit */_Bool) (unsigned char)199)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_2))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)112)), (((((/* implicit */_Bool) (unsigned char)57)) ? (((/* implicit */int) (unsigned char)151)) : (((/* implicit */int) (unsigned char)192))))))) ? (((/* implicit */int) (unsigned char)169)) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)167)) - (((/* implicit */int) (unsigned char)5))))) ? ((+(((/* implicit */int) (unsigned char)115)))) : (((/* implicit */int) (unsigned char)3)))))))));
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0])))) > (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned char)145)) : (((/* implicit */int) (unsigned char)41))))));
    }
    for (unsigned char i_1 = 3; i_1 < 20; i_1 += 3) 
    {
        var_23 = arr_3 [i_1] [i_1 + 2];
        arr_5 [(unsigned char)14] |= ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)232))));
    }
    var_24 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned char)65)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)108))))));
    var_25 = var_3;
    var_26 = ((/* implicit */unsigned char) min((var_26), (var_19)));
}
