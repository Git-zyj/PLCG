/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109643
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_2 [i_0] [i_0]) - (((/* implicit */unsigned int) (~(((/* implicit */int) var_5)))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_8))) ? ((~(var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))));
                arr_4 [i_0] = ((/* implicit */unsigned long long int) (+(min((((/* implicit */unsigned int) (-(((/* implicit */int) (short)1307))))), (408262708U)))));
                var_13 -= ((/* implicit */_Bool) min((((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_0 [i_0]))))))), ((~(arr_1 [i_0] [i_1])))));
                var_14 = ((/* implicit */unsigned int) (-((+(4475230719845907380LL)))));
                var_15 = ((/* implicit */unsigned short) (((-(arr_1 [i_0] [i_0]))) % (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_9))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 1; i_2 < 15; i_2 += 3) 
    {
        for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_0) << (((/* implicit */int) arr_8 [i_2 + 2] [i_2 - 1]))))) ? (((((/* implicit */_Bool) var_4)) ? (((long long int) var_5)) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_6)))))))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (short)32762))));
                /* LoopNest 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (short i_5 = 1; i_5 < 17; i_5 += 4) 
                    {
                        for (int i_6 = 0; i_6 < 18; i_6 += 1) 
                        {
                            {
                                arr_17 [i_2] [i_5] = ((/* implicit */unsigned char) max(((+(arr_2 [i_4] [i_6]))), (max((((((/* implicit */_Bool) arr_11 [i_6] [i_5] [i_3] [i_2])) ? (arr_10 [i_5 - 1] [i_5 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)10589))))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_11 [i_2] [i_3] [i_5 - 1] [i_6])))))))));
                                var_18 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2 + 2] [i_2 - 1]))) > (arr_6 [i_2 + 1] [i_2 + 1]))))));
                                arr_18 [i_2] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) var_9)) ? ((~(var_7))) : (((/* implicit */int) arr_13 [i_2] [i_2 + 1] [i_5 + 1] [i_5])))));
                                var_19 = ((/* implicit */short) min((max((arr_14 [i_2 - 1] [i_6]), (arr_14 [i_3] [i_3]))), (max((((/* implicit */long long int) (short)-7950)), (-6556693476046169282LL)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
