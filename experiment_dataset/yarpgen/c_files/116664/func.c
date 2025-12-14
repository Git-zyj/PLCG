/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116664
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
    var_12 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))));
    var_13 = ((/* implicit */signed char) ((((/* implicit */int) (short)-15803)) / ((+(((/* implicit */int) var_1))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_3 [i_0 - 1] [i_1] [(unsigned char)6])) : (((/* implicit */int) arr_2 [i_0 - 1] [i_0 + 1]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (signed char i_4 = 3; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */int) ((unsigned short) min((arr_3 [i_0 - 1] [(unsigned short)16] [i_0]), (arr_3 [i_0 + 1] [i_1] [i_0]))));
                                var_16 = ((/* implicit */unsigned int) var_9);
                                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-15803)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)0)) + (((/* implicit */int) min((((/* implicit */short) (signed char)0)), ((short)-15812))))))) : (min((((((/* implicit */_Bool) (signed char)0)) ? (9361156525707366625ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9961))))), (9361156525707366625ULL))))))));
                                var_18 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_2] [i_4 + 1])))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (300320172) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_4 - 1]))) : (min((((/* implicit */unsigned long long int) arr_7 [i_4] [i_3] [i_2] [i_2] [i_1] [i_0])), (14460078440514649653ULL)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 &= ((/* implicit */short) ((long long int) var_4));
}
