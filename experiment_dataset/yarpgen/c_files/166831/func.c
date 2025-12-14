/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166831
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                var_17 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_13)) : ((~(((/* implicit */int) (short)-21463)))))) < (min((((/* implicit */int) arr_4 [10LL] [i_1] [i_1])), (var_1)))));
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) var_6)) | (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))) < (((((/* implicit */long long int) ((/* implicit */int) var_14))) / (1739099243388176823LL))))))));
                var_19 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_15)), (var_11)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (short)-12673)))) : (min((((/* implicit */unsigned long long int) var_1)), (var_16))))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((arr_0 [(short)11] [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_0])))))) ? (((/* implicit */int) var_13)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_3 [i_1] [i_0])) : (((/* implicit */int) var_5)))))), (((/* implicit */int) var_9))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) (-(((/* implicit */int) (short)21458))));
    var_21 = ((/* implicit */signed char) var_14);
}
