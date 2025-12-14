/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107228
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
    for (long long int i_0 = 2; i_0 < 17; i_0 += 1) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned int) min((var_11), (min((min((min((((/* implicit */unsigned int) arr_2 [(short)10])), (var_0))), (((/* implicit */unsigned int) arr_0 [i_0])))), (((unsigned int) min((12U), (((/* implicit */unsigned int) arr_1 [18ULL])))))))));
        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((8U), (((/* implicit */unsigned int) (short)12418))))) ? (((/* implicit */int) (short)12399)) : (min((-1628281515), (((/* implicit */int) (unsigned char)128))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            arr_5 [i_0] [i_0] [i_1] = ((/* implicit */short) arr_3 [i_0] [i_0] [i_0]);
            arr_6 [i_0] [i_1] = ((/* implicit */short) min((((/* implicit */long long int) min((min((((/* implicit */unsigned int) var_6)), (22U))), (((/* implicit */unsigned int) (unsigned short)24538))))), ((-(((((/* implicit */_Bool) 8U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (4942308697878779680LL)))))));
            var_13 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) arr_2 [20U])) : (((/* implicit */int) arr_1 [8U])))) >> (min((16U), (4018771232U)))));
            /* LoopSeq 2 */
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) /* same iter space */
            {
                arr_10 [i_0] [(short)0] [(unsigned char)18] [8U] |= ((/* implicit */unsigned int) arr_0 [i_1 + 1]);
                /* LoopNest 2 */
                for (unsigned char i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    for (signed char i_4 = 3; i_4 < 19; i_4 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned int) var_9);
                            arr_15 [i_4] [i_4] [i_0] [i_2] [i_0] [i_1] [i_0] = ((/* implicit */long long int) 4294967274U);
                        }
                    } 
                } 
                arr_16 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) min((min(((-(var_4))), (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)23507)), (var_0)))))), (((/* implicit */long long int) arr_3 [i_0] [i_1 + 1] [i_0]))));
                /* LoopNest 2 */
                for (unsigned int i_5 = 4; i_5 < 18; i_5 += 1) 
                {
                    for (short i_6 = 0; i_6 < 21; i_6 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned int) max((var_15), (((unsigned int) (-(((/* implicit */int) (unsigned char)29)))))));
                            var_16 -= ((/* implicit */unsigned short) ((min((((((/* implicit */_Bool) arr_23 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48229))) : (arr_4 [i_0]))), (((/* implicit */long long int) arr_22 [i_1 - 1] [i_1 - 1] [i_1 - 1])))) >= (((/* implicit */long long int) min((var_0), (((/* implicit */unsigned int) ((unsigned char) var_1))))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned char i_7 = 0; i_7 < 21; i_7 += 1) /* same iter space */
            {
                var_17 = ((/* implicit */long long int) ((unsigned char) var_8));
                /* LoopSeq 1 */
                for (unsigned int i_8 = 2; i_8 < 20; i_8 += 4) 
                {
                    var_18 -= ((/* implicit */short) 0ULL);
                    var_19 = ((/* implicit */unsigned short) var_8);
                    /* LoopSeq 2 */
                    for (long long int i_9 = 3; i_9 < 19; i_9 += 4) /* same iter space */
                    {
                        arr_31 [i_9 + 1] [i_7] [i_7] [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) (~(arr_9 [i_9 - 3] [i_8 - 1] [i_7])));
                        arr_32 [i_0] [i_7] [i_8] [i_9] = ((/* implicit */unsigned int) ((int) ((0LL) >= (((/* implicit */long long int) arr_3 [i_0] [i_1] [i_0])))));
                        arr_33 [i_0] [i_9 - 2] [i_8] [i_1 + 1] [i_1 + 1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65535))))) ? (arr_14 [i_0 + 4] [i_1 - 1] [i_0] [i_9 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0 + 2])))));
                        var_20 += ((/* implicit */short) ((((/* implicit */_Bool) 1628281516)) || (((/* implicit */_Bool) ((unsigned char) -4942308697878779681LL)))));
                    }
                    for (long long int i_10 = 3; i_10 < 19; i_10 += 4) /* same iter space */
                    {
                        arr_37 [i_7] [7U] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [17LL] [i_0] [i_0 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0 + 4]))) : (6427017527840668824LL)));
                        arr_38 [i_10] [i_8] [i_0] [i_1 + 1] [i_0] = ((/* implicit */short) var_9);
                        arr_39 [i_0] [i_0] [i_1] [i_7] [3U] [i_10] [i_10] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((unsigned int) 1256547481027628928LL)) : (arr_7 [i_8 - 1] [i_7] [i_0]));
                    }
                }
            }
        }
        for (unsigned short i_11 = 0; i_11 < 21; i_11 += 4) 
        {
            arr_42 [i_11] &= ((unsigned int) var_0);
            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) var_3))));
        }
    }
    for (long long int i_12 = 2; i_12 < 17; i_12 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_13 = 0; i_13 < 21; i_13 += 4) 
        {
            var_22 = ((/* implicit */unsigned long long int) var_2);
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 21; i_14 += 3) 
            {
                for (long long int i_15 = 1; i_15 < 20; i_15 += 3) 
                {
                    {
                        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) arr_29 [i_15] [i_14] [i_12] [i_12]))));
                        /* LoopSeq 1 */
                        for (unsigned short i_16 = 0; i_16 < 21; i_16 += 4) 
                        {
                            var_24 = ((/* implicit */short) ((unsigned int) arr_19 [i_13] [i_14] [i_15 - 1] [i_16]));
                            arr_55 [i_12] [i_12] = 867961144576748208LL;
                        }
                        /* LoopSeq 2 */
                        for (unsigned int i_17 = 0; i_17 < 21; i_17 += 2) /* same iter space */
                        {
                            var_25 = ((/* implicit */short) min((((arr_3 [i_12 - 1] [i_15 - 1] [i_12]) * (arr_3 [i_12 - 2] [i_15 - 1] [i_12]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_12 + 3] [i_15 - 1] [i_12])))))));
                            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) min((((/* implicit */long long int) var_10)), (4942308697878779699LL))))));
                            arr_58 [i_12] = ((/* implicit */short) ((unsigned char) min((min((2712626060U), (((/* implicit */unsigned int) (unsigned char)221)))), (((/* implicit */unsigned int) ((unsigned char) arr_51 [i_12] [i_15]))))));
                        }
                        for (unsigned int i_18 = 0; i_18 < 21; i_18 += 2) /* same iter space */
                        {
                            arr_62 [i_18] [i_12] [i_12] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_20 [i_14] [i_15 - 1] [i_12] [i_12])), (90571354615138048ULL)))) ? (var_8) : (min((((/* implicit */int) arr_24 [i_15] [i_15] [i_15 + 1] [i_15])), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)24)) : (((/* implicit */int) var_2))))))));
                            arr_63 [i_12] [i_13] [i_14] [i_14] [i_18] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_12 [i_12 + 1] [i_15 + 1]), (arr_12 [i_12 - 2] [i_15 - 1])))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) min((arr_46 [i_12 + 2] [i_12 - 2]), (arr_46 [i_12 + 1] [i_12 + 2]))))));
                            var_27 = ((/* implicit */signed char) ((((/* implicit */int) min((arr_2 [i_12]), (arr_2 [i_12])))) * (((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)21))) : (2942615631U))) == (var_10))))));
                            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)33))) | (arr_29 [i_18] [i_15] [14ULL] [i_12])))), ((~(arr_56 [i_12 + 4]))))), (((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) -1628281517)), (arr_45 [i_15]))), (((/* implicit */unsigned int) arr_46 [i_12 + 4] [i_15 - 1]))))))))));
                        }
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (unsigned long long int i_19 = 2; i_19 < 19; i_19 += 4) 
        {
            for (long long int i_20 = 0; i_20 < 21; i_20 += 4) 
            {
                {
                    arr_68 [i_12] [i_12] [i_12] = ((/* implicit */unsigned char) ((min((min((arr_21 [i_19]), (((/* implicit */long long int) 1628281502)))), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_3)), (var_10)))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_12])) ? (arr_44 [i_19] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_19 - 2] [i_20]))))))));
                    arr_69 [i_12] = ((/* implicit */signed char) min((((long long int) min((var_1), (((/* implicit */unsigned short) arr_50 [i_12] [i_19] [(unsigned char)5] [i_20]))))), ((-(210306711380694265LL)))));
                }
            } 
        } 
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_21 = 0; i_21 < 21; i_21 += 3) /* same iter space */
        {
            arr_72 [i_12] = ((/* implicit */unsigned int) ((arr_70 [i_12 + 2] [i_12] [i_12 + 3]) >= (((/* implicit */long long int) ((/* implicit */int) var_2)))));
            arr_73 [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(1628281517)))) ? (((/* implicit */int) (short)(-32767 - 1))) : (var_8)));
        }
        /* vectorizable */
        for (int i_22 = 0; i_22 < 21; i_22 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (short i_23 = 0; i_23 < 21; i_23 += 1) 
            {
                arr_80 [i_12] [(signed char)20] [i_23] = arr_19 [i_23] [i_23] [i_12 - 2] [i_12 - 2];
                arr_81 [i_12 + 2] [i_12] [i_12] [i_23] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_7 [i_12 - 2] [i_12] [i_12]))));
                arr_82 [i_12] [i_22] [i_12] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)-1)))))));
            }
            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) arr_9 [i_22] [(short)10] [(short)10]))));
            arr_83 [i_12] = ((/* implicit */unsigned char) ((short) arr_52 [i_12] [i_12] [i_12 - 2]));
            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) | (1582341221U)));
            /* LoopSeq 3 */
            for (unsigned char i_24 = 0; i_24 < 21; i_24 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned int i_25 = 0; i_25 < 21; i_25 += 4) 
                {
                    for (long long int i_26 = 0; i_26 < 21; i_26 += 3) 
                    {
                        {
                            arr_91 [i_12] [(unsigned short)4] [(unsigned short)4] [i_22] [i_12] = ((/* implicit */unsigned char) arr_27 [i_12 + 2]);
                            arr_92 [i_12] [i_25] [i_22] [i_22] [i_12] = ((/* implicit */signed char) ((arr_3 [i_12] [i_12 + 4] [i_12]) > (((/* implicit */unsigned int) arr_88 [i_12 - 1] [i_12 - 2] [10LL] [i_12]))));
                        }
                    } 
                } 
                arr_93 [i_12] [i_22] [i_22] = ((/* implicit */unsigned char) var_8);
                var_31 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? ((~(((/* implicit */int) arr_75 [i_24] [(unsigned char)2] [(unsigned char)2])))) : (((/* implicit */int) arr_1 [i_24]))));
                arr_94 [i_12] [i_12] [i_12] [i_24] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_0 [i_12 + 1]))));
            }
            for (long long int i_27 = 0; i_27 < 21; i_27 += 3) 
            {
                arr_97 [i_12 + 2] [i_12] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) (short)17)) ? (2665087324U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44313)))));
                var_32 = ((/* implicit */short) ((unsigned short) arr_67 [(unsigned short)7] [i_12] [i_12 + 3]));
                var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) ((((/* implicit */_Bool) arr_90 [i_12 + 4] [i_12 + 1] [(unsigned char)8])) ? (((unsigned long long int) var_4)) : (((/* implicit */unsigned long long int) (~(var_0)))))))));
                arr_98 [i_27] [i_12] [i_12] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(1544040621U)))) && (((/* implicit */_Bool) arr_0 [i_12 + 4]))));
            }
            for (unsigned long long int i_28 = 0; i_28 < 21; i_28 += 1) 
            {
                var_34 = ((/* implicit */long long int) (unsigned short)28171);
                var_35 = ((/* implicit */unsigned int) var_7);
            }
        }
        for (int i_29 = 0; i_29 < 21; i_29 += 3) /* same iter space */
        {
            var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_9 [i_29] [i_29] [i_12 - 1])))) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_43 [2U])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_22 [4LL] [15U] [(unsigned short)15]))))), (((var_4) / (((/* implicit */long long int) ((/* implicit */int) var_3))))))) : (min((((/* implicit */long long int) var_10)), (arr_87 [i_12 + 3] [i_12 + 4] [i_12 + 2] [20U]))))))));
            var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) var_9))));
            var_38 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) min((((/* implicit */short) arr_90 [13U] [i_12] [i_12])), (var_6)))) ? (var_0) : (3265215905U))), (((/* implicit */unsigned int) min((((/* implicit */short) (unsigned char)2)), (var_6))))));
            arr_104 [i_12] [i_12] = ((/* implicit */long long int) ((int) min((10107003), (((/* implicit */int) var_2)))));
        }
        arr_105 [16LL] |= var_0;
    }
    for (long long int i_30 = 2; i_30 < 17; i_30 += 1) /* same iter space */
    {
        arr_108 [i_30] = ((/* implicit */unsigned char) var_9);
        arr_109 [i_30] &= ((short) ((((/* implicit */_Bool) arr_24 [i_30 - 2] [i_30 - 2] [7U] [i_30 - 2])) ? (((/* implicit */int) arr_24 [i_30 + 1] [i_30] [i_30] [i_30 - 1])) : (((/* implicit */int) var_7))));
        var_39 -= ((/* implicit */unsigned long long int) arr_9 [i_30] [i_30] [i_30]);
        var_40 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) arr_40 [(unsigned char)10] [i_30 + 2] [(unsigned char)10])) <= (((/* implicit */int) arr_40 [4U] [i_30 + 2] [4U])))))));
        var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)0)) : (arr_85 [i_30] [i_30 - 1] [i_30 + 1] [i_30])))), (arr_60 [i_30] [i_30] [16U] [i_30] [i_30]))))));
    }
    var_42 = ((/* implicit */unsigned char) var_8);
    var_43 = ((/* implicit */unsigned int) ((unsigned char) (-((~(524287ULL))))));
}
