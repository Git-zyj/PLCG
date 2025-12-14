/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142967
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
    var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) - (((/* implicit */int) var_0))));
    var_11 = ((/* implicit */unsigned int) (_Bool)0);
    var_12 = (+(((/* implicit */int) ((((/* implicit */int) ((6418595926711140925LL) < (((/* implicit */long long int) 0U))))) >= ((~(((/* implicit */int) (unsigned short)65535))))))));
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) var_7))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_14 &= ((/* implicit */long long int) arr_1 [11ULL]);
        arr_3 [(_Bool)1] = ((/* implicit */unsigned short) arr_0 [i_0] [(unsigned char)8]);
        arr_4 [i_0] = ((arr_2 [(short)9]) ? (6418595926711140915LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65531)) ? (((/* implicit */int) (unsigned short)1)) : (127)))));
        var_15 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) <= ((~(((/* implicit */int) arr_0 [i_0] [i_0])))))))) & ((+(arr_1 [i_0])))));
    }
    for (short i_1 = 1; i_1 < 13; i_1 += 2) 
    {
        arr_8 [0ULL] [i_1] |= ((/* implicit */short) max((((((/* implicit */int) arr_7 [(short)12] [i_1 + 1])) * (((/* implicit */int) arr_7 [12LL] [i_1 + 1])))), (((/* implicit */int) (unsigned short)31034))));
        arr_9 [i_1] [i_1] = arr_7 [i_1] [i_1];
        arr_10 [i_1] = ((/* implicit */int) ((((arr_7 [i_1] [i_1 + 1]) ? (((/* implicit */int) arr_5 [i_1 + 2] [i_1 + 1])) : (((/* implicit */int) arr_6 [i_1 + 3])))) == ((+(((/* implicit */int) arr_5 [i_1] [i_1 + 1]))))));
        var_16 = ((/* implicit */int) max((var_16), (var_6)));
        var_17 = ((/* implicit */unsigned char) (short)-14120);
    }
    for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_3 = 2; i_3 < 16; i_3 += 2) 
        {
            for (unsigned char i_4 = 0; i_4 < 17; i_4 += 3) 
            {
                {
                    arr_18 [i_2] [i_4] [(unsigned short)0] [i_2] = ((arr_11 [i_3] [i_3]) / (((/* implicit */int) ((((/* implicit */int) ((-6418595926711140925LL) <= (((/* implicit */long long int) arr_11 [(short)7] [i_3]))))) >= (((/* implicit */int) (!(var_7))))))));
                    arr_19 [i_2] [i_2] [i_4] [6] = ((/* implicit */unsigned int) arr_16 [i_4] [i_2]);
                }
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_5 = 0; i_5 < 17; i_5 += 3) 
        {
            for (int i_6 = 2; i_6 < 16; i_6 += 2) 
            {
                for (long long int i_7 = 1; i_7 < 14; i_7 += 3) 
                {
                    {
                        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (~(-1))))));
                        arr_28 [i_2] [16] [i_5] [i_2] = ((/* implicit */short) 4294967295U);
                        arr_29 [i_2] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) -259969078)) > (6794479743764972615ULL)))) > (((/* implicit */int) ((3242851503U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_2] [i_6])))))))))) : (((((/* implicit */_Bool) arr_27 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (unsigned char)40)))) : (44960843U)))));
                        var_19 = ((/* implicit */int) ((unsigned char) (-(((/* implicit */int) (_Bool)0)))));
                        arr_30 [i_2] [i_2] [i_2] = arr_13 [i_7 + 2];
                    }
                } 
            } 
        } 
        var_20 -= ((/* implicit */unsigned short) arr_13 [i_2]);
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_8 = 0; i_8 < 17; i_8 += 4) 
        {
            arr_33 [i_2] = ((/* implicit */short) var_8);
            /* LoopNest 3 */
            for (long long int i_9 = 3; i_9 < 16; i_9 += 3) 
            {
                for (unsigned short i_10 = 0; i_10 < 17; i_10 += 3) 
                {
                    for (long long int i_11 = 0; i_11 < 17; i_11 += 3) 
                    {
                        {
                            var_21 *= ((/* implicit */signed char) 9086301101281043180LL);
                            arr_42 [i_2] [i_2] [i_2] = ((/* implicit */signed char) arr_31 [i_9 - 1] [i_2] [i_9 + 1]);
                            var_22 = ((/* implicit */unsigned int) ((arr_23 [i_2] [i_2] [i_9 - 2]) <= (((/* implicit */unsigned long long int) ((arr_25 [i_9] [i_10] [i_10]) ? (((/* implicit */int) (unsigned short)1)) : (var_6))))));
                        }
                    } 
                } 
            } 
            arr_43 [i_2] [(_Bool)1] [i_2] = ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) arr_20 [i_8])) : (((/* implicit */int) arr_20 [i_2]))));
            /* LoopSeq 3 */
            for (long long int i_12 = 0; i_12 < 17; i_12 += 2) 
            {
                arr_48 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_32 [14LL] [i_8] [i_2]))))) && (arr_13 [i_8])));
                /* LoopSeq 4 */
                for (unsigned short i_13 = 1; i_13 < 16; i_13 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_14 = 0; i_14 < 17; i_14 += 3) 
                    {
                        arr_53 [i_2] [i_8] [i_12] = ((/* implicit */short) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_2] [(_Bool)1] [i_12] [i_13] [(unsigned char)12]))) : (((var_8) ? (arr_27 [i_8]) : (((/* implicit */unsigned long long int) var_6))))));
                        arr_54 [10] [i_14] [i_14] [i_13] [i_2] = ((/* implicit */unsigned char) ((-606468671582536230LL) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 13082249427315108774ULL)) || (var_9)))))));
                        arr_55 [(_Bool)1] [i_2] [(_Bool)1] [i_2] [7] [(_Bool)1] [i_14] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_24 [i_2] [i_14] [i_12] [i_13 - 1]))));
                    }
                    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                    {
                        var_23 = ((((arr_27 [i_2]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65529))))) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)28)) ^ (((/* implicit */int) (unsigned char)87))))));
                        var_24 ^= ((/* implicit */signed char) arr_49 [i_2] [i_2] [i_8] [i_15]);
                        arr_59 [i_15 - 1] [i_2] [i_15] [i_15 - 1] [i_15 - 1] = ((/* implicit */int) ((arr_27 [(unsigned short)6]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                        var_25 += ((/* implicit */short) ((((/* implicit */_Bool) arr_44 [i_8] [i_8] [i_8] [i_8])) ? (arr_44 [i_8] [i_8] [i_12] [10U]) : (arr_44 [i_8] [i_8] [(_Bool)1] [i_13 + 1])));
                    }
                    arr_60 [i_2] [i_8] [i_2] [i_13] = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)65524))));
                    var_26 += ((/* implicit */unsigned int) arr_45 [8U] [i_12]);
                }
                for (unsigned long long int i_16 = 0; i_16 < 17; i_16 += 2) 
                {
                    var_27 = ((/* implicit */unsigned int) (((-(14758329536065882965ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_47 [i_2])) ? (var_6) : (((/* implicit */int) arr_41 [i_16] [i_8] [i_8] [i_8] [(unsigned short)9])))))));
                    var_28 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) && (((/* implicit */_Bool) arr_41 [i_2] [i_2] [i_2] [1] [i_2]))));
                }
                for (int i_17 = 0; i_17 < 17; i_17 += 4) 
                {
                    arr_65 [i_8] [2LL] [i_2] [i_17] = ((/* implicit */long long int) (+(((/* implicit */int) ((arr_27 [(_Bool)1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_63 [i_2] [i_2] [i_2] [i_2]))))))));
                    var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1335231207U)) | (74312578185871013ULL)))) ? (arr_37 [(unsigned short)4] [i_17] [i_17] [i_17] [i_17]) : (((((/* implicit */_Bool) 4398046511103ULL)) ? (18446739675663040494ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))))));
                    var_30 = ((/* implicit */long long int) arr_20 [i_2]);
                    var_31 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) arr_49 [i_17] [i_17] [i_17] [i_2])) : (((/* implicit */int) arr_35 [i_17]))));
                    arr_66 [15U] [i_2] [(_Bool)1] [i_12] [i_12] [i_17] = ((/* implicit */short) (~(((/* implicit */int) arr_57 [i_2] [i_2] [i_8] [i_8] [i_12] [i_12] [i_17]))));
                }
                for (int i_18 = 1; i_18 < 14; i_18 += 2) 
                {
                    arr_70 [i_12] [i_2] [i_8] [i_8] = ((/* implicit */long long int) arr_38 [i_18 + 1] [i_18] [i_18 + 1] [15] [i_8]);
                    var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_34 [i_18 + 1] [i_18 - 1] [i_18 + 1] [i_18 + 1])))))));
                    var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) (~(arr_69 [(short)3] [i_18 - 1] [i_18 + 3]))))));
                    var_34 ^= ((/* implicit */short) arr_44 [i_12] [i_12] [i_8] [i_12]);
                    var_35 = arr_22 [i_2] [i_2];
                }
                var_36 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_12] [i_8] [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) arr_52 [i_2] [i_2] [i_2] [i_2] [i_2] [i_12]))) : (-9143182575879983382LL)))) ? (((arr_32 [i_2] [i_8] [i_12]) ? (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_8]))) : (-606468671582536203LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)9936)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)34501)))))));
            }
            for (signed char i_19 = 2; i_19 < 14; i_19 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        {
                            var_37 = ((/* implicit */int) (-(arr_23 [i_2] [i_19 - 1] [i_19 - 1])));
                            var_38 = ((/* implicit */unsigned char) var_9);
                            var_39 = ((/* implicit */int) min((var_39), (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (short)9126)))))));
                            arr_79 [i_2] [i_2] [i_2] [i_2] [(unsigned char)3] = ((/* implicit */long long int) (unsigned short)65530);
                            var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) 4294967282U))));
                        }
                    } 
                } 
                var_41 = ((/* implicit */short) arr_17 [(short)11] [i_2] [(short)11] [i_19]);
            }
            for (signed char i_22 = 2; i_22 < 14; i_22 += 4) /* same iter space */
            {
                var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-8616)) ? (((/* implicit */int) (signed char)34)) : (((/* implicit */int) (unsigned short)55600))));
                /* LoopSeq 1 */
                for (unsigned int i_23 = 2; i_23 < 16; i_23 += 4) 
                {
                    var_43 = ((/* implicit */signed char) ((((/* implicit */int) arr_75 [i_2] [i_2] [i_2] [i_2] [i_2])) % (((((/* implicit */int) arr_82 [i_2])) + (((/* implicit */int) arr_74 [(unsigned short)15] [i_2] [i_2] [(unsigned short)11] [i_23 + 1]))))));
                    arr_85 [i_2] [i_2] [16U] [16U] = ((((/* implicit */_Bool) arr_76 [i_23 - 1] [i_2] [(_Bool)1] [i_23 - 1] [i_2])) ? ((~(3155390051349302328LL))) : (((/* implicit */long long int) var_6)));
                    arr_86 [i_2] [i_2] [(signed char)6] [(signed char)6] = ((/* implicit */unsigned short) arr_45 [i_2] [i_2]);
                    var_44 = ((/* implicit */unsigned long long int) max((var_44), ((+(4398046511103ULL)))));
                    var_45 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) / (18446739675663040513ULL)));
                }
                var_46 = ((/* implicit */unsigned int) ((unsigned short) arr_80 [i_22 + 1] [i_22] [i_22 - 1] [i_22 + 1]));
            }
            var_47 ^= ((/* implicit */long long int) arr_68 [5LL] [i_2] [i_2] [i_2]);
        }
        for (unsigned char i_24 = 0; i_24 < 17; i_24 += 3) 
        {
            arr_89 [i_2] [8U] = ((/* implicit */long long int) (_Bool)1);
            /* LoopNest 3 */
            for (unsigned long long int i_25 = 0; i_25 < 17; i_25 += 3) 
            {
                for (unsigned long long int i_26 = 4; i_26 < 16; i_26 += 3) 
                {
                    for (unsigned int i_27 = 0; i_27 < 17; i_27 += 4) 
                    {
                        {
                            var_48 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)44668)))))));
                            var_49 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65530))) <= (min((((/* implicit */unsigned long long int) arr_50 [i_2] [i_24] [9] [i_26 - 3] [5ULL] [(_Bool)1])), (17729507760371368189ULL))))));
                        }
                    } 
                } 
            } 
            arr_96 [i_2] [i_2] [(unsigned char)10] = ((/* implicit */unsigned char) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (4398046511112ULL))) ? (max((((/* implicit */unsigned long long int) var_9)), (18446739675663040512ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)31034)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-32)))))))) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)34)))))));
            arr_97 [(signed char)2] [i_2] = ((/* implicit */unsigned short) (+(((var_9) ? (((arr_87 [i_2] [(short)1] [i_2]) >> (((/* implicit */int) var_5)))) : (((/* implicit */long long int) ((int) var_6)))))));
            arr_98 [i_2] [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((var_9) || (var_9))))));
        }
        for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
        {
            var_50 ^= ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) (short)-18293)), (arr_26 [i_2] [i_2] [i_2] [i_2]))) % ((-(arr_26 [i_28] [i_2] [i_2] [i_2])))));
            var_51 = ((/* implicit */long long int) arr_47 [i_2]);
        }
        arr_101 [i_2] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)14404)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (536870904U)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)14404)) ? (-6353100394716947737LL) : (-1883789717715371252LL)))));
    }
}
