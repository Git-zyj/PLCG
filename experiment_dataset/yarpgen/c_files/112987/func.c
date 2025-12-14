/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112987
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) ^ (arr_1 [i_0])));
        var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) arr_1 [i_0]))));
        arr_3 [(unsigned short)11] [i_0] = ((/* implicit */unsigned long long int) ((arr_0 [i_0] [i_0]) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)47199))));
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            arr_8 [i_0] [(_Bool)1] = ((/* implicit */unsigned long long int) arr_6 [(_Bool)1]);
            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_7)))))));
            arr_9 [i_0] [i_1] = ((/* implicit */short) ((11168629159416371185ULL) | (((/* implicit */unsigned long long int) 7698718457415319894LL))));
        }
        for (long long int i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned char i_3 = 0; i_3 < 14; i_3 += 3) 
            {
                for (unsigned int i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    for (int i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        {
                            var_17 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)12288)) ? (2147483647) : (2147483647)))) ? (((((/* implicit */_Bool) arr_17 [i_5])) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_2] [i_2] [i_3] [13U] [(_Bool)1] [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (4909068775775553460LL) : (3555199014491758432LL))))));
                            var_18 = arr_14 [i_0] [i_0] [i_5] [i_4] [(unsigned short)4];
                            var_19 *= ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)11063)) <= (((/* implicit */int) var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_4] [i_5] [i_3] [i_5])))))) : (arr_19 [i_0] [(_Bool)1] [i_3] [i_4] [i_5])));
                        }
                    } 
                } 
            } 
            arr_21 [i_0] [i_0] [(unsigned short)10] = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_2] [i_2]);
        }
        for (int i_6 = 0; i_6 < 14; i_6 += 3) 
        {
            arr_25 [i_6] [i_6] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)11063)) : (var_9)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -1))))) : (((/* implicit */int) arr_18 [i_6] [i_6] [i_6] [i_0] [i_6] [i_6] [i_6])));
            /* LoopSeq 2 */
            for (unsigned short i_7 = 0; i_7 < 14; i_7 += 1) 
            {
                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_7] [i_6] [(signed char)6] [i_6] [i_6] [i_6] [i_6])) + (((/* implicit */int) arr_7 [i_7])))))));
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((var_5) < (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0] [i_6] [(unsigned short)8])) << (((-3555199014491758433LL) + (3555199014491758441LL)))))))))));
                /* LoopSeq 1 */
                for (int i_8 = 0; i_8 < 14; i_8 += 3) 
                {
                    arr_33 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_0] [i_6] [i_7] [i_6]))) : (arr_17 [i_6])));
                    var_22 = ((/* implicit */int) min((var_22), ((-2147483647 - 1))));
                    arr_34 [i_0] [i_6] [i_6] [i_8] = ((/* implicit */_Bool) arr_23 [i_0] [9LL] [i_7]);
                    arr_35 [i_6] [i_6] [10LL] [i_7] [(_Bool)1] = ((/* implicit */unsigned short) var_9);
                }
            }
            for (long long int i_9 = 0; i_9 < 14; i_9 += 3) 
            {
                arr_40 [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) - (((/* implicit */int) arr_4 [i_0] [i_6] [3LL]))))) ? (((/* implicit */int) ((var_9) != (((/* implicit */int) (unsigned short)54473))))) : (arr_15 [i_0] [i_6] [i_6] [(_Bool)1])));
                var_23 = ((/* implicit */long long int) ((((/* implicit */int) var_8)) >> (((((((/* implicit */_Bool) 1)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)1)))) - (2863)))));
                var_24 = ((/* implicit */unsigned short) arr_29 [(_Bool)1] [i_6]);
            }
            arr_41 [i_6] = ((/* implicit */long long int) ((arr_22 [i_0] [i_0] [i_6]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_6] [i_0] [i_0] [i_6] [i_6] [i_0])))));
        }
    }
    /* LoopSeq 2 */
    for (unsigned short i_10 = 0; i_10 < 11; i_10 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            arr_46 [i_10] [9LL] = ((/* implicit */int) ((_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_7))))), (((long long int) 2147483647)))));
            /* LoopSeq 1 */
            for (long long int i_12 = 1; i_12 < 9; i_12 += 2) 
            {
                arr_50 [i_10] [i_12] [i_12] = ((/* implicit */unsigned long long int) ((unsigned short) ((var_5) | (((/* implicit */long long int) ((/* implicit */int) arr_27 [(unsigned short)5] [i_11] [i_12] [i_10]))))));
                var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) (!(((/* implicit */_Bool) (~(2147483647)))))))));
                var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 140737488355327LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)155))) : (-140737488355333LL)));
                arr_51 [i_10] [i_10] [i_11] [i_12] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) max((0ULL), (((/* implicit */unsigned long long int) (unsigned short)11162))))) ? (arr_44 [i_10] [(signed char)10] [i_11]) : (((/* implicit */long long int) max((arr_6 [i_11]), (((/* implicit */int) (_Bool)1)))))))));
                var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((unsigned short) max((var_12), ((!(((/* implicit */_Bool) arr_42 [i_10]))))))))));
            }
        }
        var_28 += ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (short)24609)), (-10)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_10] [i_10]))) : (((((/* implicit */unsigned int) 1806928543)) ^ (512U)))));
        var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)54390)) ? (((/* implicit */long long int) 512U)) : (3541822704371805571LL)))) ? (((/* implicit */int) (!(((arr_22 [i_10] [2U] [i_10]) != (arr_12 [4LL])))))) : (((/* implicit */int) var_6))));
        /* LoopNest 2 */
        for (signed char i_13 = 3; i_13 < 9; i_13 += 3) 
        {
            for (int i_14 = 0; i_14 < 11; i_14 += 2) 
            {
                {
                    arr_56 [1ULL] [(short)4] [(short)4] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((max((((/* implicit */long long int) arr_27 [i_10] [i_13 + 2] [i_14] [2U])), (var_7))) & (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */long long int) var_4)) + ((+(var_7))))) : (max((-3909414984642001612LL), (arr_14 [8LL] [i_13] [i_14] [i_13] [i_13 - 2])))));
                    arr_57 [i_14] [i_10] [i_10] [0LL] = ((/* implicit */_Bool) ((((arr_13 [i_10] [i_10] [i_14] [i_13 - 3]) <= (arr_13 [i_10] [i_10] [i_14] [i_13 - 3]))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_13 [i_14] [i_14] [i_14] [i_13 - 1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)32762)))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_15 = 0; i_15 < 11; i_15 += 3) 
                    {
                        arr_61 [i_10] [i_13] [3LL] [i_14] [i_10] = ((/* implicit */long long int) 8526466333422691714ULL);
                        /* LoopSeq 4 */
                        for (int i_16 = 0; i_16 < 11; i_16 += 2) 
                        {
                            arr_64 [i_16] [i_13] = ((/* implicit */unsigned int) -3909414984642001602LL);
                            arr_65 [i_10] [i_13 - 1] [i_13] [i_14] [i_13 - 1] [i_16] = (!(((/* implicit */_Bool) ((((-1LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_3))))) % (((/* implicit */long long int) min((((/* implicit */int) var_12)), (var_9))))))));
                        }
                        for (long long int i_17 = 0; i_17 < 11; i_17 += 2) 
                        {
                            var_30 = ((/* implicit */_Bool) ((long long int) 8725724278030336LL));
                            arr_68 [i_10] [i_15] = ((/* implicit */unsigned long long int) arr_18 [i_10] [i_13] [i_13] [i_15] [i_17] [i_10] [i_14]);
                            arr_69 [i_17] [i_17] [i_14] [i_15] [i_17] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((arr_47 [9]) | (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))))));
                        }
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            var_31 = var_8;
                            arr_72 [i_15] [i_13] [i_14] [i_15] [i_13] = ((arr_38 [(_Bool)1] [(_Bool)1] [i_14] [i_15]) & (((((/* implicit */_Bool) (~(3909414984642001612LL)))) ? (((/* implicit */long long int) ((arr_52 [i_13] [i_13]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11))))) : (arr_38 [i_13 - 1] [i_13 - 1] [i_18] [i_18]))));
                        }
                        for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                        {
                            var_32 = ((/* implicit */long long int) (((-(((/* implicit */int) arr_58 [i_13 - 2] [i_19 - 1] [i_19 - 1])))) != (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_66 [i_10] [i_13] [i_14] [i_13] [i_13] [i_10])), (arr_37 [i_10] [i_19] [i_13] [i_10])))) ? (((/* implicit */int) (!(var_3)))) : (((/* implicit */int) ((((/* implicit */int) var_2)) <= (arr_6 [i_10]))))))));
                            var_33 &= ((/* implicit */unsigned int) arr_15 [i_10] [i_19 - 1] [i_15] [i_13 - 3]);
                        }
                    }
                    for (unsigned long long int i_20 = 0; i_20 < 11; i_20 += 2) 
                    {
                        arr_80 [i_10] [i_13] [(unsigned short)7] [i_20] = ((/* implicit */long long int) (((!(arr_63 [i_13] [i_13 - 3] [i_13 - 3] [i_13] [i_13 - 2] [i_14]))) || (((/* implicit */_Bool) max((var_5), (((/* implicit */long long int) arr_63 [i_13] [i_13 + 1] [i_13 - 2] [i_13] [i_13 - 2] [i_13 - 2])))))));
                        var_34 = ((/* implicit */int) -1LL);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_21 = 2; i_21 < 7; i_21 += 2) 
                        {
                            arr_84 [i_13] [i_13] [i_13] [i_20] [i_14] = ((/* implicit */int) ((((/* implicit */_Bool) arr_53 [(unsigned short)2] [i_21 - 2] [i_13 - 1])) ? (((arr_52 [8LL] [i_21]) ? (9920277740286859914ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) != (arr_38 [i_13] [i_14] [i_20] [i_21])))))));
                            var_35 = ((/* implicit */int) ((unsigned int) arr_81 [i_10] [i_10] [i_10] [(unsigned short)6] [i_10] [i_21 - 2] [i_20]));
                        }
                    }
                    arr_85 [(_Bool)1] [(_Bool)1] = ((/* implicit */int) var_14);
                }
            } 
        } 
        var_36 = ((/* implicit */long long int) min((((/* implicit */int) (!(arr_29 [i_10] [i_10])))), (max((min((((/* implicit */int) (unsigned short)21871)), (-527905085))), (((/* implicit */int) var_13))))));
    }
    for (unsigned long long int i_22 = 1; i_22 < 20; i_22 += 2) 
    {
        arr_88 [i_22] = ((/* implicit */int) (unsigned short)367);
        arr_89 [i_22] [i_22] = ((/* implicit */unsigned int) -226111372943425330LL);
        var_37 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -13LL)) - (8526466333422691700ULL)))) ? (((/* implicit */long long int) max((arr_86 [i_22]), (2147483647)))) : (((long long int) ((((/* implicit */int) arr_87 [i_22])) & (((/* implicit */int) (_Bool)1))))));
        var_38 *= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 16LL)) ? (524287) : (((/* implicit */int) (_Bool)1))))) > (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (-226111372943425330LL)))))) * (((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (arr_86 [i_22]) : (max((((/* implicit */int) (unsigned short)960)), (-1700473977)))))));
        var_39 = 4611686018427387903LL;
    }
    var_40 = ((/* implicit */signed char) (((~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0)))))) * (((((/* implicit */_Bool) ((unsigned long long int) var_9))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((/* implicit */int) var_6))))));
}
