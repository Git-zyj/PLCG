/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109246
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
    var_15 *= ((/* implicit */unsigned int) var_13);
    var_16 = ((/* implicit */unsigned long long int) (~((+(((int) -2471733637794429683LL))))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)1023))) ^ (2809686939359100497ULL)));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    {
                        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */int) min((arr_3 [i_2]), (arr_9 [i_0] [i_2] [i_1] [i_1] [i_0])))) / (((/* implicit */int) max((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_3 [i_2])))))))));
                        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_4 [i_0] [i_1] [i_2]) : ((((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_3] [i_3])) : (((/* implicit */int) arr_7 [i_0]))))));
                        var_19 -= ((/* implicit */unsigned long long int) (-(arr_8 [i_0] [i_3])));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_4 = 4; i_4 < 15; i_4 += 4) 
                        {
                            var_20 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))) / (var_12)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_6)))) : (((unsigned int) arr_0 [i_2]))));
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_4 + 1] [i_4 + 3] [i_4 + 3] [i_4 + 1] [i_4 - 1] [i_4 - 3])) ? (arr_10 [i_4 - 4] [i_4 - 2] [i_4 + 3] [i_4 + 1] [i_4 - 4] [i_4 + 1]) : (arr_10 [i_4 - 3] [i_4 - 1] [i_4 + 1] [i_4 - 2] [i_4 - 1] [i_4 - 4])));
                        }
                    }
                } 
            } 
        } 
        var_22 += ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) << (((((/* implicit */int) var_6)) - (6948)))))) * ((+(2809686939359100500ULL)))));
    }
    for (unsigned long long int i_5 = 3; i_5 < 10; i_5 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 11; i_6 += 4) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    arr_21 [i_7] [(unsigned short)1] [i_7] [i_7] = ((/* implicit */short) (+((~(15637057134350451116ULL)))));
                    arr_22 [i_7] [i_7] = ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_5] [i_6] [i_7])) ? (arr_8 [i_5 - 2] [i_7]) : (((/* implicit */long long int) arr_16 [i_5 - 2] [i_5 - 2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_18 [i_6] [i_6] [i_5])))) : (arr_11 [i_5] [i_6] [i_5] [i_5 - 3] [i_5] [i_6])))));
                    arr_23 [i_5] [i_6] [i_7] [(unsigned char)10] &= ((/* implicit */_Bool) ((unsigned short) arr_16 [i_6] [4ULL]));
                }
            } 
        } 
        arr_24 [i_5] [(_Bool)1] = ((/* implicit */long long int) (+(((18446744073709551615ULL) % (((/* implicit */unsigned long long int) 4294967295U))))));
        /* LoopNest 2 */
        for (long long int i_8 = 3; i_8 < 10; i_8 += 3) 
        {
            for (unsigned int i_9 = 0; i_9 < 11; i_9 += 3) 
            {
                {
                    var_23 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_5 + 1] [i_8 - 1]))) : (arr_20 [i_5] [i_8 + 1] [i_9]))))));
                    arr_29 [i_5 - 1] [i_8] [i_9] [i_8] = ((/* implicit */unsigned char) arr_10 [i_5] [i_5] [i_5 - 1] [i_5 - 1] [(short)6] [i_5 - 3]);
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45795))) <= (15637057134350451116ULL)));
    }
    for (signed char i_10 = 1; i_10 < 19; i_10 += 3) 
    {
        arr_33 [i_10] = (i_10 % 2 == zero) ? (((/* implicit */unsigned short) min((((((/* implicit */int) min((arr_32 [i_10]), (((/* implicit */unsigned short) var_3))))) >> (((((/* implicit */int) arr_31 [i_10] [i_10 - 1])) - (44510))))), ((+(((((/* implicit */_Bool) arr_31 [i_10] [17U])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_13))))))))) : (((/* implicit */unsigned short) min((((((/* implicit */int) min((arr_32 [i_10]), (((/* implicit */unsigned short) var_3))))) >> (((((((/* implicit */int) arr_31 [i_10] [i_10 - 1])) - (44510))) - (20912))))), ((+(((((/* implicit */_Bool) arr_31 [i_10] [17U])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_13)))))))));
        var_25 = ((((/* implicit */_Bool) (+((+(((/* implicit */int) arr_30 [i_10] [i_10 - 1]))))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1U)) | (12ULL)))));
        arr_34 [10LL] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_31 [(unsigned short)12] [i_10 + 1]))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */int) var_7)) / (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_32 [i_10])) : (((/* implicit */int) arr_31 [4U] [i_10 + 1]))))))));
        arr_35 [i_10] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_32 [i_10 - 1]))));
        arr_36 [i_10] = ((/* implicit */unsigned short) 0ULL);
    }
    for (unsigned char i_11 = 0; i_11 < 22; i_11 += 3) 
    {
        var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) min((min((((/* implicit */unsigned int) (unsigned short)26713)), (4294967295U))), ((~(var_4))))))));
        arr_40 [i_11] [i_11] = ((/* implicit */_Bool) ((int) max((arr_39 [i_11]), (arr_39 [i_11]))));
    }
    var_27 ^= ((/* implicit */unsigned int) var_1);
}
