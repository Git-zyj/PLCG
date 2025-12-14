/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170292
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
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) var_6))));
    var_21 = ((/* implicit */signed char) var_15);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) /* same iter space */
                {
                    arr_9 [i_0] [i_1 - 1] [i_1 - 1] = ((/* implicit */int) (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 - 1] [i_0]))) | (min((((/* implicit */unsigned int) (_Bool)0)), (arr_5 [i_1] [i_1] [i_2])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_8 [i_0] [i_2] [i_3] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (33554368U))) > (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))))) > (((arr_1 [i_1 + 1] [i_1 + 2]) * (((/* implicit */unsigned long long int) ((int) arr_8 [i_4] [6ULL] [i_2] [i_0])))))));
                                var_23 *= ((/* implicit */short) ((((/* implicit */int) arr_11 [i_4] [i_3] [i_3] [i_2] [i_1] [i_0])) + (((((/* implicit */int) (unsigned char)232)) - (((/* implicit */int) (short)-29556))))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_5 = 0; i_5 < 12; i_5 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        var_24 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)0))));
                        var_25 = ((long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) * (18014398509481983LL)));
                        arr_20 [i_6] [i_5] [i_6] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_3)))) : ((+(2481901481U)))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 12; i_7 += 4) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 12; i_8 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) arr_8 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_7]))));
                                arr_27 [i_1 - 1] [i_5] [i_8] &= ((/* implicit */int) max((max((((/* implicit */long long int) var_6)), (arr_13 [i_1 + 2] [i_1 + 1] [i_1] [i_1 + 1] [i_1]))), ((-(arr_13 [i_1 + 2] [i_1 + 1] [(unsigned short)5] [i_1] [i_0])))));
                                arr_28 [i_0] [i_1] [(_Bool)1] [i_7] [i_7] [i_8] [i_8] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) 3816251384U)), ((~(min((((/* implicit */unsigned long long int) var_4)), (arr_7 [i_7] [i_1])))))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_9 = 0; i_9 < 12; i_9 += 3) /* same iter space */
                {
                    var_27 = ((/* implicit */long long int) arr_12 [7ULL] [i_0] [(short)11] [i_1] [i_9] [i_9] [5LL]);
                    arr_32 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((((_Bool) arr_2 [i_1])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1 + 2] [i_1 + 2] [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_1 + 2] [i_1 + 3]))))) : (min((arr_13 [i_1 + 2] [i_1 + 2] [i_1] [i_1 - 1] [i_1 - 1]), (((/* implicit */long long int) arr_8 [i_1 - 1] [i_1] [i_1 + 3] [i_1 - 1]))))));
                    var_28 = ((/* implicit */signed char) min((arr_29 [i_0]), (((/* implicit */int) (!((!(((/* implicit */_Bool) var_1)))))))));
                    arr_33 [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((996305469U) + (var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)25705)))))) : (var_3))), (((/* implicit */long long int) (~(arr_2 [i_1 + 1]))))));
                }
                arr_34 [i_1 + 1] = ((/* implicit */_Bool) min((((/* implicit */unsigned short) ((short) var_5))), ((unsigned short)65535)));
                var_29 += ((/* implicit */short) (-((((-(((/* implicit */int) var_0)))) & (((/* implicit */int) ((_Bool) (signed char)-70)))))));
                arr_35 [i_0] = ((/* implicit */int) ((unsigned short) arr_17 [i_0] [i_0] [i_1 + 1] [i_0] [i_1 + 2] [i_1 - 1]));
            }
        } 
    } 
}
