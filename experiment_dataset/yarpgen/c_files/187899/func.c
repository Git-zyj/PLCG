/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187899
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
    for (signed char i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) 2759790240687034659ULL))) ? (((/* implicit */unsigned long long int) var_6)) : (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (arr_11 [i_0 + 1] [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                                arr_13 [i_0] [i_3 + 3] [i_3 - 1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_5 [i_0] [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_2] [i_2] [i_2]))) : (((((/* implicit */_Bool) arr_4 [i_1] [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_1] [i_1] [i_3]))) : (arr_5 [i_1] [i_1])))))) ? ((+(((arr_0 [i_0] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1]))) : (arr_2 [i_0] [i_0] [9U]))))) : ((-(arr_2 [i_0 - 2] [i_0 - 2] [i_2]))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 12; i_6 += 4) 
                        {
                            {
                                arr_19 [i_0 - 3] [i_1] [i_0] [i_0] [i_0] |= max(((-(((/* implicit */int) arr_8 [i_5] [6ULL] [i_2] [i_0 + 1] [i_6])))), ((+(((/* implicit */int) (_Bool)1)))));
                                var_17 -= ((/* implicit */unsigned char) max((arr_4 [i_6] [i_6] [i_5]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0 - 1] [i_0 + 1])) ? (((/* implicit */int) ((18446744073709551603ULL) > (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]))))) : ((~(((/* implicit */int) (_Bool)1)))))))));
                                arr_20 [0U] [i_0] [i_2] [0U] = ((/* implicit */unsigned long long int) (~((+((~(var_6)))))));
                                var_18 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0 - 2] [i_1])) ? (((/* implicit */int) arr_18 [2] [i_1])) : (((/* implicit */int) arr_18 [i_0] [i_1]))))) ? (((((/* implicit */_Bool) arr_18 [i_0] [i_5])) ? (((/* implicit */int) arr_18 [i_5] [i_1])) : (((/* implicit */int) arr_18 [i_1] [i_6])))) : (((/* implicit */int) max((arr_18 [i_0 - 3] [i_6]), (arr_18 [i_0] [i_1]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 11; i_7 += 3) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 12; i_8 += 1) 
                        {
                            {
                                var_19 &= ((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) arr_2 [i_0 - 1] [i_0] [i_0 - 1])) & (max((((/* implicit */unsigned long long int) var_12)), (var_4))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) >= (arr_16 [i_0 - 3] [i_0 - 3] [i_2] [i_7] [(_Bool)1]))))) == ((~(18446744073709551603ULL))))))));
                                arr_27 [i_0] [i_1] [i_1] [i_1] [i_8] |= ((var_4) | (((/* implicit */unsigned long long int) var_12)));
                                var_20 -= (~((+(arr_11 [i_0 - 2] [i_0 - 2]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (signed char i_10 = 3; i_10 < 10; i_10 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) arr_0 [i_10] [i_9]);
                                arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_1 [i_0 - 3]))))) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 13ULL)) ? (((/* implicit */int) var_5)) : (arr_32 [i_2] [i_2]))) & (((/* implicit */int) (!((_Bool)1))))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32256))) : (var_6)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned int) var_9);
    var_23 = ((/* implicit */unsigned char) var_4);
    var_24 = ((/* implicit */signed char) var_9);
    var_25 = ((/* implicit */_Bool) var_6);
}
