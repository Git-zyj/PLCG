/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18038
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
    var_16 = ((/* implicit */unsigned int) var_13);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        var_17 = ((((/* implicit */_Bool) (signed char)-64)) ? ((+(arr_1 [i_0 + 1] [i_0 + 1]))) : (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) == (((/* implicit */int) (signed char)-1)))))) * (arr_1 [i_0 + 2] [i_0 + 1]))));
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_0 [i_0 + 1] [i_0 - 1])))) / (((((/* implicit */_Bool) var_15)) ? (min((arr_1 [i_0 + 1] [(unsigned char)7]), (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) var_0)), (var_11)))))))));
        var_19 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)245)) ? (arr_1 [3U] [i_0]) : (arr_1 [i_0] [i_0]))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 3574851624U))))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(signed char)11] [i_0 - 1]))) : (((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0])) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) & (arr_1 [i_0 - 1] [i_0 - 1]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (signed char)59)) : (((/* implicit */int) arr_0 [i_0] [i_0])))))))));
    }
    for (signed char i_1 = 3; i_1 < 12; i_1 += 4) 
    {
        var_20 = ((/* implicit */unsigned int) var_13);
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1 - 2] [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_1 [i_1 + 3] [i_1])))) ? (arr_3 [(unsigned char)5] [(unsigned char)4]) : (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (arr_1 [i_1] [i_1]))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 - 3] [8U])))))));
        arr_4 [(unsigned char)3] [i_1] = ((/* implicit */signed char) var_7);
    }
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_9))) * (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)10), ((unsigned char)48)))))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_11))));
    var_23 = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)126))));
}
