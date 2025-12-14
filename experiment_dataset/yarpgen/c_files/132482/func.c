/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132482
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
    for (short i_0 = 3; i_0 < 8; i_0 += 3) 
    {
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) arr_3 [i_0 + 1]))) ? (((/* implicit */long long int) (+(var_4)))) : ((+(var_10))))))));
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)227)), ((unsigned short)11055))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)28))) : (arr_3 [i_0 - 3])))) | (max((arr_0 [i_0 + 1]), (((/* implicit */unsigned long long int) var_3))))))));
        var_18 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((var_9) << (((var_12) - (2722472899U)))))))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        arr_7 [(unsigned char)1] = ((/* implicit */unsigned long long int) var_7);
        var_19 = ((/* implicit */int) var_14);
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) (((-(((/* implicit */int) (unsigned char)29)))) + (((((/* implicit */int) (unsigned char)19)) / (((/* implicit */int) (unsigned char)41))))));
        var_20 = ((/* implicit */unsigned char) arr_6 [i_1] [(_Bool)1]);
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((var_14) < (((/* implicit */long long int) var_12)))))));
    }
    var_22 = ((var_11) & (var_4));
}
