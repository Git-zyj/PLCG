/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104903
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
    for (long long int i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_1] [9LL] [i_1] = ((/* implicit */unsigned long long int) (((+(arr_8 [i_0 - 2] [i_0 - 2] [(_Bool)1] [i_0]))) | (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 - 2] [i_0] [15LL]))) == (arr_1 [i_0]))))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                arr_16 [i_3] = ((/* implicit */unsigned short) max((((((5519535828794010915LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)62282))))) ? (((((/* implicit */unsigned long long int) 14U)) + (var_14))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_19), (arr_2 [(signed char)13]))))))), (((/* implicit */unsigned long long int) var_13))));
                                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)29044))))), (((((/* implicit */_Bool) 4294967282U)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-49))))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 14; i_5 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 0; i_6 < 16; i_6 += 3) 
                        {
                            arr_22 [i_0] [(unsigned char)1] [i_0] [i_0] [i_5] [i_0] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) 4126031001U)))))) ? (max((((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [(_Bool)1] [i_0] [i_6]))) - (4294967280U))), (max((4294967281U), (30U))))) : (((((/* implicit */unsigned int) (+(((/* implicit */int) arr_9 [i_0] [9ULL] [i_0] [i_6]))))) + (((((/* implicit */_Bool) arr_7 [i_2] [(unsigned char)3] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_5] [12LL] [i_5 + 1] [i_5] [i_6]))) : (4294967281U)))))));
                            arr_23 [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_6 [i_5 + 2] [i_0 + 2]), (arr_6 [i_5 + 1] [i_0 + 3])))) ? (((arr_6 [i_5 + 2] [i_0 - 3]) - (arr_6 [i_5 + 2] [i_0 + 3]))) : (arr_6 [i_5 - 1] [i_0 + 3])));
                            var_21 = ((/* implicit */int) 8722212870530894474ULL);
                            var_22 = ((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)64512)), (((((/* implicit */int) arr_15 [i_0] [(unsigned char)5] [i_5] [(short)3] [i_6] [i_5] [13])) + (((/* implicit */int) arr_15 [i_0] [i_0] [i_5] [i_2] [2ULL] [(_Bool)1] [2ULL]))))));
                        }
                        arr_24 [i_0 + 1] [i_5] [i_5] [i_5] = ((((arr_4 [i_0 + 3] [i_2]) >= (((/* implicit */long long int) arr_8 [(unsigned char)0] [i_1] [i_2] [i_5])))) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_8))) : ((-(arr_4 [i_2] [i_5 - 1]))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 16; i_7 += 3) 
                    {
                        var_23 = ((/* implicit */unsigned char) ((_Bool) ((signed char) 70368609959936LL)));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 16; i_8 += 3) 
                        {
                            arr_32 [3] [(unsigned short)4] [i_7] [i_1] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0ULL)) ? (4294967280U) : (14U)));
                            arr_33 [i_0] [i_0] [i_0] [i_7] [5ULL] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) var_7)) : (437556183)))));
                            var_24 = ((/* implicit */long long int) (((+(arr_19 [i_0] [i_0] [i_0 - 2] [i_0] [8LL] [(_Bool)1]))) == (((/* implicit */unsigned long long int) 4294967280U))));
                            arr_34 [i_0] [i_7] [(_Bool)1] = ((/* implicit */short) arr_19 [i_0 + 2] [i_0] [i_2] [i_2] [i_2] [i_1]);
                            var_25 &= ((/* implicit */unsigned int) arr_15 [i_0] [(unsigned short)12] [i_2] [(unsigned short)12] [i_2] [i_0] [i_8]);
                        }
                    }
                    arr_35 [i_0] [i_0] [(_Bool)1] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)14336)) ? (((/* implicit */long long int) -8040408)) : (-6542466405588979462LL)));
                    var_26 = ((/* implicit */signed char) 17165843296135653787ULL);
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_5) : (((/* implicit */int) (signed char)111))))) ? (((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_6))) < (var_4))) ? ((+(((/* implicit */int) (unsigned short)51200)))) : (((/* implicit */int) var_19))))) : (var_4)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_9 = 2; i_9 < 9; i_9 += 3) 
    {
        var_28 &= ((/* implicit */unsigned char) var_4);
        /* LoopSeq 2 */
        for (unsigned short i_10 = 0; i_10 < 10; i_10 += 2) 
        {
            /* LoopSeq 1 */
            for (long long int i_11 = 0; i_11 < 10; i_11 += 1) 
            {
                arr_43 [(unsigned short)1] [i_10] [(unsigned char)7] [(unsigned char)2] = ((/* implicit */unsigned short) (~(((var_0) ? (arr_12 [i_10] [10LL] [(signed char)12] [i_11]) : (((/* implicit */int) arr_13 [(_Bool)1] [i_10] [i_10] [i_10]))))));
                /* LoopNest 2 */
                for (signed char i_12 = 3; i_12 < 6; i_12 += 4) 
                {
                    for (signed char i_13 = 0; i_13 < 10; i_13 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_27 [i_11] [i_11] [(signed char)0] [i_11] [i_11])) * (((/* implicit */int) arr_27 [i_9] [i_10] [i_10] [i_12 + 2] [i_13]))));
                            arr_49 [i_13] = ((/* implicit */unsigned short) ((unsigned long long int) 5092763192661303639LL));
                        }
                    } 
                } 
                arr_50 [0] [(signed char)9] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_9 - 2] [i_9 - 2] [i_9 - 1])) ? (((/* implicit */int) arr_3 [i_9 - 1] [i_9 - 1] [i_9 + 1])) : (((/* implicit */int) arr_3 [i_9 - 2] [i_9 - 1] [i_9 - 1]))));
                arr_51 [i_9] [i_9] [i_9] [(unsigned char)6] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)5735))))) >= (((((/* implicit */unsigned long long int) var_5)) ^ (var_14)))));
            }
            arr_52 [1U] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_26 [i_10] [5] [7ULL] [i_10] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) arr_36 [(_Bool)1] [(unsigned short)8]))) : (arr_48 [i_10] [i_10] [i_10] [i_9] [(unsigned short)6])))));
        }
        for (int i_14 = 0; i_14 < 10; i_14 += 4) 
        {
            arr_55 [i_9] = (~(((/* implicit */int) arr_5 [i_9 - 1] [i_9 - 1])));
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 10; i_15 += 3) 
            {
                for (int i_16 = 1; i_16 < 9; i_16 += 3) 
                {
                    {
                        var_30 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_14] [i_15])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_9] [i_14] [i_16]))) : (1522881864U)))) ? (arr_1 [i_9 - 1]) : (arr_1 [i_14]));
                        arr_60 [i_15] [i_15] [7LL] [7LL] = ((/* implicit */int) ((-8664413923188174980LL) | (((/* implicit */long long int) ((/* implicit */int) ((arr_8 [i_9] [i_14] [i_15] [i_16]) >= (((/* implicit */int) arr_2 [(signed char)9]))))))));
                    }
                } 
            } 
            arr_61 [8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 809008709)) ? (arr_45 [i_9 + 1] [i_9 + 1]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_13))))));
        }
        arr_62 [i_9 + 1] = ((/* implicit */unsigned short) (short)-3902);
        var_31 = ((/* implicit */_Bool) ((long long int) ((long long int) 11LL)));
    }
    for (unsigned int i_17 = 0; i_17 < 23; i_17 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_18 = 2; i_18 < 20; i_18 += 4) /* same iter space */
        {
            arr_69 [i_18] = ((/* implicit */int) arr_65 [i_17] [i_17]);
            arr_70 [i_18] [i_18] [i_18] = ((_Bool) ((((/* implicit */unsigned long long int) -5092763192661303655LL)) < (var_14)));
            /* LoopNest 3 */
            for (unsigned long long int i_19 = 0; i_19 < 23; i_19 += 3) 
            {
                for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
                {
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) (-(((((/* implicit */long long int) ((/* implicit */int) arr_68 [i_17]))) | (-5LL))))))));
                            var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_74 [i_18 + 2] [i_19] [i_19] [i_18 + 2] [i_20 + 1] [i_20 + 1])) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) (signed char)105)))));
                        }
                    } 
                } 
            } 
        }
        for (int i_22 = 2; i_22 < 20; i_22 += 4) /* same iter space */
        {
            var_34 ^= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_74 [i_22] [i_22] [i_22] [i_22 - 1] [7LL] [i_22])) ? (arr_74 [15] [i_17] [i_17] [i_22 - 2] [i_17] [i_22 - 2]) : (arr_74 [i_22] [i_22] [(unsigned short)13] [i_22 + 2] [i_22] [10]))) - ((-(7872185379983377552LL)))));
            arr_80 [i_17] [i_22] [14U] = ((/* implicit */int) var_3);
            var_35 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) -454666464)) || (((/* implicit */_Bool) arr_66 [(unsigned char)18] [(unsigned char)18])))))))), (((((/* implicit */unsigned int) ((int) var_8))) + ((((_Bool)1) ? (var_13) : (8176U)))))));
        }
        arr_81 [i_17] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */long long int) ((/* implicit */int) (signed char)71))) * (0LL))), (((/* implicit */long long int) max((((/* implicit */short) (signed char)-71)), (arr_63 [(unsigned short)2] [i_17]))))))) ? (var_4) : (((/* implicit */unsigned int) (-(((((/* implicit */int) arr_75 [i_17] [i_17])) & (var_10))))))));
        arr_82 [i_17] &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_79 [i_17])))))) % (((((/* implicit */_Bool) (~(((/* implicit */int) arr_66 [i_17] [i_17]))))) ? (max((((/* implicit */unsigned long long int) (unsigned char)0)), (arr_65 [i_17] [i_17]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_73 [i_17] [i_17] [i_17])))))));
    }
    var_36 = max((((/* implicit */unsigned int) var_16)), (var_4));
}
