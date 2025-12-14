/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168770
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
    var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1023))) - (9508755908006819536ULL))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) /* same iter space */
        {
            arr_4 [8] [(signed char)18] = (~(arr_3 [i_0] [i_0]));
            var_12 += ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)48))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10))));
        }
        for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (short i_4 = 2; i_4 < 19; i_4 += 4) 
                {
                    {
                        arr_16 [i_4] [i_4 - 1] [i_3] [9U] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) 8937988165702732079ULL));
                        var_13 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_4 - 2])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) 1571488268U))))) : (((/* implicit */int) arr_14 [i_0] [i_2] [i_4 - 2]))))) ^ (min((-6356697599805594447LL), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_3)), (arr_5 [i_4]))))))));
                    }
                } 
            } 
            var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65535)) ? ((+(((/* implicit */int) (signed char)-8)))) : (((/* implicit */int) (_Bool)1))));
            var_15 = ((/* implicit */long long int) max((var_15), (((((/* implicit */_Bool) -5631359321007499172LL)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2220648846713030380ULL))))))))));
            arr_17 [4LL] [i_0] [i_2] = (~(((/* implicit */int) arr_15 [i_0] [i_2] [i_2])));
        }
        /* LoopSeq 3 */
        for (int i_5 = 0; i_5 < 22; i_5 += 4) 
        {
            var_16 ^= ((/* implicit */short) (_Bool)1);
            arr_22 [i_5] [16ULL] [16ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_5])) ? (((/* implicit */int) var_9)) : (((((/* implicit */int) var_9)) / (((/* implicit */int) (unsigned short)61440))))))) ? (min((((/* implicit */unsigned long long int) var_9)), (((8844724311655101561ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0]))))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_8 [i_5] [i_0] [i_0])))))));
            arr_23 [i_0] [i_5] [i_5] = ((/* implicit */unsigned short) (~(((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)1621))))));
            /* LoopNest 3 */
            for (unsigned long long int i_6 = 2; i_6 < 20; i_6 += 3) 
            {
                for (unsigned long long int i_7 = 1; i_7 < 21; i_7 += 3) 
                {
                    for (int i_8 = 2; i_8 < 19; i_8 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(8937988165702732085ULL)))) ? (((/* implicit */int) ((unsigned char) 9223372036854775797LL))) : (((/* implicit */int) arr_1 [i_5] [i_8]))))) * (((((/* implicit */_Bool) arr_30 [i_5] [i_6 + 1] [i_6 + 1] [i_8] [i_8 + 2])) ? (arr_29 [i_0] [i_6 + 2] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_5] [i_6 + 2] [i_5])))))))));
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) % (arr_5 [i_0])))) ? (((((/* implicit */_Bool) arr_27 [i_0] [i_0] [(unsigned short)7] [(_Bool)1] [i_0])) ? (var_0) : (var_0))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_0] [i_0] [i_0] [i_0] [i_0]))) > (arr_5 [i_7 + 1])))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 4 */
            /* vectorizable */
            for (unsigned short i_9 = 0; i_9 < 22; i_9 += 4) 
            {
                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) 1496389245)) ? (arr_30 [i_0] [i_0] [(unsigned short)20] [i_0] [i_0]) : (((/* implicit */long long int) var_6)))))));
                arr_34 [i_0] [(_Bool)1] [i_9] [i_0] = ((/* implicit */unsigned int) arr_27 [i_0] [i_5] [i_9] [i_0] [i_9]);
                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((arr_2 [i_9]) >= (arr_2 [i_0]))))));
                var_21 = ((/* implicit */int) (-(var_0)));
            }
            for (unsigned int i_10 = 0; i_10 < 22; i_10 += 3) 
            {
                var_22 ^= ((((/* implicit */_Bool) (((_Bool)1) ? (arr_11 [i_10] [i_5] [i_0]) : (((/* implicit */int) arr_6 [i_5]))))) ? (((/* implicit */int) (!(arr_24 [i_0] [i_0])))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) var_1))))))));
                arr_38 [i_0] [i_5] [i_0] = ((/* implicit */unsigned short) max((arr_35 [i_0] [i_5] [i_10]), (min((min((((/* implicit */unsigned long long int) (unsigned short)47432)), (var_5))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2723479021U)) ? (arr_10 [i_0] [i_5] [i_5] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))))));
            }
            for (unsigned char i_11 = 0; i_11 < 22; i_11 += 4) 
            {
                var_23 = var_6;
                arr_41 [(unsigned char)1] [i_5] [i_11] = ((/* implicit */unsigned short) ((((unsigned long long int) var_2)) <= (((/* implicit */unsigned long long int) ((arr_10 [i_0] [i_5] [i_5] [i_11]) + (((/* implicit */long long int) ((int) (unsigned short)412))))))));
            }
            for (unsigned char i_12 = 2; i_12 < 18; i_12 += 2) 
            {
                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) arr_43 [i_12 + 3]))));
                arr_44 [i_0] = ((/* implicit */unsigned short) var_9);
            }
        }
        for (signed char i_13 = 0; i_13 < 22; i_13 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_14 = 2; i_14 < 19; i_14 += 2) 
            {
                for (unsigned short i_15 = 1; i_15 < 21; i_15 += 2) 
                {
                    {
                        var_25 = ((/* implicit */unsigned long long int) min((var_25), (max((9508755908006819537ULL), (((/* implicit */unsigned long long int) (unsigned short)4096))))));
                        arr_53 [i_15] [i_14] [i_15] = ((/* implicit */long long int) (_Bool)1);
                        arr_54 [i_0] [i_13] [i_14] [i_14] [i_15] [(unsigned short)1] = ((/* implicit */unsigned char) 4294967295U);
                        arr_55 [i_0] [i_15] [i_14 + 2] [i_0] = ((/* implicit */unsigned char) (~(arr_30 [i_0] [i_0] [i_0] [i_0] [i_0])));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (long long int i_16 = 0; i_16 < 22; i_16 += 2) 
            {
                var_26 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0)))))));
                var_27 = ((/* implicit */_Bool) (((-(var_7))) / (((/* implicit */int) arr_15 [i_0] [(_Bool)1] [i_0]))));
                arr_58 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_36 [i_0] [i_13] [i_16]))));
                var_28 |= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (((+(((/* implicit */int) (short)-1)))) + (((/* implicit */int) ((unsigned short) -7040009226990941384LL)))))), ((~(arr_26 [11] [i_13] [i_13] [i_16] [5])))));
                var_29 = ((/* implicit */_Bool) min(((unsigned char)132), (arr_40 [i_0] [i_13] [i_16])));
            }
            /* LoopSeq 2 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                arr_61 [i_0] [i_13] [i_17] = ((/* implicit */unsigned long long int) (!((_Bool)1)));
                arr_62 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_0]);
                arr_63 [i_0] [16LL] [4ULL] [i_13] = ((/* implicit */unsigned char) (unsigned short)14203);
            }
            for (int i_18 = 1; i_18 < 21; i_18 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_19 = 0; i_19 < 22; i_19 += 4) 
                {
                    for (int i_20 = 4; i_20 < 20; i_20 += 2) 
                    {
                        {
                            arr_72 [16ULL] [16ULL] [i_18] [i_18] [(unsigned short)3] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_50 [i_0] [i_18] [i_18] [(unsigned short)6] [i_0]))));
                            arr_73 [i_0] [i_18] [i_18] [i_19] [i_18] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)5737))));
                            arr_74 [i_0] [(_Bool)1] [i_18] [i_19] [i_20] [i_18] [i_0] = ((/* implicit */unsigned char) (unsigned short)30213);
                            arr_75 [i_0] [i_18] [i_18] [i_0] [i_20] = arr_35 [i_20] [i_20 - 4] [i_18 - 1];
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 22; i_21 += 2) 
                {
                    for (unsigned char i_22 = 3; i_22 < 19; i_22 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) max((((long long int) (unsigned short)19718)), (((/* implicit */long long int) arr_50 [(signed char)6] [i_13] [i_18] [i_21] [i_18])))))));
                            var_31 = ((/* implicit */unsigned long long int) min((var_31), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_22 - 2])) ? (2475816760U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)126)))))) ? (((/* implicit */unsigned long long int) ((long long int) var_3))) : (((arr_2 [i_22 + 2]) >> (((arr_2 [i_22 - 3]) - (1504673107800518277ULL)))))))));
                            var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */int) var_10)), (var_7)))))))));
                            arr_82 [i_0] [i_18] [i_18] [i_18] [i_18] [i_0] = var_10;
                            arr_83 [10] [i_18] [i_18] [10] = ((/* implicit */unsigned char) (((~(arr_70 [i_18 - 1] [i_18 - 1] [i_22 + 2] [i_18] [i_22 - 2] [i_22]))) | (arr_70 [i_18 + 1] [i_18] [i_22 + 2] [i_18] [i_22 + 2] [i_22])));
                        }
                    } 
                } 
                arr_84 [5] [5] [i_18] = ((/* implicit */signed char) ((((/* implicit */int) arr_50 [i_0] [i_18] [i_0] [i_13] [i_0])) << (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))))));
                var_33 += ((/* implicit */unsigned short) var_7);
            }
            var_34 += (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_0] [i_0] [i_13] [i_0] [i_0]))) > (arr_46 [i_0])))));
        }
        for (signed char i_23 = 0; i_23 < 22; i_23 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned int i_24 = 1; i_24 < 21; i_24 += 4) 
            {
                arr_93 [i_24] [i_24] [i_23] [i_24] = ((/* implicit */int) ((((/* implicit */long long int) (((~(((/* implicit */int) var_2)))) | (((/* implicit */int) arr_32 [i_24 - 1] [i_23] [i_23] [i_23]))))) & (var_4)));
                arr_94 [i_24] = ((/* implicit */long long int) (~(((/* implicit */int) (short)-18043))));
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) 
            {
                var_35 += ((/* implicit */long long int) (~(((/* implicit */int) var_9))));
                var_36 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_69 [i_0] [i_23] [i_23] [i_23] [i_25] [i_23])) ? (((/* implicit */long long int) 4000130558U)) : (-1112286042750126882LL))) <= (((/* implicit */long long int) (~(((/* implicit */int) arr_68 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                arr_98 [(_Bool)1] [i_23] [(unsigned short)21] [i_25 - 1] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_45 [i_25 - 1]))));
            }
            /* LoopNest 2 */
            for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
            {
                for (long long int i_27 = 3; i_27 < 21; i_27 += 4) 
                {
                    {
                        var_37 = ((/* implicit */unsigned int) var_8);
                        arr_104 [i_0] [(unsigned short)12] [i_0] [i_26] [i_0] [i_0] = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 3939407756927422952LL)) ? (((/* implicit */int) arr_27 [i_26] [(unsigned short)20] [i_27] [i_27] [i_27 - 1])) : (((/* implicit */int) var_8))))), (((((/* implicit */_Bool) arr_27 [i_26] [i_26] [(signed char)13] [i_27] [i_27 - 1])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)121))))));
                        var_38 = ((/* implicit */int) max((((/* implicit */long long int) min((((unsigned short) (unsigned short)65124)), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7)))))))), (((((/* implicit */long long int) ((/* implicit */int) var_3))) / (-8548121275859795799LL)))));
                        var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) min((((/* implicit */int) max((arr_86 [8] [i_27 - 3]), (arr_86 [i_0] [i_27 + 1])))), (((((/* implicit */int) arr_86 [i_0] [i_27 - 3])) * (((/* implicit */int) arr_86 [10LL] [i_27 - 2])))))))));
                    }
                } 
            } 
            arr_105 [i_0] [i_0] = var_6;
        }
    }
    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
    {
        arr_108 [i_28] = (~(var_6));
        arr_109 [i_28] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : ((-((~(((/* implicit */int) var_3))))))));
    }
}
