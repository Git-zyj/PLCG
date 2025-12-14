/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186774
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
    var_14 |= (~(((/* implicit */int) var_10)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 3; i_2 < 19; i_2 += 3) 
                {
                    for (unsigned short i_3 = 1; i_3 < 20; i_3 += 4) 
                    {
                        {
                            arr_11 [i_3] |= ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)35355))));
                            /* LoopSeq 3 */
                            for (unsigned char i_4 = 1; i_4 < 20; i_4 += 3) 
                            {
                                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */long long int) ((-1260906496) / (((/* implicit */int) (short)-32090))))) + (max((min((var_13), (((/* implicit */long long int) arr_5 [i_1])))), (((/* implicit */long long int) arr_1 [i_0])))))))));
                                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) min((max((var_9), (((/* implicit */int) arr_5 [i_0])))), (((/* implicit */int) ((((/* implicit */int) var_0)) < (-1260906484))))))), (arr_13 [i_0 + 1] [i_1] [i_2] [i_4]))))));
                            }
                            for (long long int i_5 = 0; i_5 < 22; i_5 += 4) 
                            {
                                arr_17 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((-2137358853) < (((((/* implicit */_Bool) (unsigned char)184)) ? (((/* implicit */int) arr_6 [i_1 - 2] [i_2 + 1] [i_2])) : (((/* implicit */int) arr_6 [i_1 - 2] [i_2 + 3] [i_2]))))));
                                arr_18 [i_2] [i_1 + 1] [6LL] [i_0] |= ((/* implicit */short) (~(18446744073709551604ULL)));
                            }
                            for (unsigned char i_6 = 0; i_6 < 22; i_6 += 2) 
                            {
                                arr_21 [i_0] [i_0] = (((-(((((/* implicit */int) (unsigned short)30163)) & (2147483647))))) / (((/* implicit */int) (_Bool)1)));
                                arr_22 [i_0 + 1] [i_1] [i_0 + 1] [i_3 + 1] [i_6] [i_1 + 1] [i_6] = min((arr_1 [i_0]), ((~(1398395241U))));
                                arr_23 [i_0] [i_1] [i_0] [i_0] [i_6] |= ((/* implicit */long long int) max((((/* implicit */int) var_1)), (((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), (var_0)))) ? (((/* implicit */int) (short)8192)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [13U])) && (((/* implicit */_Bool) arr_10 [i_0])))))))));
                            }
                        }
                    } 
                } 
                arr_24 [i_0 - 1] [(signed char)21] [(unsigned char)2] = ((/* implicit */unsigned short) ((max((((/* implicit */int) max(((short)29347), (((/* implicit */short) var_0))))), (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) : (var_5))))) < (((/* implicit */int) ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned short) var_4))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 2095399499)) ? (arr_20 [i_0] [i_0] [i_1 - 1] [i_1 - 1] [i_1] [12ULL] [(_Bool)0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0 - 1] [i_0] [i_0] [i_0])))))))))));
                /* LoopSeq 1 */
                for (int i_7 = 0; i_7 < 22; i_7 += 2) 
                {
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_19 [i_0] [i_1 + 2] [i_1] [i_0] [i_0]) : (arr_19 [i_0] [i_1 - 1] [(unsigned char)20] [i_7] [i_1])))) && (((/* implicit */_Bool) var_11))));
                    arr_28 [i_0] = ((/* implicit */unsigned char) ((min((((unsigned long long int) arr_4 [i_0 - 1] [i_7])), (((/* implicit */unsigned long long int) ((15ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))) ^ (((/* implicit */unsigned long long int) 620295599U))));
                }
                /* LoopSeq 2 */
                for (unsigned char i_8 = 0; i_8 < 22; i_8 += 4) 
                {
                    arr_33 [i_0 - 1] [i_0 + 1] = ((/* implicit */signed char) (-(max((((/* implicit */int) (_Bool)0)), (229318472)))));
                    arr_34 [i_0] [(unsigned short)17] [i_8] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) arr_30 [i_0 - 1] [i_1] [i_8] [i_0 - 1]))) >> (((((unsigned long long int) max((((/* implicit */int) var_10)), (arr_31 [i_0] [i_0] [i_0] [i_8])))) - (1875353364ULL)))));
                }
                for (unsigned char i_9 = 3; i_9 < 21; i_9 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 0; i_10 < 22; i_10 += 3) 
                    {
                        for (unsigned short i_11 = 0; i_11 < 22; i_11 += 1) 
                        {
                            {
                                arr_41 [i_9] [i_1] [i_1] [i_1] [i_11] = ((/* implicit */int) ((unsigned long long int) arr_32 [i_0] [i_0 + 1] [(unsigned char)6] [i_0]));
                                arr_42 [i_9] [i_11] [i_9] [i_10] [i_11] = ((/* implicit */unsigned int) 177710607);
                            }
                        } 
                    } 
                    arr_43 [i_0] [i_0 + 1] [i_9] [i_0] = ((/* implicit */unsigned char) ((unsigned int) max((max((11876398834742444672ULL), (((/* implicit */unsigned long long int) var_8)))), (((((/* implicit */unsigned long long int) 8530715058514078958LL)) % (18446744073709551604ULL))))));
                    arr_44 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((-208235966) / (((/* implicit */int) (signed char)33)))) + (2147483647))) << (((((/* implicit */int) ((short) arr_25 [i_9 - 1] [i_1]))) - (214)))))) ? (arr_13 [i_0] [i_1 + 1] [i_9] [i_1]) : (((/* implicit */unsigned int) var_3))));
                    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) max((((unsigned long long int) ((short) -6089531574309462250LL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_9 - 1] [i_1 - 2]))))))))));
                    /* LoopNest 2 */
                    for (long long int i_12 = 0; i_12 < 22; i_12 += 4) 
                    {
                        for (int i_13 = 0; i_13 < 22; i_13 += 4) 
                        {
                            {
                                var_19 -= ((/* implicit */unsigned short) arr_13 [12] [i_9] [i_12] [i_13]);
                                var_20 ^= ((/* implicit */long long int) max((((((/* implicit */int) arr_37 [i_13])) / (((/* implicit */int) arr_37 [i_1])))), (((/* implicit */int) max((((/* implicit */unsigned short) var_4)), ((unsigned short)40571))))));
                                arr_52 [i_0] [i_1] [i_9] [i_9] [(signed char)7] = (-((-(max((((/* implicit */unsigned int) arr_6 [i_0] [i_1] [i_9])), (598830739U))))));
                                arr_53 [i_9] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_9] [i_0] [i_9] [i_9]))) < (max((1073741760U), (((/* implicit */unsigned int) (signed char)9))))))) / (((((/* implicit */_Bool) arr_12 [i_0 + 1] [i_1 + 2] [i_9] [i_1 + 2] [i_13])) ? (((/* implicit */int) (unsigned short)14266)) : (((/* implicit */int) arr_12 [i_0] [i_1 - 2] [i_9] [i_12] [i_13]))))));
                                var_21 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) < (((/* implicit */int) arr_48 [i_13] [i_9]))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
