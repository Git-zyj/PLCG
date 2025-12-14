/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125866
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
    var_20 = ((/* implicit */signed char) var_6);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_1 = 4; i_1 < 17; i_1 += 1) 
        {
            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_1])))))));
            var_22 = ((/* implicit */_Bool) (signed char)(-127 - 1));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            arr_10 [i_0] = ((/* implicit */unsigned char) ((11791515452459719452ULL) | (((/* implicit */unsigned long long int) arr_7 [(short)3] [i_2] [i_0]))));
            var_23 = ((/* implicit */unsigned int) arr_3 [(_Bool)1] [15ULL]);
            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_2] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_2] [i_2])) : (((/* implicit */int) arr_8 [i_2]))));
            arr_11 [(unsigned short)12] [i_2] [i_2] = ((/* implicit */unsigned int) var_18);
        }
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0]))));
            var_26 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) var_12)) ? (arr_13 [i_0] [i_0] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))));
            arr_15 [i_0] [i_0] [i_3] = ((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_3]);
        }
        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_5 = 0; i_5 < 19; i_5 += 1) 
            {
                for (signed char i_6 = 2; i_6 < 18; i_6 += 2) 
                {
                    {
                        var_27 = ((/* implicit */unsigned int) arr_20 [i_5] [i_5] [i_5]);
                        /* LoopSeq 3 */
                        for (unsigned char i_7 = 0; i_7 < 19; i_7 += 2) 
                        {
                            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) var_11)) % (((/* implicit */int) var_11)))) | (((/* implicit */int) arr_18 [i_6 - 2] [i_6 + 1]))))) ? ((~(((/* implicit */int) arr_22 [i_0] [i_4] [i_4] [i_5] [i_6] [i_7])))) : (((((/* implicit */_Bool) ((unsigned int) -634537055))) ? (((/* implicit */int) arr_22 [i_4] [i_6] [i_6] [i_6 - 1] [i_6 + 1] [i_6 - 2])) : (max((((/* implicit */int) arr_4 [3U] [i_5] [i_7])), (arr_7 [i_0] [i_0] [i_0])))))));
                            var_29 &= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_13 [i_0] [(unsigned short)0] [(unsigned short)8]))))), (arr_25 [i_0] [(short)4] [4ULL] [i_5] [i_6] [i_6] [11U])));
                            var_30 = ((/* implicit */short) arr_4 [i_0] [i_4] [i_7]);
                        }
                        for (signed char i_8 = 4; i_8 < 15; i_8 += 1) /* same iter space */
                        {
                            var_31 = ((/* implicit */unsigned long long int) 0U);
                            arr_28 [i_0] [i_4] [i_5] [i_5] [i_5] [i_6] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_22 [(signed char)16] [i_6] [i_6 - 2] [i_6] [i_8 + 3] [i_8 + 2])))) * (min((arr_1 [i_6 - 2] [i_5]), (((/* implicit */unsigned long long int) arr_16 [i_6 - 2]))))));
                            arr_29 [i_0] [i_0] [i_5] [i_0] [16U] = ((/* implicit */int) var_5);
                            arr_30 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_4] [i_4] [i_6 + 1] [i_8 + 4] [i_8 + 2] [i_8 + 1]))) - (arr_25 [6U] [i_6] [i_6 - 1] [i_8 + 3] [i_8 - 4] [i_8 + 2] [i_8])))) - (min((min((((/* implicit */unsigned long long int) arr_23 [i_0] [i_5])), (var_8))), (((/* implicit */unsigned long long int) var_18))))));
                        }
                        for (signed char i_9 = 4; i_9 < 15; i_9 += 1) /* same iter space */
                        {
                            var_32 = ((/* implicit */signed char) min((((((/* implicit */int) arr_18 [i_4] [i_5])) * (((/* implicit */int) arr_18 [i_4] [i_6 - 2])))), ((-(((/* implicit */int) arr_18 [i_6 - 2] [i_5]))))));
                            var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) min((((/* implicit */short) ((((/* implicit */int) arr_22 [i_0] [i_0] [i_6 - 1] [(_Bool)1] [i_9 + 3] [i_9 + 2])) == (((/* implicit */int) arr_22 [i_4] [i_6] [i_6 + 1] [i_6 - 2] [i_9 - 3] [i_9]))))), (max((((/* implicit */short) arr_22 [i_5] [i_5] [i_6 + 1] [i_9 - 2] [i_9 + 3] [i_9])), (arr_18 [i_6 - 1] [i_9 - 4]))))))));
                        }
                        var_34 = ((/* implicit */unsigned short) ((((unsigned int) var_18)) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_6 + 1] [i_6 - 1] [i_6 + 1])) ? (((/* implicit */int) arr_12 [i_6 - 1] [i_6 - 2] [i_6])) : (((/* implicit */int) arr_12 [i_6 - 1] [i_6 - 1] [i_6 - 2])))))));
                    }
                } 
            } 
            var_35 = ((/* implicit */unsigned int) ((signed char) (short)-17378));
        }
        arr_33 [(signed char)6] |= ((/* implicit */_Bool) (-(((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))) % (8U))))));
        /* LoopSeq 3 */
        for (unsigned int i_10 = 2; i_10 < 17; i_10 += 1) 
        {
            var_36 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (arr_32 [i_0] [i_0] [i_0] [i_10] [i_0]) : (((/* implicit */unsigned long long int) var_16))))) ? (((/* implicit */int) ((signed char) arr_34 [i_0]))) : ((-(((/* implicit */int) arr_34 [i_0])))))))));
            var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) 281337537757184ULL))));
            var_38 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_10]))) : (arr_21 [i_10 + 2] [i_10 - 2] [i_0] [i_0])))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_10])) ? (1U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_10] [7U])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((/* implicit */_Bool) var_16)))))) : (min((((/* implicit */unsigned long long int) (short)-17365)), (var_7)))))));
        }
        for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 2) 
            {
                arr_43 [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_11])) ? (((/* implicit */int) arr_18 [i_0] [i_0])) : (((arr_36 [i_12] [i_12]) - (((/* implicit */int) var_13))))));
                arr_44 [i_0] [(signed char)15] [i_12] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_13 [i_0] [(short)7] [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))) && (((/* implicit */_Bool) arr_0 [i_11] [17ULL]))));
                var_39 = ((1310420405U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_18))));
                arr_45 [i_0] [i_11] [i_0] = var_16;
            }
            /* LoopSeq 1 */
            for (int i_13 = 3; i_13 < 18; i_13 += 3) 
            {
                var_40 = ((/* implicit */_Bool) arr_0 [i_0] [i_11]);
                arr_48 [i_0] [i_11] [i_13 - 1] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_35 [i_13 - 2] [i_13 + 1] [i_13 - 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))))) : (((/* implicit */int) arr_16 [i_11]))));
                var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_0] [(unsigned char)16] [i_0] [i_0] [i_0] [i_11] [i_11]))) : (arr_13 [(_Bool)1] [i_11] [i_13])))) && ((!(((/* implicit */_Bool) (unsigned char)74))))))) >> (((min((((unsigned long long int) var_5)), (((/* implicit */unsigned long long int) arr_35 [4U] [i_13 - 3] [i_13])))) - (49869ULL)))));
                var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_34 [i_13])) ? (((((/* implicit */_Bool) ((unsigned int) arr_21 [i_11] [i_11] [i_11] [i_11]))) ? (((((/* implicit */_Bool) var_2)) ? (arr_3 [i_11] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_11] [i_13 + 1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_0] [i_0])))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((_Bool) arr_25 [i_0] [i_0] [i_0] [i_0] [i_11] [i_0] [i_13])) && ((!(((/* implicit */_Bool) arr_18 [i_0] [i_13 - 2]))))))))));
            }
        }
        for (int i_14 = 0; i_14 < 19; i_14 += 1) 
        {
            arr_52 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((var_17) && (((/* implicit */_Bool) arr_36 [i_0] [i_14]))))));
            var_43 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_32 [i_0] [i_0] [i_0] [8U] [i_0])) && (((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_4 [i_0] [10ULL] [i_0])), ((unsigned short)32001)))))))));
        }
    }
    var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (!((!(((/* implicit */_Bool) var_9)))))))));
}
