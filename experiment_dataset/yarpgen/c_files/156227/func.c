/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156227
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
    var_10 = ((((/* implicit */_Bool) -5188234847289930114LL)) ? (((long long int) (+(3347210910U)))) : (((/* implicit */long long int) var_2)));
    var_11 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) > (var_2)));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            var_12 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) arr_3 [i_1] [i_1])))));
            /* LoopSeq 2 */
            for (unsigned int i_2 = 2; i_2 < 13; i_2 += 3) /* same iter space */
            {
                arr_6 [i_1] = var_5;
                var_13 = ((/* implicit */unsigned int) ((signed char) ((((_Bool) var_5)) || (((/* implicit */_Bool) var_4)))));
            }
            for (unsigned int i_3 = 2; i_3 < 13; i_3 += 3) /* same iter space */
            {
                arr_9 [i_0] [i_1] [i_3] [i_1] = ((((/* implicit */_Bool) arr_2 [i_3])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0]))))) : (var_2));
                var_14 *= ((/* implicit */_Bool) ((arr_5 [i_0] [i_0] [12LL] [i_3 + 2]) ? (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_3 + 2] [13U] [i_0] [i_0])) >> (((/* implicit */int) arr_5 [(short)4] [i_1 + 1] [i_1] [i_1]))))) : (max((var_6), (((/* implicit */long long int) arr_5 [i_0] [i_3] [i_3] [i_1 + 1]))))));
                arr_10 [i_1] [i_1] = ((/* implicit */signed char) var_9);
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (long long int i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        {
                            arr_17 [i_0] [i_1 + 1] [i_1] [i_3 + 2] [10U] [0U] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_0] [12U] [i_4])) >= (((/* implicit */int) (signed char)-92))));
                            var_15 = var_1;
                            var_16 = var_6;
                            var_17 -= ((/* implicit */unsigned int) max((((/* implicit */long long int) (~(var_5)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_3 - 2] [i_3 + 3] [i_3] [i_3 - 1] [i_3] [i_3]))) : (arr_13 [i_3 + 3] [(short)8] [i_3 + 3] [i_3 - 1] [i_3])))));
                            var_18 = ((/* implicit */unsigned long long int) min(((signed char)91), (((/* implicit */signed char) (_Bool)1))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */signed char) 14860080613911916050ULL);
            }
            var_20 = ((/* implicit */unsigned long long int) (~(((arr_12 [i_0]) - (((/* implicit */long long int) arr_4 [i_1] [i_1 - 1]))))));
        }
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            arr_21 [i_6] = ((arr_12 [i_0]) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-92))) * (arr_2 [i_0]))))))));
            arr_22 [i_0] [i_0] [i_0] = (((~(arr_4 [10ULL] [10ULL]))) * (var_5));
            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-98)) ^ (((/* implicit */int) arr_3 [(signed char)8] [i_6]))))) ? (arr_11 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)105)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_19 [(short)9] [i_6] [i_6]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-101))) : (var_1))))))) : (((/* implicit */int) (signed char)105)))))));
        }
        /* LoopNest 3 */
        for (long long int i_7 = 0; i_7 < 16; i_7 += 2) 
        {
            for (signed char i_8 = 1; i_8 < 14; i_8 += 1) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        var_22 &= ((/* implicit */short) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_20 [i_8] [i_7]))))), (((unsigned int) arr_12 [i_0]))));
                        var_23 = ((/* implicit */long long int) var_3);
                    }
                } 
            } 
        } 
        arr_29 [i_0] = ((/* implicit */long long int) (+(max((arr_20 [i_0] [i_0]), (var_2)))));
    }
    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
    {
        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_9)) ? (var_7) : (var_5))), (((/* implicit */unsigned int) ((arr_23 [i_10] [i_10 - 1]) && (((/* implicit */_Bool) var_9)))))))) ? (((unsigned int) var_6)) : (var_4)));
        /* LoopNest 2 */
        for (unsigned int i_11 = 1; i_11 < 9; i_11 += 2) 
        {
            for (unsigned int i_12 = 0; i_12 < 11; i_12 += 3) 
            {
                {
                    var_25 = ((/* implicit */_Bool) max((((/* implicit */int) max((arr_25 [i_10 - 1]), (arr_25 [i_10 - 1])))), (((((/* implicit */int) arr_25 [i_10 - 1])) << (((/* implicit */int) arr_25 [i_10 - 1]))))));
                    arr_38 [i_10] [i_11] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) arr_27 [i_11 + 2] [i_11 + 1])) == (((/* implicit */int) arr_32 [i_10] [i_10 - 1])))))));
                }
            } 
        } 
        arr_39 [i_10] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) 2563976985953266283LL)) ? (arr_12 [i_10 - 1]) : (((/* implicit */long long int) var_4)))));
    }
    /* vectorizable */
    for (long long int i_13 = 0; i_13 < 20; i_13 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_14 = 0; i_14 < 20; i_14 += 2) 
        {
            for (long long int i_15 = 0; i_15 < 20; i_15 += 1) 
            {
                {
                    var_26 = ((/* implicit */unsigned char) ((unsigned int) arr_41 [i_14]));
                    arr_49 [i_13] [i_14] [i_15] [i_14] = ((/* implicit */_Bool) (+((-(((/* implicit */int) arr_43 [i_15] [i_13]))))));
                }
            } 
        } 
        arr_50 [i_13] = var_0;
        arr_51 [i_13] = ((/* implicit */unsigned char) 1U);
        arr_52 [i_13] &= ((unsigned long long int) arr_44 [i_13] [i_13]);
        arr_53 [i_13] = ((/* implicit */signed char) var_1);
    }
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_17 = 0; i_17 < 21; i_17 += 1) /* same iter space */
        {
            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_8))) != (-8903332115699666792LL))) ? (max((8903332115699666804LL), (((/* implicit */long long int) (signed char)89)))) : (((/* implicit */long long int) arr_56 [i_16]))))) ? (min((((((/* implicit */unsigned long long int) arr_57 [i_16])) - (14829342582931815489ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_57 [i_17])) && (((/* implicit */_Bool) var_2))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (8903332115699666806LL) : (((/* implicit */long long int) ((var_4) << (((4658354163181687044LL) - (4658354163181687030LL)))))))))));
            /* LoopSeq 3 */
            for (long long int i_18 = 0; i_18 < 21; i_18 += 2) /* same iter space */
            {
                var_28 = ((/* implicit */short) (+(((((3516327030U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_58 [i_16] [i_16] [i_16]))))) + (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-124)))))))));
                arr_60 [i_16] [(short)1] [(short)1] [i_18] = ((/* implicit */long long int) ((((/* implicit */_Bool) 131071U)) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) (short)13016))))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_55 [i_17] [i_16])) || (((/* implicit */_Bool) (-(16386824179960689075ULL)))))))));
            }
            for (long long int i_19 = 0; i_19 < 21; i_19 += 2) /* same iter space */
            {
                var_29 = var_4;
                /* LoopSeq 2 */
                for (short i_20 = 0; i_20 < 21; i_20 += 1) 
                {
                    var_30 = ((/* implicit */long long int) var_0);
                    /* LoopSeq 1 */
                    for (unsigned int i_21 = 0; i_21 < 21; i_21 += 4) 
                    {
                        arr_67 [i_16] [i_16] [i_16] [i_16] = ((/* implicit */unsigned long long int) 8903332115699666791LL);
                        arr_68 [i_16] = ((arr_61 [i_20] [i_20]) >= ((+(arr_61 [i_17] [i_21]))));
                    }
                }
                for (long long int i_22 = 0; i_22 < 21; i_22 += 2) 
                {
                    arr_71 [i_16] [7U] [i_19] [(signed char)12] = ((/* implicit */unsigned long long int) ((unsigned char) ((unsigned int) var_5)));
                    arr_72 [i_19] [i_19] = ((/* implicit */long long int) var_3);
                    var_31 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) arr_70 [i_22] [i_19] [14U] [(unsigned char)2]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_54 [i_16]))))) : (((/* implicit */int) arr_58 [i_22] [i_19] [i_16]))))));
                }
                arr_73 [i_16] [i_17] [i_19] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) && (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (-8903332115699666809LL))))));
                var_32 = ((/* implicit */short) arr_66 [i_16] [i_17] [(unsigned char)5]);
                var_33 = ((((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))) - (((unsigned int) arr_55 [i_17] [i_19])));
            }
            for (unsigned char i_23 = 0; i_23 < 21; i_23 += 2) 
            {
                arr_76 [i_16] [i_16] [i_16] [i_16] = ((/* implicit */unsigned int) (_Bool)1);
                var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) -8903332115699666804LL)))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) + (var_7)))));
                /* LoopNest 2 */
                for (unsigned int i_24 = 0; i_24 < 21; i_24 += 3) 
                {
                    for (_Bool i_25 = 0; i_25 < 0; i_25 += 1) 
                    {
                        {
                            var_35 += ((/* implicit */unsigned long long int) (-(var_6)));
                            var_36 = ((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_7)))) - ((~(arr_83 [(signed char)2] [4LL] [(signed char)2] [i_24] [i_25] [i_24])))))));
                            var_37 = ((/* implicit */unsigned long long int) arr_80 [i_16] [i_17] [i_23] [i_16] [i_25 + 1] [i_25 + 1]);
                        }
                    } 
                } 
            }
            var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) max((((/* implicit */long long int) ((unsigned int) arr_75 [(short)12] [i_17] [i_17] [i_17]))), (((144114913197948928LL) / (((/* implicit */long long int) ((/* implicit */int) (short)17941))))))))));
            var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((arr_77 [i_16] [4U] [i_16] [(_Bool)1]) << (((((/* implicit */int) var_0)) - (5748)))))))) ? (((var_3) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_64 [i_16] [i_17] [i_17]))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) ((short) var_8))))))));
        }
        for (unsigned int i_26 = 0; i_26 < 21; i_26 += 1) /* same iter space */
        {
            var_40 = ((/* implicit */_Bool) (~(arr_77 [i_16] [(_Bool)1] [i_26] [i_26])));
            var_41 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((_Bool) arr_74 [i_16] [i_26]))), (((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */long long int) 3082520573U))))));
        }
        var_42 = ((/* implicit */unsigned long long int) (~((-(((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_59 [i_16] [i_16] [i_16])))))))));
        var_43 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) : (((((((/* implicit */_Bool) 1597296070U)) || ((_Bool)1))) ? (-8903332115699666806LL) : (((/* implicit */long long int) max((arr_81 [(_Bool)1] [i_16] [i_16] [i_16] [i_16]), (((/* implicit */unsigned int) (_Bool)1)))))))));
        arr_87 [i_16] = ((/* implicit */long long int) max((((/* implicit */unsigned int) min(((~(((/* implicit */int) arr_58 [i_16] [i_16] [i_16])))), ((-(((/* implicit */int) (_Bool)0))))))), (((((unsigned int) arr_82 [i_16] [i_16])) / (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_54 [i_16]))))))));
        arr_88 [i_16] [(signed char)15] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) arr_61 [i_16] [i_16])) ? (var_6) : (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) (-(var_2))))))));
    }
}
