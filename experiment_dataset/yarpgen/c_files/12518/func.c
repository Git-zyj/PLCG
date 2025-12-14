/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12518
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((unsigned int) var_15))))) ? ((+(var_5))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_9)) : (var_7)))) ? (var_7) : (((/* implicit */int) (unsigned char)139)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_8 [i_2] [i_2] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) ((arr_4 [i_0] [i_1] [i_1]) >= (((/* implicit */int) arr_2 [i_0]))))))), (((((/* implicit */_Bool) 11963407485741930922ULL)) ? (arr_4 [i_0] [i_0] [i_2 + 2]) : (((/* implicit */int) ((arr_4 [i_0] [i_1] [i_2 + 2]) != (((/* implicit */int) arr_7 [i_0] [12U] [i_2] [5LL])))))))));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 4) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (short i_4 = 0; i_4 < 16; i_4 += 2) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)0)) ? (arr_4 [4U] [i_1] [i_2 + 1]) : (((/* implicit */int) (_Bool)1))));
                            var_21 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-95)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [10] [10])) ? (((/* implicit */int) arr_3 [i_0] [i_3] [i_3])) : (((/* implicit */int) (signed char)-1))))) : (((unsigned int) 2504016347U))));
                            arr_13 [i_0] [i_1] [i_2] [(_Bool)1] [i_3] [i_4] = ((/* implicit */unsigned int) ((arr_12 [i_2 + 2] [i_2 - 2] [i_2 - 2] [i_4] [i_4] [i_4]) / (arr_12 [i_2 + 1] [i_2 - 3] [i_2 - 3] [i_2 - 2] [i_2] [i_3])));
                            arr_14 [i_2] [i_1] [(unsigned short)13] [15] [i_4] = ((/* implicit */int) (_Bool)1);
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) arr_4 [i_1] [i_3] [i_1])) : ((+(2475506595U)))));
                        }
                        for (short i_5 = 0; i_5 < 16; i_5 += 2) /* same iter space */
                        {
                            var_23 ^= ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_4 [i_2 - 2] [i_2 - 1] [i_2 - 1]) % (arr_4 [i_2 - 2] [i_2 - 3] [i_2 - 1]))))));
                            arr_17 [i_2] [i_1] [i_2 + 1] [(unsigned char)1] [i_1] [i_3] = (signed char)-117;
                            var_24 = ((/* implicit */_Bool) (-(((/* implicit */int) ((2959079443U) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)40)) <= (((/* implicit */int) (signed char)1)))))))))));
                            arr_18 [i_0] [i_1] [i_2] [i_2] [i_2] [i_3] [i_5] = ((((/* implicit */_Bool) (~((((_Bool)0) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_5 [i_0] [i_2 + 1]))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)56139)) * (((/* implicit */int) (short)-1))))) : (min((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)77))))), (arr_9 [i_0] [i_0] [1U] [i_3] [i_5] [i_2 + 1]))));
                            arr_19 [i_2] [i_1] [14ULL] [i_2] [i_3] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2 + 2] [i_2 - 1] [i_2 + 1])) ? (((/* implicit */int) arr_3 [i_2 + 1] [i_2 + 1] [i_3])) : (((/* implicit */int) arr_3 [i_2 - 2] [i_2 + 2] [i_3]))))) ? (((/* implicit */int) max((arr_3 [i_2 + 2] [i_2 - 1] [i_5]), (arr_3 [i_2 + 2] [i_2 + 2] [i_5])))) : ((-(((/* implicit */int) arr_3 [i_2 + 2] [i_2 - 3] [i_5]))))));
                        }
                        for (short i_6 = 0; i_6 < 16; i_6 += 2) /* same iter space */
                        {
                            arr_23 [i_0] [i_0] [i_0] [i_2] [i_2 + 1] [i_0] [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 0))));
                            arr_24 [i_3] [i_3] [i_2] [i_3] [i_2] [i_2] [i_3] = ((/* implicit */int) ((unsigned short) (short)17));
                            var_25 = ((/* implicit */unsigned int) (unsigned char)188);
                            var_26 -= ((/* implicit */unsigned char) (+(((max((arr_22 [i_0] [i_2] [i_3] [i_6]), (((/* implicit */unsigned int) arr_5 [i_0] [i_0])))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2147448009)) ? (((/* implicit */int) arr_0 [i_6])) : (((/* implicit */int) (unsigned char)143)))))))));
                        }
                        for (short i_7 = 0; i_7 < 16; i_7 += 2) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_2] [i_3] [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_11 [i_2] [i_3] [i_2] [i_2])))) : (3438653041U))))));
                            var_28 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? ((~(arr_22 [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned int) (-(1535006732))))));
                        }
                        var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) (~(((/* implicit */int) min((((((/* implicit */_Bool) -1)) || (((/* implicit */_Bool) (short)339)))), (((((/* implicit */_Bool) arr_22 [i_3] [i_3] [i_3] [(_Bool)1])) || (((/* implicit */_Bool) var_16))))))))))));
                        arr_27 [i_0] [(unsigned short)12] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */unsigned long long int) -1)) > (17191361467047410470ULL)))), ((+(((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_3]))))))) ? (((arr_22 [i_1] [i_2] [i_2 + 2] [i_2 - 1]) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_2] [(unsigned short)12]))))))) : (var_14)));
                    }
                    for (signed char i_8 = 0; i_8 < 16; i_8 += 4) /* same iter space */
                    {
                        var_30 |= ((/* implicit */unsigned short) min((((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 712639386)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (_Bool)1)))))))), ((short)0)));
                        /* LoopSeq 2 */
                        for (unsigned short i_9 = 0; i_9 < 16; i_9 += 4) 
                        {
                            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) min((((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) var_1))))), ((signed char)-15)))), ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_1]))))))))))));
                            var_32 = ((/* implicit */unsigned char) arr_25 [i_0] [i_0] [i_0] [i_0] [i_0]);
                        }
                        /* vectorizable */
                        for (short i_10 = 1; i_10 < 12; i_10 += 2) 
                        {
                            arr_35 [i_0] [i_1] [(unsigned char)11] [i_8] [i_10 + 3] [i_0] [i_2] = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_33 [6U] [i_2 + 1] [i_2 + 1] [i_10 + 3] [i_2])) : (((/* implicit */int) arr_33 [i_1] [i_2 + 1] [i_2 + 1] [i_10 - 1] [i_2])));
                            arr_36 [i_0] [i_0] [i_2 - 1] [i_2] [i_8] [i_10 + 4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-48)) ? (arr_20 [i_0] [i_2 + 2] [i_2 - 2] [i_10 - 1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_10 - 1] [i_2] [i_2 + 1])))));
                            var_33 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_26 [i_10] [0LL] [i_1] [i_0])) ? (((/* implicit */int) arr_26 [i_0] [i_1] [i_2 + 2] [i_10])) : (((/* implicit */int) (signed char)84))));
                            var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_9 [i_2 + 1] [13] [i_2] [i_8] [i_10] [i_10 + 1])))))));
                        }
                        var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) max((((((((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) (short)-13707)))) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) min((arr_31 [i_0] [i_0] [i_8]), (((/* implicit */unsigned short) arr_5 [i_2] [i_2])))))))), (((/* implicit */long long int) ((((((/* implicit */int) var_15)) > (arr_28 [i_1]))) ? ((~(((/* implicit */int) arr_26 [i_0] [i_0] [i_2 + 2] [i_0])))) : (((/* implicit */int) arr_2 [i_0]))))))))));
                        arr_37 [i_2] [i_2] = ((/* implicit */_Bool) (((-(((/* implicit */int) arr_26 [i_2 - 2] [i_2 + 1] [i_2 - 2] [i_2])))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_2 + 1] [i_2 - 2] [i_2 - 3] [i_2])))))));
                    }
                }
            } 
        } 
    } 
    var_36 = ((/* implicit */unsigned char) var_3);
}
