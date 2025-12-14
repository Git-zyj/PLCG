/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146935
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
    var_14 = ((((((/* implicit */_Bool) max((610904448), (-610904448)))) ? (((/* implicit */unsigned long long int) 2097151)) : (((((/* implicit */_Bool) var_6)) ? (var_5) : (var_7))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) var_0)), (arr_2 [i_0]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 610904448))))))));
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1)))))) : (((arr_0 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_2 [i_0])))));
    }
    for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        arr_7 [11] = ((/* implicit */unsigned short) var_3);
        arr_8 [(unsigned char)8] = ((/* implicit */unsigned char) var_0);
    }
    var_16 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((min((var_9), (var_13))), ((-(var_9)))))) ? (var_1) : (((/* implicit */int) (unsigned char)255))));
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (+((-(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)23))) & (13666799863329491720ULL))))))))));
}
