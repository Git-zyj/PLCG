/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133413
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
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) min((((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) arr_0 [(unsigned short)2] [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)0)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))))) ? (min((((/* implicit */unsigned int) -227510038)), (262648080U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)74))))))))));
        var_13 -= ((/* implicit */unsigned long long int) arr_0 [i_0 - 3] [i_0]);
    }
    for (int i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((-2147483647), (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_1])))) : (((/* implicit */int) var_2))));
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(unsigned char)3])) ? (((/* implicit */int) arr_1 [i_1])) : (((((/* implicit */_Bool) (signed char)-61)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_1] [i_1]))))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) -606684648)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_1 [i_1])))), (((/* implicit */int) arr_2 [i_1] [i_1]))))) : (((((/* implicit */_Bool) min((4032319216U), (((/* implicit */unsigned int) (signed char)-126))))) ? (18446744073709551611ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [i_1] [i_1]), (var_10)))))))));
    }
    /* LoopNest 3 */
    for (short i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 2; i_4 < 12; i_4 += 1) 
            {
                {
                    var_14 *= ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_10)) ? (max((1095602041), (((/* implicit */int) (short)0)))) : (((int) arr_12 [i_4] [i_3] [8ULL])))));
                    arr_15 [i_3] [i_3] [i_4] = ((/* implicit */long long int) 262648102U);
                    var_15 *= ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) < (arr_9 [i_4])))), (((signed char) arr_1 [i_2]))))) : (((/* implicit */int) (signed char)112))));
                    arr_16 [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2] [i_3] [i_4])) ? (((/* implicit */int) arr_11 [i_2] [i_3] [i_2])) : (arr_12 [i_2] [i_3] [i_4])))) ? (0ULL) : (((/* implicit */unsigned long long int) min((arr_8 [9U] [9U]), (((/* implicit */long long int) arr_11 [i_2] [i_3] [i_4 - 1])))))))) ? (((((/* implicit */_Bool) arr_14 [i_3] [i_4 - 1] [i_4 - 2])) ? (arr_12 [i_4 + 1] [i_4 - 1] [i_4 - 2]) : (((/* implicit */int) arr_14 [i_3] [i_4 + 1] [i_4 - 1])))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) arr_1 [i_2]))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        for (long long int i_6 = 0; i_6 < 13; i_6 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */short) 5ULL);
                                arr_23 [i_5] [i_3] [2] [(signed char)12] [i_3] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_8 [i_2] [i_4 - 2])) ? (arr_8 [i_3] [i_4 - 1]) : (arr_8 [i_3] [i_4 - 1]))));
                                arr_24 [i_5] [i_5] [i_3] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */int) min(((unsigned short)17897), (((/* implicit */unsigned short) (signed char)-100))))) <= (((/* implicit */int) arr_11 [i_4 + 1] [i_3] [i_3]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
