/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10700
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
    var_20 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned char) var_18))));
    var_21 += ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) var_10)) : (var_0)))) ? (((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) (unsigned char)132)))) : (var_15))), (((((/* implicit */_Bool) max((362980520), (2147483617)))) ? (((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_1)))) : (((/* implicit */int) (_Bool)0))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                for (short i_3 = 2; i_3 < 15; i_3 += 2) 
                {
                    {
                        var_22 = ((/* implicit */short) ((arr_8 [i_3 - 2] [i_3 + 1] [i_2 + 1] [(unsigned short)16]) < (arr_8 [i_3 + 2] [i_3 + 1] [i_2 + 2] [i_0])));
                        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (~(arr_3 [i_3 - 1] [i_2 - 1]))))));
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)126)) ? (((arr_0 [i_1]) ? (((/* implicit */int) arr_6 [i_0] [i_1])) : (((/* implicit */int) (_Bool)0)))) : (arr_9 [i_3] [i_3] [i_3] [i_3 - 2])));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */signed char) ((arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_7 [(_Bool)0] [16U] [16] [i_0] [(unsigned short)5] [i_0])) : (((/* implicit */int) (unsigned short)7563))));
    }
}
