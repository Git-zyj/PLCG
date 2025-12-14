/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106746
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    {
                        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) max((max((((/* implicit */unsigned int) (unsigned char)255)), (arr_7 [i_0] [i_1] [i_0] [i_3]))), (((/* implicit */unsigned int) max((arr_2 [i_0]), (arr_2 [i_0])))))))));
                        var_15 = ((/* implicit */unsigned short) min((((((((/* implicit */unsigned long long int) var_2)) - (15025212186664511948ULL))) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)17300))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) (short)-9694))) >> (((((/* implicit */int) arr_0 [i_2] [i_3])) - (47679))))))));
                        arr_10 [i_3] [i_2] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(var_11)))) ? (((arr_2 [i_3]) + (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) arr_1 [i_2]))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_4 = 0; i_4 < 16; i_4 += 3) 
        {
            var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (!(((/* implicit */_Bool) 720778942)))))));
            /* LoopSeq 1 */
            for (unsigned int i_5 = 2; i_5 < 12; i_5 += 3) 
            {
                arr_17 [(unsigned short)14] [i_4] [6U] [i_0] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) 4628219557041665234ULL)) ? (((/* implicit */int) (unsigned char)215)) : (((/* implicit */int) (unsigned short)9976)))));
                var_17 = ((/* implicit */short) (!((!(((/* implicit */_Bool) var_4))))));
                var_18 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_3 [i_0] [i_5 - 1] [i_0])) : (((/* implicit */int) var_9))));
                /* LoopNest 2 */
                for (unsigned char i_6 = 2; i_6 < 15; i_6 += 2) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 1) 
                    {
                        {
                            arr_24 [i_0] [(unsigned short)10] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [i_4] [i_0] [i_0] [i_7]))) <= (arr_18 [i_0] [i_4] [i_0] [i_6] [i_7] [i_0])));
                            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 13292788943713886349ULL)))))));
                            arr_25 [7] [i_4] = ((/* implicit */unsigned short) (+(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)232))) & (0U)))));
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (unsigned short i_8 = 0; i_8 < 16; i_8 += 3) 
            {
                for (unsigned int i_9 = 0; i_9 < 16; i_9 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned char) ((unsigned int) 1320098327U));
                            arr_33 [i_0] [7] [i_0] [i_8] [i_0] = ((/* implicit */unsigned int) arr_16 [i_10] [i_9] [i_4] [i_0]);
                            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((4451125310246409157ULL) >> (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_5)) : (var_10))) - (18446744072298352511ULL))))))));
                            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((-6852947154177945071LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3962))))))));
                            arr_34 [i_0] [i_4] [i_8] [11ULL] [i_10] = ((((/* implicit */_Bool) (unsigned short)41197)) ? (((/* implicit */int) (unsigned char)23)) : (((/* implicit */int) (signed char)-58)));
                        }
                        for (unsigned short i_11 = 0; i_11 < 16; i_11 += 2) 
                        {
                            var_23 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_4] [(signed char)3] [i_4] [i_4] [i_4]))) * (arr_7 [i_8] [i_8] [i_9] [(unsigned short)3])));
                            var_24 &= ((/* implicit */unsigned short) 1039815531U);
                            var_25 = ((/* implicit */unsigned long long int) var_2);
                            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */long long int) var_0)) | (((long long int) arr_18 [5ULL] [i_4] [i_4] [i_4] [i_4] [i_4])))))));
                        }
                        var_27 = arr_1 [i_8];
                        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_4] [i_8])) ? (((/* implicit */int) arr_0 [i_4] [i_9])) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (long long int i_12 = 1; i_12 < 15; i_12 += 2) 
        {
            var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) arr_29 [i_12 + 1] [i_12 + 1]))));
            var_30 += ((/* implicit */unsigned long long int) (+(var_5)));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_13 = 0; i_13 < 16; i_13 += 1) 
        {
            var_31 ^= ((/* implicit */unsigned long long int) arr_36 [i_13] [i_13] [(short)4] [i_0] [i_13]);
            var_32 = ((arr_7 [i_13] [i_0] [i_13] [i_13]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29331))));
        }
    }
    /* vectorizable */
    for (unsigned int i_14 = 0; i_14 < 16; i_14 += 2) /* same iter space */
    {
        var_33 = ((/* implicit */unsigned short) ((short) ((((/* implicit */int) (unsigned char)208)) << (((arr_6 [15U] [i_14]) - (8242036867164562003LL))))));
        var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) (+(((/* implicit */int) arr_19 [i_14] [i_14])))))));
    }
    var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)139))) & (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) -1172541501)) : (var_6))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((unsigned char)215), ((unsigned char)0)))) ? (min((((/* implicit */int) (unsigned short)62890)), (var_0))) : (var_5)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_15 = 0; i_15 < 15; i_15 += 3) 
    {
        for (unsigned int i_16 = 4; i_16 < 14; i_16 += 4) 
        {
            for (unsigned char i_17 = 0; i_17 < 15; i_17 += 3) 
            {
                {
                    var_36 = ((/* implicit */unsigned long long int) 6513283388634750918LL);
                    var_37 = ((/* implicit */unsigned long long int) arr_27 [i_17] [i_16] [i_15]);
                }
            } 
        } 
    } 
}
