/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162574
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
    var_18 |= ((/* implicit */short) var_10);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [(short)0] = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (1184185119414979760ULL) : (((/* implicit */unsigned long long int) max((arr_1 [i_0] [i_0]), (((/* implicit */long long int) arr_3 [i_0]))))))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            arr_8 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-1))))) ? (((/* implicit */int) (signed char)22)) : (((/* implicit */int) (signed char)-124))));
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                for (int i_3 = 2; i_3 < 21; i_3 += 3) 
                {
                    {
                        var_19 = ((/* implicit */short) (~(arr_10 [i_2])));
                        arr_15 [i_2] [i_1] |= ((/* implicit */int) (signed char)-1);
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 2; i_4 < 23; i_4 += 2) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) -1356180902692200355LL))));
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((unsigned int) arr_16 [i_0] [i_0] [i_0] [i_4])))));
                        }
                        /* vectorizable */
                        for (unsigned short i_5 = 2; i_5 < 23; i_5 += 2) /* same iter space */
                        {
                            arr_21 [i_0] [i_0] [i_2] [i_3] [i_5] = ((((/* implicit */_Bool) arr_20 [i_3 - 1] [i_1] [i_2] [i_0] [8U] [i_5 + 1])) ? (arr_6 [i_3 + 2] [i_0] [i_5 - 2]) : (((/* implicit */long long int) ((/* implicit */int) var_16))));
                            var_22 &= ((/* implicit */short) (unsigned char)111);
                        }
                        /* vectorizable */
                        for (unsigned int i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            var_23 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0] [(unsigned short)14] [i_0] [i_2] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (arr_1 [i_6] [i_1])))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) arr_3 [i_3])) : (arr_19 [i_6] [i_2] [i_6]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)38810)))));
                            arr_24 [i_0] [i_0] [i_2] [(short)8] [i_0] = ((/* implicit */unsigned char) (~(arr_16 [i_3 + 3] [i_3 + 2] [i_3 + 1] [i_0])));
                            arr_25 [(signed char)20] [i_1] [i_2] [i_0] [18LL] = ((((arr_14 [i_6] [i_6] [i_0]) > (var_7))) ? (((/* implicit */unsigned long long int) arr_3 [i_2])) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (72057594037926912ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
                            arr_26 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_1] [i_2] [(short)5] [i_0])) ? (arr_16 [i_3] [i_3] [i_3 - 1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                        }
                    }
                } 
            } 
        }
        /* LoopSeq 1 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_30 [i_0] [i_7] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0] [i_7] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_7] [i_7] [i_7]))) : (arr_19 [i_0] [i_7] [i_0])))) ? (((((/* implicit */_Bool) (signed char)22)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))))) : (((/* implicit */long long int) max((arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) (_Bool)0)))))));
            arr_31 [i_0] [i_0] [i_7] = ((/* implicit */unsigned short) ((arr_11 [i_7] [i_7] [i_0]) != (arr_29 [i_0] [i_7])));
            arr_32 [i_0] [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)3))))) ? (((((/* implicit */_Bool) (~(arr_3 [i_7])))) ? (((((/* implicit */_Bool) arr_22 [i_7] [(_Bool)1] [i_7] [i_7] [i_7])) ? (3527074786U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-2322))))) : (((/* implicit */unsigned int) (+(arr_29 [i_0] [i_0])))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)11)))));
        }
    }
    for (unsigned char i_8 = 0; i_8 < 24; i_8 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_9 = 0; i_9 < 24; i_9 += 2) 
        {
            arr_37 [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) min((((unsigned long long int) arr_19 [i_9] [2ULL] [i_9])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_8] [i_9] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_8] [i_9]))) : (arr_7 [i_8] [i_9] [i_9]))))));
            /* LoopNest 2 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        arr_43 [i_8] [(_Bool)1] [i_8] [i_8] [i_8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)63))));
                        arr_44 [i_8] [i_11] [i_10] [i_11] [i_9] = ((/* implicit */long long int) max((((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (signed char)9)) : (((/* implicit */int) (unsigned char)184)))), (((/* implicit */int) arr_0 [i_9]))));
                        arr_45 [i_8] &= ((/* implicit */_Bool) max((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) -9046883714304203225LL)) ? (2147483625) : (((/* implicit */int) (signed char)9)))))), (max((((/* implicit */int) arr_40 [19LL] [i_9] [i_10] [i_11])), ((+(arr_29 [i_9] [i_9])))))));
                        arr_46 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */short) max((min(((-(((/* implicit */int) arr_0 [i_9])))), ((+(arr_14 [i_8] [i_8] [i_9]))))), (((/* implicit */int) (unsigned short)57116))));
                    }
                } 
            } 
        }
        for (long long int i_12 = 1; i_12 < 23; i_12 += 3) 
        {
            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) arr_9 [16] [i_8] [i_12]))));
            arr_50 [i_12 + 1] [i_12 + 1] [i_8] = ((/* implicit */int) arr_48 [i_8] [i_8] [i_8]);
        }
        arr_51 [i_8] = ((/* implicit */long long int) max((((/* implicit */int) (signed char)-4)), ((~(((/* implicit */int) var_16))))));
        arr_52 [i_8] &= ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-8))) % (1267336176495102351LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (!((!(var_0))))))) : (((((/* implicit */_Bool) arr_23 [i_8] [i_8] [i_8] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_8] [i_8] [i_8] [i_8]))) : (-7322865366433519640LL))));
        arr_53 [10ULL] [i_8] = ((/* implicit */signed char) arr_6 [i_8] [(short)16] [i_8]);
    }
    /* vectorizable */
    for (unsigned char i_13 = 0; i_13 < 24; i_13 += 1) /* same iter space */
    {
        arr_58 [i_13] = ((/* implicit */short) arr_11 [i_13] [17] [i_13]);
        arr_59 [i_13] = ((/* implicit */_Bool) ((((unsigned long long int) arr_57 [i_13] [(short)20])) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_35 [i_13])) ? (arr_3 [(_Bool)1]) : (((/* implicit */unsigned int) arr_29 [(unsigned char)20] [i_13])))))));
    }
    var_25 = ((/* implicit */unsigned long long int) var_17);
}
