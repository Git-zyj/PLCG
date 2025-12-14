/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1672
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                {
                    var_16 = ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0])) ? (min((((((/* implicit */_Bool) var_14)) ? (arr_5 [i_0] [i_0] [i_0] [(signed char)2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned int) var_2)))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) | (min((((/* implicit */unsigned int) arr_1 [i_0])), (0U))))));
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_6))) > (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_2 [(short)2] [(unsigned char)14] [(unsigned char)14]))))))) * (((/* implicit */int) var_4))));
                    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */int) ((4294967295U) != (((/* implicit */unsigned int) ((/* implicit */int) max((var_1), (((/* implicit */unsigned char) (signed char)-108))))))))) >= (((((/* implicit */_Bool) 3056513673U)) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [8U])))))))))));
                    arr_7 [i_0] [(_Bool)1] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_1 [i_2 + 1])) : (((/* implicit */int) arr_1 [i_2 - 1])))), (((/* implicit */int) arr_2 [3LL] [i_0 + 1] [(short)6]))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_1);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((var_15) % (((/* implicit */unsigned long long int) ((((unsigned int) 4294967295U)) ^ (((/* implicit */unsigned int) ((((((/* implicit */int) var_10)) + (2147483647))) << (((((((/* implicit */int) var_3)) + (3688))) - (22)))))))))));
    var_20 = ((/* implicit */long long int) var_11);
}
