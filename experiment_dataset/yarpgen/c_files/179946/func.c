/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179946
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
    var_11 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((12268458851176558844ULL), (6178285222532992790ULL)))) || (((/* implicit */_Bool) (~(2041093014))))))), (1602703386U)));
    var_12 = ((/* implicit */int) min((var_9), (var_9)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0 - 1] = ((/* implicit */unsigned long long int) ((signed char) max((arr_1 [i_0 - 1] [16]), (arr_1 [i_0 - 1] [i_0 - 1]))));
        arr_3 [i_0 - 1] [i_0] = ((/* implicit */signed char) ((_Bool) (~(((((/* implicit */_Bool) var_2)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))))))));
        var_13 = var_0;
    }
    /* LoopNest 3 */
    for (long long int i_1 = 1; i_1 < 18; i_1 += 4) 
    {
        for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            for (long long int i_3 = 1; i_3 < 17; i_3 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) max((((/* implicit */int) ((unsigned char) min((6178285222532992749ULL), (12268458851176558867ULL))))), (arr_11 [i_1] [i_3])));
                    /* LoopSeq 1 */
                    for (int i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        arr_18 [i_1 + 1] [i_2] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((9973318545710895032ULL), (((/* implicit */unsigned long long int) 2364785526U))))) ? (arr_15 [i_1] [i_1] [i_3] [i_3] [i_3 + 2]) : (((/* implicit */unsigned long long int) max((arr_5 [i_4]), (95118774))))))) ? (max((((/* implicit */unsigned long long int) arr_8 [i_3 + 1] [i_3] [i_3 + 1])), (arr_15 [i_1] [i_1] [i_3] [i_2] [i_3]))) : (min((((/* implicit */unsigned long long int) -566263758)), (12268458851176558855ULL)))));
                        var_15 = ((/* implicit */_Bool) arr_8 [i_2] [i_3] [i_3]);
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 2; i_5 < 15; i_5 += 2) 
                        {
                            var_16 = ((/* implicit */int) ((min((6178285222532992749ULL), (((/* implicit */unsigned long long int) (short)-13599)))) ^ (((min((8473425527998656583ULL), (((/* implicit */unsigned long long int) (unsigned char)59)))) >> (((arr_5 [i_1]) + (1469123173)))))));
                            arr_22 [i_1] [i_2] [i_1] [i_4] [i_5] [i_1] = ((/* implicit */long long int) max((((/* implicit */int) max((arr_1 [i_3 + 1] [i_1 + 1]), (arr_1 [i_3 - 1] [i_2])))), (max((2147483647), (((/* implicit */int) (signed char)124))))));
                        }
                        var_17 += ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1 - 1] [i_1])) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (arr_12 [i_1] [i_1 + 1] [i_1 + 1] [i_1])))), (max((arr_6 [i_2]), (arr_6 [i_2])))));
                        var_18 = ((((/* implicit */_Bool) (unsigned char)209)) ? (((/* implicit */int) (short)25319)) : (((/* implicit */int) arr_1 [i_1 + 1] [i_1 + 1])));
                    }
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [(signed char)0] [i_1] [i_1 + 1] [i_1] [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)184), ((unsigned char)56))))) : (arr_6 [i_1])));
                    var_20 = ((/* implicit */unsigned char) ((int) max((arr_5 [i_1 + 1]), (arr_5 [i_1 - 1]))));
                }
            } 
        } 
    } 
}
