/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14523
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
    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) * (min((((/* implicit */unsigned long long int) var_11)), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) 3061913691U)) : (4772157919260509144ULL))))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (unsigned char)145))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)116)), (-2087888316)))) : (((((/* implicit */_Bool) (unsigned char)141)) ? (arr_1 [i_2] [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)145)))))))) ? (((/* implicit */int) arr_0 [i_0])) : ((+(((/* implicit */int) arr_3 [i_0] [(short)7] [2LL]))))));
                    var_15 = ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_2])) : (((/* implicit */int) var_0))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) / (arr_6 [i_0] [i_2]))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (unsigned char)102)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)147)))) : (((/* implicit */int) var_9)))))));
                    var_16 += ((/* implicit */unsigned int) var_1);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_13 [i_2] [i_1] [(signed char)3] [i_3] [i_4] = ((/* implicit */short) ((var_6) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_3] [i_4])) : (((/* implicit */int) min((var_8), (arr_0 [i_1])))))) - (45)))));
                                var_17 -= ((/* implicit */unsigned char) var_9);
                                var_18 = ((/* implicit */int) ((unsigned char) min((var_0), (arr_7 [i_4 + 3] [i_1] [i_1 - 1] [i_1] [i_1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_5 = 0; i_5 < 10; i_5 += 1) 
    {
        for (unsigned char i_6 = 2; i_6 < 7; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 2) 
            {
                {
                    arr_24 [i_6] = ((/* implicit */int) var_8);
                    var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)125)) ? (min((arr_16 [i_5] [i_6]), (var_4))) : (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_2))))))))));
                }
            } 
        } 
    } 
}
