/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180638
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
    var_14 = ((/* implicit */unsigned int) (signed char)-30);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)-57)), (arr_0 [i_1 - 1] [i_1 - 1])))))))));
            /* LoopNest 2 */
            for (unsigned char i_2 = 2; i_2 < 20; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    {
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_1 + 1] [i_1 - 1] [14] [i_2])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 2] [i_1] [i_2])) > (arr_8 [i_1 - 2] [i_2] [i_1] [17LL])))))));
                        var_17 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (288225978105200640ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8214)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (var_7)))) && ((!(((/* implicit */_Bool) var_3)))))))) : (max((var_10), (((/* implicit */unsigned int) -1419129541))))));
                    }
                } 
            } 
        }
        for (signed char i_4 = 1; i_4 < 19; i_4 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_5 = 0; i_5 < 21; i_5 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (signed char i_6 = 0; i_6 < 21; i_6 += 4) 
                {
                    arr_17 [i_0] [i_4 + 2] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */int) var_0);
                    arr_18 [i_0 + 1] [i_4] [i_5] [i_6] = ((/* implicit */signed char) var_9);
                }
                var_18 ^= ((/* implicit */unsigned short) max((14135093908578799928ULL), (((/* implicit */unsigned long long int) (signed char)18))));
                /* LoopSeq 1 */
                for (short i_7 = 0; i_7 < 21; i_7 += 2) 
                {
                    arr_21 [i_4] [i_5] = ((/* implicit */unsigned short) arr_12 [i_0 + 2]);
                    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) max((min((((/* implicit */long long int) arr_6 [(unsigned char)14] [i_4 + 2] [i_4] [i_7])), (var_12))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_5 [(signed char)13] [i_4])), (var_10)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (var_6))) : (((/* implicit */int) arr_14 [i_4 - 1] [i_4 + 2] [i_4 - 1] [i_4]))))))))));
                    var_20 = ((/* implicit */unsigned int) ((unsigned short) var_13));
                }
            }
            /* vectorizable */
            for (unsigned short i_8 = 0; i_8 < 21; i_8 += 3) /* same iter space */
            {
                arr_24 [i_8] [i_0] [i_8] [i_4] = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)14))));
                var_21 ^= ((/* implicit */int) var_0);
                /* LoopSeq 3 */
                for (unsigned long long int i_9 = 2; i_9 < 20; i_9 += 4) 
                {
                    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) arr_20 [i_0] [i_4 + 2] [i_8] [i_8]))));
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_8])) ? (((/* implicit */int) arr_4 [i_4 - 1] [i_9 + 1])) : (((/* implicit */int) arr_4 [i_0 + 2] [i_9 - 1]))));
                }
                for (unsigned long long int i_10 = 3; i_10 < 20; i_10 += 2) /* same iter space */
                {
                    var_24 = ((/* implicit */long long int) (signed char)-49);
                    arr_33 [(signed char)0] [i_4] [i_8] [(signed char)0] = var_13;
                    arr_34 [i_0] [i_4] [i_4] [i_10] = ((/* implicit */unsigned long long int) var_0);
                }
                for (unsigned long long int i_11 = 3; i_11 < 20; i_11 += 2) /* same iter space */
                {
                    arr_38 [i_0] [i_11] = ((/* implicit */int) (unsigned char)238);
                    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_11 - 1] [i_11 - 1] [i_11])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((unsigned char) arr_13 [i_8])))));
                    arr_39 [i_11] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_15 [i_11 - 2] [i_4 + 2] [i_0 + 1] [i_0])) >> (((/* implicit */int) arr_1 [i_0]))));
                    var_26 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_0] [i_4] [i_8] [18ULL])) ? (((/* implicit */long long int) arr_9 [i_0 - 1] [i_8] [(unsigned char)8])) : (var_12)));
                }
            }
            for (unsigned char i_12 = 0; i_12 < 21; i_12 += 2) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_13 = 2; i_13 < 18; i_13 += 1) 
                {
                    var_27 ^= ((/* implicit */long long int) ((int) arr_2 [i_0 + 3]));
                    /* LoopSeq 2 */
                    for (signed char i_14 = 0; i_14 < 21; i_14 += 1) 
                    {
                        arr_46 [i_13] [(unsigned char)13] [i_4] [i_4] [i_13] [14U] = ((/* implicit */long long int) (unsigned short)4606);
                        var_28 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_27 [20ULL] [i_13] [i_12] [i_0])))) ? (((/* implicit */unsigned long long int) var_4)) : (var_7)));
                    }
                    for (signed char i_15 = 0; i_15 < 21; i_15 += 2) 
                    {
                        arr_50 [10ULL] [i_4] [i_4] [i_13] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_49 [i_0] [i_4 + 2] [i_4 + 2] [i_12] [i_13] [i_15])) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_29 [i_15] [i_13 - 2] [i_12]) < (3091607942532545942ULL))))) : (var_4)));
                        arr_51 [i_13] [i_12] [i_13] [i_13] = ((/* implicit */unsigned long long int) arr_13 [i_0 + 3]);
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) (~(arr_25 [i_0 - 1] [i_13 + 1] [i_4 - 1] [i_0 - 1] [i_0] [i_0]))))));
                        var_30 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_0] [i_4])))))));
                        var_31 -= ((/* implicit */unsigned int) ((((/* implicit */int) arr_22 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 2])) >> (((((/* implicit */int) ((unsigned short) arr_0 [i_0] [(short)0]))) - (53599)))));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_17 = 0; i_17 < 21; i_17 += 2) 
                    {
                        arr_56 [i_13] [(signed char)2] [i_12] [i_4] [1ULL] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)82)) * (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [19LL]))))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_37 [10ULL] [i_4] [i_4] [i_4] [i_4])) > (((/* implicit */int) (unsigned short)60937))))))));
                        arr_57 [i_0 + 1] [i_13] [i_0] [15] [i_12] [(signed char)4] [i_17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (var_10) : (arr_23 [i_0] [i_13 - 1] [i_12] [i_13 - 1])));
                        arr_58 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [19] [i_13] = ((/* implicit */short) ((arr_29 [i_0] [i_0 + 1] [i_0 + 1]) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_55 [i_0 + 3] [i_4] [i_4] [i_13] [i_17] [i_13]))))))));
                    }
                    arr_59 [i_13] [i_13 + 3] [i_13] [(short)3] = ((/* implicit */unsigned long long int) ((unsigned char) arr_44 [i_0] [i_0] [(unsigned char)14] [i_0 - 1] [i_0 + 3] [i_13 - 2]));
                }
                arr_60 [i_0] [i_4] [i_12] = ((/* implicit */signed char) ((var_4) > (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)114)) : (var_6))))))));
            }
            var_32 += ((/* implicit */signed char) var_9);
        }
        arr_61 [i_0 + 2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_4)))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) - (arr_40 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_0 - 1] [i_0 + 2] [i_0 - 1] [i_0 - 1]))) : (6073097919221866810ULL))) : (arr_29 [i_0 + 3] [i_0 + 2] [i_0 + 3]));
    }
    for (unsigned char i_18 = 1; i_18 < 18; i_18 += 4) /* same iter space */
    {
        arr_66 [i_18] = ((/* implicit */unsigned int) (~(18014398508433408ULL)));
        var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) var_6)) : (var_3)))) ? (((/* implicit */long long int) (+(var_3)))) : (8050762574315851907LL)))))));
    }
    for (unsigned char i_19 = 1; i_19 < 18; i_19 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_20 = 0; i_20 < 21; i_20 += 3) 
        {
            arr_73 [i_20] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) && (((/* implicit */_Bool) var_4))));
            arr_74 [i_19] [i_20] [i_20] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) var_0)) != (var_6))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (max((((var_12) | (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) (+(((/* implicit */int) var_8)))))))));
            arr_75 [i_20] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) 996535741759375754ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_19])))), (((/* implicit */int) ((unsigned char) arr_52 [i_19] [i_19 + 2] [i_20] [i_20])))));
        }
        var_34 = ((/* implicit */signed char) (+(4488155146431396090LL)));
        arr_76 [i_19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_53 [(unsigned char)6] [i_19] [i_19] [15LL] [i_19 - 1] [i_19] [i_19 + 1])) ? (((/* implicit */unsigned long long int) var_11)) : (arr_0 [i_19 + 1] [i_19])))) || (((/* implicit */_Bool) var_1))));
    }
    var_35 = ((/* implicit */_Bool) -7434670583416568514LL);
}
