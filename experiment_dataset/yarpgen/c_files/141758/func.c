/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141758
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
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    var_16 |= ((/* implicit */signed char) (short)11108);
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 1) /* same iter space */
                    {
                        var_17 ^= (short)-11117;
                        var_18 = ((/* implicit */signed char) ((unsigned char) arr_4 [i_1]));
                        arr_13 [i_0] [11U] [i_1 + 2] [i_2] [i_3] [i_1] = ((/* implicit */signed char) ((arr_7 [i_1] [i_0] [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1 + 3] [i_1]))) : (arr_3 [i_2])));
                        var_19 = ((/* implicit */unsigned long long int) ((unsigned int) ((2917097212361744609ULL) * (2917097212361744583ULL))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */short) 15529646861347807001ULL);
                        var_21 ^= ((/* implicit */short) 1617160254168204064LL);
                        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (((!(arr_7 [(unsigned short)14] [i_1] [i_2]))) ? (arr_10 [6] [(_Bool)1]) : (arr_10 [i_4] [i_1 + 1]))))));
                    }
                    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 1) /* same iter space */
                    {
                        arr_19 [i_0] [i_1] [(unsigned char)11] [i_5] = ((/* implicit */unsigned short) arr_4 [i_1]);
                        var_23 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1 - 1] [i_1 + 1])) * (((/* implicit */int) arr_2 [i_1 + 2] [i_1 + 3]))))) ? (((15529646861347807043ULL) - (2917097212361744635ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 - 1] [i_1 + 3])))));
                        var_24 ^= ((/* implicit */long long int) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_1 + 2] [(signed char)6] [i_0]))) == (min((2917097212361744582ULL), (((/* implicit */unsigned long long int) (signed char)-111)))))));
                        var_25 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_15 [i_1] [i_2] [i_5])) ? (((((/* implicit */unsigned long long int) arr_6 [i_2])) + (2917097212361744569ULL))) : (((/* implicit */unsigned long long int) ((arr_6 [i_0]) ^ (1046748715012621274LL))))))));
                    }
                    for (short i_6 = 3; i_6 < 14; i_6 += 4) 
                    {
                        var_26 |= ((/* implicit */int) max((min((((/* implicit */unsigned long long int) arr_4 [i_0])), (15529646861347806994ULL))), (((/* implicit */unsigned long long int) ((short) (signed char)116)))));
                        var_27 ^= ((/* implicit */short) (unsigned short)0);
                        arr_24 [i_0] [i_0] [i_1 + 2] [i_0] [i_2] [12LL] |= ((/* implicit */short) arr_17 [i_2] [i_1 + 1] [i_6 - 1] [(short)14]);
                        var_28 = ((/* implicit */short) ((unsigned short) min((arr_22 [i_6 + 1] [i_1] [i_1] [i_1 + 2]), (arr_22 [i_6 + 1] [i_1] [i_1] [i_1 - 1]))));
                        var_29 += (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [(unsigned short)4] [i_0])));
                    }
                }
                for (unsigned char i_7 = 0; i_7 < 15; i_7 += 4) 
                {
                    var_30 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) arr_25 [i_0] [i_1 + 1] [i_1] [i_1])), (arr_1 [i_0]))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (15529646861347807020ULL) : (arr_3 [i_7])))) ? (((((/* implicit */_Bool) 5502395423785981984ULL)) ? (((/* implicit */unsigned long long int) arr_23 [i_7] [i_7] [i_1] [i_0] [i_0] [i_0])) : (arr_3 [i_7]))) : (((/* implicit */unsigned long long int) min((var_3), (((/* implicit */long long int) arr_9 [i_7] [i_1] [i_0])))))))));
                    var_31 = ((/* implicit */unsigned long long int) ((unsigned short) arr_2 [i_0] [i_1 + 2]));
                    var_32 *= ((/* implicit */signed char) ((unsigned short) ((unsigned short) arr_25 [i_1 - 1] [i_1 + 3] [i_0] [i_7])));
                }
                var_33 ^= ((/* implicit */_Bool) (-(arr_14 [13U] [i_1 + 2] [i_1 - 1] [i_0] [11])));
                var_34 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */signed char) arr_7 [i_0] [i_1 + 2] [i_1])), ((signed char)9)))), ((~(15529646861347806983ULL))))))));
                /* LoopNest 3 */
                for (unsigned short i_8 = 0; i_8 < 15; i_8 += 1) 
                {
                    for (short i_9 = 0; i_9 < 15; i_9 += 1) 
                    {
                        for (short i_10 = 0; i_10 < 15; i_10 += 4) 
                        {
                            {
                                arr_36 [i_1] [i_8] = ((/* implicit */int) (!(((((unsigned long long int) 2917097212361744583ULL)) < (((/* implicit */unsigned long long int) (-(-9223372036854775806LL))))))));
                                var_35 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_1 + 2] [i_1 + 3]))))), (min((((/* implicit */long long int) (unsigned short)54504)), (arr_33 [i_1 - 1] [i_1])))));
                                arr_37 [i_10] [i_1] [i_0] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0] [9ULL])) ? (min((arr_11 [i_1] [i_8] [i_1]), (((/* implicit */int) arr_0 [i_9] [i_1 + 3])))) : (((/* implicit */int) max(((unsigned short)11032), (min((((/* implicit */unsigned short) arr_20 [i_1])), ((unsigned short)11031))))))));
                                arr_38 [i_1] [i_9] [i_1] [i_8] [i_1] [i_1] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) -9223372036854775806LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_1]))) : (2917097212361744609ULL)))));
                                var_36 = ((/* implicit */short) ((((/* implicit */int) min((arr_9 [i_0] [i_1] [i_1]), (((/* implicit */unsigned char) (signed char)-14))))) > (((((/* implicit */int) max((arr_34 [i_0] [i_1] [9LL] [i_9] [i_10]), (((/* implicit */unsigned short) arr_5 [10U]))))) / (((/* implicit */int) arr_22 [(signed char)3] [i_1] [i_1] [i_9]))))));
                            }
                        } 
                    } 
                } 
                var_37 |= ((/* implicit */int) ((unsigned char) 781290440));
            }
        } 
    } 
    var_38 = ((/* implicit */long long int) var_6);
    var_39 |= ((/* implicit */_Bool) var_6);
    var_40 = ((((/* implicit */_Bool) -3952552625119534073LL)) ? (max((((15529646861347806989ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))))), (((/* implicit */unsigned long long int) ((var_14) / (-899587805)))))) : (((/* implicit */unsigned long long int) (~(max((var_15), (((/* implicit */unsigned int) var_12))))))));
}
