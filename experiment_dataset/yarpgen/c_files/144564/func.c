/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144564
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
    var_16 = var_5;
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) max((arr_3 [i_0] [i_1 - 1] [i_2]), (arr_4 [i_2] [i_1] [i_0])))))) + (8850415679490699847ULL))))));
                    arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((arr_0 [i_0]), (min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) + (var_9)))), (arr_0 [i_1 + 2])))));
                    var_18 = ((/* implicit */unsigned char) ((((arr_3 [i_0] [i_1 - 1] [(_Bool)1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) & (((/* implicit */unsigned long long int) arr_1 [i_0]))));
                }
                for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    var_19 = ((/* implicit */unsigned char) (_Bool)1);
                    var_20 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_8 [i_1] [i_1 + 2] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_8 [i_1] [i_1 + 2] [i_1]))));
                    var_21 &= ((/* implicit */unsigned short) var_4);
                    arr_9 [i_0] [i_1 + 2] [i_0] [1ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_6))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_1 [i_0])))) | (min((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_3 [i_0] [6ULL] [i_3]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)111)) | (((/* implicit */int) arr_2 [i_1 + 1] [i_1 - 1])))))));
                }
                arr_10 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_9);
                arr_11 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [(unsigned char)10]))))) ? (max((min((arr_4 [i_0] [i_1] [(unsigned short)3]), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) max((arr_1 [i_0]), (((/* implicit */long long int) var_8))))))) : (((((/* implicit */_Bool) ((arr_0 [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (arr_0 [i_1 + 2]) : (max((0ULL), (((/* implicit */unsigned long long int) var_9))))))));
                /* LoopSeq 2 */
                for (unsigned char i_4 = 1; i_4 < 12; i_4 += 3) /* same iter space */
                {
                    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_10)), (arr_8 [i_4] [i_1 - 1] [i_1])))) ? (arr_8 [i_1 - 1] [i_1 - 1] [i_1]) : ((((_Bool)1) ? (arr_8 [i_4] [i_1 - 1] [i_1]) : (arr_8 [i_4] [i_1 - 1] [(_Bool)1]))))))));
                    /* LoopSeq 1 */
                    for (signed char i_5 = 2; i_5 < 14; i_5 += 4) 
                    {
                        arr_16 [i_0] [i_0] [i_4] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_12 [i_0] [i_4 + 4] [i_1] [i_0])) : (((/* implicit */int) (signed char)92))))) ? (arr_4 [i_4] [i_4 + 4] [i_5 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (_Bool)1))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_14 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_4 + 2])) <= (((/* implicit */int) ((unsigned short) (unsigned char)87))))))) : (max((arr_13 [i_0] [i_5 + 2] [i_0] [i_0]), (var_9)))));
                        var_23 += ((/* implicit */unsigned long long int) (((((+(arr_7 [i_0] [0LL] [i_4] [i_5]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_12), (var_8))))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (((((_Bool)1) ? (((/* implicit */unsigned long long int) var_9)) : (var_4))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
                        arr_17 [i_0] [i_1] [i_0] [i_5] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) ((arr_4 [i_0] [i_1] [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))));
                    }
                    var_24 = ((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */long long int) min((((/* implicit */int) var_10)), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_14 [4ULL] [i_0] [i_1] [i_4])))))))));
                    var_25 = ((/* implicit */unsigned short) (_Bool)1);
                }
                for (unsigned char i_6 = 1; i_6 < 12; i_6 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 16; i_7 += 2) 
                    {
                        for (long long int i_8 = 2; i_8 < 12; i_8 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) ((7108293728996404881ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-36)))))))));
                                var_27 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_19 [i_1 + 2])) & (((/* implicit */int) var_7)))) | ((~((+(((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0]))))))));
                                var_28 |= ((/* implicit */_Bool) max((((((((/* implicit */_Bool) var_13)) ? (arr_3 [i_0] [i_1 + 1] [i_8]) : (var_15))) | (min((((/* implicit */unsigned long long int) var_2)), (2960304108012206839ULL))))), (max((((/* implicit */unsigned long long int) var_3)), (arr_0 [i_0])))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */unsigned short) var_7);
                }
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned short) (signed char)127);
    var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) var_7)))))));
}
