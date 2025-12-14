/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111869
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
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_9 [2ULL] [i_2] [i_1] [2ULL] |= max((((((/* implicit */_Bool) arr_1 [i_1 - 2])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 - 1]))))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42613))) * (max((arr_3 [i_0]), (((/* implicit */unsigned int) (unsigned short)42613)))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */int) arr_13 [i_0] [i_2] [i_2] [i_3] [i_3] [i_3] [i_1])) : (((/* implicit */int) arr_1 [i_0]))))), (((var_6) | (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1 - 1] [i_2 - 1] [i_4 - 2])))))));
                                var_12 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_5 [i_3 + 1])) ? (max((1685064120U), (((/* implicit */unsigned int) arr_12 [i_1] [i_3] [i_4])))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
                                arr_16 [i_4] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((int) (signed char)-90));
                            }
                        } 
                    } 
                    arr_17 [i_0] [(signed char)12] [i_2] |= ((/* implicit */int) (_Bool)1);
                    arr_18 [0] [i_1] [i_2] [i_2] |= ((/* implicit */unsigned int) ((((((/* implicit */long long int) min((((/* implicit */int) (signed char)107)), (var_11)))) | (var_5))) <= (((/* implicit */long long int) min(((+(((/* implicit */int) (signed char)-1)))), (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-90)), ((unsigned short)22923)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 4) 
    {
        for (signed char i_6 = 0; i_6 < 12; i_6 += 3) 
        {
            {
                arr_25 [i_5] [i_5] [i_6] = ((/* implicit */unsigned char) ((((((var_5) >= (((/* implicit */long long int) -2147483638)))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_7 [i_5] [i_6] [i_6]))))) : ((-(var_5))))) & (((/* implicit */long long int) (~(((/* implicit */int) (signed char)(-127 - 1))))))));
                arr_26 [i_5] [i_5] [i_6] = ((/* implicit */int) var_8);
                arr_27 [i_5] [i_6] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_21 [i_5])) ? (((/* implicit */int) arr_10 [i_5] [i_5] [i_6] [i_6])) : (((/* implicit */int) var_4)))), (((/* implicit */int) var_9))));
                var_13 = ((/* implicit */signed char) ((((/* implicit */int) var_10)) == (((((/* implicit */int) (unsigned short)65533)) / (((/* implicit */int) (signed char)-49))))));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) var_0);
}
