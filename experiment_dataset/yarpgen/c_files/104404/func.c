/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104404
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
    var_13 = ((/* implicit */signed char) var_11);
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 12; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    {
                        var_14 = ((/* implicit */unsigned long long int) arr_6 [i_0]);
                        arr_11 [i_0] [i_0] [i_0] [i_1] = ((((/* implicit */_Bool) ((var_7) * (((/* implicit */long long int) ((/* implicit */int) ((var_3) == (((/* implicit */int) var_2))))))))) ? (((/* implicit */int) arr_3 [i_3] [i_2 - 2])) : (((((/* implicit */_Bool) max((arr_4 [i_0] [i_0]), (arr_4 [(short)9] [i_1])))) ? (((((/* implicit */_Bool) 384)) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_2 + 1] [i_1] [i_2 + 1])) : (((/* implicit */int) (signed char)31)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3] [i_1] [i_0]))) > (arr_9 [i_0] [i_1])))))));
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */int) max((((/* implicit */short) (signed char)64)), ((short)28429)));
    }
    for (signed char i_4 = 0; i_4 < 14; i_4 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 2) /* same iter space */
        {
            var_16 = ((int) max((var_10), (max((arr_14 [i_5]), (((/* implicit */unsigned char) (signed char)22))))));
            arr_19 [i_4] [i_4] [i_4] = ((int) ((((/* implicit */int) arr_7 [i_4])) % (((/* implicit */int) arr_7 [i_4]))));
        }
        for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 2) /* same iter space */
        {
            var_17 *= arr_9 [i_4] [i_4];
            arr_22 [i_4] [i_6] [i_4] = ((/* implicit */signed char) (-((-(((((/* implicit */int) var_12)) >> (((var_1) + (1829746653)))))))));
        }
        for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 2) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((int) (short)-5477)))));
            arr_27 [i_4] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)205)) & (((/* implicit */int) (signed char)-1))));
            var_19 = ((/* implicit */int) (-(((arr_20 [i_4]) << (((((((/* implicit */_Bool) 548268327)) ? (((/* implicit */int) (signed char)66)) : (244838054))) - (63)))))));
        }
        var_20 = ((/* implicit */_Bool) (unsigned char)9);
        /* LoopSeq 3 */
        for (unsigned char i_8 = 0; i_8 < 14; i_8 += 2) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_9 = 0; i_9 < 14; i_9 += 2) 
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 14; i_10 += 4) 
                {
                    for (unsigned char i_11 = 1; i_11 < 11; i_11 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_7) + (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? ((+(52667971627686977LL))) : (((/* implicit */long long int) arr_36 [i_11]))));
                            arr_37 [(short)2] [i_11] [i_9] [i_11] [i_9] [i_11] [i_9] = ((/* implicit */_Bool) (-(arr_32 [i_11 + 3] [i_11] [6LL] [i_11 + 3] [i_11 - 1] [6LL])));
                            var_22 = ((/* implicit */unsigned long long int) arr_4 [9LL] [9LL]);
                            var_23 = ((unsigned int) (+(70368727400448ULL)));
                        }
                    } 
                } 
                arr_38 [i_4] [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_9]))) : (var_4)));
                arr_39 [i_4] [i_4] = ((((/* implicit */_Bool) (short)-7482)) ? (((/* implicit */int) (signed char)-10)) : (((/* implicit */int) (signed char)45)));
                var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (+(1033959924U))))));
                var_25 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_30 [i_8] [i_8] [i_4])) ? (arr_36 [i_4]) : (((((/* implicit */_Bool) 1006632960U)) ? (((/* implicit */int) (signed char)58)) : (((/* implicit */int) (short)3261))))));
            }
            for (unsigned int i_12 = 0; i_12 < 14; i_12 += 2) 
            {
                /* LoopSeq 1 */
                for (int i_13 = 0; i_13 < 14; i_13 += 2) 
                {
                    var_26 |= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_21 [i_8] [i_8]))));
                    /* LoopSeq 1 */
                    for (signed char i_14 = 0; i_14 < 14; i_14 += 4) 
                    {
                        arr_48 [i_14] [i_13] [i_4] [i_4] [i_8] [i_4] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_21 [i_8] [i_8]))));
                        var_27 = ((/* implicit */unsigned int) min((var_27), (((unsigned int) ((((/* implicit */_Bool) max(((short)-10063), (((/* implicit */short) var_2))))) ? (((((/* implicit */int) arr_21 [i_8] [i_13])) * (((/* implicit */int) arr_24 [i_14])))) : (((/* implicit */int) arr_10 [i_12] [i_8] [i_4])))))));
                    }
                }
                var_28 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((1525490815) | (((/* implicit */int) (short)-32755))))) ? (arr_20 [i_4]) : (((unsigned int) arr_25 [i_4] [i_8]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_4 [i_4] [i_12])) == (((/* implicit */int) arr_24 [i_12]))))) : (((/* implicit */int) (((-(((/* implicit */int) (signed char)104)))) > (max((-526593746), (var_1)))))));
            }
            arr_49 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) arr_30 [i_4] [3U] [i_8]))) > (var_7))) ? ((-(((/* implicit */int) arr_12 [i_8])))) : (((/* implicit */int) max((((/* implicit */short) (signed char)127)), ((short)-17703))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_31 [i_4] [6] [i_4])) : (((/* implicit */int) max((arr_1 [i_8]), (((/* implicit */short) arr_41 [i_8] [i_8] [i_4] [(signed char)8])))))))) : (max((arr_26 [9ULL] [i_4] [i_8]), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) -1073741824)) <= (var_4))))))));
        }
        for (short i_15 = 0; i_15 < 14; i_15 += 4) 
        {
            var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) (((((~(((/* implicit */int) arr_50 [i_4] [i_4] [i_4])))) + (2147483647))) >> (((-734258805) + (734258822)))))) ? (((((/* implicit */_Bool) -792656379)) ? (arr_20 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_4]))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) arr_23 [i_15] [i_4] [i_4])), (arr_24 [i_15]))))))))));
            var_30 = var_2;
            var_31 = ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) var_8)))), (((((/* implicit */_Bool) max((((/* implicit */signed char) arr_0 [i_4])), (arr_7 [i_15])))) ? (((/* implicit */int) max((arr_35 [i_4] [i_4] [i_15] [i_15]), (arr_18 [i_4] [i_4] [i_4])))) : (((/* implicit */int) (_Bool)0))))));
        }
        for (unsigned char i_16 = 0; i_16 < 14; i_16 += 2) 
        {
            arr_54 [i_4] [i_16] [i_16] = ((/* implicit */unsigned int) var_12);
            var_32 = (short)12288;
            var_33 ^= ((/* implicit */unsigned int) ((signed char) arr_23 [i_16] [i_16] [i_16]));
        }
    }
    for (signed char i_17 = 0; i_17 < 14; i_17 += 2) /* same iter space */
    {
        var_34 = ((/* implicit */short) ((signed char) (signed char)127));
        arr_57 [4U] [i_17] |= ((/* implicit */signed char) max((((/* implicit */short) (signed char)21)), ((short)-23743)));
        var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_17] [i_17] [i_17])) ? (((unsigned int) arr_0 [i_17])) : (((/* implicit */unsigned int) (~(((int) (signed char)92)))))));
        /* LoopSeq 2 */
        for (unsigned char i_18 = 3; i_18 < 13; i_18 += 2) 
        {
            var_36 = ((/* implicit */unsigned char) (-(11540894912766118492ULL)));
            var_37 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-93))))), (272314915242838047ULL)));
            arr_60 [i_17] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_31 [i_18] [i_18 - 1] [i_18 - 1])) ? (((/* implicit */int) arr_31 [i_18] [i_18 - 3] [i_18])) : (((/* implicit */int) arr_31 [i_18] [i_18 + 1] [i_18 + 1]))))));
            var_38 = ((/* implicit */short) (((~(226444764U))) != (((/* implicit */unsigned int) var_9))));
        }
        for (int i_19 = 0; i_19 < 14; i_19 += 2) 
        {
            /* LoopSeq 2 */
            for (short i_20 = 0; i_20 < 14; i_20 += 4) 
            {
                var_39 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-8))));
                var_40 *= ((/* implicit */_Bool) (-(((/* implicit */int) var_6))));
                var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_17] [i_17])) ? (((((/* implicit */_Bool) ((arr_28 [i_17] [i_19] [i_20]) ? (arr_17 [i_19]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (max((((/* implicit */long long int) (signed char)110)), (9198072102279013502LL))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_56 [(short)13] [i_19]))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_64 [i_19])))));
                arr_67 [i_17] [i_19] [i_19] = ((/* implicit */short) var_5);
            }
            for (signed char i_21 = 0; i_21 < 14; i_21 += 4) 
            {
                arr_70 [(signed char)3] [(signed char)3] [i_19] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_19] [i_21])) ? (((((/* implicit */int) var_8)) % (((/* implicit */int) arr_10 [i_17] [i_17] [i_17])))) : (arr_25 [i_17] [i_17])))), ((-(((((/* implicit */_Bool) 134217728)) ? (50331648U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)28)))))))));
                arr_71 [i_17] [i_17] [i_19] [i_17] = max((((long long int) max((var_4), (((/* implicit */unsigned int) arr_25 [i_17] [i_19]))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 536608768)) ? (((/* implicit */int) arr_6 [i_17])) : (((/* implicit */int) arr_12 [i_17])))))))));
            }
            var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) 987989783))) ? (140737488355327LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-1)))));
        }
    }
    for (signed char i_22 = 1; i_22 < 24; i_22 += 4) 
    {
        arr_74 [i_22] [i_22] = ((/* implicit */unsigned char) max((((/* implicit */int) max((arr_72 [i_22 - 1]), (arr_72 [i_22 + 1])))), (((((/* implicit */_Bool) 2352444075U)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (_Bool)1))))));
        var_43 = ((/* implicit */short) min((var_43), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)94)), (1979938666U)))) ? ((~(((/* implicit */int) arr_72 [i_22 - 1])))) : (((((/* implicit */_Bool) (signed char)30)) ? (((((/* implicit */_Bool) 2020768693)) ? (((/* implicit */int) (unsigned char)126)) : (((/* implicit */int) (short)-5093)))) : (((/* implicit */int) (unsigned char)148)))))))));
        arr_75 [i_22] [14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_72 [i_22])) ? ((+(((/* implicit */int) arr_72 [i_22 - 1])))) : (((((/* implicit */_Bool) arr_73 [i_22 - 1])) ? (((/* implicit */int) arr_73 [i_22 - 1])) : (((((/* implicit */_Bool) arr_73 [i_22])) ? (((/* implicit */int) arr_73 [i_22])) : (var_0)))))));
    }
    var_44 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)48)) ? (max((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */_Bool) -8388608)) ? (11680857182084485073ULL) : (((/* implicit */unsigned long long int) 625529890U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))));
}
