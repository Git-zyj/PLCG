/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155258
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
    var_16 = ((/* implicit */unsigned long long int) var_2);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) var_14);
                arr_6 [i_0] [i_1] [6ULL] = (i_0 % 2 == 0) ? (((((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_1 [i_1])) : (var_13))) >> (((((/* implicit */int) max((arr_4 [i_0] [i_1] [i_1]), (arr_4 [i_0] [i_1] [i_1])))) - (29))))) : (((((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_1 [i_1])) : (var_13))) >> (((((((/* implicit */int) max((arr_4 [i_0] [i_1] [i_1]), (arr_4 [i_0] [i_1] [i_1])))) - (29))) + (160)))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                arr_15 [2U] [i_0] [(unsigned char)11] [6LL] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_15)), (max((((var_3) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) (_Bool)0))))));
                                var_17 = ((/* implicit */int) min((var_17), (((((/* implicit */_Bool) ((((((/* implicit */int) var_6)) <= (((/* implicit */int) arr_8 [i_0] [13ULL] [(short)8] [(short)7])))) ? (((/* implicit */int) arr_7 [i_1] [i_2] [i_4])) : (((/* implicit */int) arr_4 [4] [12] [6LL]))))) ? (max((min((((/* implicit */int) var_4)), (var_2))), (((/* implicit */int) var_9)))) : (((((((/* implicit */int) (unsigned char)0)) / (((/* implicit */int) (unsigned char)6)))) * (((/* implicit */int) var_1))))))));
                                var_18 = ((/* implicit */unsigned char) (~(var_12)));
                                var_19 = ((/* implicit */int) (((+(((/* implicit */int) arr_4 [i_0] [i_3] [i_4])))) >= (((((/* implicit */_Bool) min((1559857024), (var_13)))) ? (((/* implicit */int) min((var_9), (((/* implicit */unsigned short) arr_1 [i_1]))))) : (((/* implicit */int) ((unsigned char) 658487554)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 += ((/* implicit */unsigned long long int) ((var_11) && (((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned char) var_7))))))))));
    /* LoopNest 3 */
    for (unsigned char i_5 = 0; i_5 < 18; i_5 += 1) 
    {
        for (long long int i_6 = 0; i_6 < 18; i_6 += 3) 
        {
            for (int i_7 = 0; i_7 < 18; i_7 += 1) 
            {
                {
                    arr_24 [i_7] [i_6] [i_7] = ((/* implicit */_Bool) min((((/* implicit */long long int) (+(((((/* implicit */_Bool) 1559856992)) ? (((/* implicit */int) var_15)) : (var_5)))))), (((((/* implicit */_Bool) max(((unsigned short)61570), (arr_16 [9U])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_5])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_17 [i_6]))))) : (min((arr_19 [i_7]), (((/* implicit */long long int) 262016))))))));
                    var_21 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_18 [i_7])) ? (((/* implicit */int) arr_18 [i_6])) : (((/* implicit */int) (unsigned char)239)))), (((((/* implicit */_Bool) arr_18 [i_5])) ? (((/* implicit */int) arr_18 [i_6])) : (((/* implicit */int) var_4))))));
                }
            } 
        } 
    } 
}
