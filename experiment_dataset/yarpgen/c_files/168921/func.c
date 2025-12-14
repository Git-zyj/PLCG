/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168921
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
    var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(16965722628586018787ULL))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_0 [i_0]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */unsigned int) (signed char)-92))))) ? ((~(arr_1 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))));
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((var_3), (((/* implicit */unsigned int) arr_0 [i_0]))))) ^ (9ULL)));
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+((-(arr_1 [i_0])))))) ? (((/* implicit */unsigned long long int) min((arr_1 [i_0]), (min((var_7), (((/* implicit */unsigned int) (short)-32765))))))) : (var_1)));
        var_19 = ((/* implicit */unsigned long long int) (!(((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])) <= (min((1502257745917671395ULL), (((/* implicit */unsigned long long int) var_0))))))));
    }
    for (signed char i_1 = 2; i_1 < 9; i_1 += 4) 
    {
        var_20 = ((/* implicit */unsigned char) 1073741824U);
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)213)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)103))) : (min((((/* implicit */unsigned long long int) var_10)), (arr_8 [i_1] [i_2])))))) || (((/* implicit */_Bool) var_12))));
            /* LoopNest 3 */
            for (short i_3 = 0; i_3 < 10; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                {
                    for (int i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        {
                            arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] [i_2] = (signed char)-44;
                            arr_19 [i_1] [(unsigned char)0] [i_2] [i_2] [i_4] [i_5] = ((/* implicit */unsigned char) (-((-((-(((/* implicit */int) var_2))))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_6 = 3; i_6 < 7; i_6 += 3) 
        {
            var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-2147483647 - 1)))));
            var_23 = ((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)243));
            /* LoopSeq 2 */
            for (signed char i_7 = 0; i_7 < 10; i_7 += 4) 
            {
                var_24 = ((/* implicit */unsigned char) min((var_24), (var_12)));
                var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [3ULL] [3ULL] [i_7])) ? (min((((unsigned long long int) 622847293U)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_10))))))) : (min((0ULL), (((/* implicit */unsigned long long int) arr_16 [i_6 - 1] [i_6 - 1] [i_6] [i_6] [i_6]))))));
                /* LoopSeq 1 */
                for (signed char i_8 = 0; i_8 < 10; i_8 += 3) 
                {
                    var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) min((((unsigned long long int) min((arr_17 [i_7] [i_7] [i_7] [(signed char)0] [3]), (((/* implicit */unsigned long long int) var_4))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_1 + 1] [i_6 - 3] [i_6 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_1 - 2] [i_6 - 2] [i_6 + 1]))) : (1207274642U)))))))));
                    arr_28 [i_1] [i_1] [i_1] [i_1 + 1] [i_1 + 1] [i_1] = arr_16 [i_1] [i_1] [i_1] [i_7] [i_8];
                    arr_29 [i_1] [i_1 - 2] [i_1] [i_1] [2ULL] [i_1] = ((/* implicit */unsigned char) min((14316409290174322590ULL), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11)))))));
                    var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))), (arr_17 [i_1] [i_6] [(signed char)3] [i_7] [i_8])))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-87))) - (4134489438726540536ULL)))))))));
                }
            }
            for (unsigned int i_9 = 0; i_9 < 10; i_9 += 2) 
            {
                var_28 = ((/* implicit */unsigned long long int) arr_31 [i_1] [i_1] [(unsigned char)6]);
                var_29 = ((/* implicit */unsigned long long int) max((var_29), ((~(min((12ULL), (min((arr_14 [i_1 - 1] [i_6] [8ULL] [i_9]), (((/* implicit */unsigned long long int) arr_11 [8U] [i_1] [i_6] [(unsigned short)5]))))))))));
                arr_33 [(signed char)0] [(signed char)0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_1 - 2]))))) ? (min((arr_13 [i_1 - 1] [i_1 - 2] [i_1 - 1] [i_1 + 1]), (-767906059))) : (((/* implicit */int) var_13))));
                /* LoopNest 2 */
                for (signed char i_10 = 0; i_10 < 10; i_10 += 4) 
                {
                    for (unsigned int i_11 = 0; i_11 < 10; i_11 += 3) 
                    {
                        {
                            var_30 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */short) var_4)), (var_6)))) ? (max((var_14), (((/* implicit */unsigned long long int) arr_31 [i_1 - 1] [i_6 - 2] [i_6 - 3])))) : (((min((((/* implicit */unsigned long long int) var_12)), (var_14))) << (((((/* implicit */int) var_10)) - (5904)))))));
                            var_31 -= ((/* implicit */unsigned short) min((max(((~(var_1))), (((/* implicit */unsigned long long int) var_0)))), (min((((/* implicit */unsigned long long int) var_6)), (min((2283766753572506649ULL), (((/* implicit */unsigned long long int) arr_0 [5ULL]))))))));
                        }
                    } 
                } 
            }
        }
        for (int i_12 = 0; i_12 < 10; i_12 += 1) 
        {
            var_32 = ((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) min((arr_38 [i_12] [i_12] [i_1] [i_12] [(short)0] [6U] [i_1]), ((signed char)25)))), ((+(3743778114U))))), (((/* implicit */unsigned int) ((((/* implicit */int) (short)24268)) & (((/* implicit */int) (signed char)64)))))));
            var_33 = min((((/* implicit */unsigned long long int) ((signed char) (-(((/* implicit */int) var_9)))))), (min((((/* implicit */unsigned long long int) (short)9398)), (9079011040554662346ULL))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned int i_13 = 2; i_13 < 9; i_13 += 2) 
            {
                var_34 = ((/* implicit */signed char) var_10);
                /* LoopNest 2 */
                for (short i_14 = 1; i_14 < 9; i_14 += 1) 
                {
                    for (short i_15 = 2; i_15 < 7; i_15 += 3) 
                    {
                        {
                            var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_48 [i_13 + 1] [i_13 - 1] [i_13 + 1] [i_13 - 1] [i_13 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [9ULL] [(unsigned char)5] [(unsigned char)5] [i_13] [i_14] [(short)3] [i_15]))) : (2795218790U)));
                            var_36 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) / (arr_2 [i_15 + 3] [i_15])));
                        }
                    } 
                } 
            }
            for (signed char i_16 = 3; i_16 < 9; i_16 += 4) 
            {
                var_37 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (-(max((((/* implicit */int) var_4)), (2147483647)))))), (2219925265U)));
                /* LoopNest 2 */
                for (short i_17 = 0; i_17 < 10; i_17 += 1) 
                {
                    for (unsigned char i_18 = 0; i_18 < 10; i_18 += 2) 
                    {
                        {
                            arr_56 [i_18] [i_17] [i_17] [0ULL] [i_17] [i_12] [(unsigned char)5] = ((/* implicit */unsigned long long int) max((min((((/* implicit */signed char) ((((/* implicit */int) var_11)) != (((/* implicit */int) arr_0 [(short)9]))))), (arr_0 [i_1 + 1]))), (((signed char) 14986991554087297329ULL))));
                            var_38 = ((min((((unsigned long long int) (signed char)-122)), (((unsigned long long int) 2099584038U)))) << (((/* implicit */int) ((((/* implicit */_Bool) -2147483637)) && (((/* implicit */_Bool) arr_11 [i_1 - 2] [i_16 - 2] [i_16 - 3] [i_16 - 1]))))));
                        }
                    } 
                } 
            }
            for (signed char i_19 = 2; i_19 < 8; i_19 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_20 = 0; i_20 < 10; i_20 += 4) 
                {
                    arr_61 [8ULL] [i_19] [i_12] [i_1] = ((/* implicit */unsigned char) (+((((-(arr_43 [i_1] [i_20] [i_19] [i_20]))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_50 [(unsigned char)4] [4])) && (((/* implicit */_Bool) arr_21 [i_20] [i_19] [i_1]))))))))));
                    var_39 ^= ((/* implicit */int) max((min((((((/* implicit */_Bool) var_5)) ? (3144346134U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_57 [i_1] [i_1] [i_1]))))), (((/* implicit */unsigned int) (short)13342)))), ((-(var_7)))));
                    var_40 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_46 [i_1 - 2])) : (((/* implicit */int) var_6))))), (min((164222564U), (((/* implicit */unsigned int) (+(2147483647))))))));
                }
                /* vectorizable */
                for (signed char i_21 = 2; i_21 < 9; i_21 += 3) 
                {
                    /* LoopSeq 1 */
                    for (short i_22 = 1; i_22 < 8; i_22 += 1) 
                    {
                        var_41 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_64 [i_1] [i_1] [i_1 - 2] [i_12] [4U])) : (((/* implicit */int) var_13))));
                        var_42 = ((/* implicit */unsigned short) min((var_42), (((unsigned short) arr_58 [i_22] [i_19] [i_12]))));
                        arr_68 [1ULL] [i_12] [i_19] [i_21] [i_1] = ((/* implicit */short) arr_16 [i_1] [i_1] [i_19] [i_21] [i_22]);
                        var_43 = ((/* implicit */unsigned int) var_9);
                        var_44 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 1502257745917671395ULL)) ? (((/* implicit */unsigned long long int) 4222848462U)) : (9034814473511580600ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                    }
                    var_45 = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)120))));
                    var_46 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_9))));
                    /* LoopSeq 1 */
                    for (unsigned int i_23 = 1; i_23 < 8; i_23 += 3) 
                    {
                        var_47 = ((/* implicit */signed char) min((var_47), (((/* implicit */signed char) var_7))));
                        var_48 = ((/* implicit */unsigned int) (~(arr_9 [i_1] [7U] [i_19])));
                        var_49 = ((/* implicit */unsigned char) (~(arr_11 [0] [i_1] [i_1] [i_1])));
                    }
                    arr_72 [i_21] [i_19] [i_1] [i_1] = ((/* implicit */unsigned long long int) (short)25707);
                }
                arr_73 [7U] [i_12] |= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)106)) ? (arr_55 [(unsigned char)7] [0ULL] [0ULL] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-87))))))))), (max((min((((/* implicit */unsigned long long int) arr_10 [2U] [i_1] [i_19] [2])), (var_8))), (((/* implicit */unsigned long long int) 2075042031U))))));
                var_50 = ((/* implicit */unsigned int) min((min((((/* implicit */int) var_11)), (1127178805))), (((/* implicit */int) (signed char)-84))));
            }
            /* LoopNest 2 */
            for (unsigned long long int i_24 = 3; i_24 < 9; i_24 += 2) 
            {
                for (short i_25 = 2; i_25 < 9; i_25 += 2) 
                {
                    {
                        arr_79 [i_1] [i_12] [i_24] [i_25] |= ((/* implicit */signed char) max((min((-2147483647), (((/* implicit */int) (unsigned short)52079)))), ((+(((/* implicit */int) (short)-10847))))));
                        var_51 = ((/* implicit */short) 11802034842965351875ULL);
                        var_52 = ((/* implicit */short) min((((((/* implicit */_Bool) var_9)) ? (arr_8 [i_1 + 1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))), (min((var_14), (((/* implicit */unsigned long long int) var_11))))));
                    }
                } 
            } 
        }
        var_53 -= ((/* implicit */unsigned char) (-((~(max((var_14), (((/* implicit */unsigned long long int) var_7))))))));
    }
    var_54 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (max(((~(var_8))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)87))) : (16944486327791880221ULL))))) : (min((var_1), (((/* implicit */unsigned long long int) var_3))))));
}
