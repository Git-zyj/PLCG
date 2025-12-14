/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121322
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
    var_19 = ((/* implicit */short) min(((((+(var_8))) * (((var_13) / (var_6))))), (((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_14))))) * (((((/* implicit */unsigned long long int) var_9)) / (var_4)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) /* same iter space */
    {
        arr_3 [(unsigned short)5] [i_0] = ((/* implicit */unsigned short) var_6);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    {
                        var_20 += ((/* implicit */long long int) arr_1 [i_0]);
                        arr_14 [i_0] [i_1] [i_2] [i_3] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [20LL] [i_2] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [(unsigned short)12]))) : (var_8)))) ? (arr_6 [i_0]) : (arr_6 [i_0])));
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 3) /* same iter space */
                        {
                            var_21 = (~(-984409314));
                            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_1] [20ULL] [i_2])) ? (((/* implicit */int) arr_9 [i_1] [9LL] [i_2])) : (((/* implicit */int) arr_5 [i_0]))));
                            arr_17 [i_0] [i_1] [(short)19] [i_1] = ((/* implicit */int) var_17);
                        }
                        for (unsigned short i_5 = 0; i_5 < 23; i_5 += 3) /* same iter space */
                        {
                            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_2] [i_2] [16ULL] [i_2] [i_2] [i_2])) & (((/* implicit */int) arr_12 [i_5] [i_5] [i_3] [i_2] [i_1] [i_0])))))));
                            arr_20 [i_1] [i_1] [i_1] [0] [(unsigned short)19] [0] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) (short)-11735))));
                            var_24 -= ((/* implicit */signed char) arr_19 [i_0] [i_0] [8LL] [i_0] [i_0]);
                        }
                        for (unsigned short i_6 = 0; i_6 < 23; i_6 += 3) /* same iter space */
                        {
                            arr_23 [i_1] [i_1] [i_1] = (+(((var_3) / (arr_13 [i_2] [i_6]))));
                            arr_24 [i_0] [15U] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) (-((-(((/* implicit */int) var_14))))));
                            arr_25 [i_1] = ((/* implicit */unsigned short) var_11);
                        }
                        arr_26 [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((arr_8 [15LL] [i_0] [i_1] [i_2]) ? (arr_1 [i_1]) : (arr_1 [i_3])));
                    }
                } 
            } 
        } 
        arr_27 [i_0] [i_0] = ((/* implicit */int) (+((-(var_6)))));
        var_25 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)36))));
    }
    for (short i_7 = 0; i_7 < 23; i_7 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_26 = ((/* implicit */int) ((((/* implicit */long long int) arr_15 [i_7] [i_8])) * (min((((/* implicit */long long int) arr_2 [i_8])), (var_16)))));
            arr_34 [13LL] [21ULL] [i_8] = ((/* implicit */int) (+(var_16)));
        }
        var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-804)) ? (((/* implicit */int) (short)-11735)) : (1233033078)))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-782)) ? (1362553455U) : (((/* implicit */unsigned int) var_12))))) ? (((/* implicit */int) (unsigned short)53129)) : (((/* implicit */int) (unsigned char)36))))))))));
    }
    /* LoopSeq 3 */
    for (int i_9 = 0; i_9 < 14; i_9 += 3) 
    {
        var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) min(((-((+(arr_18 [i_9] [i_9] [i_9] [(unsigned char)2]))))), (((/* implicit */int) arr_21 [i_9] [(unsigned char)4] [i_9] [i_9] [i_9] [i_9])))))));
        arr_37 [i_9] [i_9] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) -1143080398)) ? (var_0) : (-403022747)))));
        arr_38 [i_9] = (+(max((((((/* implicit */_Bool) 1233033070)) ? (((/* implicit */int) (unsigned short)5956)) : (1344506514))), ((-(((/* implicit */int) var_2)))))));
        var_29 = ((/* implicit */signed char) var_18);
    }
    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
    {
        var_30 = ((/* implicit */unsigned short) arr_15 [i_10 - 1] [i_10]);
        arr_42 [(unsigned char)1] = ((/* implicit */unsigned char) arr_18 [i_10] [14] [i_10 - 1] [20ULL]);
        var_31 ^= ((/* implicit */unsigned long long int) (~((~(var_5)))));
    }
    for (int i_11 = 0; i_11 < 11; i_11 += 2) 
    {
        var_32 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 2932413840U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)206)))) & (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
        var_33 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_11] [(unsigned short)6] [i_11])) ? ((-(max((1362553456U), (((/* implicit */unsigned int) -1052446471)))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) min((arr_40 [0ULL] [i_11]), (((/* implicit */unsigned short) var_11))))))))));
        /* LoopSeq 4 */
        for (long long int i_12 = 0; i_12 < 11; i_12 += 4) 
        {
            var_34 &= ((/* implicit */int) (-((+((~(arr_22 [i_11] [i_11] [(signed char)0] [i_11] [i_12] [2U])))))));
            var_35 &= ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) arr_13 [i_11] [i_12])) & (var_17))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10696163139971507090ULL)) ? (((/* implicit */int) (signed char)-28)) : (((/* implicit */int) arr_8 [i_12] [i_11] [i_11] [(short)8])))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_12]))) >= ((+(var_7)))))) : (((/* implicit */int) ((arr_41 [i_12]) || (((var_10) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))))));
            arr_49 [i_11] [i_12] [i_12] = ((/* implicit */long long int) var_11);
            arr_50 [(short)8] [(short)8] [i_12] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (signed char)79)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)61))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_11] [i_12] [i_11])) - (((/* implicit */int) arr_10 [11] [(_Bool)1] [i_11])))))));
        }
        for (long long int i_13 = 0; i_13 < 11; i_13 += 4) 
        {
            var_36 |= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (signed char)-96)), ((unsigned short)5956)));
            var_37 = ((/* implicit */unsigned char) var_13);
        }
        for (long long int i_14 = 2; i_14 < 8; i_14 += 4) /* same iter space */
        {
            var_38 -= arr_41 [i_11];
            arr_57 [i_11] [i_14] = ((/* implicit */short) max(((~(var_7))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_11] [i_14] [4ULL])))))));
        }
        for (long long int i_15 = 2; i_15 < 8; i_15 += 4) /* same iter space */
        {
            var_39 = ((/* implicit */int) var_8);
            var_40 = min((var_6), (((/* implicit */unsigned long long int) var_9)));
            arr_60 [i_11] [(signed char)1] = ((/* implicit */int) (((~(arr_11 [i_15 + 2] [i_15 + 2] [i_15 + 2] [i_15]))) | (min((arr_11 [i_15 + 2] [i_15 + 2] [i_15 + 2] [i_15]), (arr_11 [i_15 + 2] [i_15 + 2] [i_15 + 2] [i_15])))));
        }
    }
    var_41 |= ((/* implicit */_Bool) min((1105784575230073522LL), (((/* implicit */long long int) 1362553455U))));
    /* LoopNest 3 */
    for (signed char i_16 = 4; i_16 < 22; i_16 += 4) 
    {
        for (unsigned int i_17 = 0; i_17 < 25; i_17 += 4) 
        {
            for (unsigned long long int i_18 = 0; i_18 < 25; i_18 += 3) 
            {
                {
                    arr_69 [14] [i_17] [i_16 + 2] = ((/* implicit */int) ((((/* implicit */unsigned int) (-((-(var_0)))))) * (((((/* implicit */_Bool) var_18)) ? (((arr_67 [i_16] [i_17] [i_18]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_63 [14]))) : (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
                    arr_70 [(signed char)22] [i_17] [i_16] = ((/* implicit */signed char) arr_68 [i_16] [i_17] [i_18]);
                    /* LoopSeq 1 */
                    for (short i_19 = 0; i_19 < 25; i_19 += 2) 
                    {
                        var_42 = ((/* implicit */short) (!(((/* implicit */_Bool) var_18))));
                        /* LoopSeq 4 */
                        for (signed char i_20 = 3; i_20 < 23; i_20 += 3) 
                        {
                            var_43 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_5)) : (var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_74 [i_16] [i_20 - 1] [i_18] [i_19] [i_20 - 1] [i_20 - 1] [i_16]))) : (var_3)))) / (max((var_1), (var_10)))));
                            var_44 = ((/* implicit */unsigned char) var_9);
                            var_45 = ((/* implicit */int) (-(arr_61 [i_16 - 2] [i_16 + 2])));
                            var_46 = ((/* implicit */short) (-((-(((/* implicit */int) var_14))))));
                        }
                        for (unsigned long long int i_21 = 3; i_21 < 22; i_21 += 4) /* same iter space */
                        {
                            var_47 = ((/* implicit */int) ((((/* implicit */_Bool) (-((~(1920609475)))))) ? ((((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */unsigned long long int) (-(arr_72 [i_16] [(short)16] [(short)16] [i_21 - 3])))) : (((((/* implicit */_Bool) (signed char)-14)) ? (13183553695038125937ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-14))))))) : ((+(max((var_13), (((/* implicit */unsigned long long int) var_3))))))));
                            var_48 = ((/* implicit */unsigned short) var_7);
                        }
                        for (unsigned long long int i_22 = 3; i_22 < 22; i_22 += 4) /* same iter space */
                        {
                            var_49 |= ((/* implicit */unsigned long long int) var_15);
                            var_50 = ((/* implicit */short) (~(((/* implicit */int) arr_66 [(short)23] [i_16] [i_17] [(short)23]))));
                            var_51 = ((/* implicit */unsigned int) (-(var_13)));
                        }
                        for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) 
                        {
                            var_52 |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_65 [i_16] [i_16 + 2])) ? (var_16) : (((/* implicit */long long int) arr_65 [i_16 + 2] [i_16 + 1])))) / (((/* implicit */long long int) min((((/* implicit */unsigned int) var_2)), (arr_72 [i_16] [i_16 - 4] [i_18] [i_19]))))));
                            var_53 = ((((/* implicit */_Bool) (-((+(var_18)))))) ? ((+(arr_68 [i_16 - 4] [i_17] [i_19]))) : ((+(((/* implicit */int) var_2)))));
                        }
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_25 = 1; i_25 < 24; i_25 += 3) 
                        {
                            arr_86 [i_16] |= ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_73 [i_16] [i_16])) & (((/* implicit */int) arr_66 [22] [14] [i_17] [i_16]))))) ? (((/* implicit */unsigned long long int) ((arr_72 [i_16] [i_17] [i_18] [i_24]) >> (((var_4) - (7755190093601211374ULL)))))) : (var_6))) << (((var_13) - (7060042751411633530ULL)))));
                            arr_87 [i_17] [i_25] = ((/* implicit */unsigned int) var_18);
                            var_54 = min((13562542085229690737ULL), (((/* implicit */unsigned long long int) (_Bool)1)));
                            var_55 = ((/* implicit */long long int) (~((-(var_8)))));
                            var_56 = ((/* implicit */int) (-(arr_77 [i_16] [17] [i_16] [i_18])));
                        }
                        for (int i_26 = 1; i_26 < 24; i_26 += 4) 
                        {
                            var_57 = ((/* implicit */short) var_12);
                            arr_90 [(unsigned short)16] [i_26] [i_18] [i_24] [i_26 + 1] = ((/* implicit */long long int) arr_75 [i_17] [i_26] [i_18] [0U]);
                        }
                        var_58 = ((/* implicit */int) max((var_58), (((/* implicit */int) arr_75 [i_16 + 1] [i_17] [i_16] [i_16]))));
                        var_59 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (-(2932413854U)))), (((((/* implicit */_Bool) (signed char)46)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)112))) : (arr_79 [i_16] [i_17] [19] [(short)5] [i_16 + 1])))));
                    }
                    for (signed char i_27 = 1; i_27 < 24; i_27 += 2) 
                    {
                        arr_93 [i_16] [i_17] [i_18] [i_18] [i_27] [i_27] = ((/* implicit */unsigned char) ((arr_85 [i_16] [i_17] [i_18] [i_18] [(_Bool)1]) & (((/* implicit */unsigned long long int) (+(var_0))))));
                        var_60 = max((((/* implicit */unsigned long long int) max((arr_68 [i_18] [i_17] [i_16]), (((/* implicit */int) max(((unsigned char)42), (((/* implicit */unsigned char) (signed char)61)))))))), (((((/* implicit */_Bool) var_13)) ? ((-(var_10))) : (var_10))));
                    }
                }
            } 
        } 
    } 
}
