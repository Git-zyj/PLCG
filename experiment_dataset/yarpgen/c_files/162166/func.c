/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162166
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_10 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) arr_1 [i_2])), (var_7))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)56)) == (arr_1 [i_0])))))));
                    var_11 += ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_2])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)44)) << (((((/* implicit */int) (unsigned char)55)) - (38)))))) ? (((/* implicit */int) (unsigned char)55)) : (((/* implicit */int) (unsigned char)58)))))));
                    arr_8 [i_1] [6U] = min((((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1]))) | (var_2))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_2])) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_5 [i_2]))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 2; i_4 < 8; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (arr_9 [i_3 - 1] [i_3] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)57)))));
                                arr_15 [i_3] [i_3 - 1] [i_2] [i_3] [i_1] [i_3] = ((((/* implicit */_Bool) ((unsigned int) (unsigned short)28469))) ? (((((/* implicit */_Bool) (unsigned char)183)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))))) : (8200648528930713262ULL))) : (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) var_6)) >= (2341342221063760194ULL))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)206))) : (max((((/* implicit */long long int) (unsigned char)194)), (var_2)))))));
                                var_13 = ((/* implicit */unsigned short) (-(((unsigned int) arr_1 [i_0]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */int) (-(((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))))) : (var_4)))));
    var_15 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) var_3)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)177)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40091))) : (var_4)))) ? (((/* implicit */unsigned int) ((var_5) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)3))))) : (993282435U)))));
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 1) 
    {
        for (long long int i_6 = 2; i_6 < 11; i_6 += 4) 
        {
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) 3301684861U);
                    var_17 -= ((/* implicit */unsigned int) min((((/* implicit */int) min((arr_21 [i_5] [i_7 - 1] [i_5]), (((/* implicit */unsigned short) (unsigned char)255))))), (((((((/* implicit */int) arr_16 [i_5] [i_5])) / (arr_23 [i_6] [i_7] [i_7 - 1]))) | (((((/* implicit */_Bool) var_4)) ? (arr_20 [1LL]) : (((/* implicit */int) (signed char)-66))))))));
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_7] [i_6 - 1] [i_7 - 1])) ? (((((/* implicit */_Bool) (short)31)) ? (((/* implicit */int) arr_21 [i_6 + 3] [i_6 + 3] [i_5])) : (((/* implicit */int) var_9)))) : (((/* implicit */int) min((arr_22 [i_5] [i_6] [i_7]), (((/* implicit */unsigned short) arr_19 [i_5] [i_5])))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_22 [i_5] [(short)1] [i_5])) ? (arr_18 [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14949))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_22 [i_5] [i_7] [i_7])))))))) : ((((_Bool)1) ? (arr_23 [i_6 + 2] [i_7] [14U]) : (((/* implicit */int) var_1))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) 6824894062369263926ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8))))))) | (8200648528930713257ULL)));
}
