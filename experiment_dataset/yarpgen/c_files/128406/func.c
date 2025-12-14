/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128406
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
    var_18 = var_12;
    var_19 = ((/* implicit */unsigned long long int) var_9);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_3 = 4; i_3 < 16; i_3 += 4) 
                    {
                        var_20 -= ((/* implicit */signed char) var_0);
                        var_21 = ((/* implicit */long long int) var_15);
                        arr_12 [i_0] [i_1] [i_1] [6U] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_3 - 1] [i_2 + 1] [i_1])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3 - 1] [i_2 + 1] [i_1])))));
                    }
                    arr_13 [(signed char)5] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) min((var_3), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)34361)))) != (((((/* implicit */int) var_9)) | (((/* implicit */int) var_6)))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) max((var_22), (((unsigned char) var_14))));
    var_23 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned int) var_9))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) var_14)) < (var_8)))) : (((/* implicit */int) var_16)))));
}
