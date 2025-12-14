/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173929
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) arr_0 [i_0]);
        var_20 = ((/* implicit */short) arr_1 [i_0]);
    }
    /* LoopNest 2 */
    for (short i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned char) min((((min((var_5), (((/* implicit */long long int) arr_5 [i_2])))) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1])))))))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))) : (var_8)))), (((((/* implicit */_Bool) (short)7936)) ? (((/* implicit */long long int) var_12)) : (var_15)))))));
                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)249)), ((short)7936)))) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_3 [(unsigned char)2] [(unsigned char)2])) : (((/* implicit */int) (unsigned short)0)))) : (((((/* implicit */_Bool) (unsigned short)1123)) ? (((/* implicit */int) arr_3 [i_2] [i_2])) : (((/* implicit */int) arr_6 [i_1] [i_1] [i_1])))))) : (((/* implicit */int) arr_5 [i_1]))));
                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) max((((/* implicit */unsigned int) min((((/* implicit */int) var_9)), ((+(((/* implicit */int) var_9))))))), (max((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */_Bool) (unsigned char)8)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))))))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) var_2);
}
