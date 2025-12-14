/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111970
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) ((long long int) var_16)))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_4)), (min((((((/* implicit */_Bool) (unsigned short)11267)) ? (var_0) : (((/* implicit */unsigned long long int) 395482364)))), (((/* implicit */unsigned long long int) var_16))))));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -2157776031291221400LL)), (17032777620302445347ULL)));
        arr_3 [i_0] [i_0] = arr_0 [i_0];
        var_20 = ((/* implicit */int) ((max((min((var_1), (1116141062U))), (3310622867U))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (var_10)))) ? (((var_10) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))))) : (min((((/* implicit */unsigned int) (unsigned short)20145)), (var_2)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) arr_0 [i_1]))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                {
                    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_9)))))));
                    var_23 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (short)-15996)) : (((/* implicit */int) var_4)))) - (((((/* implicit */_Bool) arr_6 [i_3])) ? (var_13) : (((/* implicit */int) (short)-15982))))));
                    arr_12 [i_3] [i_1] [i_1] [i_1] &= ((/* implicit */int) var_10);
                }
            } 
        } 
    }
    for (unsigned int i_4 = 0; i_4 < 16; i_4 += 3) 
    {
        arr_15 [i_4] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (short)-15996)) : (arr_11 [i_4] [i_4] [i_4] [16U])))));
        arr_16 [i_4] = ((/* implicit */signed char) max((((((/* implicit */_Bool) 984344428U)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_0 [i_4]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_15)))))));
    }
    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_10)) + (-9223372036854775806LL)))) ? (var_5) : (((((/* implicit */unsigned int) var_13)) - (var_10)))))) ? (var_11) : (min((((/* implicit */unsigned int) var_12)), ((+(var_5)))))));
    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */unsigned long long int) var_10))));
}
