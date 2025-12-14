/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152400
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
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 1; i_3 < 12; i_3 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_4 = 1; i_4 < 11; i_4 += 2) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_2 [i_4 + 1]) ^ (((/* implicit */unsigned long long int) arr_0 [i_1] [i_4 + 3])))))));
                            var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) ((int) var_7)))));
                            var_19 = ((/* implicit */int) var_9);
                            var_20 = ((/* implicit */unsigned int) min((arr_14 [i_3] [i_4 - 1]), (var_4)));
                        }
                        for (unsigned char i_5 = 1; i_5 < 11; i_5 += 2) /* same iter space */
                        {
                            arr_21 [i_0] [i_3] [i_3] [i_1] [i_0] = ((/* implicit */short) min((max((arr_18 [i_3] [i_5 - 1] [i_5] [i_5 + 1] [14LL]), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -570000522470373833LL)), (var_8)))) ? ((+(((/* implicit */int) (short)23360)))) : (((((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [(_Bool)1])) ^ (((/* implicit */int) arr_1 [i_5])))))))));
                            var_21 ^= ((/* implicit */unsigned long long int) (+(((int) ((((/* implicit */_Bool) (short)-23353)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_10 [i_1] [i_2] [0] [0])))))));
                            arr_22 [i_5] [i_1] [i_3] [i_3] [i_5] = ((/* implicit */signed char) (+(((arr_16 [(short)14] [i_5 + 2] [i_5 + 4] [i_3 - 1]) >> (((arr_16 [(_Bool)1] [i_5 + 4] [i_5 - 1] [i_3 + 1]) - (2241010563759886741LL)))))));
                            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) var_11))));
                            var_23 = ((int) ((unsigned char) arr_1 [i_5 + 4]));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 15; i_6 += 2) 
                        {
                            var_24 = ((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2]);
                            arr_25 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_18 [i_3] [i_3] [(short)3] [i_1] [i_3])))) ? (((/* implicit */unsigned long long int) -278695231)) : (((((/* implicit */_Bool) 873141896)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_3] [(_Bool)0] [i_2] [i_3] [i_0]))) : (var_8)))));
                            var_25 = ((/* implicit */unsigned int) ((arr_11 [i_3 + 3] [i_1] [i_2] [i_2]) << (((arr_11 [i_3 + 1] [i_1] [i_2] [5]) - (7422572653033273798ULL)))));
                            var_26 += ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_6]))));
                        }
                        var_27 = var_9;
                        var_28 += ((/* implicit */_Bool) var_8);
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        arr_28 [i_0] [i_2] [i_2] [i_7] = min((min((((/* implicit */unsigned long long int) ((arr_17 [i_0] [i_1] [i_1] [i_7] [i_7] [i_2]) ? (((/* implicit */long long int) arr_23 [13] [(short)9] [i_0] [i_1] [13U] [i_7])) : (var_13)))), (max((arr_18 [i_7] [i_1] [(short)9] [(unsigned char)9] [i_7]), (((/* implicit */unsigned long long int) var_4)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0] [5LL] [i_0] [i_7])) && (((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2] [i_7]))))));
                        var_29 = (~(((((arr_23 [i_0] [i_1] [i_1] [9U] [(signed char)8] [i_7]) - (var_0))) & (arr_12 [i_0] [0] [i_2]))));
                        var_30 = ((/* implicit */_Bool) (+(((/* implicit */int) ((arr_23 [i_2] [i_1] [i_1] [i_7] [i_2] [i_2]) == (((/* implicit */int) var_12)))))));
                        var_31 = min((2147483647), (((/* implicit */int) (short)-23361)));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        arr_32 [i_0] [i_8] [i_2] [i_8] = ((/* implicit */unsigned long long int) (+(var_3)));
                        var_32 &= ((/* implicit */short) ((((/* implicit */_Bool) 1541424309)) ? (((/* implicit */int) (short)-23360)) : (2147483623)));
                        var_33 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_30 [7LL] [i_1] [i_8] [(unsigned char)8] [i_1] [i_8])))) ? (max((var_4), (arr_0 [i_0] [12ULL]))) : (((/* implicit */int) var_9))))) ? (arr_6 [i_2]) : (max(((~(((/* implicit */int) arr_26 [i_0])))), (((((/* implicit */int) (_Bool)1)) >> (((18281697438369462220ULL) - (18281697438369462219ULL))))))));
                        arr_33 [i_0] [i_1] [i_0] [i_8] = (+(((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2])) ? (((/* implicit */int) arr_3 [i_8] [i_2] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_2] [i_2])))));
                    }
                }
            } 
        } 
    } 
    var_34 = var_5;
}
