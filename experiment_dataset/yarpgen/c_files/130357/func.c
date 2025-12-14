/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130357
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
    var_14 = ((/* implicit */int) max((max((var_10), (((/* implicit */unsigned int) var_13)))), (((/* implicit */unsigned int) (-((-(-778254262))))))));
    var_15 *= ((/* implicit */unsigned char) ((var_4) ? (((int) var_9)) : (((/* implicit */int) min((var_2), (((((/* implicit */int) var_5)) < (((/* implicit */int) (unsigned char)176)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            {
                arr_5 [i_0] [7U] [i_1] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_4 [i_0] [i_1])), (var_11)))) ? ((~(-778254258))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (arr_3 [i_0] [i_1])))))));
                arr_6 [i_1 + 2] [i_0] = ((/* implicit */_Bool) max(((+(((var_4) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_5)))))), (((((/* implicit */_Bool) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_8))))) ? (((((/* implicit */_Bool) 2097144U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)13)))) : (((/* implicit */int) ((unsigned short) -778254272)))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned int) (~(778254238))))))) ? (((max((var_11), (((/* implicit */unsigned int) var_12)))) & (((unsigned int) arr_8 [i_0] [i_1] [i_2])))) : (((/* implicit */unsigned int) (~(((((/* implicit */int) arr_3 [i_0] [i_1])) ^ (((/* implicit */int) arr_8 [i_0] [i_0] [i_2])))))))));
                            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 + 1])) ? (var_0) : (((/* implicit */unsigned int) arr_7 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]))))) ? (((arr_0 [i_3]) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) (signed char)32)))) : ((+(((/* implicit */int) var_12))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
