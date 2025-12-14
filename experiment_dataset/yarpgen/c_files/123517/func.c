/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123517
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
    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) (unsigned short)9))));
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) var_7)) : (max((((((/* implicit */_Bool) 4192256U)) ? (4192252U) : (((/* implicit */unsigned int) var_0)))), (((((/* implicit */_Bool) var_7)) ? (4290775064U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) max((((/* implicit */signed char) ((((/* implicit */int) max(((signed char)-41), (((/* implicit */signed char) arr_1 [i_1]))))) < (((/* implicit */int) (signed char)50))))), (((signed char) ((short) (unsigned short)10489))))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    var_15 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-34))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 2; i_3 < 12; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned char) (signed char)-41);
                        arr_9 [i_1] [i_1] = var_5;
                    }
                }
                var_17 &= ((/* implicit */long long int) ((((arr_5 [i_1 - 1]) != (((/* implicit */long long int) ((/* implicit */int) var_5))))) ? (((/* implicit */int) (signed char)34)) : ((~(((/* implicit */int) (unsigned short)22060))))));
            }
        } 
    } 
}
