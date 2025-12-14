/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144450
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)24875)) : (((/* implicit */int) var_4))))), (((var_9) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24885))))))), (((/* implicit */unsigned long long int) arr_1 [i_0])))))));
                arr_5 [i_1] = ((/* implicit */signed char) arr_0 [i_0] [i_1]);
                var_13 = ((/* implicit */int) (unsigned short)16625);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (signed char i_3 = 3; i_3 < 11; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (signed char i_4 = 0; i_4 < 13; i_4 += 3) 
                            {
                                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 14209642137762731056ULL)) ? ((~(((/* implicit */int) var_6)))) : (((/* implicit */int) var_8))));
                                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_1] [i_1])) % (((/* implicit */int) (_Bool)1))))) : ((+(7LL)))));
                                var_16 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) (_Bool)1))))));
                            }
                            for (unsigned int i_5 = 0; i_5 < 13; i_5 += 1) 
                            {
                                var_17 = arr_6 [i_0] [i_1] [i_2] [5LL];
                                arr_18 [i_0] [i_0] [i_1] [i_2] [i_3] [i_5] = max((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_3] [i_1] [(_Bool)1] [i_3 + 1] [i_5])) ? (arr_8 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8))))) : (min((((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_2] [i_5])), (arr_6 [(signed char)2] [i_1] [i_2] [i_3 - 2]))))));
                                arr_19 [i_1] [i_3] [i_3] [i_2] [i_1] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((_Bool) ((unsigned char) max((4LL), (((/* implicit */long long int) (unsigned char)72))))));
                            }
                            /* vectorizable */
                            for (long long int i_6 = 3; i_6 < 11; i_6 += 2) 
                            {
                                arr_24 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) 1ULL);
                                var_18 = (i_1 % 2 == zero) ? (((/* implicit */unsigned char) ((21ULL) << (((((/* implicit */int) arr_17 [i_1] [i_1] [i_6 + 2] [i_3 + 2])) - (159)))))) : (((/* implicit */unsigned char) ((21ULL) << (((((((/* implicit */int) arr_17 [i_1] [i_1] [i_6 + 2] [i_3 + 2])) - (159))) - (31))))));
                            }
                            /* LoopSeq 3 */
                            for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 2) 
                            {
                                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) var_8))));
                                var_20 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_16 [i_0] [i_0] [i_0])), (((unsigned long long int) 2251799813685247LL))))) ? (((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_0)))) ? (18446744073709551606ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_6))))))))));
                                var_21 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((int) (signed char)109))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_21 [i_2] [i_3 - 3] [(short)4] [i_3 - 3] [i_3 + 2] [i_3]), (arr_21 [i_1] [i_3 - 3] [i_3] [i_3 - 2] [i_3 - 1] [i_7]))))) : (((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)-41)), (arr_12 [i_7] [i_3 - 2] [i_2] [i_1] [i_0])))) % (max((var_9), (((/* implicit */unsigned long long int) (unsigned char)182))))))));
                            }
                            for (short i_8 = 0; i_8 < 13; i_8 += 1) 
                            {
                                var_22 = ((/* implicit */unsigned long long int) 2727736609U);
                                arr_31 [i_8] [i_3 + 1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) | (((((((/* implicit */int) var_3)) * (((/* implicit */int) var_6)))) * (((/* implicit */int) var_10))))));
                            }
                            /* vectorizable */
                            for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 2) 
                            {
                                var_23 = ((/* implicit */signed char) var_0);
                                arr_34 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_28 [i_9] [i_3 + 2] [i_1] [i_0]);
                                arr_35 [i_1] = ((/* implicit */unsigned char) (+(((((/* implicit */int) (signed char)-63)) + (((/* implicit */int) var_6))))));
                                var_24 = ((/* implicit */unsigned char) var_10);
                                arr_36 [i_0] [i_1] [i_2] [i_2] [i_9] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((signed char) arr_17 [i_1] [i_3] [i_2] [i_1])))));
                            }
                            arr_37 [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) max((arr_26 [i_1] [i_2] [(short)4] [i_1] [i_1]), (7287420049482055439ULL)))) && (((((/* implicit */int) var_1)) <= (((/* implicit */int) var_3))))))) | (((/* implicit */int) ((_Bool) 692750603686281447LL)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned short) max((var_9), (((/* implicit */unsigned long long int) var_5))));
}
