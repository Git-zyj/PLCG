/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170913
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
    var_12 = ((/* implicit */short) max((var_12), (((short) var_11))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 24; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned char) max((var_13), (((unsigned char) ((int) ((int) arr_0 [i_0]))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (unsigned char i_3 = 1; i_3 < 24; i_3 += 1) 
                    {
                        for (short i_4 = 4; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_14 *= ((/* implicit */unsigned long long int) ((signed char) arr_5 [(signed char)20] [i_1] [i_2] [i_3]));
                                var_15 -= ((/* implicit */unsigned short) arr_1 [i_0 + 1]);
                                arr_12 [i_0] [24] [i_3] [i_1] [i_2] [i_3 - 1] [i_4 + 1] = (i_3 % 2 == zero) ? (((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_11 [i_0] [i_1 + 1] [i_2] [i_3 - 1] [i_3])) ? (((/* implicit */int) arr_11 [i_3] [i_3] [(unsigned char)0] [i_1 - 1] [i_3])) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_3 - 1] [i_3])))), (((((/* implicit */int) ((unsigned char) arr_11 [i_0] [i_1] [(signed char)14] [(unsigned short)10] [i_3]))) << ((((~(((/* implicit */int) arr_11 [i_0 - 1] [i_1] [i_2] [i_3] [i_3])))) + (108)))))))) : (((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_11 [i_0] [i_1 + 1] [i_2] [i_3 - 1] [i_3])) ? (((/* implicit */int) arr_11 [i_3] [i_3] [(unsigned char)0] [i_1 - 1] [i_3])) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_3 - 1] [i_3])))), (((((/* implicit */int) ((unsigned char) arr_11 [i_0] [i_1] [(signed char)14] [(unsigned short)10] [i_3]))) << ((((((~(((/* implicit */int) arr_11 [i_0 - 1] [i_1] [i_2] [i_3] [i_3])))) + (108))) - (141))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 25; i_5 += 1) 
                {
                    for (int i_6 = 1; i_6 < 24; i_6 += 4) 
                    {
                        {
                            var_16 *= ((/* implicit */unsigned char) ((_Bool) arr_3 [i_6 - 1] [i_1 - 2] [i_0 - 1]));
                            /* LoopSeq 4 */
                            for (unsigned char i_7 = 3; i_7 < 24; i_7 += 1) 
                            {
                                arr_20 [i_0] [(signed char)15] [i_1 - 2] [i_5] [(unsigned char)6] [i_6] [i_0] = ((unsigned long long int) arr_6 [i_0] [i_7] [i_5] [i_0 + 1]);
                                var_17 *= ((/* implicit */int) ((((/* implicit */_Bool) (((((~(((/* implicit */int) arr_3 [i_1] [i_6] [i_7])))) + (2147483647))) << (((((/* implicit */int) ((_Bool) arr_2 [(signed char)9] [i_7]))) - (1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) min((((/* implicit */short) arr_2 [i_1] [i_0])), (arr_18 [i_0] [i_1] [i_1] [i_6] [(unsigned char)6])))) != (min((arr_13 [i_1 + 1]), (arr_13 [i_0]))))))) : (arr_16 [i_0 - 1] [i_0 + 1] [i_5] [i_6])));
                            }
                            for (int i_8 = 0; i_8 < 25; i_8 += 3) 
                            {
                                var_18 = ((/* implicit */unsigned int) arr_6 [i_0 - 1] [i_1 - 2] [i_0] [i_6]);
                                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_8])) ? (((/* implicit */unsigned long long int) arr_9 [i_0 + 1] [i_1] [i_5] [i_6] [i_8] [i_8])) : (arr_4 [i_8] [i_6] [i_1] [i_0])))))))))));
                            }
                            for (int i_9 = 0; i_9 < 25; i_9 += 1) 
                            {
                                arr_26 [i_9] [i_6] [i_5] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                                arr_27 [i_0] [i_0] [i_1] [i_5] [i_6] [i_9] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_4 [i_9] [i_5] [i_1] [i_0]))) ? (((arr_23 [i_0] [i_0] [i_0] [i_0] [i_0 - 2]) << (((((/* implicit */int) arr_17 [i_9])) - (239))))) : (((/* implicit */int) arr_25 [i_6] [i_6] [i_6 - 1] [i_6] [i_6 + 1])))));
                                var_20 *= ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_25 [i_6] [i_6] [i_6 - 1] [i_6 + 1] [i_6 + 1]), (((/* implicit */unsigned short) ((short) arr_2 [i_5] [i_1]))))))));
                            }
                            for (long long int i_10 = 1; i_10 < 22; i_10 += 2) 
                            {
                                var_21 -= ((/* implicit */short) arr_25 [i_0] [i_0] [i_5] [i_6 - 1] [i_10 + 3]);
                                var_22 = ((/* implicit */unsigned short) max((arr_22 [i_0] [i_1] [i_5] [i_6] [i_10]), (((/* implicit */int) arr_18 [(unsigned short)20] [i_1] [i_5] [i_6] [i_10 - 1]))));
                                var_23 = ((((/* implicit */_Bool) ((unsigned char) arr_1 [i_10 + 3]))) ? ((+(((/* implicit */int) arr_1 [i_0 - 2])))) : (((/* implicit */int) max((arr_1 [i_6 - 1]), (arr_1 [i_0 - 2])))));
                            }
                            arr_32 [i_5] [i_1] [i_0] [i_6] [(unsigned char)16] [i_0] = ((/* implicit */short) arr_21 [i_6 - 1] [i_5] [i_5] [i_1] [i_0 - 2]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_11 = 3; i_11 < 24; i_11 += 2) 
                {
                    for (unsigned long long int i_12 = 2; i_12 < 23; i_12 += 4) 
                    {
                        {
                            var_24 += ((/* implicit */int) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_0] [i_1] [i_11] [i_12] [i_1]))) / (((unsigned int) arr_1 [i_0])))));
                            /* LoopSeq 4 */
                            /* vectorizable */
                            for (signed char i_13 = 0; i_13 < 25; i_13 += 4) 
                            {
                                var_25 *= ((/* implicit */signed char) arr_2 [i_0] [i_1]);
                                var_26 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) arr_36 [(signed char)21] [19U] [i_11] [i_11] [i_11 + 1]))) ? (((/* implicit */int) arr_18 [i_12 + 2] [i_11] [i_11] [i_11 + 1] [i_1 - 1])) : ((~(((/* implicit */int) arr_2 [i_12 - 1] [i_11]))))));
                                var_27 = ((/* implicit */unsigned long long int) arr_1 [i_0 - 2]);
                                arr_39 [i_11 - 1] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1816691957)) ? (((/* implicit */unsigned long long int) 2675599695U)) : (3280979214269068121ULL)));
                            }
                            for (signed char i_14 = 3; i_14 < 22; i_14 += 1) 
                            {
                                arr_44 [i_14] [i_11] [(unsigned char)22] = ((/* implicit */_Bool) ((((/* implicit */int) arr_21 [i_14] [(signed char)20] [i_11] [i_1 - 2] [14U])) & ((~(((/* implicit */int) max((arr_5 [i_12 + 1] [i_12 + 1] [i_12] [i_12]), (((/* implicit */unsigned short) arr_42 [i_0 - 2] [(unsigned short)5] [i_0 - 2] [i_1] [(unsigned short)5] [(unsigned short)5] [i_14])))))))));
                                var_28 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_38 [i_0 - 1] [i_1] [2ULL] [(unsigned char)24] [i_1] [i_1] [i_1 - 2]))));
                                var_29 *= ((/* implicit */_Bool) arr_4 [i_14] [i_12 + 2] [i_11 - 1] [i_0]);
                                var_30 = ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_42 [i_0 + 3] [i_0 + 1] [i_1] [i_12 - 2] [i_14] [i_14] [i_14])))) : (((((/* implicit */_Bool) arr_6 [i_0 + 3] [i_11] [i_11] [i_11 - 1])) ? (arr_16 [i_1 + 1] [i_1 - 2] [i_11] [i_1 - 2]) : (arr_16 [i_11 + 1] [i_11 - 1] [i_11 + 1] [i_11])))));
                            }
                            for (signed char i_15 = 3; i_15 < 22; i_15 += 2) 
                            {
                                var_31 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_11 - 3] [i_1] [(signed char)6] [i_12]))));
                                var_32 = ((/* implicit */signed char) ((short) arr_4 [i_11] [i_0] [i_11] [i_12]));
                            }
                            /* vectorizable */
                            for (unsigned long long int i_16 = 0; i_16 < 25; i_16 += 1) 
                            {
                                var_33 -= ((/* implicit */short) ((((/* implicit */int) arr_6 [i_16] [i_12 - 1] [(signed char)10] [i_0])) == (((/* implicit */int) arr_34 [i_0 + 1] [i_11 - 3] [i_1 - 2]))));
                                var_34 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_42 [i_0 + 1] [i_0 + 1] [(unsigned char)24] [i_1 - 1] [i_11 - 1] [i_12 + 1] [i_16])) >> (((((/* implicit */int) arr_42 [i_0 + 1] [i_1] [i_1 + 1] [i_1 - 1] [i_11 - 1] [i_12 + 1] [i_16])) - (16282)))));
                                arr_50 [i_0] [i_1] [i_11] [i_12] [i_12] [i_16] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_37 [i_12 + 1] [i_12] [i_12] [i_12] [i_12 - 2] [i_12] [i_12]))));
                                var_35 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_48 [i_12 + 1] [i_11 - 1] [i_1 - 2] [i_0 - 2] [i_0 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_0] [i_16] [i_1 - 1] [i_12 + 1] [i_16]))) : (((((/* implicit */_Bool) arr_25 [i_0] [i_1] [i_11] [i_12] [i_16])) ? (arr_36 [i_0 + 3] [i_1] [i_11] [i_12] [i_16]) : (((/* implicit */unsigned long long int) arr_47 [i_16] [i_0 + 3]))))));
                            }
                            var_36 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_18 [(unsigned char)5] [(signed char)6] [i_11] [i_0] [(unsigned char)14])) ? (((/* implicit */unsigned long long int) min((arr_16 [i_0] [i_1] [i_11 - 1] [i_12 + 2]), (((/* implicit */unsigned int) arr_28 [i_12 + 2] [i_12] [i_11] [i_1 - 2] [i_0] [i_0] [i_0]))))) : (((((/* implicit */unsigned long long int) arr_13 [i_1])) & (arr_33 [i_0] [i_0]))))));
                            var_37 *= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_24 [i_0 + 1] [i_1] [i_1] [i_1 - 1] [i_11 - 1]))))), (arr_45 [i_12] [i_11] [i_11] [i_1 - 1] [i_0 + 3])));
                        }
                    } 
                } 
            }
        } 
    } 
    var_38 -= ((/* implicit */unsigned int) var_5);
}
