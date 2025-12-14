/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185910
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
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 3336513642U)) ? (((/* implicit */int) (unsigned short)42428)) : (((/* implicit */int) (_Bool)1)))), ((+(((/* implicit */int) var_3))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_1)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))))) : (((long long int) ((((/* implicit */_Bool) 12160709420367507314ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2)))))));
    var_16 = ((/* implicit */unsigned int) var_7);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) 3038209152U)) ? (((/* implicit */long long int) arr_0 [i_0] [i_1])) : (-8964300607343845911LL))) : (((/* implicit */long long int) 3336513642U))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        {
                            var_18 ^= ((/* implicit */unsigned char) max((6291456U), (((/* implicit */unsigned int) (unsigned short)34038))));
                            var_19 = ((/* implicit */_Bool) ((var_6) ? (min((arr_1 [i_1]), (((/* implicit */unsigned long long int) arr_6 [i_3] [i_2] [i_1 - 1] [i_0])))) : (((/* implicit */unsigned long long int) (+((-(arr_0 [i_0] [i_0]))))))));
                            var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_3 [i_0])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) var_5)) : (arr_1 [i_3])))) ? (((arr_1 [(unsigned char)8]) << (((var_10) - (2110540125))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 + 2] [i_1 + 1])))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) arr_5 [i_0] [i_0] [(unsigned short)8] [i_0]))));
            }
        } 
    } 
}
