/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112908
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_5 [i_1] = (+(arr_1 [i_1]));
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 21; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            arr_12 [(short)0] [i_1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(min((-2957460584933972521LL), (((/* implicit */long long int) (unsigned char)231))))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) != (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) (unsigned char)14)))))))) : (((/* implicit */int) ((unsigned short) arr_4 [i_2 - 1] [i_2 + 1] [i_2 - 1])))));
                            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (+(var_15))))));
                            arr_13 [i_1] [i_1] [(signed char)19] = ((/* implicit */long long int) var_9);
                            var_17 -= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_6 [i_3] [i_0] [i_0])), (arr_11 [i_0] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned short)32768)))) : (max((min((arr_3 [i_2]), (((/* implicit */unsigned int) var_8)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-3)))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 22; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        {
                            var_18 -= ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_11) : (((/* implicit */int) var_13))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)167)) ? (((/* implicit */int) (unsigned short)16721)) : (787071778)))) : (((((/* implicit */_Bool) (signed char)-44)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [(unsigned char)19] [i_0] [(unsigned short)14] [i_5]))) : (8191U))))), (((/* implicit */unsigned int) (unsigned short)65535))));
                            /* LoopSeq 2 */
                            for (signed char i_6 = 0; i_6 < 22; i_6 += 4) 
                            {
                                var_19 ^= ((/* implicit */unsigned int) (short)24894);
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) max((arr_6 [i_0] [i_0] [i_4]), (arr_6 [i_4] [i_4] [i_4])))) == (var_1)));
                                var_21 = ((/* implicit */long long int) (~((-(((/* implicit */int) arr_6 [i_0] [i_0] [i_6]))))));
                                var_22 = ((/* implicit */int) (unsigned short)3433);
                            }
                            for (unsigned int i_7 = 1; i_7 < 21; i_7 += 1) 
                            {
                                var_23 = ((/* implicit */unsigned short) ((_Bool) ((_Bool) ((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
                                var_24 = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_7 + 1] [i_1]))) * (arr_3 [i_4])))))) || (min(((!(((/* implicit */_Bool) (signed char)-8)))), (((((/* implicit */int) var_7)) != (((/* implicit */int) arr_15 [15ULL] [i_5] [i_7 + 1]))))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_8 = 0; i_8 < 23; i_8 += 4) 
    {
        for (signed char i_9 = 0; i_9 < 23; i_9 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_10 = 0; i_10 < 23; i_10 += 1) 
                {
                    arr_37 [i_8] [i_10] [i_9] [i_10] = ((/* implicit */short) (!((!(((/* implicit */_Bool) (~(((/* implicit */int) var_0)))))))));
                    arr_38 [i_8] [i_10] [i_10] = ((/* implicit */int) min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_35 [i_8] [i_10] [i_10]))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_14))) - (arr_33 [i_8] [i_9] [i_10])))));
                    var_25 = ((/* implicit */unsigned char) (signed char)-114);
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_26 = ((/* implicit */unsigned short) ((((17031572960355053784ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_11] [i_9] [i_8]))))) > (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)1)), (4086564155U))))));
                    var_27 = arr_32 [i_8] [i_8] [i_8];
                }
                /* LoopNest 3 */
                for (unsigned char i_12 = 4; i_12 < 20; i_12 += 3) 
                {
                    for (signed char i_13 = 2; i_13 < 21; i_13 += 1) 
                    {
                        for (long long int i_14 = 4; i_14 < 20; i_14 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */short) min((((/* implicit */long long int) (unsigned short)42569)), (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)30848))))), (arr_41 [i_12] [i_9] [(_Bool)1])))));
                                var_29 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (min((((/* implicit */unsigned long long int) arr_39 [i_8] [i_9] [i_12])), (((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))) : (((/* implicit */unsigned long long int) min((4294967295U), (((/* implicit */unsigned int) arr_31 [i_8])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_30 &= ((/* implicit */unsigned short) var_14);
}
