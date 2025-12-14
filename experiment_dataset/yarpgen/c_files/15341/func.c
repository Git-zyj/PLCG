/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15341
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
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 3; i_3 < 13; i_3 += 4) 
                    {
                        var_15 = ((/* implicit */unsigned char) var_1);
                        arr_12 [i_2 + 1] [i_0] [i_2 + 1] [i_0] [i_0] = ((short) min((((/* implicit */unsigned long long int) (unsigned short)8320)), (((((/* implicit */_Bool) arr_6 [i_0])) ? (3774614276908265688ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_1])))))));
                        arr_13 [i_0] [i_1] &= ((/* implicit */unsigned short) (~((+(((((/* implicit */_Bool) (unsigned short)8323)) ? (((/* implicit */int) (unsigned char)33)) : (((/* implicit */int) (unsigned short)57212))))))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                    {
                        arr_16 [i_0] [i_1] [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)5451))))), ((unsigned char)203)));
                        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_1]))))) != (arr_10 [i_0] [i_1] [i_2 - 2] [i_4])))) >> (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_14 [i_1])) || (((/* implicit */_Bool) (unsigned short)19)))))))))));
                        arr_17 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((unsigned char) (-(3111763391024835485ULL))));
                    }
                    for (unsigned char i_5 = 4; i_5 < 12; i_5 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned short) min((var_17), (((unsigned short) ((arr_10 [i_5] [i_1] [i_1] [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_5] [i_2 - 1] [i_1]))))))));
                        arr_21 [i_0] [i_0] [i_1] [i_5] [i_5] [i_5] &= ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_5])))))))));
                        var_18 += ((/* implicit */short) (~(((/* implicit */int) max((((/* implicit */unsigned short) (short)189)), (min(((unsigned short)57195), (arr_8 [i_0] [i_1]))))))));
                        arr_22 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) min((16998215100950337961ULL), (7089317532307363431ULL)));
                    }
                    for (short i_6 = 3; i_6 < 14; i_6 += 3) 
                    {
                        var_19 = (i_0 % 2 == zero) ? (((/* implicit */short) min((((((var_9) - (var_8))) << ((((~(arr_2 [i_0] [i_0]))) - (16461724591348478189ULL))))), (min((((((/* implicit */_Bool) (unsigned short)37222)) ? (16973928077831227156ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18983))))), (arr_6 [i_0])))))) : (((/* implicit */short) min((((((var_9) - (var_8))) << ((((((~(arr_2 [i_0] [i_0]))) - (16461724591348478189ULL))) - (3991662247121245231ULL))))), (min((((((/* implicit */_Bool) (unsigned short)37222)) ? (16973928077831227156ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18983))))), (arr_6 [i_0]))))));
                        arr_25 [i_0] = (unsigned short)37222;
                        arr_26 [i_6] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) (-(max((((/* implicit */int) ((short) arr_6 [i_0]))), (((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) (unsigned char)164))))))));
                    }
                    arr_27 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */unsigned short) ((unsigned char) arr_9 [i_0] [i_1] [(short)2] [i_2] [i_2]))), (max((arr_14 [i_2]), ((unsigned short)28313)))))) - (((/* implicit */int) (short)189))));
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 15; i_7 += 3) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((arr_6 [i_0]) >> (((((/* implicit */int) arr_24 [i_8] [i_7] [(short)2])) - (39396)))))))) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_7])) ? (((/* implicit */int) arr_3 [i_0] [i_1] [(short)12])) : (((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) ((4052315568561769091ULL) > (max((arr_19 [i_0] [(unsigned short)1] [i_8]), (((/* implicit */unsigned long long int) (short)-30487)))))))));
                                arr_32 [i_8] [i_0] [i_7] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned long long int) ((short) 15407263066965334367ULL))), (((((/* implicit */_Bool) (unsigned short)19076)) ? (11357426541402188176ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)160)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_9 = 2; i_9 < 21; i_9 += 4) 
    {
        for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 4) 
        {
            {
                arr_38 [i_10] [i_10] [i_9 + 3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) ((((/* implicit */int) (short)189)) == (((/* implicit */int) arr_35 [i_9]))))), ((unsigned short)60959)))) ? (((/* implicit */int) ((unsigned short) (-(((/* implicit */int) arr_37 [i_10] [i_9 - 2])))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_9] [i_10]))) : (15285221597636182628ULL)))) || (((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_36 [i_10] [i_10])), ((unsigned short)8323)))))))));
                arr_39 [i_9] = ((/* implicit */unsigned long long int) min((min((max((arr_35 [i_10]), ((unsigned char)160))), (arr_35 [i_9 + 4]))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-30487)))))));
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (~((+((-(((/* implicit */int) (short)-19340)))))))))));
                arr_40 [i_9] [i_9 - 2] [(unsigned char)8] = ((/* implicit */unsigned short) ((max((arr_34 [i_9 + 4]), (arr_34 [i_9 - 2]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 2) 
    {
        for (short i_12 = 0; i_12 < 21; i_12 += 3) 
        {
            {
                arr_49 [i_12] [i_11] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_44 [i_11] [i_11])) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) ((short) (unsigned char)214))), ((~(((/* implicit */int) (short)31654))))))) : (max((arr_34 [i_12]), (arr_34 [i_11])))));
                arr_50 [i_12] [i_12] = (i_12 % 2 == zero) ? (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)1504)) >> (((((/* implicit */int) arr_45 [i_12] [(unsigned char)2] [i_12])) - (26916)))))), ((-(arr_34 [i_12])))))) ? (((/* implicit */unsigned long long int) (-((~(((/* implicit */int) arr_41 [i_11] [i_11]))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_11] [i_12]))) ^ (max((arr_34 [i_11]), (((/* implicit */unsigned long long int) arr_45 [i_12] [i_11] [i_12]))))))))) : (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)1504)) >> (((((((/* implicit */int) arr_45 [i_12] [(unsigned char)2] [i_12])) - (26916))) + (39049)))))), ((-(arr_34 [i_12])))))) ? (((/* implicit */unsigned long long int) (-((~(((/* implicit */int) arr_41 [i_11] [i_11]))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_11] [i_12]))) ^ (max((arr_34 [i_11]), (((/* implicit */unsigned long long int) arr_45 [i_12] [i_11] [i_12])))))))));
            }
        } 
    } 
}
