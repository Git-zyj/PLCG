/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159391
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
    var_11 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)14)) | (((((/* implicit */int) min(((unsigned short)65522), (((/* implicit */unsigned short) (signed char)-25))))) >> (((((/* implicit */int) var_8)) - (20848)))))));
    var_12 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) var_3))) << (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))))) : (18U)));
    var_13 = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (((var_4) - (var_4))))) / (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_8))) + (-4603022997898465554LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65499)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-23042))))) : (var_4)))));
    var_14 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((var_0) + (((/* implicit */int) var_10))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_9))))) : (((5420342960126100071LL) << (((/* implicit */int) var_7)))))) ^ (var_6)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) max(((unsigned short)6), (((/* implicit */unsigned short) var_5))))) : (((arr_4 [i_0] [i_0] [i_1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) arr_1 [i_0] [i_0]))));
                arr_6 [i_1] [i_0] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)26431)) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) arr_3 [i_0] [i_0]))))) ? (((/* implicit */int) ((unsigned short) arr_4 [i_0] [i_0] [i_1]))) : (((/* implicit */int) (unsigned short)65531))))));
            }
        } 
    } 
}
