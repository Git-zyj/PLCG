/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122485
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
    var_14 = ((((/* implicit */_Bool) (+((+(134213632U)))))) ? (var_2) : (((/* implicit */int) (!(var_12)))));
    var_15 = ((/* implicit */_Bool) (~(((/* implicit */int) var_7))));
    var_16 = max((((((/* implicit */long long int) ((int) var_2))) % (var_8))), (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] = (((-(var_6))) >= (((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_1 [i_0])) << (((((/* implicit */int) arr_0 [i_0] [i_0])) + (109))))), (((/* implicit */int) (signed char)-110))))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 3) /* same iter space */
        {
            var_17 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) arr_3 [i_0]))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (134213611U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1] [i_0])))))))))));
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    for (unsigned short i_4 = 2; i_4 < 12; i_4 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) var_11);
                            arr_14 [i_3] [6] [i_2] [i_1] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_5 [i_1 - 1]) / (arr_5 [i_1 - 1])))) ? (arr_5 [i_1 + 1]) : (arr_5 [i_1 + 2])));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned short i_5 = 1; i_5 < 11; i_5 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 13; i_6 += 3) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 4) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
                            arr_24 [i_6] |= ((/* implicit */unsigned char) ((var_3) << (((((arr_15 [i_5 - 1] [i_6] [i_6]) + (6383397842562515308LL))) - (26LL)))));
                        }
                    } 
                } 
            } 
            arr_25 [i_0] [i_5] |= ((/* implicit */unsigned short) (-(((/* implicit */int) var_12))));
            var_20 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_5] [i_5])) : (((/* implicit */int) arr_7 [i_5] [2ULL] [i_0]))))) : (var_8)));
        }
        for (unsigned char i_9 = 3; i_9 < 11; i_9 += 1) 
        {
            var_21 = ((/* implicit */unsigned int) max(((!((!(((/* implicit */_Bool) 134213628U)))))), ((!(var_7)))));
            arr_29 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned char) max((min((((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) arr_7 [3] [i_9] [i_0])) : (arr_3 [i_9]))), (((((/* implicit */int) var_12)) & (((/* implicit */int) var_1)))))), ((+((-(((/* implicit */int) var_4))))))));
        }
        arr_30 [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_8 [10LL] [10LL] [i_0] [i_0])) : (((/* implicit */int) arr_8 [(unsigned short)0] [i_0] [i_0] [i_0])))), (((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) arr_8 [10ULL] [i_0] [i_0] [i_0])))))));
    }
    for (signed char i_10 = 1; i_10 < 17; i_10 += 3) 
    {
        var_22 = ((((/* implicit */_Bool) ((long long int) max((((/* implicit */unsigned int) (unsigned char)26)), (arr_32 [i_10 + 1]))))) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) (unsigned short)9)) ? (var_2) : ((+(((/* implicit */int) (unsigned short)59627)))))));
        arr_33 [i_10] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) var_4)) - (var_2)))), (arr_32 [i_10 + 1])))) ? (((arr_32 [i_10 + 1]) >> (((5884153360608788264LL) - (5884153360608788250LL))))) : (arr_32 [i_10 - 1])));
        arr_34 [i_10] = ((/* implicit */unsigned char) var_3);
    }
    /* vectorizable */
    for (signed char i_11 = 3; i_11 < 20; i_11 += 3) 
    {
        arr_38 [i_11] |= ((/* implicit */signed char) ((arr_35 [i_11 - 1]) <= (arr_35 [i_11 - 2])));
        /* LoopSeq 2 */
        for (unsigned int i_12 = 0; i_12 < 21; i_12 += 2) 
        {
            var_23 = ((/* implicit */int) ((((long long int) var_5)) != (((/* implicit */long long int) (+(var_13))))));
            arr_41 [i_11] [i_12] = ((/* implicit */unsigned short) ((long long int) var_6));
            arr_42 [i_11 - 3] |= ((/* implicit */signed char) var_12);
            arr_43 [i_12] [i_11] = ((/* implicit */long long int) var_3);
        }
        for (int i_13 = 2; i_13 < 20; i_13 += 3) 
        {
            var_24 = ((/* implicit */long long int) ((arr_39 [i_11 - 3]) >= (((/* implicit */long long int) var_2))));
            /* LoopSeq 3 */
            for (short i_14 = 4; i_14 < 19; i_14 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_15 = 0; i_15 < 21; i_15 += 2) 
                {
                    for (signed char i_16 = 0; i_16 < 21; i_16 += 1) 
                    {
                        {
                            arr_56 [i_13] [i_13] [i_14] [(signed char)5] [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_12))));
                            arr_57 [i_13] [i_15] [i_13] = ((/* implicit */long long int) var_6);
                            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_53 [i_16] [i_15] [i_14] [i_14 - 2] [i_13] [i_11] [i_11])) || (((/* implicit */_Bool) arr_53 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16] [i_16]))));
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_40 [i_11 + 1] [i_11 + 1] [i_13 - 1])) ? (arr_39 [i_11 - 2]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_52 [i_15] [i_14] [i_13] [i_11])) || (((/* implicit */_Bool) var_4))))))));
                            var_27 = ((/* implicit */short) ((arr_50 [3ULL] [i_14 + 2] [i_11 - 3] [i_11]) - (((/* implicit */long long int) 134213632U))));
                        }
                    } 
                } 
                arr_58 [(unsigned char)6] [i_13 - 2] [i_13] = ((/* implicit */short) ((unsigned long long int) ((unsigned int) var_9)));
            }
            for (short i_17 = 4; i_17 < 19; i_17 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_18 = 0; i_18 < 21; i_18 += 4) 
                {
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        {
                            arr_66 [i_13] [(signed char)15] [i_17] [i_13] [i_13] = ((/* implicit */unsigned long long int) ((long long int) arr_48 [i_17 - 4] [i_13 - 2] [(_Bool)1] [(_Bool)1]));
                            var_28 = ((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (arr_62 [i_13] [i_13] [3LL] [i_13] [i_13] [i_13]) : (((/* implicit */unsigned int) arr_51 [i_11 - 2] [i_13] [i_17] [i_18] [i_19])))) < (134213627U)));
                            var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_46 [i_13 - 2] [i_17 - 3] [i_18])) || (((/* implicit */_Bool) arr_46 [i_13 + 1] [i_17 - 4] [i_18])))))));
                            arr_67 [i_11] [i_13 - 1] [i_17] [i_18] [i_19] [i_13] [i_19] = ((/* implicit */signed char) var_10);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_20 = 3; i_20 < 18; i_20 += 1) 
                {
                    for (unsigned short i_21 = 2; i_21 < 19; i_21 += 3) 
                    {
                        {
                            arr_72 [i_13] = ((/* implicit */unsigned char) var_4);
                            arr_73 [i_11] [i_11] [i_13] [i_11] [i_17 - 2] [i_13] [i_21 + 2] = ((/* implicit */unsigned char) ((unsigned long long int) arr_71 [i_17] [i_13] [i_13] [i_17 - 1]));
                            var_30 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_62 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_8));
                            var_31 = ((/* implicit */int) min((var_31), (var_3)));
                        }
                    } 
                } 
                arr_74 [14LL] [i_13] [14LL] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_49 [0LL] [(_Bool)0] [(_Bool)0] [i_13 - 2])) ? (((/* implicit */int) arr_55 [i_17 - 3] [(unsigned short)2] [i_17 + 1] [(unsigned short)2] [i_13 - 1])) : (((/* implicit */int) arr_55 [i_17] [(unsigned char)2] [i_17] [(unsigned char)2] [i_13 - 2]))));
            }
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                var_32 = ((/* implicit */unsigned short) (-(arr_68 [i_13])));
                arr_78 [i_13] [i_13] = ((/* implicit */long long int) ((arr_65 [i_11 - 2] [i_13] [i_13] [i_22]) * (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 2456911956U))))));
                var_33 = ((/* implicit */unsigned int) ((unsigned char) var_11));
            }
            var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_75 [i_13] [i_13])) ? (arr_65 [i_13 - 2] [i_13] [i_13] [i_11 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
            var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_55 [i_11 - 3] [i_11 - 1] [i_11] [i_13] [i_11])) ? (((/* implicit */int) arr_55 [i_11 - 3] [i_11 - 1] [i_11 - 3] [i_13] [i_11 - 3])) : (((/* implicit */int) arr_55 [i_11 - 2] [i_11 - 3] [i_11 - 2] [i_13] [i_13 - 1]))));
        }
    }
}
