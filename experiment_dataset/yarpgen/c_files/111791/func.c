/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111791
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
    for (long long int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */short) max(((~(var_0))), (((/* implicit */long long int) arr_3 [i_0] [i_1] [11LL]))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 1; i_2 < 11; i_2 += 3) 
                {
                    arr_7 [i_0] = ((/* implicit */short) arr_5 [i_0] [i_0] [i_0] [i_0]);
                    var_11 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (~(var_3)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (var_5))) : (((/* implicit */long long int) ((/* implicit */int) var_8))))), ((+(arr_6 [i_2 + 1] [i_1] [i_1] [8U])))));
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 11; i_3 += 4) 
    {
        for (unsigned int i_4 = 1; i_4 < 10; i_4 += 1) 
        {
            for (unsigned char i_5 = 1; i_5 < 10; i_5 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        for (short i_7 = 0; i_7 < 11; i_7 += 4) 
                        {
                            {
                                arr_21 [i_3] [i_4] [8] [i_3] [i_3] [7LL] = ((/* implicit */unsigned int) ((((((-2860690149169318197LL) * (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_4] [i_4] [i_4]))))) > (((2860690149169318197LL) + (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_3] [i_4] [i_4] [i_4] [i_5] [i_6] [i_5]))))))) ? (((((/* implicit */_Bool) ((var_0) | (((/* implicit */long long int) arr_5 [i_4] [i_4] [i_5 - 1] [i_6]))))) ? (max((2147483647), (var_4))) : (((((/* implicit */_Bool) 10358058410185655979ULL)) ? (((/* implicit */int) arr_12 [i_4])) : (((/* implicit */int) (short)17428)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((var_5), (((/* implicit */long long int) (unsigned short)17910))))))))));
                                var_12 ^= ((/* implicit */int) (unsigned short)871);
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) arr_11 [(unsigned char)6] [i_4]))));
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 11; i_8 += 4) 
                    {
                        for (long long int i_9 = 1; i_9 < 10; i_9 += 3) 
                        {
                            {
                                var_14 += ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (-(-7490303693300128781LL))))));
                                var_15 &= ((/* implicit */unsigned char) ((long long int) min((((/* implicit */unsigned int) arr_24 [i_4] [i_4 - 1] [i_9] [i_9] [i_9 - 1] [i_9 + 1])), (0U))));
                                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (-(((/* implicit */int) var_8))))), (arr_16 [i_4] [i_5 - 1] [i_8] [i_8] [10LL] [i_9 + 1])))) ? (((/* implicit */int) (signed char)-60)) : (((/* implicit */int) arr_14 [i_3] [i_3]))));
                                var_17 = ((/* implicit */int) (-(((((/* implicit */_Bool) (unsigned short)64665)) ? ((+(arr_6 [i_9] [i_8] [i_5] [(short)0]))) : (((/* implicit */long long int) ((int) arr_13 [i_3] [(unsigned short)3] [i_8])))))));
                            }
                        } 
                    } 
                    var_18 += ((/* implicit */_Bool) arr_10 [i_3] [0U]);
                    arr_28 [i_3] [i_4] [5ULL] = ((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)64665)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_20 [i_5] [i_5 - 1] [i_5 + 1] [i_5 - 1])) : (((/* implicit */int) arr_20 [6U] [i_5 + 1] [i_5 - 1] [i_5]))))));
                }
            } 
        } 
    } 
}
