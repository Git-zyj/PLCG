/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170796
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
    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */int) var_13)) - (((/* implicit */int) var_4)))))));
    var_16 = ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)62929)) & (((/* implicit */int) var_0))))) == (((((/* implicit */_Bool) var_12)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))), ((-(((/* implicit */int) max((var_9), ((_Bool)0))))))));
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) var_6))));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (+(((((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_1 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_0 [(unsigned char)9])))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (var_12)))))));
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) var_3))));
        arr_3 [i_0] [i_0] = ((var_13) ? (min((arr_0 [i_0]), (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_7))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1]))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_19 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)94)) ? (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) (unsigned char)188)))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_1])) | (((/* implicit */int) arr_6 [i_1]))))) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) max((arr_4 [i_1]), (arr_5 [i_1]))))))));
        arr_7 [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_14), (((/* implicit */unsigned short) arr_5 [i_1]))))) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) max((arr_6 [i_1]), (var_13))))))), (((unsigned long long int) arr_4 [i_1]))));
        var_20 = ((/* implicit */unsigned char) min((((((/* implicit */int) arr_5 [i_1])) << (((((/* implicit */int) arr_5 [i_1])) - (212))))), (((/* implicit */int) arr_5 [i_1]))));
        arr_8 [i_1] [(_Bool)1] = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */long long int) var_12))));
        var_21 = ((((/* implicit */unsigned int) ((((((/* implicit */int) var_9)) + (((/* implicit */int) arr_4 [i_1])))) << (((((/* implicit */int) arr_4 [(_Bool)1])) - (56)))))) ^ (min((((((/* implicit */_Bool) arr_5 [i_1])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1]))))), (((/* implicit */unsigned int) ((_Bool) arr_6 [(signed char)12]))))));
    }
}
