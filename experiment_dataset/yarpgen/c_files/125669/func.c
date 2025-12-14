/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125669
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) var_13)))))) >= (((((/* implicit */unsigned int) ((((/* implicit */int) var_9)) * (((/* implicit */int) var_11))))) % (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_5)))))));
    var_18 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_10))));
    var_19 = ((/* implicit */unsigned char) var_8);
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_0]))));
        var_21 = ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))));
        var_22 = ((/* implicit */unsigned int) ((((unsigned long long int) arr_0 [i_0])) / (((/* implicit */unsigned long long int) (+(arr_0 [i_0]))))));
    }
    for (signed char i_1 = 3; i_1 < 20; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            for (unsigned int i_3 = 2; i_3 < 20; i_3 += 1) 
            {
                {
                    var_23 |= ((/* implicit */unsigned char) (-((~(arr_9 [i_2] [i_2])))));
                    var_24 = ((/* implicit */unsigned short) (+(((arr_8 [i_1 - 1] [i_2]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1 - 2])))))));
                    var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)48))));
                    var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((signed char) arr_3 [i_3]))), (((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (min((((/* implicit */unsigned int) var_6)), (arr_9 [i_1 - 3] [(unsigned char)2]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_10 [i_3] [i_2] [i_1])) : (((/* implicit */int) var_3))))))))))));
                }
            } 
        } 
        var_27 = ((/* implicit */signed char) max((((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_3 [12U])), (arr_6 [i_1 + 1] [i_1 - 3] [i_1])))), ((~(4294967295U)))));
    }
}
