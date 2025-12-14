/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107365
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
    for (signed char i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */int) min((((/* implicit */long long int) (-((~(((/* implicit */int) var_12))))))), (((((/* implicit */_Bool) ((long long int) arr_1 [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_0]) <= (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))))) : (arr_1 [i_0])))));
                arr_5 [i_0] = ((signed char) ((arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 2]) > (arr_3 [i_0 - 1] [i_0 + 2] [i_0 + 1])));
                arr_6 [i_0] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 4) 
                {
                    for (int i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        {
                            arr_12 [i_0] [i_1] [i_0] = ((/* implicit */short) -3499791863143430262LL);
                            arr_13 [(unsigned char)3] [i_0] [i_1] [(unsigned char)3] [i_3] [i_2] = ((/* implicit */short) arr_1 [i_0]);
                            arr_14 [i_0] [i_0] = ((/* implicit */signed char) var_2);
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (3499791863143430276LL) : (((/* implicit */long long int) var_8))));
    var_15 = ((/* implicit */unsigned short) ((((var_7) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((/* implicit */long long int) var_4)) <= (-3499791863143430277LL)))))) / (var_5)));
    /* LoopSeq 3 */
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 20; i_5 += 1) 
        {
            for (unsigned char i_6 = 1; i_6 < 18; i_6 += 2) 
            {
                {
                    arr_22 [i_4] [i_6] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_19 [i_4] [i_5] [i_4 - 1] [i_5]))))), (var_8)));
                    arr_23 [13ULL] [i_6] = (+((-(((((/* implicit */_Bool) arr_21 [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_18 [i_6 + 2])) : (((/* implicit */int) arr_19 [i_4] [i_4] [i_4] [i_4])))))));
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 20; i_7 += 2) 
                    {
                        for (long long int i_8 = 0; i_8 < 20; i_8 += 1) 
                        {
                            {
                                arr_29 [i_4 - 1] [i_4 - 1] [i_6] [10ULL] [i_8] [i_8] [(signed char)15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((var_7) ? (var_2) : (((/* implicit */unsigned int) var_0))))) ^ (min((3499791863143430276LL), (((/* implicit */long long int) var_13))))))) || (((((/* implicit */_Bool) arr_19 [12ULL] [i_4 - 1] [i_4] [i_4 - 1])) || (((/* implicit */_Bool) ((short) arr_24 [i_4] [i_5] [0ULL] [0ULL] [0ULL] [i_4])))))));
                                arr_30 [i_6] [i_7] [i_6] [i_5] [17U] = ((/* implicit */unsigned int) (~(((/* implicit */int) (((+(var_4))) <= (((/* implicit */int) arr_21 [i_6 + 2] [i_5] [i_6])))))));
                                arr_31 [i_4] [i_4] [i_6 + 2] [i_7] [i_8] [i_4] [i_8] = ((/* implicit */short) (+(((/* implicit */int) ((var_4) > (((/* implicit */int) arr_16 [(unsigned short)9] [i_7])))))));
                            }
                        } 
                    } 
                    arr_32 [i_6] [i_5] [i_4] = ((/* implicit */unsigned long long int) ((max((max((((/* implicit */unsigned long long int) 3499791863143430276LL)), (4953027918822034577ULL))), (((/* implicit */unsigned long long int) var_0)))) <= (((/* implicit */unsigned long long int) ((arr_16 [i_4 - 1] [i_4 - 1]) ? (((/* implicit */int) arr_17 [i_4 - 1] [i_4 - 1])) : (((/* implicit */int) arr_16 [i_4 - 1] [i_4 - 1])))))));
                }
            } 
        } 
        arr_33 [i_4] [i_4] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_17 [i_4 - 1] [i_4 - 1])) ? (((/* implicit */int) arr_20 [i_4 - 1] [i_4] [i_4 - 1] [i_4 - 1])) : (((/* implicit */int) arr_17 [i_4 - 1] [i_4 - 1])))), (((/* implicit */int) min((((/* implicit */short) arr_28 [i_4 - 1] [i_4] [i_4] [i_4] [i_4])), (arr_15 [i_4 - 1] [i_4 - 1]))))));
        arr_34 [i_4] = ((/* implicit */unsigned short) min((arr_24 [(unsigned short)16] [i_4 - 1] [i_4] [(unsigned short)16] [(unsigned short)16] [i_4]), (((((((/* implicit */int) arr_15 [i_4] [i_4])) > (var_0))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_13) : (((/* implicit */int) var_12))))) : (arr_25 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1])))));
    }
    /* vectorizable */
    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
    {
        arr_38 [i_9] = ((((/* implicit */_Bool) 4953027918822034575ULL)) ? (10ULL) : (16227762059800413926ULL));
        /* LoopNest 2 */
        for (unsigned long long int i_10 = 1; i_10 < 21; i_10 += 2) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                {
                    arr_44 [i_11] [i_10] = ((/* implicit */unsigned int) ((long long int) var_13));
                    arr_45 [i_11] [i_10] [i_9] = ((/* implicit */unsigned char) 4294967295U);
                }
            } 
        } 
        arr_46 [i_9] [i_9] = ((/* implicit */unsigned long long int) (unsigned short)14330);
        arr_47 [i_9] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_12))));
    }
    for (unsigned int i_12 = 0; i_12 < 15; i_12 += 4) 
    {
        arr_50 [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) min((max((arr_39 [i_12] [i_12]), (((/* implicit */unsigned long long int) (signed char)27)))), (((/* implicit */unsigned long long int) ((unsigned short) (signed char)34)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_42 [i_12] [i_12])) && (((/* implicit */_Bool) arr_36 [i_12])))))) : (((((/* implicit */_Bool) (signed char)34)) ? (-2017352632712029240LL) : (3499791863143430245LL)))));
        arr_51 [i_12] = ((/* implicit */unsigned int) ((((unsigned long long int) arr_41 [i_12] [i_12] [i_12] [12LL])) <= (((((/* implicit */_Bool) 5)) ? (4953027918822034577ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32334)))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_13 = 0; i_13 < 15; i_13 += 2) 
        {
            arr_54 [i_13] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-25352)) ? (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (signed char)-7)))) : (((/* implicit */int) arr_17 [i_12] [i_13]))));
            arr_55 [i_12] [i_13] [i_13] = arr_8 [i_12];
            arr_56 [i_12] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)34)) > (718994067)))), (((max((((/* implicit */unsigned long long int) var_13)), (arr_40 [i_12] [i_12] [i_12]))) / (((/* implicit */unsigned long long int) min((var_3), (((/* implicit */int) arr_48 [i_12])))))))));
            /* LoopSeq 1 */
            for (signed char i_14 = 0; i_14 < 15; i_14 += 2) 
            {
                arr_59 [i_12] [i_12] = ((/* implicit */unsigned short) ((((unsigned int) 3499791863143430287LL)) == (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
                arr_60 [i_14] [i_14] [i_14] [i_14] = ((/* implicit */short) min(((~(arr_49 [i_13]))), (((/* implicit */long long int) arr_15 [i_12] [i_13]))));
            }
            arr_61 [i_12] = ((/* implicit */unsigned char) min(((+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9579))) : (var_6))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */short) var_9)), (var_12)))) / (((((/* implicit */_Bool) arr_41 [i_12] [i_13] [i_12] [i_12])) ? (var_5) : (((/* implicit */int) (unsigned short)65533)))))))));
        }
        for (unsigned long long int i_15 = 0; i_15 < 15; i_15 += 2) 
        {
            arr_65 [i_15] [i_12] = ((/* implicit */unsigned long long int) ((long long int) ((short) ((((/* implicit */_Bool) var_1)) ? (var_8) : (var_2)))));
            arr_66 [i_12] [i_12] [i_12] = ((/* implicit */unsigned short) (((!(((((/* implicit */_Bool) arr_62 [i_12])) && (var_7))))) && (((/* implicit */_Bool) max((4294967295U), (((/* implicit */unsigned int) (short)12682)))))));
        }
        /* vectorizable */
        for (long long int i_16 = 0; i_16 < 15; i_16 += 1) 
        {
            arr_71 [i_16] [i_12] = ((/* implicit */unsigned long long int) var_1);
            arr_72 [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_0 [i_12])) : (((/* implicit */int) arr_37 [i_16]))));
            arr_73 [i_12] [(signed char)14] [i_16] = ((/* implicit */int) (!(((/* implicit */_Bool) var_4))));
            arr_74 [i_12] [i_12] [i_12] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_67 [i_16])) : (((/* implicit */int) arr_28 [i_12] [i_16] [i_16] [i_12] [i_16]))))));
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_17 = 0; i_17 < 15; i_17 += 2) 
        {
            arr_79 [i_12] [8LL] [i_12] = ((/* implicit */long long int) var_12);
            arr_80 [i_12] [i_12] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (var_8) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) var_0)) : (var_8)))));
        }
        for (unsigned char i_18 = 3; i_18 < 12; i_18 += 1) 
        {
            arr_84 [i_18] [(short)13] [(short)13] = ((/* implicit */long long int) (+(((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_76 [i_18] [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_82 [i_18])))))));
            arr_85 [i_12] [i_12] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_48 [i_12])) / (((/* implicit */int) (unsigned short)13))))) ? (((((/* implicit */unsigned int) var_0)) - (var_11))) : (((/* implicit */unsigned int) var_13)))), (((/* implicit */unsigned int) min((arr_19 [i_12] [6ULL] [i_18 + 2] [i_12]), (((/* implicit */unsigned short) ((-718994061) >= (var_3)))))))));
            arr_86 [i_12] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(((/* implicit */int) (short)32013))))), (max((arr_77 [i_12] [i_12] [i_12]), (var_8))))))));
        }
        for (unsigned char i_19 = 0; i_19 < 15; i_19 += 4) 
        {
            arr_89 [i_12] [i_19] [i_19] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (min((((unsigned long long int) var_8)), (((/* implicit */unsigned long long int) arr_83 [i_12] [i_12]))))));
            arr_90 [i_12] = ((/* implicit */long long int) min((min((arr_39 [11U] [i_12]), (((/* implicit */unsigned long long int) var_12)))), (max((arr_39 [i_19] [i_12]), (arr_39 [i_12] [(short)8])))));
            arr_91 [i_19] [i_12] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */int) arr_88 [i_12] [i_12] [i_19])) >= (((/* implicit */int) arr_88 [i_12] [i_19] [i_19])))));
        }
        arr_92 [(signed char)4] [(signed char)4] = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_1)) << (((((arr_49 [i_12]) & (((/* implicit */long long int) var_4)))) - (134481936LL)))))));
    }
    var_16 = ((/* implicit */signed char) var_0);
}
