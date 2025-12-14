/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125988
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
    var_17 = ((/* implicit */long long int) var_12);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_18 *= ((/* implicit */signed char) max((((arr_7 [i_0] [i_1] [14ULL] [i_4]) ^ (((/* implicit */int) (signed char)-90)))), ((~(((/* implicit */int) (signed char)-91))))));
                                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) max(((signed char)-122), (var_12)))) : ((~(2147483647)))))))))));
                                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) && ((!(((/* implicit */_Bool) min(((signed char)91), ((signed char)-122))))))));
                                arr_13 [i_0] [i_1] [i_2] [i_2] = max((((/* implicit */unsigned int) var_9)), (((0U) / (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_8)))))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned int) (((-(((/* implicit */int) (unsigned short)42147)))) / ((+(((/* implicit */int) (signed char)-92))))))) + (((var_15) + (((unsigned int) var_1))))));
                var_22 = min((max((((/* implicit */long long int) 269405134)), (((var_8) ? (arr_1 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */long long int) (~(((((/* implicit */int) (signed char)109)) & (((/* implicit */int) (unsigned char)69))))))));
            }
        } 
    } 
}
