/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114279
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) ((((/* implicit */int) (short)-27541)) - (((/* implicit */int) (short)27533)))))) >= ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
        arr_3 [i_0] = ((/* implicit */short) (-(((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned short i_2 = 3; i_2 < 20; i_2 += 2) 
            {
                {
                    var_14 += ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) min((arr_5 [i_0] [i_1] [i_2 - 1]), (((/* implicit */unsigned short) (_Bool)1))))) : (min((var_11), (192273647))))), (min((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))), (((var_0) ? (var_11) : (var_8)))))));
                    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (var_11)))) ? (((var_1) * (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))));
                }
            } 
        } 
    }
    for (short i_3 = 0; i_3 < 22; i_3 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 22; i_4 += 2) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (short i_6 = 0; i_6 < 22; i_6 += 2) 
                {
                    {
                        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) min((((((/* implicit */int) (_Bool)1)) | (-188039665))), (max((-1298176964), (min((((/* implicit */int) (unsigned short)11)), (arr_18 [(short)17] [(short)17] [i_5] [i_5]))))))))));
                        arr_19 [i_5] [i_4] [i_3] [(unsigned char)13] [i_3] = ((/* implicit */unsigned short) (_Bool)0);
                    }
                } 
            } 
        } 
        var_17 = var_3;
    }
    /* LoopSeq 3 */
    for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) (short)-31240))) * ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))));
        /* LoopSeq 1 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            arr_25 [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) 3148563980U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64544))) : (4294967293U)));
            var_19 = ((unsigned short) (_Bool)1);
            arr_26 [i_7] = ((/* implicit */int) max((((/* implicit */unsigned int) -1718046839)), (min((((/* implicit */unsigned int) var_6)), (var_1)))));
            arr_27 [i_7] [i_7] = ((/* implicit */unsigned short) -1811276899869188258LL);
        }
    }
    /* vectorizable */
    for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (int i_10 = 0; i_10 < 18; i_10 += 2) 
        {
            var_20 ^= var_11;
            arr_34 [i_9] [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)30645))) | (12582912LL)));
        }
        for (unsigned int i_11 = 2; i_11 < 15; i_11 += 3) /* same iter space */
        {
            arr_37 [i_9] = ((/* implicit */short) var_13);
            /* LoopNest 3 */
            for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 3) 
            {
                for (int i_13 = 0; i_13 < 18; i_13 += 2) 
                {
                    for (int i_14 = 0; i_14 < 18; i_14 += 1) 
                    {
                        {
                            arr_47 [i_9] [i_11] [i_12] [i_12] [i_9] = (!(((/* implicit */_Bool) (short)32741)));
                            var_21 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1942647191)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_8 [17LL])))) ? (((/* implicit */unsigned int) arr_6 [i_11 + 1] [i_11 - 2] [i_11 + 1] [i_11 - 1])) : (var_7)));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_15 = 2; i_15 < 15; i_15 += 3) /* same iter space */
        {
            arr_51 [i_9] [i_15] [i_9] = ((/* implicit */int) var_5);
            /* LoopNest 2 */
            for (unsigned long long int i_16 = 1; i_16 < 17; i_16 += 4) 
            {
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    {
                        arr_57 [i_9] [i_16] [i_17] = ((/* implicit */int) ((short) arr_7 [i_15 - 2] [i_15] [i_15 - 2] [i_16 - 1]));
                        arr_58 [i_9] [i_9] [i_16 - 1] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_40 [i_16 - 1] [i_15] [i_15 + 3])) ? (arr_40 [i_16 - 1] [i_16 - 1] [i_15 + 3]) : (arr_40 [i_16 - 1] [i_15] [i_15 + 3])));
                        /* LoopSeq 1 */
                        for (unsigned int i_18 = 0; i_18 < 18; i_18 += 1) 
                        {
                            var_22 = ((/* implicit */int) (+(2614690241U)));
                            arr_62 [i_15] [i_15] [(unsigned short)11] [(unsigned char)9] [i_9] [i_9] [i_15] = ((/* implicit */unsigned char) arr_43 [i_9] [i_16] [2] [(unsigned short)13]);
                        }
                    }
                } 
            } 
            arr_63 [i_9] [i_15] = ((((/* implicit */_Bool) var_3)) ? (arr_41 [i_9] [i_15 - 1]) : (((/* implicit */unsigned long long int) var_11)));
            arr_64 [i_9] = ((/* implicit */_Bool) ((unsigned int) arr_53 [i_15 - 1] [i_9] [i_15 - 2]));
            var_23 = ((/* implicit */unsigned short) ((short) ((((/* implicit */int) (short)-19077)) <= (((/* implicit */int) (_Bool)1)))));
        }
        arr_65 [i_9] = ((/* implicit */_Bool) var_2);
        arr_66 [i_9] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)-32750)))) ? (var_2) : (((/* implicit */int) (!(var_5))))));
        var_24 = ((/* implicit */short) ((unsigned short) ((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_9]))) : (var_1))));
        arr_67 [i_9] [i_9] = ((/* implicit */unsigned int) ((short) arr_43 [i_9] [i_9] [i_9] [i_9]));
    }
    for (unsigned int i_19 = 0; i_19 < 21; i_19 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_20 = 0; i_20 < 21; i_20 += 1) 
        {
            var_25 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (-(arr_6 [i_19] [i_19] [i_19] [i_19])))), (((((/* implicit */_Bool) (-(((/* implicit */int) (short)-27519))))) ? (((/* implicit */unsigned int) arr_7 [i_19] [i_20] [i_20] [i_20])) : (max((4294967270U), (((/* implicit */unsigned int) (unsigned char)108))))))));
            var_26 = ((/* implicit */_Bool) min((min((arr_14 [i_19] [i_20] [(_Bool)1]), (arr_14 [i_19] [i_19] [i_20]))), ((~(((/* implicit */int) (_Bool)1))))));
            var_27 = ((/* implicit */_Bool) max(((+((-(((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)30097)) : (((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) var_6)) ? (arr_18 [i_20] [i_20] [i_20] [i_20]) : (((/* implicit */int) var_5))))))));
        }
        arr_73 [i_19] = max(((+(((/* implicit */int) arr_11 [i_19] [i_19])))), (((-27) + (329020856))));
    }
    var_28 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (_Bool)1)))) : (((unsigned long long int) var_6)))));
    /* LoopSeq 3 */
    for (unsigned short i_21 = 4; i_21 < 14; i_21 += 2) 
    {
        var_29 += ((/* implicit */_Bool) (+(((unsigned int) (-(var_8))))));
        arr_76 [i_21] [i_21] = ((/* implicit */short) var_7);
        var_30 = ((/* implicit */unsigned short) max((((/* implicit */int) var_10)), ((-(((/* implicit */int) arr_55 [i_21 - 3] [i_21 + 2] [i_21 + 2] [i_21 - 2]))))));
    }
    for (unsigned int i_22 = 1; i_22 < 10; i_22 += 2) 
    {
        arr_79 [i_22] = ((/* implicit */unsigned short) max((max((((/* implicit */int) (_Bool)1)), (-14))), (((max((arr_14 [i_22 + 2] [i_22] [i_22]), (-3))) - ((((_Bool)1) ? (((/* implicit */int) (unsigned char)30)) : (var_12)))))));
        var_31 *= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) ((var_4) ? (((/* implicit */int) var_0)) : (var_2))))) ? (max(((~(((/* implicit */int) (short)-1671)))), (((((/* implicit */_Bool) arr_60 [(unsigned short)4] [i_22] [11ULL] [(unsigned short)4])) ? (((/* implicit */int) var_3)) : (var_12))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
    }
    for (int i_23 = 0; i_23 < 22; i_23 += 4) 
    {
        var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) 12582900LL))));
        arr_82 [14] = max(((-(var_12))), (((/* implicit */int) arr_4 [i_23] [i_23])));
        var_33 = ((/* implicit */unsigned int) max(((!(((((/* implicit */_Bool) arr_4 [i_23] [i_23])) || (((/* implicit */_Bool) arr_7 [i_23] [i_23] [i_23] [i_23])))))), ((!((!(((/* implicit */_Bool) var_10))))))));
        var_34 = ((/* implicit */int) min((var_34), ((+((-(((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)31357))))))))));
    }
    var_35 |= ((/* implicit */short) max((((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (var_12) : (var_6))))), (((1930164923U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)5)))))));
}
