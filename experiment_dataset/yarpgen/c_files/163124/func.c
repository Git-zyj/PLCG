/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163124
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
    var_20 += ((/* implicit */long long int) var_0);
    var_21 -= ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1))))) / (var_7))) <= (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)97)) : (((/* implicit */int) var_9)))) != (((((/* implicit */int) var_14)) | (((/* implicit */int) var_19))))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_22 = ((/* implicit */unsigned long long int) (unsigned char)224);
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) arr_1 [i_0]))) > (((/* implicit */int) ((short) var_11)))));
        var_23 = ((/* implicit */unsigned char) var_0);
        var_24 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_10))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_1] [i_2] = (!(((/* implicit */_Bool) var_10)));
                    arr_11 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)44)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (((long long int) var_16))));
                }
            } 
        } 
    }
    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 4) 
    {
        arr_14 [10LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_12 [i_3])))) ? (arr_12 [i_3]) : (((arr_12 [i_3]) * (((/* implicit */unsigned long long int) var_17))))));
        var_25 = ((/* implicit */long long int) var_17);
    }
    for (long long int i_4 = 0; i_4 < 17; i_4 += 1) 
    {
        var_26 -= ((/* implicit */short) ((long long int) (((-(arr_16 [(short)10]))) - (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_3)))))));
        var_27 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_17 [i_4])) ? (((((/* implicit */_Bool) arr_17 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (var_18))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_2)), (arr_16 [i_4])))))), (max((((/* implicit */unsigned long long int) (-(var_11)))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)221))) : (var_18)))))));
    }
    for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 4) 
    {
        var_28 = ((/* implicit */long long int) (+(((/* implicit */int) var_13))));
        var_29 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_2)), ((unsigned char)44)))) ? (((/* implicit */int) (short)25353)) : (var_5)))));
    }
}
