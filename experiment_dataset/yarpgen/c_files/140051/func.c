/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140051
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
    var_17 = ((/* implicit */signed char) ((((unsigned int) (!(((/* implicit */_Bool) var_7))))) % (((/* implicit */unsigned int) ((/* implicit */int) max(((_Bool)1), ((_Bool)0)))))));
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) var_0))) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
    var_19 = ((/* implicit */unsigned int) var_6);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) var_2);
        var_20 |= ((/* implicit */_Bool) 352486488);
        arr_4 [i_0] = ((_Bool) ((((/* implicit */_Bool) min((var_0), (arr_2 [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)74)))))) : (6U)));
        var_21 = ((((var_13) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) var_12)))) >= (((((/* implicit */int) arr_0 [i_0])) >> (((/* implicit */int) var_5)))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 1; i_1 < 21; i_1 += 1) 
    {
        var_22 = ((/* implicit */_Bool) ((arr_8 [i_1 + 1]) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) >> (((/* implicit */int) arr_1 [i_1] [i_1]))))) : (arr_5 [i_1 - 1])));
        var_23 = ((/* implicit */unsigned int) arr_6 [i_1]);
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_24 += ((/* implicit */unsigned char) var_15);
            var_25 = ((arr_9 [i_2] [i_2]) == (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))));
            arr_13 [i_1] [i_2] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [i_1 + 1]))) == (arr_10 [i_1 - 1]));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned char i_4 = 0; i_4 < 22; i_4 += 1) 
            {
                for (unsigned int i_5 = 1; i_5 < 20; i_5 += 1) 
                {
                    for (int i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */_Bool) (+((+(2147483647)))));
                            arr_24 [i_3] [i_3] = ((/* implicit */int) 9223372036854775807LL);
                        }
                    } 
                } 
            } 
            var_27 += ((/* implicit */unsigned int) arr_19 [i_1 + 1] [i_3] [i_1]);
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
        {
            arr_27 [i_1] [i_1] [i_1] = (+(arr_10 [i_1 - 1]));
            arr_28 [i_7] [i_1] = ((/* implicit */_Bool) arr_11 [i_7] [18] [i_1]);
        }
    }
    for (long long int i_8 = 0; i_8 < 19; i_8 += 3) 
    {
        /* LoopSeq 3 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_10 = 0; i_10 < 19; i_10 += 1) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) (((+(arr_10 [i_11]))) == (((arr_19 [i_11] [i_11] [i_11]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_10 [i_8]))))))));
                        var_29 += ((/* implicit */_Bool) ((signed char) arr_31 [i_9]));
                        var_30 = ((/* implicit */unsigned int) max((((((/* implicit */int) arr_12 [i_8] [i_8] [i_8])) != (((/* implicit */int) arr_12 [i_8] [i_9] [i_9])))), (((_Bool) (!(arr_0 [i_8]))))));
                        arr_40 [i_8] [i_9] [i_10] [i_9] [i_11] = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_8] [i_8] [i_9] [i_10] [i_9]))))) >= (min((arr_39 [i_8] [i_8] [i_9] [i_10] [i_9]), (arr_39 [i_9] [i_11] [i_10] [i_9] [i_9])))));
                        arr_41 [i_10] [i_9] [i_10] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_7))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_22 [i_11] [i_9] [i_11] [i_11] [i_11]))))) : (((((/* implicit */_Bool) arr_34 [i_8])) ? (arr_34 [i_8]) : (arr_34 [i_9])))));
                    }
                } 
            } 
            arr_42 [i_9] [i_9] [i_9] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)22))) == (((unsigned int) arr_31 [i_8])))))));
        }
        for (int i_12 = 0; i_12 < 19; i_12 += 1) 
        {
            arr_47 [i_8] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((arr_16 [i_12] [(unsigned char)18] [(unsigned char)18] [i_8]) == (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_8] [i_12])))))) ^ (((/* implicit */int) (unsigned char)179)))))));
            var_31 = ((/* implicit */int) var_14);
            /* LoopNest 2 */
            for (unsigned char i_13 = 0; i_13 < 19; i_13 += 1) 
            {
                for (int i_14 = 0; i_14 < 19; i_14 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_15 = 1; i_15 < 16; i_15 += 3) 
                        {
                            var_32 = max((((((/* implicit */_Bool) arr_11 [i_15 + 3] [i_13] [i_15 + 1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_11 [i_15 + 2] [i_13] [i_15 + 2])))), (((((/* implicit */int) ((((/* implicit */int) (_Bool)0)) == (-2147483647)))) & (arr_48 [i_15] [i_14] [i_12] [i_8]))));
                            var_33 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_22 [i_15 + 2] [(_Bool)1] [i_15] [i_15 + 2] [i_15]) ? (((/* implicit */int) arr_22 [i_15 - 1] [12LL] [i_15] [i_15 + 2] [i_15])) : (((/* implicit */int) arr_22 [i_15 + 3] [20] [i_15] [i_15 + 1] [i_15]))))) ? ((-(((/* implicit */int) arr_22 [i_15 + 3] [14U] [i_15] [i_15 + 1] [i_15])))) : (((/* implicit */int) max((var_12), (arr_22 [i_15 + 2] [(_Bool)1] [i_15] [i_15 + 3] [i_15]))))));
                            var_34 = ((/* implicit */signed char) min((((long long int) ((((/* implicit */int) var_4)) >> (((/* implicit */int) var_4))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) >= (((((/* implicit */unsigned int) var_8)) % (arr_25 [i_8]))))))));
                            var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) ((int) arr_12 [i_13] [i_12] [i_8])))));
                            arr_56 [i_13] [i_12] = ((((/* implicit */int) (((~(var_15))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_4))))))) >> (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (arr_36 [i_14]))));
                        }
                        var_36 *= ((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_6 [i_13])))) * (((((/* implicit */int) (!((_Bool)1)))) * ((~(((/* implicit */int) var_13)))))));
                        /* LoopSeq 1 */
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            var_37 = ((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) arr_49 [i_16] [i_14] [i_13] [i_8])))));
                            arr_60 [i_8] [i_8] [i_8] [i_13] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775807LL)) ? (((/* implicit */int) var_7)) : (((int) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) arr_23 [i_13] [i_13] [i_13] [i_13] [i_13])) ? (((/* implicit */long long int) 1487569431U)) : (arr_23 [i_8] [i_8] [i_8] [i_13] [i_8]))));
                            arr_61 [i_13] [i_12] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) var_3)))));
                            var_38 = ((/* implicit */int) min(((-(((unsigned int) arr_51 [i_8] [i_8] [i_8] [i_8])))), (((((/* implicit */_Bool) ((((/* implicit */int) var_14)) / (arr_18 [i_16] [i_12])))) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_14))))) : (arr_49 [i_14] [i_14] [i_14] [i_14])))));
                        }
                        arr_62 [i_8] [i_8] [i_13] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_6 [i_12]) ? (((/* implicit */int) arr_6 [i_14])) : (((/* implicit */int) arr_6 [i_12]))))) && ((!((_Bool)0)))));
                        var_39 |= ((/* implicit */unsigned int) var_14);
                    }
                } 
            } 
        }
        for (unsigned int i_17 = 0; i_17 < 19; i_17 += 1) 
        {
            arr_67 [i_8] [i_17] [i_17] = ((/* implicit */_Bool) 2147483647);
            var_40 = ((/* implicit */int) min((var_40), (((/* implicit */int) (!(((/* implicit */_Bool) ((max((arr_19 [i_17] [i_17] [i_8]), ((_Bool)0))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_8] [i_8])) && (arr_12 [i_8] [i_17] [i_17])))) : (min((arr_18 [i_8] [i_17]), (var_8)))))))))));
        }
        /* LoopSeq 2 */
        for (unsigned int i_18 = 0; i_18 < 19; i_18 += 3) 
        {
            var_41 = ((/* implicit */unsigned char) max((((/* implicit */int) ((arr_69 [i_8]) < (arr_51 [i_8] [i_8] [i_8] [i_8])))), (((((/* implicit */int) arr_1 [i_8] [i_18])) & (((((/* implicit */int) arr_53 [i_8] [i_18] [i_8] [(_Bool)1])) ^ (arr_18 [i_8] [i_18])))))));
            arr_70 [i_18] [i_8] = ((((((/* implicit */int) arr_52 [16LL])) % (((/* implicit */int) arr_52 [(_Bool)1])))) >> (((((/* implicit */int) arr_0 [i_18])) ^ (((/* implicit */int) arr_37 [(_Bool)1])))));
        }
        for (unsigned char i_19 = 0; i_19 < 19; i_19 += 1) 
        {
            var_42 = ((/* implicit */int) ((min((((/* implicit */unsigned int) ((_Bool) (_Bool)1))), (arr_38 [i_19] [i_19] [i_19] [i_19]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_48 [i_19] [i_19] [i_19] [i_8])) || (((/* implicit */_Bool) 2147483647)))))))));
            arr_74 [i_19] [i_8] [i_19] = ((/* implicit */unsigned char) min((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_31 [i_19])), (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) * (4294967292U)))))), (max((((/* implicit */long long int) arr_65 [i_19] [i_8])), (-9223372036854775788LL)))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (unsigned int i_20 = 1; i_20 < 17; i_20 += 3) 
            {
                var_43 = ((/* implicit */_Bool) (+(arr_38 [i_20 - 1] [i_20 - 1] [i_20] [i_20])));
                var_44 = ((/* implicit */long long int) ((arr_25 [i_20 + 1]) >= (arr_25 [i_20 - 1])));
                var_45 = ((((/* implicit */int) arr_11 [i_8] [i_19] [i_20 + 2])) & (((/* implicit */int) ((var_4) && ((_Bool)1)))));
                arr_77 [i_8] [i_19] [i_20] = ((arr_17 [i_20] [i_20 + 1]) != (((/* implicit */int) arr_1 [i_20 + 2] [i_20 + 2])));
                var_46 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_22 [i_8] [i_19] [i_20] [i_20 - 1] [i_20]))));
            }
            for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
            {
                var_47 = ((/* implicit */int) max((var_47), (((/* implicit */int) var_12))));
                arr_81 [i_19] = ((/* implicit */int) (((+(arr_15 [i_21 - 1]))) == (((int) (signed char)-107))));
            }
            for (unsigned char i_22 = 0; i_22 < 19; i_22 += 3) /* same iter space */
            {
                arr_85 [i_19] [i_19] [i_19] [i_22] = (i_19 % 2 == 0) ? (((/* implicit */unsigned char) max((((((((/* implicit */int) var_1)) + (2147483647))) >> (((arr_16 [i_8] [i_8] [i_19] [i_22]) - (5663109503098918439LL))))), ((+(arr_83 [i_19] [i_22])))))) : (((/* implicit */unsigned char) max((((((((/* implicit */int) var_1)) + (2147483647))) >> (((((arr_16 [i_8] [i_8] [i_19] [i_22]) - (5663109503098918439LL))) + (7951325657926296495LL))))), ((+(arr_83 [i_19] [i_22]))))));
                arr_86 [i_8] [i_19] [i_22] [i_22] = ((/* implicit */long long int) ((signed char) (+(arr_36 [i_19]))));
                /* LoopNest 2 */
                for (unsigned char i_23 = 0; i_23 < 19; i_23 += 1) 
                {
                    for (unsigned int i_24 = 0; i_24 < 19; i_24 += 1) 
                    {
                        {
                            var_48 = ((/* implicit */long long int) (~(max((var_2), (((/* implicit */unsigned int) arr_17 [i_23] [i_24]))))));
                            arr_92 [i_19] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
                arr_93 [i_8] [i_19] [i_19] [i_19] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_68 [i_8] [i_8] [i_8]))) | (arr_14 [i_19] [i_22] [i_22])))) & (max((1948463034438645422LL), (((/* implicit */long long int) arr_36 [i_8]))))));
            }
            for (unsigned char i_25 = 0; i_25 < 19; i_25 += 3) /* same iter space */
            {
                arr_97 [i_8] [i_19] [i_19] [i_25] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_51 [i_8] [i_19] [i_25] [i_8]), (arr_34 [i_8]))))));
                /* LoopNest 2 */
                for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                {
                    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                    {
                        {
                            arr_102 [i_19] [i_25] = ((/* implicit */unsigned int) ((((/* implicit */int) (!((!(((/* implicit */_Bool) arr_75 [i_8] [i_19] [i_8]))))))) >> ((~((-(((/* implicit */int) arr_1 [i_8] [i_8]))))))));
                            var_49 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_101 [i_27] [i_19] [(_Bool)1] [i_26] [i_27] [i_19]) % (var_8)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_20 [i_8] [i_25] [i_25] [i_26]))))) : (min((((/* implicit */unsigned int) (unsigned char)118)), (var_15))))))));
                        }
                    } 
                } 
            }
        }
        var_50 = ((((((/* implicit */int) max((arr_37 [0]), ((_Bool)1)))) == (((/* implicit */int) var_6)))) ? (((/* implicit */int) ((signed char) 4180819625U))) : (((/* implicit */int) var_11)));
        var_51 = ((/* implicit */signed char) max((var_51), (((/* implicit */signed char) (+(((((arr_88 [i_8] [(signed char)18] [i_8] [i_8]) != (((/* implicit */int) (_Bool)0)))) ? (((/* implicit */int) arr_98 [8U])) : (((/* implicit */int) ((arr_76 [2U] [i_8] [i_8]) == (((/* implicit */int) var_6))))))))))));
    }
}
