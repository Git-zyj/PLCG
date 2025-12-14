/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17234
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
    var_12 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-12705))) - (976661767U)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)10075)) + (60742883))))))))))));
                            var_14 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) ((_Bool) arr_7 [i_0] [i_1] [i_2]))), ((((_Bool)0) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_6 [i_2] [i_2]))))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 976661767U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_8 [i_0] [i_1] [i_2] [i_3]))))) : (((int) (+(1781742567))))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_11 [i_0] [i_0] [i_1])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (976661767U) : (((/* implicit */unsigned int) -265904043)))))))));
                var_16 = ((/* implicit */int) max((var_16), (((((/* implicit */_Bool) min((min((arr_6 [(unsigned char)2] [(unsigned char)2]), (((/* implicit */unsigned char) (_Bool)1)))), (((/* implicit */unsigned char) (_Bool)0))))) ? (((/* implicit */int) (((+(var_8))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_0])))))) : (((((/* implicit */int) arr_4 [i_0] [i_0] [i_1])) ^ (((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))))))));
                var_17 = ((/* implicit */short) min((700228439), (((/* implicit */int) max((((signed char) 1856483826)), (arr_2 [i_0] [i_1]))))));
            }
        } 
    } 
    var_18 = ((signed char) (!(((/* implicit */_Bool) ((unsigned int) 3318305537U)))));
}
