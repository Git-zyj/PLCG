/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154915
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (((((/* implicit */_Bool) var_7)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))) ? (894577791424661928ULL) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))))))));
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        arr_11 [i_1] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (unsigned char)208)) : (((/* implicit */int) (_Bool)1))));
                        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */int) (signed char)-78)) / (((/* implicit */int) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) var_12)))))))))));
                        var_21 += ((/* implicit */unsigned long long int) max((((unsigned char) arr_10 [i_2] [i_2 - 1] [i_1] [i_1 + 4])), (((/* implicit */unsigned char) var_6))));
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-40)) && (((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_2] [i_2] [i_2])) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))));
                        arr_14 [i_0] [i_1] [i_2] [i_1] [i_0] [i_1] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_4 [i_1]) : (arr_4 [i_1]))));
                        /* LoopSeq 2 */
                        for (long long int i_5 = 0; i_5 < 18; i_5 += 2) 
                        {
                            var_23 = ((/* implicit */_Bool) max((((((arr_15 [i_5] [i_1] [i_1] [i_1]) / (((/* implicit */long long int) var_8)))) | ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)-6550))) : (var_10))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))))))))));
                            var_24 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_9)) ? (arr_15 [i_5] [i_2] [i_2] [i_1 + 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_5] [i_1 + 2] [i_5]))))) | (arr_15 [i_4] [i_2] [i_2] [i_1 + 2])));
                        }
                        for (int i_6 = 0; i_6 < 18; i_6 += 2) 
                        {
                            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) min((arr_8 [i_1] [i_2] [i_2 - 2]), (((/* implicit */unsigned long long int) ((arr_15 [i_2] [i_2] [i_6] [i_2]) >= (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1] [i_2] [i_2 - 2] [i_4] [i_6])))))))))));
                            var_26 -= ((/* implicit */short) ((((arr_6 [i_1]) > (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_18))))))) ? (((var_12) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)77))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))));
                            var_27 -= ((_Bool) max(((-(arr_2 [i_0]))), (((/* implicit */long long int) (-(arr_19 [i_6] [i_4] [i_2] [i_1] [i_6]))))));
                        }
                    }
                    for (signed char i_7 = 0; i_7 < 18; i_7 += 2) /* same iter space */
                    {
                        var_28 *= ((/* implicit */_Bool) (-(((/* implicit */int) arr_20 [i_2] [i_2] [i_2] [i_2]))));
                        arr_24 [i_0] [i_7] [i_2] [i_7] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2 + 2])) ? (((/* implicit */long long int) 3181643726U)) : (arr_2 [i_2 + 1])))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_1)), (2625232101U)))) ? (((((/* implicit */_Bool) 1669735194U)) ? (arr_12 [i_0] [i_7] [i_0] [i_0]) : (var_4))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (_Bool)1)))))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) var_11)), (var_10)))) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_4)))))));
                    }
                    /* vectorizable */
                    for (signed char i_8 = 0; i_8 < 18; i_8 += 2) /* same iter space */
                    {
                        var_29 = ((/* implicit */int) var_8);
                        var_30 = ((((/* implicit */_Bool) 1113323569U)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_16 [i_2 + 2] [i_2] [i_2] [i_2])));
                        /* LoopSeq 2 */
                        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                        {
                            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) 1669735192U))));
                            var_32 -= arr_19 [i_0] [i_1] [i_2] [i_8] [i_8];
                            var_33 = ((/* implicit */unsigned long long int) min((var_33), (((((/* implicit */unsigned long long int) 1103581124U)) * (arr_3 [i_1 + 1])))));
                            arr_30 [i_8] [i_1] [i_2] [i_1] [i_9] [i_0] |= ((/* implicit */unsigned long long int) (unsigned char)74);
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 2) 
                        {
                            var_34 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) arr_7 [i_2] [i_1 + 3])) : (arr_18 [i_1 + 3] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 + 3])));
                            var_35 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [i_1 + 2])) : (((/* implicit */int) var_16))));
                            var_36 = ((/* implicit */int) ((arr_20 [i_2 + 3] [i_2 + 3] [i_1] [i_2 + 2]) ? ((-(1113323569U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                        }
                    }
                }
            } 
        } 
    }
    for (short i_11 = 1; i_11 < 13; i_11 += 2) 
    {
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 14; i_12 += 2) 
        {
            for (unsigned int i_13 = 2; i_13 < 12; i_13 += 2) 
            {
                for (long long int i_14 = 2; i_14 < 12; i_14 += 2) 
                {
                    {
                        var_37 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
                        var_38 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_17)) : (var_4)))) ? (min((arr_3 [i_12]), (((/* implicit */unsigned long long int) 6LL)))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_17 [i_14] [i_12] [i_13] [i_11] [i_14])) : (((/* implicit */int) arr_1 [i_13]))))))));
                    }
                } 
            } 
        } 
        var_39 -= ((((unsigned int) ((unsigned long long int) var_18))) | (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_11] [i_11]))) ^ (((((/* implicit */_Bool) 1113323569U)) ? (arr_43 [i_11] [i_11] [i_11]) : (arr_4 [(_Bool)1]))))));
        var_40 -= ((_Bool) ((((/* implicit */_Bool) (-(var_13)))) ? (((/* implicit */unsigned long long int) var_10)) : (arr_3 [i_11 + 1])));
    }
    var_41 = ((/* implicit */long long int) var_14);
}
