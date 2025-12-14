/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142298
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
    for (short i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_10 [i_2] [i_0] |= ((/* implicit */int) (((~(min((0U), (((/* implicit */unsigned int) (short)(-32767 - 1))))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((arr_0 [i_2]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_10 *= ((/* implicit */short) ((_Bool) max((((/* implicit */unsigned short) arr_4 [i_0 - 1])), (min((arr_13 [(short)13] [i_1 - 1] [i_1 - 1] [(short)13]), (((/* implicit */unsigned short) arr_2 [i_2] [i_0])))))));
                        arr_14 [i_0] [i_0] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) (short)-8362))) ? (((/* implicit */int) arr_4 [i_2])) : (((((min((arr_12 [i_1] [i_2]), (((/* implicit */int) arr_4 [i_1])))) + (2147483647))) >> (((/* implicit */int) arr_5 [i_3 - 1] [i_0 - 1] [i_3 - 1]))))));
                    }
                    for (long long int i_4 = 3; i_4 < 13; i_4 += 2) 
                    {
                        var_11 = ((/* implicit */unsigned short) (~((((~(arr_6 [i_0]))) & (((/* implicit */int) ((_Bool) arr_1 [i_0])))))));
                        /* LoopSeq 3 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_19 [i_4] [i_4 + 2] [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1] [i_4] = ((/* implicit */unsigned char) max((arr_0 [(unsigned char)7]), (((((arr_15 [i_0] [i_0] [(unsigned char)9] [i_0] [i_4] [i_5]) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-11722))))) > (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0])))))))));
                            var_12 = ((/* implicit */short) (_Bool)1);
                            arr_20 [i_4] [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_6 [i_0 - 1])) ? (arr_6 [i_0 + 1]) : (arr_6 [i_0 + 1]))) > (((/* implicit */int) (unsigned short)0))));
                            arr_21 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) ((unsigned long long int) arr_16 [i_4]));
                        }
                        for (short i_6 = 3; i_6 < 14; i_6 += 4) 
                        {
                            var_13 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)65535))));
                            var_14 = ((/* implicit */_Bool) max(((+((-(((/* implicit */int) arr_1 [i_0 - 1])))))), (((/* implicit */int) arr_18 [(signed char)8] [i_1]))));
                            var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) max((((/* implicit */unsigned int) arr_8 [i_0])), (((((/* implicit */_Bool) arr_7 [12ULL] [12ULL] [i_1 + 1])) ? (((arr_15 [i_0 - 1] [i_1 + 1] [i_2] [i_4] [i_6 + 1] [i_6]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1 - 1] [i_2]))))) : (((/* implicit */unsigned int) arr_12 [i_1 - 1] [i_4 + 1])))))))));
                        }
                        for (short i_7 = 0; i_7 < 17; i_7 += 4) 
                        {
                            var_16 ^= ((/* implicit */int) arr_8 [i_0]);
                            arr_26 [i_4] [i_4] = ((/* implicit */unsigned char) (~(min((((/* implicit */int) (unsigned char)246)), (((((/* implicit */int) (short)8200)) / (((/* implicit */int) (short)(-32767 - 1)))))))));
                            var_17 = ((/* implicit */unsigned long long int) min((var_17), ((-(arr_7 [i_0] [i_1] [i_1])))));
                        }
                        /* LoopSeq 3 */
                        for (short i_8 = 0; i_8 < 17; i_8 += 2) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)13)) & (((((/* implicit */_Bool) 16204226339829943083ULL)) ? (((/* implicit */int) (short)16996)) : (((/* implicit */int) (signed char)0))))))) ? (((/* implicit */int) ((unsigned short) min((arr_12 [i_8] [i_4]), (((/* implicit */int) arr_1 [i_4])))))) : (min((((/* implicit */int) arr_29 [i_0 - 1] [i_1 + 1] [i_2] [i_1 + 1] [i_2] [i_8])), (((int) (short)-8370))))));
                            var_19 ^= ((/* implicit */_Bool) arr_7 [i_1 + 1] [i_1 + 1] [i_2]);
                            var_20 = ((/* implicit */unsigned char) arr_13 [i_8] [i_1 - 1] [i_1 - 1] [i_0 + 1]);
                        }
                        for (short i_9 = 0; i_9 < 17; i_9 += 2) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned long long int) arr_31 [i_0] [i_1] [i_1] [i_4]);
                            arr_32 [i_0 + 1] [(_Bool)1] [i_2] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) max((((/* implicit */unsigned char) arr_5 [i_1 - 1] [i_2] [i_9])), ((unsigned char)10))))));
                            arr_33 [i_0] [i_0 - 1] [i_0] [i_4] [i_4] = ((/* implicit */unsigned long long int) (~(((arr_22 [i_0 + 1]) | (arr_22 [i_0 - 2])))));
                            arr_34 [i_0 + 1] [i_0 + 1] [i_4] [i_0 + 1] [i_0 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_30 [i_9] [16LL] [i_9] [i_4 + 2] [i_9] [i_4 + 2])) / (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */long long int) arr_23 [i_0] [i_4 + 3] [i_2] [i_4])) / (max((2251799809490944LL), (((/* implicit */long long int) arr_6 [6])))))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_3 [i_9])) && (((/* implicit */_Bool) (unsigned short)0)))) ? (((/* implicit */int) min((((/* implicit */short) arr_0 [14])), (arr_8 [i_2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0 + 1] [(_Bool)1] [i_0 + 1] [i_2] [i_0 + 1] [i_0 + 1]))))))))));
                        }
                        for (short i_10 = 0; i_10 < 17; i_10 += 2) /* same iter space */
                        {
                            arr_37 [i_0] [i_4] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? ((~(((/* implicit */int) arr_16 [i_4])))) : (((/* implicit */int) arr_16 [i_4])))));
                            arr_38 [i_0] [i_4] [i_2] [i_0] = ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */int) arr_25 [i_0] [i_0] [i_2] [i_2] [i_4])) & (((/* implicit */int) arr_18 [i_1 - 1] [i_1]))))) ? (arr_7 [i_0 - 1] [i_0 - 1] [i_0 + 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_29 [i_0] [i_0] [0] [i_0] [i_0 - 2] [16U])) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_4] [i_2] [i_0] [i_0])))))))));
                        }
                    }
                    arr_39 [i_2] [i_0] [i_0] = ((/* implicit */short) max((arr_12 [i_1] [i_1 - 1]), (((/* implicit */int) (!((_Bool)1))))));
                    arr_40 [i_2] [i_1 - 1] [i_1 - 1] [i_0] = ((/* implicit */unsigned short) arr_12 [i_0] [i_0]);
                    /* LoopSeq 3 */
                    for (short i_11 = 0; i_11 < 17; i_11 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned short) min((((/* implicit */int) ((short) (-(2251799809490957LL))))), (min((((((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [i_0 - 1] [(short)8] [i_0 - 1])) * (arr_31 [i_0] [i_1] [i_2] [i_2]))), (((arr_41 [i_0] [i_0] [i_0]) + (((/* implicit */int) arr_16 [i_0]))))))));
                        arr_44 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) arr_0 [i_11]);
                        var_23 *= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_6 [i_0 - 2])) ? (((/* implicit */unsigned long long int) arr_6 [i_11])) : (arr_3 [i_1 + 1]))) < (((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_11 [i_11] [i_2] [i_2] [i_1] [i_1] [i_0])))) / (((/* implicit */int) ((((/* implicit */_Bool) (short)-8362)) || (((/* implicit */_Bool) 6590416878086555646LL))))))))));
                        var_24 &= ((/* implicit */unsigned char) ((((((/* implicit */int) ((unsigned char) arr_28 [i_0] [i_2] [i_2] [i_0] [i_0]))) >> (((((int) arr_31 [i_0] [i_0] [i_0] [i_0])) - (1955152124))))) - (((((/* implicit */int) ((arr_23 [i_0] [i_2] [i_1] [i_0]) < (((/* implicit */int) (unsigned char)117))))) << (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned short)8))))))));
                        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (~(min((((/* implicit */unsigned long long int) ((arr_12 [i_0] [i_0 - 2]) > (((/* implicit */int) arr_36 [i_2] [i_1 - 1] [i_0] [i_2] [i_11]))))), (arr_28 [i_1 - 1] [i_11] [i_1 - 1] [i_1 + 1] [i_1 + 1]))))))));
                    }
                    for (unsigned short i_12 = 1; i_12 < 16; i_12 += 4) 
                    {
                        var_26 = (short)60;
                        arr_49 [i_0 - 2] [i_12] = ((/* implicit */unsigned long long int) arr_47 [i_2] [i_1]);
                        var_27 = ((/* implicit */unsigned char) 14059004881012502828ULL);
                    }
                    for (unsigned short i_13 = 4; i_13 < 16; i_13 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_14 = 4; i_14 < 16; i_14 += 3) 
                        {
                            var_28 = ((/* implicit */unsigned int) (((-(((/* implicit */int) ((((/* implicit */int) (short)16368)) < (((/* implicit */int) arr_46 [i_0] [i_2] [i_2] [i_14]))))))) * (((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [(short)12] [i_13] [i_14 - 2]))));
                            var_29 = ((/* implicit */unsigned long long int) (~(max(((+(arr_35 [i_0] [i_13] [i_0] [i_13] [i_14] [i_2]))), (((((/* implicit */int) arr_4 [i_13])) & (((/* implicit */int) arr_45 [i_0] [i_1] [i_13] [i_14]))))))));
                        }
                        var_30 = ((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)9)) ? (arr_41 [10] [i_1] [i_0]) : (((/* implicit */int) arr_18 [i_0] [i_0])))))))), ((~(((/* implicit */int) (unsigned short)43520))))));
                        var_31 += ((/* implicit */int) arr_2 [(unsigned char)16] [i_13 - 3]);
                    }
                }
            } 
        } 
    } 
    var_32 = ((/* implicit */_Bool) ((((((/* implicit */int) var_4)) / (((/* implicit */int) var_8)))) * (((/* implicit */int) var_7))));
}
