/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180662
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                {
                    var_15 ^= ((/* implicit */long long int) (!(((((/* implicit */int) var_1)) == (((/* implicit */int) var_3))))));
                    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (((!(((/* implicit */_Bool) var_4)))) ? (((((/* implicit */int) min((var_10), (((/* implicit */unsigned short) arr_0 [i_1]))))) % (((/* implicit */int) arr_8 [(signed char)10] [i_1] [i_2 + 2] [i_2 + 1])))) : (((/* implicit */int) min((((/* implicit */short) arr_0 [i_0])), (arr_1 [i_1 - 1])))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [10ULL] [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_3))));
                                var_17 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) arr_11 [(_Bool)0]))))) ? ((-(((/* implicit */int) arr_5 [i_0] [i_2])))) : (((/* implicit */int) arr_1 [i_3 + 1]))))));
                                var_18 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                                arr_15 [i_2] [i_2] [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) min(((signed char)-127), (((/* implicit */signed char) (!(((1078075344U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 += ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 1; i_5 < 10; i_5 += 1) 
    {
        for (short i_6 = 0; i_6 < 11; i_6 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 3; i_7 < 7; i_7 += 3) 
                {
                    for (int i_8 = 0; i_8 < 11; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 11; i_9 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((17949599358739804719ULL), (((/* implicit */unsigned long long int) 436267799U))))) ? ((-(4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) && (((/* implicit */_Bool) arr_18 [i_5]))));
                                var_21 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)20656)) ? (((/* implicit */int) (unsigned short)65517)) : (((/* implicit */int) (short)-11439))))) ? (arr_21 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))));
                                var_22 -= ((/* implicit */signed char) max((((/* implicit */unsigned int) (((+(((/* implicit */int) (_Bool)1)))) ^ (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3))))))), (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))))), (((((/* implicit */_Bool) arr_8 [i_9] [(unsigned short)0] [(unsigned short)0] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (3216891951U)))))));
                                var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) -2311937386555328764LL))));
                            }
                        } 
                    } 
                } 
                var_24 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) var_12)) - (var_9))) >> (((((((/* implicit */unsigned int) ((/* implicit */int) min((arr_27 [i_5] [i_5] [i_5] [5ULL] [i_5] [i_5]), (arr_22 [i_5] [i_6] [i_6]))))) + (min((((/* implicit */unsigned int) var_5)), (1078075340U))))) - (39785U)))));
            }
        } 
    } 
    var_25 = ((((/* implicit */_Bool) ((max((((/* implicit */unsigned int) (_Bool)1)), (var_12))) & (var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (min((((/* implicit */unsigned int) (+(((/* implicit */int) var_5))))), (((((/* implicit */_Bool) var_13)) ? (1078075350U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
    var_26 = var_4;
}
