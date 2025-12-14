/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100572
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
    var_12 = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) var_5)), (min((((/* implicit */unsigned long long int) var_11)), (var_3))))) & (((/* implicit */unsigned long long int) var_0))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned long long int) (-(((/* implicit */int) arr_4 [i_0] [i_0])))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 4) 
                {
                    arr_9 [(signed char)12] [i_1] [i_0] [(signed char)12] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((17981638938657652136ULL) >> (((131056U) - (131040U)))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_5)) % (arr_2 [i_0] [8LL] [i_2]))))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        arr_12 [i_0] = ((((arr_10 [i_3] [i_2] [i_0] [i_0] [i_0] [i_0]) | (((/* implicit */long long int) 131056U)))) & (((/* implicit */long long int) ((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) var_7)))))));
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_4);
                    }
                    arr_14 [2ULL] [2ULL] [2ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) || ((_Bool)1))))) > (arr_7 [i_0])));
                    arr_15 [i_0] [i_1] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                }
                for (unsigned int i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    arr_18 [i_0] [i_0] [i_4] = ((/* implicit */unsigned char) (signed char)-42);
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 14; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 4) 
                        {
                            {
                                arr_25 [i_0] [i_5] = ((/* implicit */signed char) (~(((/* implicit */int) ((((((/* implicit */unsigned long long int) arr_24 [i_0] [i_0] [i_0])) > (arr_11 [i_0]))) || (((/* implicit */_Bool) min((arr_1 [i_5] [i_0]), (arr_1 [i_0] [i_0])))))))));
                                arr_26 [i_0] [i_0] [i_4] [i_0] [i_0] = ((((/* implicit */_Bool) ((min((var_8), (((/* implicit */long long int) var_5)))) * (((/* implicit */long long int) ((((/* implicit */int) arr_19 [i_0] [i_4] [i_4] [i_6])) / (((/* implicit */int) (short)30884)))))))) ? (((((((/* implicit */_Bool) -3463294705432605790LL)) ? (((/* implicit */unsigned long long int) arr_24 [i_5] [i_4] [i_0])) : (var_4))) / (min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_5)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)235), (((/* implicit */unsigned char) arr_6 [i_6])))))) * (((((/* implicit */long long int) var_2)) / (var_8)))))));
                                arr_27 [i_0] [i_1] [i_4] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_24 [i_0 - 1] [i_0 - 1] [i_0 - 1]), (((/* implicit */long long int) ((((/* implicit */int) arr_19 [i_0] [i_1] [i_0] [i_1])) - (((/* implicit */int) (_Bool)1)))))))) && ((!(((/* implicit */_Bool) (~(((/* implicit */int) arr_21 [i_0])))))))));
                                arr_28 [i_6] [i_6] [i_6] [i_0] [i_6] = ((/* implicit */long long int) arr_17 [i_4] [i_1] [i_4] [i_4]);
                            }
                        } 
                    } 
                    arr_29 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) var_5)) ^ (-19LL))) & (((/* implicit */long long int) (~((~(arr_22 [i_0] [i_1] [i_1] [i_1] [i_4] [i_1] [i_4]))))))));
                }
                for (signed char i_7 = 1; i_7 < 13; i_7 += 3) 
                {
                    arr_32 [0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) % (((/* implicit */int) var_7))));
                    arr_33 [i_0] = ((/* implicit */signed char) ((-25LL) / (var_6)));
                    arr_34 [i_0] = ((/* implicit */long long int) ((var_4) | (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)11474)))))));
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 14; i_8 += 3) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 4) 
                        {
                            {
                                arr_42 [i_0] [i_0] [i_7] [i_8] [i_9] [i_8] = ((/* implicit */long long int) arr_23 [i_0]);
                                arr_43 [i_0] [i_0] [i_0] [i_9] [i_0] = ((/* implicit */signed char) var_9);
                                arr_44 [i_0] [i_1] [i_0] [i_0] [i_9] = ((/* implicit */unsigned long long int) 11U);
                                arr_45 [i_7] [i_9] [i_0] [i_8] [i_8] = 13258414291561752326ULL;
                                arr_46 [i_9] [i_0] [i_0] [i_7] [i_0] [i_0] = ((/* implicit */int) (!(((min((((/* implicit */unsigned long long int) var_5)), (9223367638808264704ULL))) < (((/* implicit */unsigned long long int) var_6))))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_10 = 0; i_10 < 14; i_10 += 2) 
                {
                    arr_50 [i_0] [i_1] [i_1] = ((/* implicit */long long int) (((((-(var_2))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */_Bool) ((9223372036854775807LL) / (arr_24 [i_0] [i_0] [i_10])))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)0)), (arr_0 [i_0] [i_0])))))))));
                    arr_51 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) ((unsigned long long int) min((((arr_0 [i_10] [i_0]) >> (((var_3) - (17670760560069948556ULL))))), (min((((/* implicit */unsigned long long int) -25LL)), (18446744073709551615ULL))))));
                    arr_52 [i_0] [i_1] [i_0] = ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) var_6)) & (var_10))), (((/* implicit */unsigned long long int) ((var_4) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_10] [i_0 + 1]))))))));
                }
                arr_53 [(unsigned short)4] [i_1] = ((/* implicit */_Bool) var_2);
            }
        } 
    } 
}
