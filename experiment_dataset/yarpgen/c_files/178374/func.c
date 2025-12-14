/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178374
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((((var_11) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) (short)-28591)) : (((((/* implicit */_Bool) (short)-28579)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_12))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) - (((((/* implicit */_Bool) 4294967295U)) ? (17855229426482013351ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 19; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_14 [i_4] [i_3 - 1] [i_3] [i_1] [i_0] = ((/* implicit */unsigned short) arr_2 [i_3]);
                                arr_15 [i_3] = ((/* implicit */signed char) min((((unsigned long long int) ((unsigned int) (unsigned char)243))), (max((max((((/* implicit */unsigned long long int) arr_13 [12ULL] [i_1] [(_Bool)1] [i_3 - 3] [i_1] [i_1] [(_Bool)1])), (17855229426482013359ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) (signed char)127)))))))));
                                arr_16 [i_0] [i_3] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_13 [i_4] [i_4] [i_1] [i_3 - 1] [i_1] [i_1] [i_0]) ? (arr_1 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-28583)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 1U)) && (((/* implicit */_Bool) (short)28582))))) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) max((min((arr_9 [i_0] [i_0] [i_0] [i_3] [i_0]), (((/* implicit */short) (_Bool)1)))), (((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)64)))))))) : (((var_1) + (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_4))))))));
                            }
                        } 
                    } 
                    var_15 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) * ((((+(arr_7 [i_2] [i_1] [i_0]))) * (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)238))) / (var_10))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_6 = 2; i_6 < 21; i_6 += 4) /* same iter space */
        {
            arr_21 [i_5] [i_5] [i_6 - 1] = 2638609397U;
            arr_22 [i_5] [i_6] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28583))) / ((((_Bool)1) ? (17855229426482013351ULL) : (1248822325229108692ULL)))));
            arr_23 [i_6] = ((/* implicit */int) (unsigned short)48884);
        }
        for (signed char i_7 = 2; i_7 < 21; i_7 += 4) /* same iter space */
        {
            var_16 -= ((/* implicit */int) (short)-28582);
            arr_27 [i_5] [i_7] = ((/* implicit */int) ((((arr_17 [i_7]) > (2906394337U))) ? (((((/* implicit */_Bool) (unsigned char)27)) ? (arr_17 [i_5]) : (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_7] [i_7 + 1] [i_5])))));
        }
        var_17 &= ((/* implicit */int) ((17855229426482013326ULL) >> ((((-(arr_26 [i_5] [i_5]))) - (15979409570009002024ULL)))));
    }
    for (unsigned int i_8 = 2; i_8 < 12; i_8 += 3) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_9 = 1; i_9 < 10; i_9 += 2) 
        {
            arr_34 [i_8] = ((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [8LL] [i_9] [i_8 - 2] [i_8] [i_8 + 1] [i_8]))) % (max((((/* implicit */unsigned long long int) (_Bool)1)), (var_0)))))));
            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_8)))) & ((-(-6522444066714095173LL)))))) ? (((((/* implicit */_Bool) (short)28582)) ? (((/* implicit */long long int) 1763515740)) : (arr_24 [i_9 - 1]))) : (((/* implicit */long long int) ((min((arr_1 [i_8 - 2] [(unsigned short)7]), (((/* implicit */unsigned int) arr_12 [i_8] [i_8 - 2] [i_9 + 2] [i_8 - 2] [i_9] [(unsigned char)0])))) >> (((((1248822325229108700ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)224))))) - (1248822325229108721ULL)))))))))));
            /* LoopNest 2 */
            for (unsigned short i_10 = 0; i_10 < 13; i_10 += 3) 
            {
                for (short i_11 = 1; i_11 < 11; i_11 += 2) 
                {
                    {
                        arr_41 [i_8] [i_8 + 1] [i_11 + 2] [i_11] [i_11 + 2] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? ((-(var_7))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_37 [i_9 + 3] [i_11 - 1])))))));
                        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((arr_26 [i_9] [i_11]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [(short)3] [i_9]))))))));
                    }
                } 
            } 
        }
        for (unsigned short i_12 = 0; i_12 < 13; i_12 += 4) 
        {
            /* LoopSeq 1 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)62281)), (132120576)))) ? (((/* implicit */int) (unsigned short)43457)) : (((/* implicit */int) ((signed char) max((arr_13 [i_8] [i_12] [i_12] [i_13] [i_13] [i_12] [i_13]), (arr_35 [(_Bool)1] [i_8])))))));
                /* LoopNest 2 */
                for (unsigned short i_14 = 0; i_14 < 13; i_14 += 4) 
                {
                    for (int i_15 = 1; i_15 < 11; i_15 += 3) 
                    {
                        {
                            arr_50 [i_8] [i_12] [i_12] [i_12] [i_8] = ((/* implicit */short) min((arr_10 [i_8 - 1] [i_8] [i_12] [i_13] [i_14] [i_8]), (((/* implicit */unsigned int) (signed char)49))));
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (~(((/* implicit */int) ((_Bool) 1763515738))))))));
                            var_22 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_12 [11LL] [i_12] [i_13] [i_13] [i_14] [14ULL]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-166)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_39 [i_15 + 2] [i_14] [i_8] [i_8]))))) ? (3898433015U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))));
                        }
                    } 
                } 
            }
            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17855229426482013351ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (min((7310885692823408473LL), (((/* implicit */long long int) min((arr_20 [i_8]), (((/* implicit */short) (unsigned char)0))))))) : (((/* implicit */long long int) ((arr_1 [i_8 + 1] [i_8 + 1]) | (arr_1 [i_8 + 1] [i_12]))))));
        }
        for (unsigned int i_16 = 4; i_16 < 12; i_16 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_17 = 0; i_17 < 13; i_17 += 4) 
            {
                for (long long int i_18 = 4; i_18 < 12; i_18 += 2) 
                {
                    {
                        arr_60 [i_8] [i_16 - 3] [i_8] [i_18 + 1] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_8 [i_18] [(unsigned short)4] [i_16])), (((((/* implicit */_Bool) var_11)) ? (((var_0) >> (((/* implicit */int) arr_58 [i_8] [i_16 - 4] [i_18])))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_35 [i_8 + 1] [i_8])) * (((/* implicit */int) var_5)))))))));
                        arr_61 [i_8] [i_16] [i_17] [i_8] [i_18] = ((/* implicit */long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_49 [i_18] [i_18 - 2] [i_18 - 3] [i_18] [i_18 + 1]))))) < (min((((/* implicit */unsigned int) (-(1763515738)))), ((-(var_11)))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_19 = 1; i_19 < 10; i_19 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned char) var_4);
                            var_25 = ((/* implicit */_Bool) max((var_25), (((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-28571)) + (arr_4 [0LL] [10LL])))) > ((-(var_0)))))));
                            arr_65 [i_8 - 1] [i_8] [i_16 - 2] [i_17] [i_18 - 2] [i_18] [(signed char)2] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-28571)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (11170012637440051687ULL))) ^ (((/* implicit */unsigned long long int) 2798535205474182751LL))));
                            arr_66 [i_19] [i_8] [i_17] [i_8] [i_8] = ((/* implicit */unsigned long long int) (signed char)(-127 - 1));
                            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((1838848008U) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_58 [7] [i_18] [i_19 + 1])) != (((/* implicit */int) var_5)))))))))));
                        }
                    }
                } 
            } 
            var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((unsigned long long int) ((long long int) 2798535205474182751LL))))));
            arr_67 [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_7)) | (var_0)))) ? (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_2))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_46 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8] [i_16 + 1] [i_8 - 1])) ? (2U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)28553)))))))) : (((/* implicit */unsigned long long int) 6092719013703038396LL))));
            /* LoopNest 2 */
            for (unsigned char i_20 = 4; i_20 < 12; i_20 += 3) 
            {
                for (short i_21 = 0; i_21 < 13; i_21 += 4) 
                {
                    {
                        var_28 += ((/* implicit */short) ((1656357903U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_8] [i_21])))));
                        arr_76 [i_8] [i_8] [i_8] [i_8] [i_20] [i_21] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_74 [i_16] [i_8] [i_16 - 1] [i_8]))));
                        /* LoopSeq 1 */
                        for (unsigned int i_22 = 0; i_22 < 13; i_22 += 4) 
                        {
                            arr_79 [i_8] [i_22] [(_Bool)1] [i_21] [i_20] [i_16] [i_8] = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) arr_63 [i_8] [i_8] [i_16 + 1] [i_21]))))));
                            var_29 = ((/* implicit */long long int) max((((((/* implicit */_Bool) 2U)) ? (min((var_2), (1248822325229108692ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)170)) || (((/* implicit */_Bool) arr_53 [i_8] [i_16] [i_8])))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_52 [i_20])) ? (((/* implicit */int) arr_11 [i_21] [i_21] [i_8] [i_20 + 1] [i_8] [i_8])) : (((/* implicit */int) (short)32764))))) ? (17197921748480442940ULL) : (((/* implicit */unsigned long long int) min((arr_6 [(_Bool)1]), (((/* implicit */unsigned int) var_4)))))))));
                            arr_80 [i_21] |= ((/* implicit */unsigned long long int) arr_28 [i_16 - 1] [i_20]);
                        }
                    }
                } 
            } 
            var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(arr_44 [(short)3] [i_16])))) ? (((/* implicit */int) (_Bool)1)) : ((~(var_1))))) >> (((/* implicit */int) arr_11 [i_8] [(signed char)13] [5] [i_8 + 1] [i_8 + 1] [i_8])))))));
        }
        /* vectorizable */
        for (signed char i_23 = 0; i_23 < 13; i_23 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_24 = 0; i_24 < 13; i_24 += 3) 
            {
                arr_85 [i_8] [i_23] = ((/* implicit */unsigned int) var_3);
                arr_86 [(unsigned char)11] [i_8] [(short)9] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 6092719013703038407LL)) || (((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_8] [i_8 + 1])))));
            }
            var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) (((!(arr_78 [i_8] [i_23] [9U] [6LL] [i_8] [i_23] [(_Bool)1]))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))) : (arr_62 [i_8] [4LL] [i_8] [i_23] [i_23] [i_8] [i_23]))))));
            arr_87 [i_8] [i_23] = (_Bool)1;
            var_32 &= ((/* implicit */signed char) ((arr_7 [i_8] [i_8] [i_8]) & (((/* implicit */unsigned long long int) (+(arr_68 [i_8 - 2] [i_23] [8U]))))));
            arr_88 [i_8] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_8] [i_8] [i_8])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-37))))))));
        }
        arr_89 [i_8] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_46 [i_8] [i_8] [i_8 - 1] [i_8 - 2] [i_8] [i_8])) ? (((/* implicit */int) var_13)) : (((((/* implicit */_Bool) 4036487974U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)6068))))))));
    }
    var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (short)508)), (2097151LL)))) ? (((/* implicit */int) (signed char)14)) : (((/* implicit */int) (signed char)43))));
}
