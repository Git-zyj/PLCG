/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155752
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
    var_20 = ((/* implicit */_Bool) var_12);
    var_21 += ((/* implicit */unsigned char) ((unsigned int) var_5));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_7)), (var_2)))) ? (1876229339) : (max((var_12), (1185512572))))));
                                arr_14 [i_0] [i_0] [i_0] [i_3 - 1] [i_4] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -5156049164641510846LL)) || ((!(var_6))))))) != (min((16581929358306221808ULL), (((/* implicit */unsigned long long int) (short)7062))))));
                                arr_15 [i_0] [i_1] [i_0] [i_0] [i_0] = (!(((/* implicit */_Bool) (-(arr_11 [i_0] [i_1] [i_2] [i_4 + 1] [i_0])))));
                                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_14)), (max((((/* implicit */unsigned long long int) var_3)), (1864814715403329804ULL)))))) ? ((+(arr_11 [(unsigned short)2] [i_0] [i_3 - 1] [i_3 - 1] [i_4]))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (signed char)127)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 1; i_5 < 7; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 3; i_6 < 8; i_6 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */short) (((+(((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) (signed char)-57))))))) < (((/* implicit */int) var_11))));
                                var_25 ^= ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) 826358585U)) ? (((/* implicit */int) (signed char)-105)) : (((/* implicit */int) (_Bool)0)))));
                                var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (1864814715403329804ULL))), (((/* implicit */unsigned long long int) ((-5156049164641510846LL) != (((/* implicit */long long int) var_13))))))))));
                                arr_22 [i_0] [i_1] [(short)6] [i_1] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((((/* implicit */unsigned char) arr_18 [i_1] [i_6 - 2] [i_5 - 1] [i_1])), (arr_21 [i_5 + 4] [i_1] [i_6 + 3] [i_1] [i_5 + 4])))), (((((/* implicit */long long int) ((((var_10) + (2147483647))) >> (((/* implicit */int) var_3))))) - (-5156049164641510846LL)))));
                            }
                        } 
                    } 
                    arr_23 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) var_5)) ? (arr_12 [i_2] [i_0] [i_0] [1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))))) ? ((+(((((/* implicit */_Bool) -1770469848346496265LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (14883242536614494885ULL))))) : (((/* implicit */unsigned long long int) ((long long int) max((arr_7 [i_2]), (((/* implicit */unsigned int) var_17))))))));
                }
            } 
        } 
    } 
}
