/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116754
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
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) min(((-(((/* implicit */int) var_3)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (var_12)))) : (min((234881024), (((/* implicit */int) var_9)))))))))));
    var_16 = var_4;
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((((/* implicit */int) var_12)) != (((/* implicit */int) var_6))))) : (((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_11)) - (((/* implicit */int) var_5))))) ? (((/* implicit */int) max((var_5), (arr_3 [i_0])))) : (var_8))) : (((/* implicit */int) ((unsigned short) var_5)))));
                var_17 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)30)) ? (((((/* implicit */_Bool) 234881024)) ? (234881026) : (((/* implicit */int) (short)2007)))) : (((/* implicit */int) var_12))))), (((((/* implicit */long long int) min((-234881025), (((/* implicit */int) var_11))))) ^ (((var_7) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 7; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 6; i_3 += 2) 
                    {
                        for (short i_4 = 2; i_4 < 6; i_4 += 4) 
                        {
                            {
                                arr_14 [i_4] [i_0] [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_13)), (arr_7 [i_0] [i_2 - 3] [i_3])));
                                var_18 *= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((/* implicit */int) arr_8 [i_4] [i_1 - 2] [i_2] [i_1 - 2] [i_0] [i_2])) : (var_1)));
                                arr_15 [i_0] [i_1] [i_1] [i_1] [i_3] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) 234881040))) ? (min((((/* implicit */int) (unsigned char)0)), (-234881024))) : (((/* implicit */int) (short)2007))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_10))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_9)) & (((/* implicit */int) arr_12 [i_0] [i_1]))))) ? (var_7) : (((/* implicit */long long int) (-(((/* implicit */int) var_6))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned short)17140)) : (((/* implicit */int) (short)19571)))))));
}
