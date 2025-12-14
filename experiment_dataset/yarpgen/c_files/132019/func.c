/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132019
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
    var_14 = var_0;
    var_15 = ((/* implicit */int) var_0);
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) < (((/* implicit */int) arr_0 [(unsigned char)13] [i_0]))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
    }
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) (-(18446744073709551615ULL)))) && (((/* implicit */_Bool) ((unsigned char) (_Bool)1))))));
        arr_8 [i_1] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_4 [i_1]) & (arr_4 [i_1])))) ? ((-(((/* implicit */int) (signed char)-80)))) : (((arr_4 [i_1]) ^ (((/* implicit */int) arr_6 [i_1]))))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 12; i_3 += 4) 
            {
                {
                    arr_16 [i_1] [i_1] [i_1] &= ((/* implicit */int) ((((/* implicit */long long int) 1020)) > (((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned int) arr_1 [(unsigned short)4]))))) ? (((9223372036854775807LL) - (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((/* implicit */long long int) max((arr_13 [i_1] [2ULL] [i_2] [i_3]), (((/* implicit */unsigned int) arr_4 [i_1])))))))));
                    arr_17 [i_1] [(signed char)9] [i_3] [1] = ((/* implicit */int) ((((((/* implicit */_Bool) ((arr_15 [i_1] [i_2] [i_2] [1U]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((arr_15 [i_1] [i_2] [i_2] [i_3]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)46902))) : (var_5)))) : ((-(3611028915247962999ULL))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13516)))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 3) 
                        {
                            {
                                arr_22 [1] [i_3] [6LL] [i_5] = ((/* implicit */short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (_Bool)1)))) * (13394519911615406943ULL))), (((((/* implicit */unsigned long long int) arr_13 [i_1] [i_2] [i_3] [i_4])) | (13321460131259352108ULL)))));
                                arr_23 [i_1] [i_5] [i_4] = ((/* implicit */unsigned char) -1032);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 12; i_7 += 2) 
                        {
                            {
                                arr_30 [i_1] [i_2] [i_3] [i_2] [i_3] [i_3] = ((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) (unsigned short)8741)) ? (-629729689507840311LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)13516))))), (((/* implicit */long long int) ((((/* implicit */int) arr_0 [(signed char)4] [i_2])) != (((/* implicit */int) (signed char)-1))))))) != (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                                arr_31 [i_1] [i_1] [i_1] [10ULL] [4U] [i_1] = 13ULL;
                                arr_32 [i_3] [i_3] [i_3] [i_3] [9] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((unsigned int) var_2)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551597ULL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_19 [8] [i_1] [i_3] [2U]))))))))));
                                arr_33 [i_1] [(unsigned short)10] [i_7] [i_6] [i_7] [i_1] &= ((/* implicit */_Bool) (unsigned char)152);
                            }
                        } 
                    } 
                    arr_34 [i_3] [i_2] [i_1] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (-(arr_20 [i_1] [i_2] [i_1] [i_2] [i_3])))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)29)) : (((/* implicit */int) (unsigned char)25)))) : (((/* implicit */int) ((4611686018427387904ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_1] [i_2] [i_2] [i_3])))))))), (((((/* implicit */_Bool) arr_27 [i_3] [i_2] [i_2] [2ULL] [i_1] [i_1])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_24 [i_2] [i_1] [i_3] [i_1] [i_2]))))));
                }
            } 
        } 
    }
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (var_9))) << (((((((/* implicit */_Bool) 4611686018427387883ULL)) ? (((/* implicit */int) var_3)) : (var_8))) - (297)))))) : (var_6)));
    var_17 = ((/* implicit */unsigned char) var_10);
}
