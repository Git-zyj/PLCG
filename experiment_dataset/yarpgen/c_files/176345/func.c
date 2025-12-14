/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176345
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (unsigned int i_3 = 1; i_3 < 20; i_3 += 1) 
                    {
                        {
                            var_16 -= ((/* implicit */int) arr_4 [i_0] [i_0] [i_3]);
                            arr_9 [i_3] [i_2] [i_0] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_3 - 1]))))) & (min((((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_2]))) | (arr_6 [i_1]))), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)7))) & (arr_7 [i_2])))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */long long int) max(((signed char)65), ((signed char)-48)));
                var_18 += ((/* implicit */unsigned char) ((2113929216ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)120))) == (7469557577702954651ULL)))))));
                /* LoopNest 3 */
                for (unsigned int i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    for (unsigned int i_5 = 3; i_5 < 21; i_5 += 3) 
                    {
                        for (int i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) (!(((((/* implicit */int) arr_13 [i_1] [i_1] [i_4] [i_5 - 2] [i_6])) == (((/* implicit */int) ((((/* implicit */_Bool) 13914763405245490020ULL)) && (((/* implicit */_Bool) 18446744071595622400ULL)))))))));
                                arr_17 [i_4] [i_1] = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_5])) && (((/* implicit */_Bool) arr_1 [i_6]))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_0]))) : (arr_11 [i_0] [i_0]))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_4] [i_0]))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 19; i_7 += 3) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (signed char i_9 = 2; i_9 < 17; i_9 += 3) 
            {
                {
                    var_20 += ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_9 + 2]))))) >= (((((/* implicit */_Bool) arr_22 [i_8])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 131071U))))) : (((/* implicit */int) max((((/* implicit */short) arr_5 [i_8] [i_7])), (arr_19 [(short)4]))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 4) 
                    {
                        for (int i_11 = 0; i_11 < 19; i_11 += 4) 
                        {
                            {
                                var_21 += max((((/* implicit */unsigned int) min((1490860177), ((+(((/* implicit */int) arr_0 [i_10]))))))), (min((((/* implicit */unsigned int) min((arr_24 [i_7]), (((/* implicit */unsigned short) arr_26 [i_7] [i_11]))))), ((+(1759766502U))))));
                                arr_33 [i_10] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (signed char)19)), (((((arr_8 [i_8] [i_7]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_7]))))) ^ (((arr_6 [(unsigned char)2]) ^ (((/* implicit */unsigned int) 14))))))));
                                arr_34 [i_11] [i_11] [i_10] [i_9 - 2] [i_9] [i_8] [(signed char)7] = ((/* implicit */unsigned char) min((67108863), (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_10] [i_10] [i_10] [i_8] [i_7])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((((/* implicit */unsigned long long int) var_14)) * (min(((+(2113929210ULL))), (((/* implicit */unsigned long long int) ((var_9) * (15U)))))));
    var_23 = ((/* implicit */int) (((((!(((/* implicit */_Bool) var_14)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) | (var_9)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21589))) : (var_2))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((unsigned short)0), ((unsigned short)23487)))) ? (min((var_9), (((/* implicit */unsigned int) (unsigned char)234)))) : (max((var_6), (((/* implicit */unsigned int) (unsigned short)65535)))))))));
}
