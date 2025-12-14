/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123779
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
    for (unsigned long long int i_0 = 4; i_0 < 11; i_0 += 3) 
    {
        arr_2 [i_0] [i_0 - 4] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((4294967295U) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) max((var_18), (((/* implicit */unsigned char) var_7))))) ? (min((((/* implicit */unsigned long long int) (signed char)-89)), (var_10))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-47)) ? (((/* implicit */long long int) var_12)) : (var_3))))))));
        var_19 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */int) var_15)), (((((/* implicit */_Bool) -841112125)) ? (((/* implicit */int) (unsigned char)124)) : (((/* implicit */int) (unsigned char)137)))))))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) max((var_7), (var_8)))) << (((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_12) : (((/* implicit */int) var_15))))))))));
    }
    for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) -841112125)) || (((/* implicit */_Bool) arr_5 [i_1]))))) * (((/* implicit */int) max((var_5), (((/* implicit */unsigned char) var_13)))))));
        arr_8 [(_Bool)1] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)121)) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : (((/* implicit */int) arr_6 [i_1] [i_1])))) <= ((+(var_12)))));
    }
    var_20 += ((/* implicit */short) 4802161692878419825ULL);
}
