/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187555
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) (signed char)31)) ? (-1624180019) : (-1667054287))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-20165))))) : (((((/* implicit */_Bool) var_13)) ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0]))))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_18 += ((/* implicit */long long int) (~((~(((unsigned long long int) (short)-20165))))));
                                arr_12 [i_4] [12ULL] [i_2 + 1] [i_3] [(_Bool)1] &= ((/* implicit */short) arr_8 [i_4] [i_3] [i_2 + 1] [i_1] [i_0] [i_0]);
                                arr_13 [i_1] [i_1] [i_1] [i_3] [i_4] = ((long long int) (unsigned char)149);
                            }
                        } 
                    } 
                    arr_14 [(unsigned char)5] &= (~(((var_7) | (arr_0 [i_0] [1LL]))));
                }
            } 
        } 
    }
    for (long long int i_5 = 0; i_5 < 23; i_5 += 2) 
    {
        var_19 = ((/* implicit */unsigned char) (~(max(((+(((/* implicit */int) var_9)))), (((/* implicit */int) (short)-20146))))));
        var_20 += ((/* implicit */unsigned long long int) min(((short)20178), ((short)-20147)));
        var_21 &= ((/* implicit */signed char) (-(((((/* implicit */_Bool) 766694386)) ? (((unsigned long long int) (short)20158)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_10) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))))));
    }
    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (-(max((((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (586539531) : (((/* implicit */int) var_15))))), (min((35184372088831LL), (((/* implicit */long long int) var_2)))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_6 = 0; i_6 < 10; i_6 += 1) 
    {
        arr_22 [i_6] = ((/* implicit */signed char) (~(((((/* implicit */int) (short)-20176)) ^ (((/* implicit */int) (signed char)-59))))));
        /* LoopSeq 4 */
        for (long long int i_7 = 2; i_7 < 7; i_7 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
            {
                for (unsigned long long int i_9 = 1; i_9 < 7; i_9 += 2) 
                {
                    {
                        arr_32 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [i_9 + 2] [i_7 - 1] [i_7 + 2])) >> (((((int) var_9)) + (31011)))));
                        arr_33 [i_6] [2] [i_7] [2] [i_9] = ((/* implicit */int) (+((+(arr_9 [i_6] [(unsigned short)13] [2ULL] [2ULL] [i_7])))));
                        arr_34 [i_7 + 3] [i_6] [i_7] [(unsigned short)3] [6] [(short)5] = ((/* implicit */signed char) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned long long int) 4332346805018804845LL)) : (1971844536488383002ULL)));
                    }
                } 
            } 
            arr_35 [i_6] = ((/* implicit */unsigned long long int) (-(456330796)));
            var_23 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_7 - 2] [i_7 - 2] [11ULL] [i_7] [i_7])) ? (arr_9 [i_7 + 1] [9] [i_7 + 1] [(unsigned short)1] [13]) : (arr_9 [i_7 - 1] [i_6] [i_6] [i_6] [i_7])));
        }
        for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 2) 
        {
            var_24 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)55761)) ? (-2045147724) : (((/* implicit */int) arr_18 [i_10] [i_10]))))) ? (arr_26 [i_6] [i_10] [i_10]) : ((-(4718031705832981231ULL)))));
            arr_38 [i_6] [i_6] = ((/* implicit */_Bool) ((unsigned short) var_7));
        }
        for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 4) /* same iter space */
        {
            var_25 = ((/* implicit */long long int) (+(((int) arr_0 [i_11] [i_6]))));
            arr_41 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((_Bool) (!(((/* implicit */_Bool) arr_1 [i_6])))));
            var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) 8777878626449289413LL))));
        }
        for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 4) /* same iter space */
        {
            arr_45 [i_6] = ((/* implicit */long long int) var_11);
            arr_46 [i_6] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) 9223372036854775799LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_9 [5ULL] [i_6] [(_Bool)1] [i_12] [i_12])))));
            /* LoopNest 2 */
            for (long long int i_13 = 0; i_13 < 10; i_13 += 3) 
            {
                for (short i_14 = 1; i_14 < 6; i_14 += 1) 
                {
                    {
                        arr_53 [i_6] [i_6] [i_6] [i_6] = ((arr_30 [(short)3] [i_14 + 4] [i_13] [i_14]) || (((/* implicit */_Bool) (-(var_7)))));
                        arr_54 [(unsigned char)6] [i_12] [i_12] [i_6] |= ((/* implicit */int) (short)20148);
                        arr_55 [i_6] [i_13] [i_12] [(_Bool)1] [i_6] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 197803798322963215ULL)) ? (((/* implicit */int) arr_47 [i_6] [3] [i_13])) : (((/* implicit */int) arr_5 [i_6]))))));
                    }
                } 
            } 
            arr_56 [i_6] [i_12] [i_6] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))));
            arr_57 [i_6] = ((/* implicit */unsigned int) 18248940275386588383ULL);
        }
    }
    for (unsigned char i_15 = 0; i_15 < 22; i_15 += 4) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_16 = 2; i_16 < 20; i_16 += 2) 
        {
            arr_64 [(unsigned char)10] [(unsigned char)10] [(unsigned char)10] |= ((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) (unsigned char)15)), (min((((/* implicit */long long int) -490262934)), (3484934219469235993LL))))) != (-1LL)));
            arr_65 [i_15] [(unsigned short)9] [3LL] = ((/* implicit */int) var_11);
            var_27 ^= ((/* implicit */int) (-(((min((((/* implicit */unsigned long long int) var_0)), (var_4))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))));
        }
        /* vectorizable */
        for (long long int i_17 = 2; i_17 < 21; i_17 += 4) /* same iter space */
        {
            arr_68 [i_15] [i_17] = (-(((/* implicit */int) arr_58 [i_17 - 2] [i_17 + 1])));
            var_28 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 18248940275386588392ULL)) ? (490262936) : (((/* implicit */int) (unsigned short)15507))));
        }
        for (long long int i_18 = 2; i_18 < 21; i_18 += 4) /* same iter space */
        {
            var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) min((((/* implicit */unsigned int) var_7)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 8920367774132802049LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_60 [i_15] [i_15]))) : (18248940275386588381ULL)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_69 [i_15] [i_15]))))) : (((((/* implicit */_Bool) 7412360137343625528ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)43))) : (3819677070U))))))))));
            var_30 = ((/* implicit */unsigned long long int) var_0);
            arr_71 [i_18] |= ((/* implicit */int) min((((/* implicit */long long int) (-2147483647 - 1))), (min(((-(262143LL))), (((/* implicit */long long int) (-(((/* implicit */int) arr_60 [i_18] [i_18 - 1])))))))));
        }
        /* vectorizable */
        for (long long int i_19 = 2; i_19 < 21; i_19 += 4) /* same iter space */
        {
            arr_74 [i_15] [i_15] [i_19] = ((/* implicit */long long int) (+(((/* implicit */int) (short)-20145))));
            var_31 += ((/* implicit */_Bool) (+((~(-473597580)))));
        }
        /* LoopSeq 1 */
        for (int i_20 = 0; i_20 < 22; i_20 += 4) 
        {
            var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_63 [(unsigned char)5])) ? (((/* implicit */int) max((var_6), (((/* implicit */unsigned short) (signed char)63))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6)))))))))));
            arr_77 [i_15] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)151))));
            var_33 = ((((/* implicit */_Bool) (-(455718889)))) ? (12555325400690933200ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)211))));
        }
        arr_78 [i_15] [i_15] = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (2983321104267112144LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)76)))))) >= (1093697422811000205ULL))))) : (((4398046511103LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)8)))))));
    }
    var_34 &= ((/* implicit */int) min((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_10)))));
}
