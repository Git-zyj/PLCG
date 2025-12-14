/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153593
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 8; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_18 &= ((/* implicit */unsigned int) max((var_9), (((/* implicit */short) arr_4 [i_4] [i_4]))));
                                var_19 = ((/* implicit */int) arr_6 [i_4] [9LL] [9LL]);
                                var_20 = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) arr_7 [i_4] [(signed char)0] [i_4] [(unsigned short)4] [i_3 + 2])), (((arr_5 [i_2] [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((2203409148058815805LL) & (((/* implicit */long long int) 377342515U)))))))))));
                                arr_13 [i_0] [8ULL] [i_1] [i_2] [8ULL] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) arr_12 [i_0] [i_0] [i_2] [7ULL] [i_0]))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_2])) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_0])))) : (((/* implicit */int) arr_2 [(signed char)4] [(signed char)4]))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((1038507051U) & (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (((/* implicit */int) ((unsigned short) var_15))) : ((-(((/* implicit */int) var_8))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) (+(-2203409148058815805LL)))) != (((((/* implicit */_Bool) 648630034)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_2])) ? (((/* implicit */int) arr_8 [(short)2] [i_1])) : (((/* implicit */int) (unsigned char)15))))));
                    arr_14 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_11 [i_0] [i_1] [i_1] [i_1] [i_1]), (((/* implicit */unsigned short) var_4))))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)7)))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) var_15)) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */unsigned int) -1055259325))))) ? (((/* implicit */long long int) ((var_12) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) var_5)) ? (-8747124010665625070LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))) - (54029LL)))));
}
