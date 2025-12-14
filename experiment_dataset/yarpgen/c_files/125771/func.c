/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125771
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_1] [(unsigned char)5] = max((((/* implicit */long long int) (+(((/* implicit */int) max(((unsigned char)221), (((/* implicit */unsigned char) var_4)))))))), (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)221)) <= (((/* implicit */int) var_2)))))) & (max((((/* implicit */long long int) (unsigned char)107)), (var_15))))));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 1; i_2 < 20; i_2 += 3) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_13 [i_1] = ((/* implicit */int) (~(var_15)));
                        var_18 |= ((/* implicit */_Bool) arr_10 [i_2] [(short)18] [i_2]);
                    }
                    arr_14 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */unsigned long long int) 1152921504606715904LL)) : (var_10)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))) : (max((5696493116249556746LL), (((/* implicit */long long int) arr_9 [i_2] [i_1]))))))));
                }
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) 3112607413U)) ? (max((((/* implicit */unsigned long long int) ((long long int) var_7))), (15288546615121134059ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(short)13] [i_1] [i_4 + 1])))));
                    arr_17 [i_1] = var_15;
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 647841041)) ? (min((((/* implicit */long long int) arr_16 [i_4] [i_4 + 1] [i_4 + 1])), (max((((/* implicit */long long int) -405885318)), (-5696493116249556746LL))))) : (((/* implicit */long long int) ((unsigned int) arr_6 [i_4] [i_4 + 1] [i_4 + 1])))));
                    var_21 = ((/* implicit */unsigned int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_4 + 1] [i_4 + 1] [i_1]))) - (var_10)))));
                }
                var_22 = ((/* implicit */short) ((_Bool) (+(((/* implicit */int) var_11)))));
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_14))) < (var_3))) ? (524288) : (((/* implicit */int) var_0))))), (var_16)));
    var_24 = ((/* implicit */short) var_14);
    /* LoopSeq 1 */
    for (int i_5 = 0; i_5 < 14; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 14; i_6 += 3) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 3) 
            {
                {
                    arr_28 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) var_9))) ? (((((/* implicit */_Bool) arr_11 [i_5] [i_6] [i_7])) ? (((/* implicit */unsigned long long int) var_3)) : (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                    /* LoopNest 2 */
                    for (signed char i_8 = 1; i_8 < 13; i_8 += 2) 
                    {
                        for (long long int i_9 = 0; i_9 < 14; i_9 += 4) 
                        {
                            {
                                arr_36 [7U] [7U] [i_7] [i_7] [i_7] [i_6] [i_5] = ((min(((+(((/* implicit */int) (signed char)127)))), (((/* implicit */int) arr_8 [i_7] [i_8 + 1] [i_8 - 1] [i_7])))) / (((/* implicit */int) var_12)));
                                var_25 *= ((/* implicit */signed char) var_6);
                                arr_37 [i_9] [i_9] [i_9] [i_7] [i_9] [(signed char)0] [i_5] &= ((/* implicit */long long int) (-(arr_1 [i_5] [i_9])));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_26 |= ((/* implicit */unsigned int) arr_24 [(unsigned short)10]);
        /* LoopSeq 1 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            arr_40 [i_10] [i_10] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((long long int) var_17))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_4 [i_5] [i_10] [(short)2])))) > (((/* implicit */int) var_2))));
            /* LoopNest 2 */
            for (long long int i_11 = 0; i_11 < 14; i_11 += 3) 
            {
                for (unsigned short i_12 = 0; i_12 < 14; i_12 += 3) 
                {
                    {
                        arr_46 [i_5] [(unsigned short)2] [i_11] [i_10] = ((/* implicit */short) var_13);
                        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_12] [i_11] [i_10] [i_5])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_33 [i_5] [i_10] [i_11] [i_12]))))) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_5] [i_5] [21] [i_10]))) < (var_5))) ? (((((/* implicit */_Bool) var_16)) ? (arr_20 [i_5] [i_10]) : (var_10))) : (((/* implicit */unsigned long long int) arr_32 [i_10] [i_5] [i_11] [i_10] [i_5] [i_10])))) : (((/* implicit */unsigned long long int) arr_29 [i_10]))));
                    }
                } 
            } 
        }
    }
    var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) (short)32761))));
}
