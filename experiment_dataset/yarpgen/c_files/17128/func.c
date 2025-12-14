/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17128
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (int i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            var_20 = ((/* implicit */long long int) ((_Bool) ((arr_3 [i_1 + 1] [(signed char)0] [i_1 + 1]) ? (((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1] [i_1 + 1])))));
            var_21 = ((/* implicit */int) max((((((/* implicit */_Bool) (+(arr_4 [i_0])))) ? ((+(arr_1 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)21)) < (arr_0 [i_0]))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_2 [i_0] [i_0] [i_1]), (-1317692017)))) ? (((/* implicit */int) ((((/* implicit */int) var_15)) < (arr_0 [i_0])))) : (((/* implicit */int) var_14)))))));
            arr_5 [(_Bool)0] [i_1] [(_Bool)0] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) 1317692016))) % (((/* implicit */int) (_Bool)1))));
        }
        for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            /* LoopSeq 4 */
            /* vectorizable */
            for (int i_3 = 1; i_3 < 8; i_3 += 4) 
            {
                var_22 -= ((/* implicit */signed char) ((arr_2 [2ULL] [i_3 - 1] [i_3 + 3]) - (((/* implicit */int) arr_10 [i_0] [i_3 - 1] [i_3 + 3] [i_3 - 1]))));
                arr_11 [(unsigned char)6] |= ((/* implicit */int) arr_3 [i_3] [i_2] [i_0]);
                var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_19)) : (arr_2 [i_0] [i_0] [8U])))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_9)))))));
            }
            for (unsigned char i_4 = 0; i_4 < 11; i_4 += 4) 
            {
                var_24 = ((/* implicit */int) min((arr_1 [i_0]), ((-(arr_1 [i_0])))));
                var_25 = ((/* implicit */_Bool) ((unsigned short) (_Bool)1));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 11; i_5 += 1) 
                {
                    for (int i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        {
                            arr_22 [i_4] [i_4] &= ((/* implicit */int) arr_1 [i_6]);
                            arr_23 [i_6] [i_5] [i_6] [i_6] [i_0] [i_0] &= arr_10 [i_5] [(_Bool)1] [i_4] [i_5];
                            var_26 = ((/* implicit */unsigned int) max(((unsigned short)65472), ((unsigned short)6669)));
                        }
                    } 
                } 
                arr_24 [i_0] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-(var_8)))) && ((!(arr_21 [i_0] [i_0] [(short)8] [0ULL]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
            }
            for (unsigned int i_7 = 0; i_7 < 11; i_7 += 1) 
            {
                var_27 = ((/* implicit */int) min((((/* implicit */unsigned int) ((signed char) arr_6 [(short)0]))), (min((arr_1 [i_0]), (((/* implicit */unsigned int) var_6))))));
                arr_29 [i_0] [i_0] [i_7] [i_0] = ((/* implicit */unsigned int) max(((-(((/* implicit */int) arr_17 [i_2] [i_2])))), (((/* implicit */int) (_Bool)1))));
                arr_30 [i_0] [i_2] [i_7] = ((/* implicit */unsigned short) (~(var_8)));
            }
            for (int i_8 = 3; i_8 < 9; i_8 += 2) 
            {
                var_28 *= ((/* implicit */_Bool) min((((/* implicit */int) var_3)), (((((/* implicit */int) max(((unsigned char)239), (((/* implicit */unsigned char) var_17))))) % (((((/* implicit */_Bool) arr_27 [i_8] [4] [(unsigned short)9] [(signed char)5])) ? (1317692016) : (((/* implicit */int) arr_25 [i_0] [i_2] [i_8 + 1] [9ULL]))))))));
                arr_33 [i_0] = ((/* implicit */_Bool) ((max((((/* implicit */long long int) (unsigned char)17)), (arr_20 [i_8] [i_8 - 3] [i_8] [i_8 - 3] [i_8 - 3] [i_8]))) / (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_9 [i_0])) ? (((/* implicit */int) (unsigned char)14)) : (((/* implicit */int) (unsigned short)58867)))))))));
            }
            /* LoopNest 3 */
            for (unsigned int i_9 = 0; i_9 < 11; i_9 += 3) 
            {
                for (unsigned int i_10 = 0; i_10 < 11; i_10 += 4) 
                {
                    for (unsigned long long int i_11 = 1; i_11 < 10; i_11 += 2) 
                    {
                        {
                            var_29 -= ((/* implicit */signed char) (unsigned short)40371);
                            var_30 = (~(((/* implicit */int) (unsigned char)22)));
                            var_31 = ((/* implicit */unsigned char) max((((/* implicit */int) (!(arr_3 [(_Bool)1] [i_10] [i_9])))), ((-(1560999372)))));
                            arr_41 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((((/* implicit */_Bool) 253952U)) && (((/* implicit */_Bool) (unsigned char)238)))))))));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_12 = 0; i_12 < 11; i_12 += 4) 
        {
            var_32 = ((/* implicit */long long int) arr_42 [10] [4U] [i_0]);
            arr_45 [i_0] = (!(((/* implicit */_Bool) ((unsigned char) arr_7 [i_0]))));
            var_33 = ((/* implicit */unsigned short) arr_6 [i_0]);
            /* LoopSeq 3 */
            for (long long int i_13 = 1; i_13 < 10; i_13 += 3) 
            {
                arr_49 [i_0] [i_0] [i_0] [i_0] = ((int) arr_35 [i_0] [i_12] [i_12]);
                var_34 = ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)48)), (-1317692014)))) | (((((/* implicit */_Bool) arr_6 [i_0])) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50005))))))), (((/* implicit */unsigned long long int) 2147483392U))));
            }
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                var_35 = ((/* implicit */signed char) var_12);
                var_36 = ((/* implicit */_Bool) arr_27 [i_0] [5U] [8U] [5U]);
            }
            for (signed char i_15 = 0; i_15 < 11; i_15 += 4) 
            {
                arr_57 [i_0] [i_0] [(short)2] [i_0] = ((/* implicit */int) (signed char)-45);
                /* LoopNest 2 */
                for (signed char i_16 = 0; i_16 < 11; i_16 += 4) 
                {
                    for (long long int i_17 = 0; i_17 < 11; i_17 += 3) 
                    {
                        {
                            arr_62 [i_0] [(_Bool)1] [(_Bool)1] [i_12] [(_Bool)1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (((unsigned int) ((short) (unsigned char)8)))));
                            var_37 = ((unsigned char) (unsigned char)26);
                        }
                    } 
                } 
                var_38 = ((/* implicit */unsigned short) ((3620127429U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))));
            }
        }
        var_39 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_19)) : (((/* implicit */int) arr_36 [i_0] [(unsigned short)9] [i_0] [i_0] [i_0] [i_0]))))) ? ((~(((/* implicit */int) arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_36 [i_0] [i_0] [i_0] [(_Bool)1] [(unsigned short)6] [i_0])) : (((/* implicit */int) arr_36 [i_0] [10LL] [i_0] [i_0] [i_0] [i_0]))))));
        var_40 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_21 [i_0] [i_0] [2] [i_0])) * (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_9 [i_0])) : (((/* implicit */int) arr_46 [i_0] [i_0]))))));
        arr_63 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)21))));
    }
    /* vectorizable */
    for (unsigned char i_18 = 0; i_18 < 11; i_18 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_19 = 2; i_19 < 9; i_19 += 4) 
        {
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                for (long long int i_21 = 0; i_21 < 11; i_21 += 2) 
                {
                    {
                        var_41 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)11074)) << (((/* implicit */int) (_Bool)1))))) : (arr_43 [3])));
                        var_42 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)57)) : (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */int) (unsigned short)54449)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_56 [i_18] [i_20] [4]))))));
                        /* LoopSeq 4 */
                        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                        {
                            var_43 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-46)) || (((/* implicit */_Bool) (unsigned short)11074))));
                            var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_20])) ? (arr_1 [i_20]) : (arr_1 [i_20])));
                        }
                        for (unsigned short i_23 = 2; i_23 < 9; i_23 += 3) 
                        {
                            var_45 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) (signed char)119))) ? (((/* implicit */int) ((signed char) var_4))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_66 [i_23] [i_18] [i_18])) || (((/* implicit */_Bool) arr_60 [i_18] [i_19 - 1] [i_20] [i_21])))))));
                            var_46 = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 0U)) || (((/* implicit */_Bool) 0U)))))) : (arr_55 [i_23 - 2] [i_20] [i_19 - 1]));
                            arr_77 [i_20] [i_19] [1] [i_19] [7] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_68 [(_Bool)1] [i_19] [i_20])) | (((/* implicit */int) arr_37 [i_20] [i_19 + 2] [i_21] [i_23]))));
                            arr_78 [i_20] [i_19] [i_19] [i_20] [i_19] = ((/* implicit */unsigned short) ((int) var_12));
                        }
                        for (unsigned short i_24 = 0; i_24 < 11; i_24 += 1) /* same iter space */
                        {
                            arr_82 [i_20] [i_24] = ((/* implicit */signed char) var_9);
                            arr_83 [i_18] [i_19] [i_20] [4] [i_21] [i_24] = ((/* implicit */unsigned int) ((((/* implicit */int) var_19)) | (((/* implicit */int) arr_72 [i_18] [(signed char)3] [i_20] [i_19 - 1]))));
                            arr_84 [i_18] [i_20] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)11)) ? (743110155U) : (var_2)));
                            var_47 = ((/* implicit */unsigned short) ((unsigned int) var_12));
                        }
                        for (unsigned short i_25 = 0; i_25 < 11; i_25 += 1) /* same iter space */
                        {
                            var_48 *= ((/* implicit */unsigned long long int) arr_27 [0U] [i_19 + 1] [i_25] [i_25]);
                            var_49 *= ((/* implicit */unsigned char) var_5);
                            var_50 ^= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_5)) ? (arr_18 [i_18] [i_18] [(_Bool)1] [3] [i_18]) : (((/* implicit */int) (signed char)82))))));
                        }
                        arr_87 [3LL] [i_19] [i_19] [i_20] = ((((/* implicit */_Bool) 2147352576)) ? (((/* implicit */int) (unsigned short)40930)) : (((/* implicit */int) ((unsigned char) 4294967295U))));
                        var_51 = ((/* implicit */signed char) ((arr_47 [i_19 - 1] [i_19 + 1] [i_19 + 2]) ^ (arr_47 [i_19 - 2] [i_19 - 2] [i_19 + 1])));
                    }
                } 
            } 
        } 
        arr_88 [(_Bool)1] [i_18] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((877128313) + (((/* implicit */int) var_3))))) ? (((-466098643) / (877128314))) : (arr_2 [(signed char)2] [(unsigned short)0] [i_18])));
    }
    for (unsigned char i_26 = 0; i_26 < 11; i_26 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_27 = 0; i_27 < 11; i_27 += 1) 
        {
            for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
            {
                {
                    var_52 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) arr_90 [i_27])), (min((max((arr_60 [i_26] [i_27] [i_27] [i_28]), ((unsigned short)44696))), (((/* implicit */unsigned short) arr_64 [i_26] [i_28]))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_29 = 0; i_29 < 11; i_29 += 3) 
                    {
                        var_53 = ((/* implicit */unsigned char) ((arr_27 [i_28] [i_28] [i_28] [i_28]) / (4194303)));
                        arr_99 [i_28] [(signed char)7] [i_27] [i_27] [i_28] [(_Bool)1] = ((/* implicit */unsigned char) (-(min((-1LL), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_54 [i_26] [5U] [5U] [i_29])) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) var_14)))))))));
                    }
                    var_54 *= ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_18)) % (arr_95 [(unsigned char)4] [(unsigned char)4] [(unsigned char)4] [i_28]))))) <= ((~(min((((/* implicit */int) (unsigned short)37253)), (-2147483628)))))));
                    /* LoopNest 2 */
                    for (long long int i_30 = 4; i_30 < 7; i_30 += 4) 
                    {
                        for (unsigned short i_31 = 1; i_31 < 9; i_31 += 1) 
                        {
                            {
                                var_55 = ((/* implicit */int) arr_98 [i_30] [i_27] [i_28] [i_30 - 1] [i_28] [i_26]);
                                var_56 &= ((signed char) min((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_10 [i_26] [3LL] [i_30 - 4] [i_30])) : (((/* implicit */int) var_16)))), (((/* implicit */int) ((((/* implicit */_Bool) 877128313)) && ((_Bool)1))))));
                                arr_105 [2LL] [i_28] [i_28] [i_28] [1] = ((/* implicit */unsigned long long int) ((unsigned int) var_11));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 2 */
        for (int i_32 = 0; i_32 < 11; i_32 += 4) 
        {
            var_57 -= ((/* implicit */_Bool) (unsigned char)207);
            var_58 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_32] [i_26] [i_32] [i_26] [i_32])) ? (((arr_72 [i_32] [(unsigned char)5] [i_32] [i_32]) ? (arr_8 [i_26] [i_26]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_85 [9] [4] [8LL] [i_32]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)49))))))))) ? (((/* implicit */int) ((unsigned short) ((signed char) arr_104 [i_26] [(_Bool)1] [(_Bool)1] [i_26] [(_Bool)1])))) : (min((1881608075), (((((/* implicit */int) (unsigned short)38044)) & (((/* implicit */int) var_11))))))));
            var_59 = ((/* implicit */long long int) min((var_59), (((/* implicit */long long int) max((((unsigned long long int) arr_81 [(_Bool)1] [i_32])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_81 [i_26] [i_32])) ? (503273033) : (arr_81 [i_26] [i_32])))))))));
        }
        /* vectorizable */
        for (_Bool i_33 = 1; i_33 < 1; i_33 += 1) 
        {
            var_60 = ((/* implicit */unsigned long long int) (-(arr_97 [i_26] [i_33 - 1] [i_33 - 1] [i_33] [(unsigned short)8] [i_33 - 1])));
            arr_111 [i_33] [(short)4] [i_33] = ((/* implicit */signed char) ((arr_1 [i_33]) % (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
        }
        var_61 -= ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)38044)) ? (var_8) : (((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_106 [i_26] [i_26] [i_26]))) : (var_13))) : (((/* implicit */unsigned long long int) var_2)))));
    }
    var_62 = ((/* implicit */unsigned short) ((((_Bool) (~(-7912315500892107140LL)))) ? (((/* implicit */int) ((_Bool) var_11))) : (((/* implicit */int) var_17))));
}
