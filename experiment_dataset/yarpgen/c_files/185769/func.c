/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185769
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
    var_19 = ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */int) ((unsigned char) var_1))) & (((/* implicit */int) ((_Bool) var_17))))) : (((/* implicit */int) var_15)));
    var_20 = ((/* implicit */unsigned long long int) ((var_3) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -4))))), ((~(var_10))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_21 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)25740))))) / (-2142567767)));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 11; i_2 += 2) 
            {
                {
                    var_22 += ((/* implicit */unsigned short) (-((~(var_16)))));
                    arr_8 [i_1] = ((/* implicit */_Bool) arr_1 [i_2 - 2] [i_1]);
                    arr_9 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */int) (_Bool)1);
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */long long int) var_4);
        arr_11 [i_0] = (+(((((/* implicit */_Bool) 173403954)) ? (((/* implicit */int) (unsigned char)110)) : (((/* implicit */int) arr_1 [(short)8] [i_0])))));
    }
    /* vectorizable */
    for (int i_3 = 3; i_3 < 15; i_3 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned short) ((unsigned char) var_0));
        arr_15 [i_3] = ((/* implicit */unsigned int) arr_14 [i_3 - 3] [i_3]);
        var_24 -= (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (0LL));
    }
    for (int i_4 = 3; i_4 < 15; i_4 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_12 [i_4 + 1])) ? (((/* implicit */int) arr_17 [i_4 - 2])) : (((/* implicit */int) (unsigned short)65535))))));
        var_26 = ((/* implicit */short) (((~(((/* implicit */int) arr_16 [i_4 - 1])))) != ((((_Bool)1) ? (((/* implicit */int) (unsigned char)60)) : (((/* implicit */int) (short)26626))))));
        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_4 - 3] [i_4])) ? ((-(1113591539U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_14 [i_4 + 1] [(unsigned short)13]))))))))));
    }
    var_28 = ((/* implicit */unsigned char) (~(((((/* implicit */unsigned int) ((/* implicit */int) (short)-19682))) | (689706594U)))));
}
