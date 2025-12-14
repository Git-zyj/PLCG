/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11891
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
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) var_3)))))) || (((/* implicit */_Bool) var_9))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned char) max((65535LL), (((/* implicit */long long int) 32505856))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 1; i_2 < 17; i_2 += 1) /* same iter space */
                {
                    arr_9 [i_2] [i_1] = ((/* implicit */unsigned short) 27U);
                    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) var_0)) > (((/* implicit */int) (unsigned short)3))))), ((~(27U))))))));
                }
                for (unsigned int i_3 = 1; i_3 < 17; i_3 += 1) /* same iter space */
                {
                    var_14 -= ((/* implicit */signed char) ((int) ((((/* implicit */int) ((var_2) < (((/* implicit */unsigned int) var_6))))) < (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))));
                    var_15 -= ((/* implicit */_Bool) max((((unsigned int) ((((/* implicit */long long int) 18U)) / (9223372036854775792LL)))), (min((((((/* implicit */_Bool) 4294967295U)) ? (4294967287U) : (4294967277U))), (((((/* implicit */_Bool) 8384512U)) ? (((/* implicit */unsigned int) var_5)) : (4U)))))));
                }
                var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) max((((/* implicit */long long int) var_3)), ((-(max((arr_10 [(unsigned short)18] [i_1]), (((/* implicit */long long int) arr_4 [i_0] [i_1] [5LL])))))))))));
            }
        } 
    } 
    var_17 = ((signed char) var_7);
    var_18 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)7)) | (((/* implicit */int) (short)12))));
}
