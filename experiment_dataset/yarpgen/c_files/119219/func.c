/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119219
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_8 [i_1] [(signed char)5] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) + (((((/* implicit */_Bool) arr_1 [i_2])) ? ((+(946108459U))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)34378), (((/* implicit */unsigned short) var_6))))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */short) var_13);
                                arr_14 [i_0] [i_0] [i_0] [i_1] [(signed char)7] = ((/* implicit */long long int) min(((~((~(((/* implicit */int) var_2)))))), (((((/* implicit */int) (signed char)126)) % (((/* implicit */int) (short)32512))))));
                                var_15 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_7 [7LL] [i_3] [i_1] [i_1])) ? (((/* implicit */int) (short)9003)) : (((/* implicit */int) (unsigned char)70)))) | (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0])) || (((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0])))))));
                                var_16 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)14202)), ((-9223372036854775807LL - 1LL))))) && (((/* implicit */_Bool) (signed char)126))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = var_0;
    /* LoopSeq 2 */
    for (short i_5 = 0; i_5 < 24; i_5 += 3) 
    {
        arr_17 [i_5] [i_5] = ((/* implicit */_Bool) var_7);
        var_18 &= arr_15 [i_5];
        /* LoopNest 2 */
        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 1) 
        {
            for (unsigned short i_7 = 0; i_7 < 24; i_7 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (long long int i_8 = 2; i_8 < 23; i_8 += 2) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned long long int) (-((-(((((/* implicit */_Bool) 17629842601245872111ULL)) ? (arr_25 [i_5] [i_5] [i_7] [(unsigned char)9] [(unsigned short)0]) : (var_4)))))));
                        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) max((11302456996681546383ULL), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((((/* implicit */unsigned int) var_12)), (arr_20 [9U] [i_6])))), (min((((/* implicit */long long int) var_3)), (var_10)))))))))));
                    }
                    for (long long int i_9 = 2; i_9 < 23; i_9 += 2) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) var_1))));
                        var_22 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) 261632)) ? (((/* implicit */int) arr_24 [i_6] [i_9 - 2] [i_6] [i_6])) : (((/* implicit */int) arr_24 [i_9 + 1] [i_9 - 2] [i_9] [i_7])))));
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) arr_27 [21U] [20ULL] [21U] [i_9 - 2]))) ? (min((arr_25 [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9 - 1] [i_7]), (((((/* implicit */_Bool) (short)19006)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_7]))))))) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
                    }
                    for (long long int i_10 = 2; i_10 < 23; i_10 += 2) /* same iter space */
                    {
                        var_24 = ((/* implicit */long long int) (signed char)112);
                        arr_31 [i_5] [i_6] [i_7] [i_10] [i_10] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (short)-32752))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)(-32767 - 1)))))) : ((~(((/* implicit */int) (unsigned short)14336))))))) ? (((/* implicit */int) min((((/* implicit */short) arr_24 [i_10 - 2] [i_10 + 1] [i_10 - 2] [i_10])), (arr_28 [i_6] [i_6] [i_6] [i_6])))) : (((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) 7299686779884929312ULL))))), (min((arr_24 [(short)17] [i_6] [i_6] [i_10]), (arr_23 [i_5]))))))));
                        arr_32 [i_5] [i_6] = ((((/* implicit */_Bool) arr_21 [i_6])) ? (4230736383402440247ULL) : (((/* implicit */unsigned long long int) 0U)));
                    }
                    for (unsigned int i_11 = 0; i_11 < 24; i_11 += 1) 
                    {
                        var_25 -= ((/* implicit */unsigned short) arr_35 [i_5] [i_6] [i_7] [i_7] [i_7] [i_11]);
                        arr_36 [i_5] [i_6] [i_6] [i_7] [i_11] [i_6] = ((/* implicit */unsigned int) var_8);
                        var_26 = ((/* implicit */signed char) (-(max((max((((/* implicit */unsigned long long int) -1526325953)), (13249725688628588379ULL))), (((/* implicit */unsigned long long int) (short)10124))))));
                    }
                    arr_37 [i_5] [i_6] [i_7] [i_7] = ((/* implicit */short) -948327596);
                    /* LoopSeq 4 */
                    for (short i_12 = 1; i_12 < 23; i_12 += 3) 
                    {
                        var_27 -= ((/* implicit */unsigned short) max((((/* implicit */int) (unsigned short)62084)), (((((/* implicit */_Bool) arr_28 [i_12 - 1] [i_6] [i_6] [i_6])) ? (((/* implicit */int) arr_28 [i_12 + 1] [i_12] [i_12] [i_12])) : (((/* implicit */int) arr_28 [i_12 + 1] [i_7] [i_7] [i_7]))))));
                        var_28 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)2048)), ((unsigned short)36603))))) + (min((((/* implicit */long long int) arr_23 [i_5])), (var_13)))));
                        var_29 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)82)) : (-1697312531)))));
                        /* LoopSeq 3 */
                        for (short i_13 = 0; i_13 < 24; i_13 += 2) 
                        {
                            var_30 = ((/* implicit */signed char) (unsigned short)26063);
                            var_31 -= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (short)656)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_10)))));
                            var_32 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_38 [i_6] [i_13]))) ? (arr_22 [i_5] [i_6] [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28789))) : (max((((/* implicit */long long int) arr_23 [i_12 + 1])), (var_4)))));
                            var_33 = var_5;
                            arr_45 [i_6] [i_6] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_9)))) ? (((/* implicit */int) arr_44 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) ((min((3308386447U), (((/* implicit */unsigned int) var_7)))) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) 936221979841066409LL)) ? (((/* implicit */int) (unsigned char)215)) : (((/* implicit */int) (signed char)122))))))))));
                        }
                        for (signed char i_14 = 0; i_14 < 24; i_14 += 2) 
                        {
                            var_34 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(227447267)))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_24 [i_14] [i_7] [i_5] [i_5])), ((short)16400))))) : (((((/* implicit */long long int) ((/* implicit */int) (short)8176))) | (-4238030543036261758LL)))))) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) 959917148)) : (0U)))) : (min((var_10), (-8125403675260710665LL)))));
                            arr_49 [i_5] [i_6] [i_12] [i_12 + 1] [i_14] [i_6] [(short)6] = ((/* implicit */long long int) var_11);
                            arr_50 [i_5] [i_6] [i_6] [i_12 + 1] [i_12] [i_12] [i_14] = ((/* implicit */unsigned int) arr_23 [i_5]);
                            var_35 *= ((/* implicit */unsigned short) min((max((((-9223372036854775793LL) + (((/* implicit */long long int) ((/* implicit */int) var_0))))), (((/* implicit */long long int) arr_24 [i_14] [i_6] [i_12 - 1] [i_12 - 1])))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)25))))))))));
                            var_36 = ((/* implicit */unsigned long long int) (-(-9223372036854775788LL)));
                        }
                        for (unsigned int i_15 = 0; i_15 < 24; i_15 += 1) 
                        {
                            var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) var_4))) ? (((/* implicit */int) arr_41 [i_15] [i_12] [8LL] [i_5])) : ((((~(((/* implicit */int) var_7)))) / (((((/* implicit */_Bool) (short)1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_40 [i_5] [i_5]))))))));
                            var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_24 [i_12] [i_7] [i_6] [(signed char)17]), (((/* implicit */signed char) ((((/* implicit */int) arr_42 [i_6] [i_6] [i_7] [(signed char)4] [(unsigned short)10] [i_15])) != (-1419150118))))))) ? (max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (short)26773)), ((unsigned short)52807)))), (arr_22 [(_Bool)1] [i_7] [i_5]))) : (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)170))) > (10550974906544620922ULL))) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) max(((unsigned short)60163), (((/* implicit */unsigned short) (signed char)-75))))))))));
                            var_39 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) 954849803U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)4))) : (((((/* implicit */unsigned int) 237173584)) | (var_9))))), (1536U)));
                            arr_54 [i_5] [i_6] = ((/* implicit */short) (-2147483647 - 1));
                            var_40 = ((/* implicit */unsigned short) min((((/* implicit */long long int) max((((((/* implicit */_Bool) arr_19 [i_6] [i_6] [i_6])) ? (((/* implicit */int) (unsigned char)94)) : (((/* implicit */int) var_8)))), (((/* implicit */int) (unsigned short)17781))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_51 [16U] [i_6] [i_7] [i_12] [i_15])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_38 [i_6] [i_6]))))), (((long long int) (_Bool)1))))));
                        }
                    }
                    for (unsigned int i_16 = 0; i_16 < 24; i_16 += 3) 
                    {
                        var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned short)1536)) : (((/* implicit */int) (short)8176))))) ? (((((/* implicit */int) (signed char)-21)) * (((/* implicit */int) (unsigned short)7677)))) : (((/* implicit */int) ((short) arr_34 [i_5] [(unsigned short)21] [i_5] [i_5])))))) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)-30402)) : (((/* implicit */int) (unsigned char)4)))), (((/* implicit */int) arr_47 [i_6] [i_7] [i_16]))))) : (max(((~(var_4))), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))))));
                        var_42 = ((/* implicit */signed char) max((var_42), (((/* implicit */signed char) arr_27 [i_5] [i_5] [i_7] [(signed char)17]))));
                        var_43 = ((/* implicit */signed char) min((var_43), (((/* implicit */signed char) var_13))));
                        var_44 += ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) min((((/* implicit */long long int) 346816261U)), (-9223372036854775797LL)))))));
                        arr_58 [i_5] [i_6] [i_7] [i_6] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (var_9) : (((4160749568U) * (((/* implicit */unsigned int) arr_39 [i_16] [(unsigned short)11] [i_6] [i_6] [i_5]))))));
                    }
                    for (unsigned long long int i_17 = 0; i_17 < 24; i_17 += 3) /* same iter space */
                    {
                        arr_61 [(signed char)14] &= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_28 [i_7] [(unsigned short)9] [i_7] [(short)15]))))), (0U)));
                        arr_62 [i_17] [i_6] [i_6] [16ULL] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)26648))));
                        arr_63 [i_5] [i_5] [i_5] [i_6] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_0))) & (-4220290530334607536LL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)58187)) : (((/* implicit */int) (signed char)117))))) ? (((/* implicit */int) arr_24 [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) (!(((/* implicit */_Bool) 3753856665U))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_5] [i_6] [i_7] [i_17])))))));
                    }
                    for (unsigned long long int i_18 = 0; i_18 < 24; i_18 += 3) /* same iter space */
                    {
                        var_45 -= arr_23 [i_18];
                        arr_68 [i_6] [i_6] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) min((((/* implicit */short) var_2)), (arr_27 [i_18] [i_5] [i_18] [(signed char)23])))) ? (54181518112282301LL) : (max((((/* implicit */long long int) 1025004536U)), (arr_53 [i_5] [i_6] [i_6] [i_7] [i_18]))))), (((/* implicit */long long int) 12U))));
                    }
                }
            } 
        } 
        var_46 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (unsigned short)62)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)14336))))))) == (((((/* implicit */_Bool) (short)23734)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (35183835217920ULL)))));
    }
    for (unsigned short i_19 = 0; i_19 < 12; i_19 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_20 = 0; i_20 < 12; i_20 += 1) 
        {
            arr_75 [i_19] [i_20] [i_20] = arr_2 [i_19];
            arr_76 [i_19] [i_20] [i_20] = ((/* implicit */short) 3423938176U);
            arr_77 [(unsigned short)10] &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) min((arr_23 [i_20]), ((signed char)42)))))));
        }
        var_47 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_25 [i_19] [i_19] [i_19] [i_19] [i_19]), (arr_25 [i_19] [i_19] [i_19] [i_19] [i_19])))) ? (((((/* implicit */_Bool) arr_25 [i_19] [i_19] [i_19] [i_19] [i_19])) ? (arr_25 [i_19] [i_19] [i_19] [i_19] [i_19]) : (arr_25 [i_19] [i_19] [i_19] [i_19] [i_19]))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
    }
}
