/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122368
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */short) (~(((((/* implicit */_Bool) (+(((/* implicit */int) var_15))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_12)), (arr_2 [i_0])))) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_6 [i_0] [i_1])), (arr_2 [i_1]))))))));
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    for (signed char i_4 = 3; i_4 < 16; i_4 += 1) 
                    {
                        {
                            var_16 = var_2;
                            arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) arr_14 [i_4 - 1] [i_4] [i_4] [i_4] [i_0]);
                            var_17 = ((/* implicit */int) arr_3 [i_0]);
                        }
                    } 
                } 
            } 
        }
        arr_17 [(signed char)12] |= ((/* implicit */unsigned int) (+((-(arr_13 [i_0 + 1] [14LL] [i_0] [14LL] [i_0])))));
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((min((max((var_13), (((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)18)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)12747))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 15; i_5 += 3) 
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            for (long long int i_7 = 0; i_7 < 17; i_7 += 2) 
            {
                for (short i_8 = 0; i_8 < 17; i_8 += 2) 
                {
                    {
                        var_19 = ((((/* implicit */_Bool) arr_11 [i_5] [i_5] [i_7] [i_7])) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) var_10)) : (15388551609065961303ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_5 + 2] [i_5 - 1] [i_5 - 1] [i_5]))));
                        arr_28 [i_5] [i_6] [i_7] [i_8] = ((/* implicit */unsigned long long int) (short)-12747);
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)127)) ? (777403010U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned char)16])))));
        arr_29 [i_5] = ((/* implicit */int) (signed char)18);
        var_21 = ((/* implicit */long long int) ((signed char) arr_26 [i_5 - 1] [i_5] [i_5] [i_5 + 2]));
    }
    for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 3) 
    {
        var_22 = ((/* implicit */unsigned short) max(((+(var_10))), (((/* implicit */int) (unsigned char)5))));
        var_23 = ((/* implicit */unsigned int) arr_30 [i_9] [i_9]);
        var_24 = ((/* implicit */_Bool) -997952814);
    }
    /* LoopSeq 2 */
    for (unsigned char i_10 = 0; i_10 < 14; i_10 += 1) 
    {
        arr_36 [i_10] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_33 [i_10])) ? (arr_33 [i_10]) : (arr_33 [i_10]))), (((/* implicit */long long int) (short)12743))));
        /* LoopNest 2 */
        for (int i_11 = 4; i_11 < 10; i_11 += 4) 
        {
            for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 1) 
            {
                {
                    arr_43 [i_10] [i_11] [i_10] [i_12] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((arr_24 [i_10] [i_11] [i_12] [i_12]) * (((/* implicit */int) arr_21 [i_10] [i_11]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_10] [i_11] [i_11] [i_11] [i_12]))) : (5719013557852086936ULL))), (((((/* implicit */_Bool) arr_4 [i_11] [i_11 - 4])) ? (arr_4 [i_10] [i_11 + 1]) : (arr_4 [i_10] [i_11 + 1])))));
                    arr_44 [i_10] [i_10] |= ((/* implicit */short) var_2);
                }
            } 
        } 
        arr_45 [i_10] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(2124115800860631520ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [(signed char)10] [(signed char)10] [i_10] [(signed char)10] [i_10])) || (((/* implicit */_Bool) arr_13 [i_10] [i_10] [i_10] [14LL] [i_10])))))) : (((((/* implicit */_Bool) arr_13 [i_10] [8LL] [i_10] [8LL] [i_10])) ? (arr_13 [i_10] [i_10] [i_10] [(unsigned char)10] [i_10]) : (arr_13 [i_10] [i_10] [i_10] [(unsigned char)16] [i_10])))));
        var_25 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_33 [i_10])))) == (((((/* implicit */_Bool) ((((/* implicit */int) arr_34 [i_10])) >> (((/* implicit */int) arr_21 [i_10] [i_10]))))) ? (max((var_9), (((/* implicit */unsigned long long int) arr_39 [i_10] [i_10] [i_10])))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)18))) * (var_3)))))));
    }
    for (int i_13 = 0; i_13 < 20; i_13 += 2) 
    {
        arr_49 [i_13] [i_13] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_4)))) ? ((-(var_0))) : ((+(((((/* implicit */_Bool) 3058192464643590316ULL)) ? (((/* implicit */int) arr_47 [i_13])) : (((/* implicit */int) (signed char)-9))))))));
        arr_50 [i_13] = ((/* implicit */_Bool) arr_47 [i_13]);
        var_26 = ((/* implicit */long long int) ((var_5) || (((/* implicit */_Bool) max((arr_48 [i_13]), (((/* implicit */unsigned int) arr_47 [i_13])))))));
    }
    var_27 = (!(((max((((/* implicit */int) (signed char)-1)), (var_11))) != (((var_8) + (((/* implicit */int) var_7)))))));
}
