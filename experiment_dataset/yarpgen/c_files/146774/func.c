/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146774
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) 10291205268402302270ULL))) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_2 [i_1])))) : (((((/* implicit */_Bool) ((9223372036854775807LL) << (((9223372036854775807LL) - (9223372036854775807LL)))))) ? ((~(((/* implicit */int) (unsigned char)49)))) : (((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) var_1))))))));
                var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) (short)32763))) : ((~(var_9)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            {
                arr_13 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)29)) && (((/* implicit */_Bool) 0ULL))));
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 9; i_4 += 1) 
                {
                    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        {
                            var_13 *= ((/* implicit */unsigned int) 18446744073709551597ULL);
                            var_14 = ((/* implicit */short) arr_11 [i_3] [i_4 - 3] [i_4 - 3]);
                            var_15 = ((/* implicit */short) ((((arr_14 [i_4 - 3] [i_4 - 3] [i_4 - 2]) << (((/* implicit */int) max((arr_0 [i_2]), ((signed char)0)))))) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_2] [i_2]))))) || (((/* implicit */_Bool) (signed char)28))))))));
                            arr_18 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */signed char) max(((~(4294967289U))), (((/* implicit */unsigned int) var_1))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_6 = 1; i_6 < 9; i_6 += 1) 
                {
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_4)) : (255LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) 24U)) ? (((/* implicit */int) arr_15 [i_2] [i_2])) : (((/* implicit */int) arr_1 [i_2])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)10))) != (-255LL))))) : (((unsigned long long int) (~(((/* implicit */int) (unsigned char)42)))))));
                    var_17 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 224837466U)) ? ((-(((/* implicit */int) (short)32763)))) : (((/* implicit */int) (signed char)127))))) != (min((((/* implicit */unsigned long long int) ((9223372036854775807LL) >= (((/* implicit */long long int) 4156735254U))))), (((((/* implicit */_Bool) arr_17 [i_2] [i_3] [i_3] [i_6] [i_6 - 1] [(unsigned char)3])) ? (arr_8 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
                    /* LoopSeq 4 */
                    for (unsigned char i_7 = 0; i_7 < 10; i_7 += 2) 
                    {
                        var_18 = ((/* implicit */signed char) (+(((/* implicit */int) ((9223372036854775795LL) == (((((/* implicit */_Bool) arr_4 [i_2] [i_2])) ? (275LL) : (-2286708884985171879LL))))))));
                        arr_25 [i_6] [i_3] [i_6 + 1] [i_7] [i_3] [i_6] = ((/* implicit */unsigned char) var_5);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 1) 
                        {
                            arr_28 [i_2] [i_2] [i_6] [i_7] [i_8] [i_2] = ((/* implicit */unsigned int) min((-9223372036854775807LL), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)62)))))));
                            arr_29 [i_2] [i_3] [i_6] [i_8] [i_8] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max(((~(((/* implicit */int) (signed char)-29)))), (((((/* implicit */int) arr_5 [i_8])) / (((/* implicit */int) (unsigned char)180)))))))));
                            var_19 += ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)30)) * (((/* implicit */int) (signed char)44)))) + (((((((/* implicit */_Bool) (unsigned char)119)) ? (arr_20 [i_3]) : (((/* implicit */int) arr_24 [i_2] [i_2])))) + (((/* implicit */int) (unsigned char)107))))));
                        }
                        for (unsigned int i_9 = 0; i_9 < 10; i_9 += 1) 
                        {
                            var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (signed char)-45)), (min((16436989685429134239ULL), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7)))))))));
                            arr_34 [i_3] [i_7] = ((/* implicit */int) max(((short)-26869), (((/* implicit */short) (signed char)38))));
                        }
                        var_21 = ((/* implicit */unsigned int) (-(((arr_14 [i_6] [i_6 + 1] [i_6]) / (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1914249953U)) ? (2009754388280417377ULL) : (((/* implicit */unsigned long long int) -653910301))));
                    }
                    for (short i_10 = 1; i_10 < 9; i_10 += 1) /* same iter space */
                    {
                        arr_37 [i_2] [i_10 + 1] [i_6 + 1] [i_10] [i_10] [i_2] = ((/* implicit */unsigned char) ((19ULL) == (((((((/* implicit */_Bool) -2286708884985171884LL)) || (((/* implicit */_Bool) arr_32 [i_2] [i_3] [i_6 + 1] [i_6] [i_10])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((-2286708884985171864LL) == (arr_26 [i_2] [i_2] [i_2] [i_2]))))) : (var_0)))));
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((5852059633405115639ULL), (((/* implicit */unsigned long long int) 19U))))) ? (((unsigned long long int) arr_27 [i_2] [i_2])) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_27 [i_2] [i_10 + 1])))))));
                    }
                    for (short i_11 = 1; i_11 < 9; i_11 += 1) /* same iter space */
                    {
                        var_24 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) ((((/* implicit */int) arr_3 [i_6] [i_6 - 1])) != (((/* implicit */int) (short)22876))))) : (((/* implicit */int) arr_23 [i_2] [i_3] [i_6] [i_11 + 1] [i_6] [i_3])))) << (((max((((/* implicit */unsigned long long int) min((5922430324575502854LL), (((/* implicit */long long int) 4294967289U))))), (min((((/* implicit */unsigned long long int) var_10)), (18446744073709551597ULL))))) - (4294967266ULL)))));
                        arr_40 [i_2] [i_2] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)4), ((signed char)103))))) - (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((int) var_4))) : (((((/* implicit */_Bool) (short)26868)) ? (124ULL) : (((/* implicit */unsigned long long int) 6U))))))));
                        /* LoopSeq 2 */
                        for (signed char i_12 = 0; i_12 < 10; i_12 += 1) 
                        {
                            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (-(((((/* implicit */_Bool) var_0)) ? (var_4) : (arr_11 [i_6 - 1] [i_6] [i_6 - 1]))))))));
                            arr_43 [i_12] [i_3] [i_3] [i_11] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_2 [i_11]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_11 + 1]))) : (124ULL)))) ? (((/* implicit */unsigned long long int) ((((var_9) / (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_2] [i_3]))))) * (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)165)))))))) : (max((((/* implicit */unsigned long long int) min((var_8), (((/* implicit */unsigned int) var_2))))), ((-(var_5)))))));
                            arr_44 [i_2] [i_3] [i_6] [i_11] [i_11] [i_12] = ((/* implicit */unsigned char) (-(((/* implicit */int) max((arr_17 [i_2] [i_2] [i_3] [i_11 - 1] [i_6 + 1] [i_3]), (arr_17 [i_2] [i_11] [i_2] [i_11] [i_6 - 1] [i_6 - 1]))))));
                        }
                        for (short i_13 = 0; i_13 < 10; i_13 += 2) 
                        {
                            arr_47 [i_3] [i_3] [i_13] [i_11] [i_13] [i_13] [i_11] = ((/* implicit */long long int) ((((/* implicit */int) var_6)) - (((/* implicit */int) arr_27 [i_11] [i_11]))));
                            var_26 = ((/* implicit */signed char) (((~(((((/* implicit */_Bool) (short)-4001)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)190))) : (arr_26 [i_2] [i_3] [i_11] [i_6]))))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_46 [i_2] [i_3] [i_13] [i_13] [i_6 + 1])) > (((/* implicit */int) arr_46 [i_2] [i_3] [i_2] [i_11] [i_6 + 1]))))))));
                            arr_48 [i_2] [i_11] [0] [i_2] [i_2] = ((/* implicit */unsigned char) var_0);
                        }
                        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) arr_46 [i_2] [i_2] [i_2] [i_2] [i_2]))));
                        arr_49 [i_2] [i_3] [i_11] = ((/* implicit */unsigned char) max(((-(arr_33 [i_3] [i_6] [i_6 + 1] [i_11] [i_11 - 1]))), (((/* implicit */int) min((arr_46 [i_2] [i_2] [i_6 - 1] [i_6] [i_11 - 1]), (arr_46 [i_6] [i_6] [i_6 - 1] [i_6 + 1] [i_11 - 1]))))));
                    }
                    for (short i_14 = 1; i_14 < 9; i_14 += 1) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (int i_15 = 0; i_15 < 10; i_15 += 2) 
                        {
                            var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) arr_50 [i_2]))));
                            arr_55 [i_2] [i_3] [i_6] [i_14 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_3] [i_6] [i_6] [i_6] [i_6 - 1] [i_14 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (2912698412U)))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (arr_22 [i_3] [i_3] [i_6] [i_2] [i_15]) : (arr_9 [i_2] [i_2] [i_2]))) == (((/* implicit */unsigned int) max((arr_39 [i_2] [i_2] [i_2] [i_2]), (((/* implicit */int) var_7)))))))) : (((((/* implicit */int) (short)511)) >> (((((/* implicit */int) (short)-4001)) + (4028)))))));
                        }
                        for (short i_16 = 0; i_16 < 10; i_16 += 2) 
                        {
                            var_29 += ((/* implicit */short) (!(((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_1)), (arr_30 [i_3] [i_3] [i_6] [i_14 - 1] [i_16] [i_14 + 1])))))))));
                            arr_60 [i_16] [i_16] [i_16] [i_16] [i_16] = ((/* implicit */signed char) var_3);
                        }
                        for (int i_17 = 0; i_17 < 10; i_17 += 1) 
                        {
                            var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((((((/* implicit */_Bool) min((((/* implicit */int) (signed char)127)), (-653910301)))) ? ((((-9223372036854775807LL - 1LL)) ^ (((/* implicit */long long int) 268435448)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-15390)) ? (1526154514) : (((/* implicit */int) (unsigned char)1))))))) & (((/* implicit */long long int) ((((/* implicit */_Bool) (~(0U)))) ? (((/* implicit */int) arr_27 [i_2] [i_3])) : ((~(((/* implicit */int) (signed char)-98))))))))))));
                            arr_64 [i_6] [i_6] [i_6] [i_17] [i_6 + 1] = ((/* implicit */int) var_4);
                            var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)13)))))));
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)111))) * (20U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_51 [i_2] [i_3] [i_6] [i_6] [i_14] [i_17])))) : (arr_58 [0LL] [i_14 + 1] [i_3] [i_14] [i_17] [i_2] [i_3])))) ? (arr_9 [i_17] [i_17] [i_17]) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (-(478091820U))))))));
                        }
                        arr_65 [i_2] = ((/* implicit */int) ((unsigned char) arr_56 [i_2] [i_3] [i_6] [i_6 - 1] [i_14]));
                        /* LoopSeq 3 */
                        for (unsigned char i_18 = 0; i_18 < 10; i_18 += 2) /* same iter space */
                        {
                            arr_70 [i_2] [i_3] [i_6 + 1] [i_14] [i_18] = ((/* implicit */unsigned char) (signed char)-109);
                            var_33 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) 4294967276U))))) - (((/* implicit */int) (signed char)94))));
                        }
                        for (unsigned char i_19 = 0; i_19 < 10; i_19 += 2) /* same iter space */
                        {
                            var_34 = arr_53 [i_14 - 1] [i_14] [i_14] [i_14] [i_14 - 1] [i_14 + 1] [i_14];
                            arr_74 [i_3] [i_3] [i_6] [i_14] [i_19] [i_2] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_62 [i_2] [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_51 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])))), (max((arr_6 [i_3] [i_19]), (arr_6 [i_2] [i_2])))))), (((arr_52 [i_6 + 1] [i_19] [i_19] [i_19]) << (((((((/* implicit */_Bool) (short)10687)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) - (12791418011622533709ULL)))))));
                            arr_75 [i_2] [i_2] [i_3] [i_6] [i_14] [i_19] [i_19] = ((/* implicit */short) ((((((/* implicit */_Bool) -9223372036854775800LL)) ? (((/* implicit */unsigned long long int) 19U)) : (var_0))) / (((((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */unsigned long long int) var_8)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_10))))))));
                        }
                        for (unsigned char i_20 = 0; i_20 < 10; i_20 += 2) /* same iter space */
                        {
                            arr_80 [i_6 - 1] [i_6] [i_6] [i_6] [i_6] = (signed char)-118;
                            arr_81 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) ((9223372036854775807LL) > (((/* implicit */long long int) max((var_8), (((/* implicit */unsigned int) 1549142892)))))));
                        }
                        arr_82 [i_2] [i_3] [i_6] [i_14 + 1] = ((/* implicit */signed char) ((((unsigned long long int) arr_61 [i_6 + 1] [i_6 - 1] [i_14 - 1] [i_14 + 1] [i_2] [i_14 + 1])) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (arr_22 [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_14 - 1] [i_14 - 1]) : (((/* implicit */unsigned int) -647107703)))))));
                    }
                    var_35 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) max((14794176557672833350ULL), (((/* implicit */unsigned long long int) arr_77 [i_6] [i_6] [i_6])))))));
                }
            }
        } 
    } 
}
