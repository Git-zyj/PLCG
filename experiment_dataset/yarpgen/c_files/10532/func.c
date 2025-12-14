/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10532
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)95)) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) : (var_5)))) - (((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? ((-(var_3))) : (((/* implicit */long long int) (-(((/* implicit */int) var_2)))))))));
    /* LoopSeq 4 */
    for (int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        var_13 = ((/* implicit */long long int) (~((~(arr_0 [i_0])))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 10; i_2 += 1) 
            {
                {
                    var_14 -= (-((+(((/* implicit */int) arr_7 [i_2 + 2] [i_1 - 1] [i_0 + 1])))));
                    arr_9 [i_0] [(unsigned char)1] [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_2 [i_0]) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) 15U)))))))) ? (((/* implicit */int) (((~(arr_1 [i_0]))) == (((/* implicit */int) arr_5 [i_1 + 1] [i_2 + 2] [i_0 + 1]))))) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_1]))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        var_15 -= ((/* implicit */_Bool) (signed char)-1);
                        var_16 = ((/* implicit */int) min((var_16), (arr_0 [i_3])));
                        arr_12 [i_0] [(unsigned char)10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_2 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)7))) : (4294967277U)))) && (((/* implicit */_Bool) ((arr_2 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (2031028430803730116LL))))));
                    }
                }
            } 
        } 
        arr_13 [i_0] = ((/* implicit */unsigned int) arr_6 [i_0]);
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) arr_15 [i_4]);
        var_18 = ((/* implicit */long long int) (_Bool)1);
        var_19 = ((/* implicit */unsigned int) max(((+(2533398685723775717LL))), (((/* implicit */long long int) max((((/* implicit */unsigned char) arr_15 [i_4])), ((unsigned char)208))))));
    }
    for (unsigned char i_5 = 1; i_5 < 19; i_5 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_6 = 0; i_6 < 23; i_6 += 4) 
        {
            for (long long int i_7 = 0; i_7 < 23; i_7 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_8 = 0; i_8 < 23; i_8 += 3) 
                    {
                        var_20 = (+((+(arr_24 [i_5] [i_5]))));
                        arr_28 [i_7] [i_6] [i_6] [i_6] |= ((/* implicit */long long int) ((short) arr_21 [i_5 + 1]));
                        var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_20 [i_6] [i_5])) ? (1028447618U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_5])))));
                    }
                    for (unsigned char i_9 = 0; i_9 < 23; i_9 += 4) 
                    {
                        arr_31 [i_5] [i_7] [i_9] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) arr_29 [i_5] [i_5 + 4] [i_5] [i_6])))));
                        var_22 = ((/* implicit */short) max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_18 [i_5 + 1]))))), ((-(arr_20 [i_5 - 1] [i_5])))));
                        arr_32 [i_5] [i_6] [i_7] [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_20 [i_5 + 1] [i_7])))) ? (((((/* implicit */_Bool) arr_25 [i_5 + 4] [i_6] [i_6] [i_5 + 4])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)208))) : (arr_25 [i_5 - 1] [i_6] [i_6] [i_5 + 2]))) : (((/* implicit */long long int) min((57646879), (arr_22 [i_5 + 1] [i_5 + 2] [i_6]))))));
                    }
                    for (unsigned int i_10 = 1; i_10 < 21; i_10 += 4) 
                    {
                        arr_35 [i_7] [i_10] = ((/* implicit */unsigned char) max((((arr_34 [i_5] [i_5] [i_6] [i_7] [i_10] [i_10]) ? (((arr_21 [i_10]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)911))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [(_Bool)1] [i_10])))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_21 [17]) | (((/* implicit */unsigned long long int) arr_20 [i_5] [i_5]))))) && (((/* implicit */_Bool) ((arr_25 [(_Bool)0] [i_10] [i_10] [i_5]) % (((/* implicit */long long int) ((/* implicit */int) var_1)))))))))));
                        var_23 -= ((/* implicit */unsigned long long int) arr_30 [i_7] [i_10 + 1] [i_7] [i_10]);
                    }
                    var_24 = ((((/* implicit */_Bool) arr_20 [i_7] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-30963)))))) : (((((/* implicit */_Bool) arr_24 [i_5 + 1] [i_5])) ? (arr_24 [i_5 - 1] [i_5]) : (arr_24 [i_5 + 1] [i_5]))));
                    arr_36 [i_5] [i_7] [i_7] [i_6] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) (~(var_3)))) && ((!(((/* implicit */_Bool) arr_17 [i_5] [i_5])))))));
                    arr_37 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) (_Bool)1);
                    var_25 = ((/* implicit */short) ((unsigned char) (-(67108863ULL))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned char i_11 = 0; i_11 < 23; i_11 += 4) 
        {
            arr_40 [i_5] [i_11] = ((/* implicit */int) min((((/* implicit */long long int) (_Bool)1)), (arr_38 [i_5])));
            var_26 = ((/* implicit */unsigned short) ((short) ((arr_38 [i_11]) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)254))))));
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            var_27 *= ((/* implicit */short) (((!(((/* implicit */_Bool) arr_18 [i_5])))) ? (arr_25 [0LL] [4ULL] [4ULL] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)160))) <= (arr_20 [i_5] [i_5 - 1])))))));
            var_28 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((921075927233842953LL) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
            var_29 = ((/* implicit */int) ((unsigned char) ((((arr_41 [i_5]) <= (arr_26 [(unsigned char)2]))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_33 [(unsigned char)14] [i_5] [i_5] [i_12]))))) : (arr_20 [i_5 + 3] [i_5 - 1]))));
            var_30 -= ((/* implicit */_Bool) (short)5994);
        }
        for (unsigned long long int i_13 = 1; i_13 < 21; i_13 += 1) 
        {
            arr_45 [i_5] [i_5] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_22 [i_5] [i_5] [i_5]))) ? (((/* implicit */int) ((short) (unsigned char)102))) : ((~(784447431)))))) && (((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) (short)28526))))))));
            var_31 -= ((/* implicit */unsigned int) 2031028430803730102LL);
        }
        /* LoopSeq 1 */
        for (unsigned int i_14 = 2; i_14 < 21; i_14 += 4) 
        {
            var_32 = ((/* implicit */unsigned int) (signed char)55);
            var_33 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) ((arr_26 [i_14]) / (arr_26 [i_14])))) ? (((/* implicit */unsigned long long int) arr_26 [i_14])) : (arr_27 [(short)14] [i_14 + 2]))));
        }
    }
    for (signed char i_15 = 4; i_15 < 8; i_15 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_16 = 0; i_16 < 11; i_16 += 4) 
        {
            for (unsigned short i_17 = 1; i_17 < 10; i_17 += 4) 
            {
                {
                    var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_19 [i_17] [i_17] [i_17]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_15] [i_17])))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_39 [i_17 + 1]))))) : (1483312428U)));
                    arr_58 [(_Bool)1] [i_16] [i_17] = ((/* implicit */unsigned char) var_2);
                    arr_59 [i_17] = ((/* implicit */signed char) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)84))) : (arr_41 [i_16]))))))), (((unsigned char) ((3881866991U) >> (((1758329219U) - (1758329201U))))))));
                }
            } 
        } 
        var_35 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_2 [(_Bool)1]) ? (arr_19 [(short)13] [i_15] [i_15 - 3]) : (arr_19 [i_15 + 1] [i_15 + 3] [i_15 + 3]))))));
        arr_60 [i_15] [i_15] = ((/* implicit */_Bool) max((((/* implicit */int) ((short) ((arr_7 [i_15] [i_15] [(unsigned char)1]) && (((/* implicit */_Bool) arr_54 [i_15] [i_15] [i_15])))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (min((((/* implicit */int) (short)-1990)), (arr_51 [i_15] [i_15]))) : (min((((/* implicit */int) (unsigned char)246)), (2086995189)))))));
        var_36 = ((/* implicit */long long int) arr_46 [3U] [i_15]);
    }
}
