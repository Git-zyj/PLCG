/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187694
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
    var_13 *= ((/* implicit */signed char) (+(((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_11))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_6)))))))));
    var_14 -= ((/* implicit */unsigned short) var_11);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) (signed char)127))))) ? ((-(((/* implicit */int) arr_0 [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned short)54874)))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) arr_7 [i_0] [i_1] [(short)10] [(short)10]))));
                    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (-(min((((/* implicit */long long int) max((var_4), (((/* implicit */unsigned short) arr_5 [i_1] [10LL] [i_1]))))), ((~(-3779245963568411806LL))))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_3 = 1; i_3 < 17; i_3 += 3) 
    {
        var_18 += ((/* implicit */short) var_12);
        var_19 += ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-108))) > (161646998U))))));
    }
    var_20 += ((/* implicit */signed char) (~(((((/* implicit */_Bool) (signed char)19)) ? (((/* implicit */unsigned int) ((var_12) ^ (-1118328978)))) : (var_9)))));
}
