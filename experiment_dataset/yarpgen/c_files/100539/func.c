/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100539
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (signed char i_2 = 4; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] [i_2 + 2] = ((/* implicit */short) ((min((arr_7 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) arr_1 [i_2 - 2])))) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1] [i_2 - 4])) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) arr_1 [i_2 - 1])))))))));
                    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)4640)) ? (var_7) : (((/* implicit */int) ((short) (unsigned short)60651)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-17064))) : (((((/* implicit */_Bool) (-(var_18)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_14)) * (((/* implicit */int) (signed char)106))))) : (((((/* implicit */unsigned int) -1923555741)) * (var_12))))))))));
                    arr_9 [i_0] = var_0;
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 3) 
    {
        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 4) 
        {
            {
                arr_18 [i_3] [(unsigned char)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)124)) ? ((+(arr_12 [i_4]))) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)7748)) & (((/* implicit */int) (unsigned short)60893)))))));
                arr_19 [(signed char)7] [i_4] [(signed char)7] = ((/* implicit */short) (+(((/* implicit */int) ((signed char) arr_12 [i_3])))));
                var_20 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) ((signed char) (unsigned short)4652))) ? (((/* implicit */int) var_2)) : ((((_Bool)1) ? (1727459377) : (((/* implicit */int) arr_6 [i_3] [i_3] [2U])))))));
                arr_20 [i_3] [i_4] [i_3] |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-28)) ? (((unsigned int) (_Bool)0)) : (((/* implicit */unsigned int) ((arr_4 [i_3] [i_3] [(short)18]) ? (((/* implicit */int) arr_0 [i_3] [i_4])) : (((/* implicit */int) (_Bool)0))))))) ^ (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (arr_16 [i_3])))))))));
                arr_21 [i_3] [i_3] = ((/* implicit */long long int) ((((unsigned int) ((((/* implicit */_Bool) arr_7 [(short)3] [(short)3] [(short)3] [(short)3])) ? (((/* implicit */int) var_2)) : (var_13)))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
            }
        } 
    } 
    var_21 ^= ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)29031)) ? (var_13) : (((/* implicit */int) (short)-24860))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((var_9) - (var_3))))), (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (short)-23306)) : (((/* implicit */int) var_5)))))))));
}
