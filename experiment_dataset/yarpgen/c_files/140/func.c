/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_18 &= ((/* implicit */unsigned long long int) max((((arr_1 [i_2]) & (arr_1 [i_2]))), (((/* implicit */unsigned int) (-(arr_8 [i_0] [i_1] [i_2]))))));
                    arr_9 [i_1] = ((/* implicit */_Bool) ((long long int) arr_3 [i_2]));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned long long int i_3 = 2; i_3 < 22; i_3 += 2) 
    {
        var_19 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_11 [(short)13])) ? (((/* implicit */int) arr_10 [i_3] [(signed char)4])) : (((/* implicit */int) arr_10 [i_3 - 1] [i_3 - 2])))), (((((((/* implicit */int) arr_11 [i_3 - 2])) <= (((/* implicit */int) (_Bool)0)))) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_10 [i_3] [i_3 + 1])), (arr_11 [i_3 + 2])))) : (((/* implicit */int) ((arr_10 [i_3] [i_3]) || (arr_10 [i_3 - 2] [i_3]))))))));
        arr_13 [i_3] [i_3] = ((/* implicit */int) arr_12 [i_3] [i_3]);
    }
    for (signed char i_4 = 3; i_4 < 12; i_4 += 2) 
    {
        arr_17 [i_4] = ((/* implicit */unsigned short) arr_5 [i_4] [i_4] [i_4]);
        /* LoopSeq 3 */
        for (long long int i_5 = 1; i_5 < 12; i_5 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                arr_23 [i_6] [i_5] [i_4 - 2] = ((((/* implicit */_Bool) (short)-17648)) ? (((/* implicit */int) (_Bool)1)) : (-1366388912));
                arr_24 [i_6] [i_5] [i_4 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) var_1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) arr_18 [i_4] [(short)6] [i_6]))) && (((/* implicit */_Bool) ((unsigned char) arr_11 [i_5]))))))) : (arr_16 [i_5])));
                arr_25 [i_4] [i_5] [i_6] = ((/* implicit */short) arr_5 [i_4] [i_5 + 1] [i_6]);
                arr_26 [i_4] [i_6] = (!(((/* implicit */_Bool) arr_21 [i_4 - 3] [i_5 + 1] [i_5 - 1] [5])));
                var_20 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_19 [i_6])))) * (((((/* implicit */unsigned long long int) arr_8 [(signed char)20] [i_5] [i_6])) / (arr_19 [i_5])))))) ? (((/* implicit */unsigned long long int) arr_15 [i_6])) : (((((/* implicit */_Bool) ((arr_12 [i_4] [i_5]) | (arr_14 [i_6] [5U])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) * (arr_19 [i_4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_5))))))));
            }
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                var_21 = ((/* implicit */int) min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [9] [18LL])) ? (arr_12 [i_7] [i_5 - 1]) : (((/* implicit */long long int) arr_21 [i_4] [i_4] [12ULL] [i_7]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (arr_18 [i_4] [(signed char)12] [(unsigned short)9]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_7])) ? ((-(arr_8 [i_7] [i_5] [i_4]))) : (((/* implicit */int) arr_0 [i_4])))))));
                arr_29 [i_7] = ((/* implicit */_Bool) arr_0 [i_4]);
                arr_30 [i_4] [i_5] [8] [i_7] = ((/* implicit */short) (((!(((/* implicit */_Bool) ((short) var_12))))) ? (((/* implicit */int) (short)27100)) : ((-(((int) (_Bool)1))))));
                arr_31 [(short)2] [(short)2] |= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_5 [23ULL] [i_5 - 1] [i_7])))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_4 - 3])) * ((-(((/* implicit */int) arr_10 [i_7] [i_4])))))))));
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_8 = 3; i_8 < 11; i_8 += 2) 
            {
                arr_34 [i_5] = ((/* implicit */unsigned char) ((max((((/* implicit */int) ((((/* implicit */int) arr_3 [i_8])) <= (arr_20 [i_4] [i_5 - 1] [i_8])))), (((int) arr_27 [i_5])))) + (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_8] [i_5 + 1] [i_4 + 1])) && (((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_3 [i_4])), (arr_0 [i_4 + 1])))))))));
                var_22 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_2 [i_4])), (((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_8])) / (arr_22 [i_4 - 1])))) ? (((((/* implicit */_Bool) arr_16 [i_4])) ? (arr_19 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [4] [i_5] [4]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_5])))))));
                var_23 = ((/* implicit */unsigned long long int) min((var_23), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_4 - 1] [i_5 + 1])) ? (min((((/* implicit */long long int) 2980793975U)), (var_9))) : (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_4 - 3] [i_5 + 1] [i_8 - 2] [i_8])))))) / ((-(((((/* implicit */_Bool) arr_1 [i_8])) ? (((/* implicit */unsigned long long int) arr_15 [i_5 - 1])) : (arr_33 [i_4] [i_5])))))))));
                var_24 = ((/* implicit */int) ((((unsigned int) arr_32 [i_4] [i_4] [i_4] [i_8])) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                arr_35 [i_4] [i_5] [i_8 - 2] [i_8] = ((/* implicit */int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_15)))) * (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_4] [i_5]))) : (arr_33 [i_5 - 1] [i_8]))))), (((/* implicit */unsigned long long int) var_11))));
            }
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_4 - 1])) / (((/* implicit */int) arr_3 [i_4 - 1]))))) | (min((((unsigned int) arr_0 [i_4])), (((/* implicit */unsigned int) (!((_Bool)1))))))));
        }
        for (unsigned short i_9 = 0; i_9 < 13; i_9 += 2) 
        {
            var_26 = ((/* implicit */int) max((var_26), (min(((-((((_Bool)0) ? (1687756591) : (((/* implicit */int) (unsigned char)118)))))), (((/* implicit */int) var_17))))));
            arr_38 [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_12 [i_4 - 1] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_12 [i_4] [i_9]))))))));
            var_27 = ((/* implicit */long long int) ((min((((int) (short)17626)), (((/* implicit */int) ((unsigned char) (_Bool)0))))) < (((((/* implicit */int) ((signed char) arr_3 [i_4 - 2]))) - (((/* implicit */int) ((arr_12 [i_4] [i_9]) <= (arr_12 [i_4] [i_9]))))))));
        }
        for (unsigned int i_10 = 1; i_10 < 12; i_10 += 2) 
        {
            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) min((((/* implicit */long long int) var_12)), (arr_12 [i_4] [i_4]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_4 - 1] [i_4 - 2] [i_10 + 1])))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)2970))) / ((-(-2085455126379242456LL))))))))));
            arr_42 [i_4 - 1] [i_10] = ((/* implicit */unsigned short) -2085455126379242456LL);
        }
        arr_43 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(unsigned short)13] [i_4] [i_4]))) >= (arr_33 [i_4 - 2] [i_4])))))) * (((unsigned long long int) (short)-17648))));
    }
    for (short i_11 = 2; i_11 < 14; i_11 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_12 = 0; i_12 < 16; i_12 += 2) 
        {
            arr_49 [i_11] [i_11] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) (!(arr_10 [i_11] [i_11])))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_4 [i_11] [i_12])) : (((/* implicit */int) arr_4 [i_11] [i_11]))))));
            /* LoopSeq 3 */
            for (unsigned int i_13 = 2; i_13 < 13; i_13 += 4) 
            {
                arr_53 [i_13] [i_11] [i_11] [i_11] = ((/* implicit */short) ((arr_50 [i_11] [i_13]) > (((/* implicit */long long int) ((/* implicit */int) arr_51 [i_11 + 1] [i_13] [i_13 + 2])))));
                /* LoopNest 2 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    for (signed char i_15 = 1; i_15 < 15; i_15 += 4) 
                    {
                        {
                            var_29 -= ((/* implicit */unsigned char) ((arr_50 [i_15] [i_12]) > (((/* implicit */long long int) ((/* implicit */int) arr_60 [i_11] [i_14] [i_15])))));
                            var_30 = ((/* implicit */unsigned int) arr_12 [6U] [i_15]);
                        }
                    } 
                } 
            }
            for (short i_16 = 0; i_16 < 16; i_16 += 2) 
            {
                arr_63 [i_11] [i_11] [i_11] = ((/* implicit */long long int) arr_62 [i_12] [i_11]);
                arr_64 [i_11] [i_11] [i_11] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */int) arr_11 [i_12])) << (((var_1) - (13799923006825489734ULL))))));
            }
            for (unsigned char i_17 = 1; i_17 < 15; i_17 += 4) 
            {
                var_31 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_11] [i_12] [i_17 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_59 [i_12]))) : (var_3)))) ? (((/* implicit */int) var_14)) : (((-1) * (((/* implicit */int) arr_0 [i_12])))));
                var_32 = ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_11 - 1])) >> (((((/* implicit */int) (unsigned short)62565)) - (62548)))));
                var_33 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_60 [i_11] [i_11 - 2] [i_12])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_66 [i_12])) ? (((/* implicit */int) arr_66 [i_12])) : (((/* implicit */int) arr_66 [i_12]))))) : (((arr_10 [i_12] [i_12]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2954))) : (arr_50 [i_11] [(signed char)1])))));
            }
        }
        arr_67 [14] &= ((((/* implicit */_Bool) ((((/* implicit */int) arr_51 [i_11] [i_11 - 1] [i_11])) / (((/* implicit */int) arr_51 [i_11 - 2] [5] [i_11 + 2]))))) ? (((/* implicit */int) arr_51 [i_11 + 2] [i_11] [(unsigned char)11])) : (((((/* implicit */_Bool) arr_51 [i_11 - 2] [i_11] [i_11 + 1])) ? (((/* implicit */int) arr_51 [i_11] [i_11] [i_11 - 1])) : (((/* implicit */int) arr_51 [i_11 + 1] [i_11 + 2] [i_11 + 2])))));
        arr_68 [i_11] = min((((short) arr_2 [i_11 + 2])), (((/* implicit */short) min((arr_2 [i_11 + 2]), (arr_2 [i_11 + 1])))));
        var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_11 + 1] [i_11 + 2] [i_11])) ? (((/* implicit */long long int) arr_8 [i_11] [i_11] [i_11])) : (var_9)));
    }
    var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) var_3))));
}
