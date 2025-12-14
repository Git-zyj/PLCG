/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158431
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
    var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) max((((long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_2)) : (var_7)))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_5)), (var_2)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */int) var_1))))) : (var_9)))))))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (1962868321U)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_3)) == (arr_0 [i_0] [(_Bool)1]))))) : (arr_0 [i_0] [i_0 + 1]))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) var_3)))))) >= (((var_0) ? (((/* implicit */long long int) arr_1 [i_0])) : (arr_0 [2] [i_0 - 1])))))))))));
        var_12 *= ((/* implicit */int) (_Bool)1);
    }
    for (int i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        arr_4 [i_1] = ((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) -965475556)), (-4829864320795613691LL)))) ? (arr_2 [i_1] [i_1]) : (((/* implicit */int) arr_3 [i_1]))))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) 908134326)) ? (var_7) : (((/* implicit */long long int) arr_2 [i_1] [i_1]))))) ? (((arr_3 [i_1]) ? (4829864320795613699LL) : (((/* implicit */long long int) arr_2 [i_1] [i_1])))) : (((/* implicit */long long int) min((var_5), (((/* implicit */int) var_0))))))));
        var_13 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_2 [i_1] [i_1]), (((arr_3 [i_1]) ? (arr_2 [i_1] [i_1]) : (var_6)))))) ? (268778397) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_3 [i_1])) : (2147483647)))) ? (((/* implicit */int) arr_3 [i_1])) : (min((arr_2 [i_1] [i_1]), (-712534437)))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_14 -= ((/* implicit */int) ((arr_9 [i_2] [i_2] [i_2]) << (((((((var_1) ? (((/* implicit */long long int) var_2)) : (arr_7 [3] [3]))) + (1962428516007995395LL))) - (17LL)))));
            arr_10 [i_2] [18LL] [i_2] &= ((/* implicit */unsigned int) arr_9 [i_2] [i_2] [16]);
        }
        for (long long int i_4 = 3; i_4 < 20; i_4 += 1) 
        {
            var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [19U] [i_2])) ? (var_8) : (((/* implicit */long long int) arr_5 [i_2] [i_4 - 3]))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_6 [i_4])) : (((/* implicit */int) var_0)))) : (max((var_4), (-1)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_7 [i_2] [(_Bool)1]) ^ (((/* implicit */long long int) var_5))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [22U] [(_Bool)1])) ? (-986591463) : (((/* implicit */int) arr_6 [i_2]))))) : (min((((/* implicit */unsigned int) 1523926067)), (var_9)))))) : (((((/* implicit */_Bool) ((long long int) 4050812752U))) ? (((((/* implicit */_Bool) var_8)) ? (arr_8 [i_2]) : (((/* implicit */long long int) 3846668089U)))) : (((/* implicit */long long int) arr_5 [i_4 + 3] [i_4 - 3])))))))));
            var_16 = ((/* implicit */unsigned int) 268778424);
            var_17 *= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2122157123)) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) 1683109146)), (arr_5 [i_2] [i_2])))) : (max((((/* implicit */long long int) arr_6 [i_4 - 2])), (arr_8 [i_2])))))) && (((/* implicit */_Bool) 2147483647))));
            var_18 ^= ((/* implicit */int) (((~(((arr_6 [i_2]) ? (arr_7 [18] [2U]) : (((/* implicit */long long int) -1252860566)))))) << (((/* implicit */int) ((((((/* implicit */_Bool) arr_12 [i_2])) ? (((/* implicit */long long int) 3792835408U)) : (var_8))) == (((/* implicit */long long int) var_2)))))));
            /* LoopSeq 1 */
            for (int i_5 = 0; i_5 < 23; i_5 += 2) 
            {
                var_19 = ((/* implicit */int) arr_11 [i_4] [i_4] [(_Bool)1]);
                var_20 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_14 [i_4])) ? (arr_14 [i_4]) : (arr_14 [i_4]))) << (((min((arr_13 [i_4 + 2] [2LL]), (arr_13 [i_4 + 1] [i_4 + 2]))) + (201559449)))));
                arr_15 [i_5] |= ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) max(((~(((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) 15U)) ? (((/* implicit */int) (_Bool)1)) : (-2122157123)))))) : (min((((((/* implicit */_Bool) arr_8 [i_2])) ? (-4829864320795613691LL) : (((/* implicit */long long int) arr_13 [0] [0])))), (((long long int) var_3))))));
            }
        }
        for (long long int i_6 = 3; i_6 < 20; i_6 += 3) 
        {
            /* LoopNest 2 */
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                for (int i_8 = 0; i_8 < 23; i_8 += 4) 
                {
                    {
                        arr_25 [i_6] [0LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_17 [i_6 + 2] [i_6]) ? (((/* implicit */int) arr_17 [i_6 + 2] [i_6])) : (((/* implicit */int) arr_17 [i_6 + 3] [i_6]))))) ? (((/* implicit */int) ((_Bool) -3682403261394024770LL))) : (((/* implicit */int) min((arr_17 [i_6 - 2] [i_6]), (arr_17 [i_6 - 1] [i_6]))))));
                        var_21 += ((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_2] [i_2] [(_Bool)1] [(_Bool)1])) ? (max((((/* implicit */long long int) (-(-762881508)))), (arr_7 [i_6] [i_6 + 2]))) : (((min((((/* implicit */long long int) arr_6 [i_7])), (arr_7 [(_Bool)1] [i_8]))) * (min((((/* implicit */long long int) var_0)), (4829864320795613688LL)))))));
                        var_22 -= ((/* implicit */unsigned int) (~(((arr_7 [i_2] [i_2]) + (((/* implicit */long long int) (-(67104768))))))));
                        var_23 = ((unsigned int) ((arr_17 [i_6] [i_6]) ? (((((/* implicit */_Bool) arr_11 [i_6] [18U] [i_6])) ? (((/* implicit */unsigned int) var_5)) : (arr_22 [i_8] [i_8] [8] [i_8]))) : (((/* implicit */unsigned int) 4095))));
                    }
                } 
            } 
            var_24 = ((/* implicit */int) ((unsigned int) min((((/* implicit */unsigned int) arr_18 [i_2] [i_6 - 3] [i_6 - 2] [i_2])), (var_9))));
        }
        for (int i_9 = 1; i_9 < 21; i_9 += 1) 
        {
            var_25 |= ((/* implicit */_Bool) ((arr_5 [i_2] [i_9 - 1]) * (min((((/* implicit */unsigned int) ((int) var_2))), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (var_3)))))));
            var_26 -= ((/* implicit */long long int) arr_16 [6] [i_9 - 1]);
            arr_29 [i_2] [i_2] = ((/* implicit */int) (~(((((/* implicit */_Bool) ((arr_17 [i_2] [22]) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (((((/* implicit */_Bool) -1595265551)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_3))) : (((/* implicit */unsigned int) ((int) var_8)))))));
        }
        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(3687502869U)))) ? (((/* implicit */int) ((((/* implicit */long long int) (((_Bool)0) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) < (((9223372036854775807LL) - (arr_12 [i_2])))))) : (var_6)));
        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((int) arr_17 [i_2] [22])))));
    }
    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
    {
        var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) (~((+(arr_27 [i_10 - 1] [i_10 - 1]))))))));
        var_30 = ((/* implicit */_Bool) arr_27 [i_10] [i_10]);
        arr_33 [14] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((arr_3 [i_10 - 1]) ? (8359364787399504121LL) : (((/* implicit */long long int) 1048575))))) && (((arr_22 [i_10] [i_10] [i_10] [i_10 - 1]) < (arr_26 [i_10 - 1] [i_10 - 1]))))) ? (arr_30 [11]) : (max((8064), (arr_28 [i_10 - 1] [i_10 - 1])))));
        var_31 *= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((int) (((-9223372036854775807LL - 1LL)) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) < (max((((/* implicit */long long int) ((((/* implicit */long long int) arr_13 [i_10] [i_10 - 1])) <= (-7727439482608875648LL)))), (((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */long long int) var_3))))))));
    }
    var_32 = ((/* implicit */int) var_3);
    var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (var_6))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) > (var_2))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((var_7), (((/* implicit */long long int) var_3)))))))) : (((((/* implicit */int) var_0)) * (((/* implicit */int) var_0)))))))));
    /* LoopNest 3 */
    for (long long int i_11 = 3; i_11 < 14; i_11 += 2) 
    {
        for (int i_12 = 0; i_12 < 16; i_12 += 3) 
        {
            for (unsigned int i_13 = 0; i_13 < 16; i_13 += 1) 
            {
                {
                    arr_43 [i_11] = ((/* implicit */_Bool) max((((/* implicit */long long int) min((-1199531768), (((/* implicit */int) ((1595265567) == (((/* implicit */int) arr_34 [i_11 - 1])))))))), (((long long int) ((int) 67076096U)))));
                    var_34 *= ((/* implicit */_Bool) arr_22 [i_11 - 2] [i_11 - 1] [i_11 - 2] [i_11 - 1]);
                    /* LoopSeq 2 */
                    for (unsigned int i_14 = 0; i_14 < 16; i_14 += 3) 
                    {
                        var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (arr_37 [i_13] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((/* implicit */long long int) (((_Bool)1) ? (var_6) : (((/* implicit */int) var_1))))) : (arr_9 [i_12] [11] [i_12])))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294921227212756076LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_12]))) : (arr_27 [i_11 + 1] [i_11 + 1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_48 [i_11] [(_Bool)0] [i_15] [i_14] [i_15] [(_Bool)0] [i_15])) && (((/* implicit */_Bool) 1133498579)))))) : (arr_27 [i_11] [i_11 - 3])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [4])) ? (var_6) : (arr_49 [i_11] [i_12] [i_13])))) ? (((/* implicit */long long int) arr_16 [22U] [22U])) : (((((/* implicit */_Bool) arr_13 [(_Bool)1] [(_Bool)1])) ? (var_8) : (var_8)))))))))));
                            var_37 = ((/* implicit */unsigned int) arr_38 [i_13]);
                            var_38 -= ((/* implicit */unsigned int) arr_30 [3]);
                            var_39 = ((/* implicit */int) max((var_39), (((((/* implicit */_Bool) max((((/* implicit */long long int) 191518149)), (arr_41 [i_11] [i_12] [i_11] [(_Bool)1])))) ? (((((arr_47 [9] [3U]) <= (-1048576))) ? (((/* implicit */int) ((((/* implicit */_Bool) 1570686753U)) && (((/* implicit */_Bool) arr_48 [i_11] [6U] [6U] [0LL] [i_15] [i_11 - 3] [2U]))))) : (((/* implicit */int) ((((/* implicit */_Bool) -163171473)) && (((/* implicit */_Bool) -1705666975))))))) : (((/* implicit */int) arr_3 [i_11]))))));
                        }
                        var_40 = ((/* implicit */int) ((long long int) arr_47 [i_11 + 2] [i_11 - 3]));
                        var_41 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 74762275U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [5]))) : (max((2143289344U), (((/* implicit */unsigned int) arr_40 [i_11] [i_12] [i_14]))))))) ? (((/* implicit */int) max((arr_45 [4LL] [i_11 - 1] [i_11 - 1] [4LL]), (arr_45 [14] [i_11 - 1] [i_11 - 1] [14])))) : (((((((/* implicit */_Bool) var_8)) ? (arr_30 [i_12]) : (((/* implicit */int) (_Bool)0)))) >> (((arr_13 [i_11] [i_11 + 1]) + (201559453))))));
                        var_42 = min((((/* implicit */long long int) (+(arr_48 [i_11] [8] [6] [i_11 - 2] [i_11 + 2] [i_11] [i_11])))), (((long long int) (-(3687502869U)))));
                    }
                    /* vectorizable */
                    for (long long int i_16 = 0; i_16 < 16; i_16 += 4) 
                    {
                        var_43 = ((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_12] [i_12] [i_12] [i_12])) ? (arr_20 [i_11 + 1] [i_11 + 1] [i_13] [i_16]) : (arr_20 [i_11] [i_11] [i_13] [i_16])));
                        arr_53 [i_11 - 2] [i_11] [8] [9LL] = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (arr_26 [i_11 + 2] [i_11 + 2]) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_1)))))));
                        arr_54 [i_11] [2] [i_13] [i_13] = ((/* implicit */unsigned int) ((int) (((_Bool)0) ? (((/* implicit */long long int) arr_52 [i_11] [i_11] [i_12] [5] [5] [i_16])) : (arr_12 [12]))));
                        var_44 -= ((int) var_0);
                    }
                    var_45 = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_48 [i_13] [8LL] [i_13] [i_13] [i_13] [i_13] [2U])), (15U)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */long long int) arr_16 [10LL] [10LL])) <= (var_7))))))) : (((((/* implicit */_Bool) max((-2122157123), (((/* implicit */int) arr_45 [i_11] [i_11] [i_11] [4U]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_12]))) : (var_2))));
                    /* LoopSeq 1 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        arr_57 [i_17] [i_12] [10U] [10U] [i_12] [i_11] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_52 [i_11] [i_11 + 1] [i_11 + 1] [i_11] [i_11 + 2] [i_11])) ? (((/* implicit */unsigned int) -3)) : (arr_5 [(_Bool)1] [i_13])))) ? (((unsigned int) 1048583)) : (((/* implicit */unsigned int) ((int) 4097627755U)))))) ? (max((((((/* implicit */_Bool) 4611686018427387903LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_42 [i_11] [i_12] [i_13] [i_17]))), (((/* implicit */long long int) ((1047548904) << (((/* implicit */int) var_1))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (74762275U) : (var_3)))) ? (var_3) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 536862720)) ? (var_4) : (arr_40 [i_11] [i_13] [i_13]))))))));
                        var_46 = ((/* implicit */unsigned int) max((var_46), (((/* implicit */unsigned int) ((((/* implicit */int) arr_38 [i_11])) + (((int) max((arr_8 [i_11]), (((/* implicit */long long int) 544346914))))))))));
                    }
                }
            } 
        } 
    } 
}
