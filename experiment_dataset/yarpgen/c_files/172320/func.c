/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172320
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
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_3)) ? (var_1) : (var_1))) : (var_1)));
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */long long int) var_2)) | (7258067855043517173LL)));
    var_15 = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_0))))) + (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (var_1))));
        var_16 = ((/* implicit */_Bool) (-(0U)));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            arr_6 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) var_10)) / (3767667883U)));
            var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (!(arr_3 [i_0] [i_1] [i_1]))))));
            arr_7 [i_1] [i_1] [i_0] |= ((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_0] [i_1] [i_1])) - (((var_9) >> (((((/* implicit */int) var_0)) - (62)))))));
            arr_8 [(_Bool)1] [i_0] [i_0] = ((/* implicit */long long int) (-((-(((/* implicit */int) arr_0 [i_0]))))));
        }
        for (unsigned int i_2 = 1; i_2 < 14; i_2 += 3) 
        {
            var_18 = ((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_2 + 2] [i_2 + 2])) - (((/* implicit */int) (_Bool)0))));
            arr_11 [i_0] [i_2 + 2] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_2)) : (arr_1 [i_0])))));
            var_19 = ((/* implicit */unsigned int) ((11) / (((/* implicit */int) var_5))));
        }
    }
    /* vectorizable */
    for (int i_3 = 4; i_3 < 8; i_3 += 3) 
    {
        arr_14 [i_3] [(_Bool)1] |= ((/* implicit */short) (((_Bool)1) ? (970483714U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-126)))));
        arr_15 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-73)) ? (((/* implicit */int) (short)-20360)) : (((/* implicit */int) var_3))));
    }
    var_20 = ((/* implicit */_Bool) max((690905002), (((/* implicit */int) (short)-9))));
}
