/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142936
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
    var_12 = ((/* implicit */unsigned char) min((11743502036960215298ULL), (18446744073709551606ULL)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_13 ^= ((/* implicit */short) ((int) max((arr_1 [i_0]), (arr_1 [i_1]))));
                var_14 = ((11743502036960215298ULL) + (arr_1 [i_1]));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    var_15 |= ((/* implicit */long long int) 2102560828);
                    arr_8 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */_Bool) var_8);
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 1; i_3 < 8; i_3 += 2) 
                    {
                        arr_13 [i_1] [i_1] = ((((/* implicit */_Bool) arr_12 [i_3] [i_3 + 2] [i_3 + 2] [i_0])) ? (((((/* implicit */_Bool) var_2)) ? (arr_4 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)71))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))));
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_1] [i_3 + 1] [i_3 - 1] [i_3 + 2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) ((unsigned short) 567453553048682496LL)))));
                        arr_14 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 779407336)) ? (((/* implicit */int) (_Bool)1)) : (arr_7 [i_0] [i_0])))) ? (((((/* implicit */_Bool) var_5)) ? (1481038499U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned int) arr_12 [i_3] [i_3 + 1] [i_3 + 2] [3LL]))));
                        /* LoopSeq 4 */
                        for (unsigned char i_4 = 3; i_4 < 7; i_4 += 2) /* same iter space */
                        {
                            var_17 = 11743502036960215298ULL;
                            var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_7 [i_3 + 1] [i_4 - 2]))));
                        }
                        for (unsigned char i_5 = 3; i_5 < 7; i_5 += 2) /* same iter space */
                        {
                            arr_21 [i_5] [i_2] [i_5] = ((/* implicit */_Bool) (-(arr_19 [i_0] [i_5] [i_2] [i_2] [i_3 + 1] [i_0])));
                            var_19 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_3 + 2])) ? (arr_10 [i_3 - 1] [i_3 - 1] [i_3]) : (((/* implicit */unsigned int) arr_3 [i_3 - 1]))));
                        }
                        for (long long int i_6 = 1; i_6 < 9; i_6 += 3) 
                        {
                            var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) var_6))));
                            arr_24 [i_1] [i_3 + 2] [i_6 + 1] = ((/* implicit */unsigned int) (+(arr_5 [i_6 + 1] [(unsigned char)9] [i_6])));
                        }
                        for (unsigned int i_7 = 0; i_7 < 10; i_7 += 2) 
                        {
                            var_21 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_2] [i_2] [i_2] [i_2] [i_3 - 1]))) / ((((_Bool)1) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [i_3] [i_7])))))));
                            var_22 = ((/* implicit */unsigned char) arr_19 [(short)0] [i_1] [i_1] [i_2] [i_3 + 1] [i_7]);
                            var_23 = ((/* implicit */_Bool) ((arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) - (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5)))))));
                            var_24 = ((/* implicit */unsigned int) ((arr_3 [i_3 + 2]) - (((/* implicit */int) arr_15 [i_3 + 2] [i_3] [i_3] [i_3 + 2] [i_7] [i_7]))));
                        }
                    }
                    for (long long int i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 11743502036960215294ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [(_Bool)1] [i_1] [i_1] [i_2] [i_2] [i_8]))) : (arr_16 [i_0] [8] [i_0] [i_1] [i_0])));
                        var_25 = ((((/* implicit */_Bool) (unsigned char)233)) ? (((/* implicit */unsigned long long int) var_3)) : (arr_29 [i_0]));
                    }
                    for (unsigned short i_9 = 3; i_9 < 9; i_9 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_28 [i_1] [(unsigned short)6] [i_9 - 3] [i_9 + 1] [i_9] [i_9 - 3]))));
                        /* LoopSeq 2 */
                        for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                        {
                            var_27 = ((((/* implicit */_Bool) arr_1 [i_10 + 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_2] [i_9 - 2] [i_10])));
                            arr_36 [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_2))) ? (((((/* implicit */int) var_8)) | (-24))) : (((/* implicit */int) arr_33 [i_2]))));
                            var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) / (arr_35 [i_9] [i_9] [i_2] [i_10] [i_10]))))));
                            arr_37 [i_10] [i_9] [i_10] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((arr_2 [i_9 - 3] [i_9 - 1]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_1] [i_9 + 1] [i_10] [i_10 + 1] [i_10 + 1])))));
                        }
                        for (unsigned int i_11 = 0; i_11 < 10; i_11 += 2) 
                        {
                            var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) 4194176U)) || (arr_40 [i_1] [i_1] [7U] [i_9 - 2] [i_9]))))));
                            var_30 = ((/* implicit */short) (+(((/* implicit */int) arr_38 [i_9 + 1] [i_9 + 1] [i_9 - 2] [i_9 + 1] [i_9 - 3]))));
                            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) ^ (arr_1 [(_Bool)1])))) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_1] [i_2] [i_9 - 3] [i_1])) : (arr_30 [i_9 - 3] [i_9 - 2])));
                        }
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_32 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0]))));
                        /* LoopSeq 1 */
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                        {
                            var_33 -= ((/* implicit */_Bool) (~(var_0)));
                            var_34 = ((((/* implicit */_Bool) arr_42 [i_0] [i_0] [i_2] [i_12] [i_12] [i_2])) ? (((/* implicit */int) arr_42 [i_0] [i_0] [i_2] [i_12] [i_12] [i_13])) : (((/* implicit */int) arr_42 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                        }
                        /* LoopSeq 1 */
                        for (long long int i_14 = 0; i_14 < 10; i_14 += 3) 
                        {
                            var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1481038519U)) ? (912408174U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12])))))) : (arr_44 [i_14] [i_14] [i_14] [i_14])));
                            var_36 = ((/* implicit */unsigned long long int) var_5);
                        }
                        var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) (-(arr_2 [i_2] [i_0]))))));
                        var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) var_11))));
                    }
                }
                for (int i_15 = 3; i_15 < 6; i_15 += 2) 
                {
                    arr_53 [i_0] [i_0] [i_1] [i_15] = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0])))))) > (((((/* implicit */_Bool) arr_35 [i_0] [6U] [i_1] [i_15 + 1] [i_15])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_52 [i_15] [i_1] [i_0] [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_15 + 1] [i_15 - 1] [i_15 + 4]))))) : (((/* implicit */int) var_6))));
                    arr_54 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_4)), (arr_2 [6LL] [i_1])))) ? (((/* implicit */unsigned int) max((arr_3 [(_Bool)0]), (((/* implicit */int) var_5))))) : (1073741823U)))));
                }
                arr_55 [i_0] [i_1] = ((/* implicit */short) (+(((((/* implicit */unsigned long long int) max((arr_52 [i_0] [i_0] [i_0] [1ULL]), (((/* implicit */long long int) var_7))))) - (((((/* implicit */_Bool) var_1)) ? (9925333301023279332ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_16 = 1; i_16 < 20; i_16 += 3) 
    {
        for (int i_17 = 0; i_17 < 23; i_17 += 2) 
        {
            {
                arr_60 [18] [18] = ((/* implicit */long long int) min((((((/* implicit */_Bool) min((arr_57 [i_16]), (((/* implicit */short) var_6))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -9LL)) ? (((/* implicit */int) (unsigned char)168)) : (1202571793)))) : ((+(arr_59 [i_16]))))), (((max((((/* implicit */unsigned int) var_4)), (arr_59 [i_17]))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_56 [i_16 - 1])))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_18 = 2; i_18 < 22; i_18 += 2) 
                {
                    var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((7616248003114421674ULL), (((/* implicit */unsigned long long int) 1923201464U))))) ? (((/* implicit */int) ((_Bool) (!((_Bool)1))))) : (((((/* implicit */_Bool) (unsigned char)228)) ? (((((/* implicit */int) (unsigned char)65)) * (((/* implicit */int) var_7)))) : (var_3)))));
                    /* LoopNest 2 */
                    for (unsigned short i_19 = 2; i_19 < 22; i_19 += 2) 
                    {
                        for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                        {
                            {
                                var_40 = 4256860662U;
                                var_41 += ((/* implicit */long long int) ((int) ((arr_64 [i_16 - 1] [i_16] [i_16] [i_16] [i_16] [i_16]) - (arr_64 [i_16 + 3] [i_17] [i_17] [i_18] [i_19] [i_20]))));
                                arr_70 [i_16] [i_16 - 1] [(unsigned char)0] [i_16] [i_16 - 1] [i_16 + 1] = ((/* implicit */int) 10359872552089706471ULL);
                            }
                        } 
                    } 
                    var_42 = ((/* implicit */signed char) (+(max((((/* implicit */long long int) arr_63 [i_16] [i_16 - 1] [i_16] [i_16 - 1])), (arr_65 [i_16] [4U] [i_16 + 3] [i_16 - 1] [i_18 - 2] [i_18])))));
                }
                for (long long int i_21 = 0; i_21 < 23; i_21 += 2) 
                {
                    arr_73 [i_16] [(unsigned char)15] [i_16 + 2] [(unsigned char)15] = ((/* implicit */short) min((var_10), (((/* implicit */unsigned long long int) var_5))));
                    var_43 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_1)) : (((((/* implicit */_Bool) 18)) ? (8086871521619845125ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_56 [i_21])))))))) ? (min((0ULL), (((/* implicit */unsigned long long int) (signed char)17)))) : (((/* implicit */unsigned long long int) min((var_1), (((/* implicit */long long int) ((unsigned int) arr_67 [i_21] [i_21] [i_17] [i_17] [i_17] [i_16] [i_16]))))))));
                    arr_74 [i_16] [i_17] [i_17] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_67 [i_17] [i_16 + 3] [i_16 + 3] [i_16 - 1] [i_16 - 1] [i_16 + 2] [i_16 + 2]), (arr_67 [i_17] [i_16 - 1] [i_16 + 3] [i_16] [i_16] [i_16 + 1] [i_16 - 1])))) ? ((~(((/* implicit */int) (signed char)46)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_68 [i_17] [i_17])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_57 [i_16]))) : (arr_59 [i_16])))) ? (((((/* implicit */int) (signed char)0)) >> (((((/* implicit */int) (unsigned char)234)) - (225))))) : (((((/* implicit */_Bool) arr_63 [i_16 + 3] [i_16 - 1] [i_16] [i_16 + 3])) ? (((/* implicit */int) arr_57 [i_17])) : (((/* implicit */int) arr_58 [12]))))))));
                    arr_75 [i_16] [i_16] [i_17] [(unsigned short)13] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-41))));
                    var_44 ^= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_61 [i_16 + 3] [i_16] [i_16 - 1])) ? (((((/* implicit */_Bool) (signed char)41)) ? (((/* implicit */unsigned long long int) arr_72 [(unsigned char)4] [i_21] [i_17] [i_16 + 3])) : (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_64 [i_16 + 2] [i_16 + 3] [0] [i_16] [i_16] [i_16])) ? (((/* implicit */int) arr_68 [i_16 + 2] [i_16])) : (((/* implicit */int) arr_68 [i_16 + 2] [i_16 + 2])))))));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
    {
        var_45 = ((/* implicit */int) max((var_45), (((int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_48 [i_22] [i_22] [(_Bool)1] [i_22] [i_22])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_9))))), (((((/* implicit */_Bool) -12LL)) ? (((/* implicit */unsigned int) var_3)) : (arr_2 [i_22] [i_22]))))))));
        arr_78 [i_22] = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-27))));
    }
}
