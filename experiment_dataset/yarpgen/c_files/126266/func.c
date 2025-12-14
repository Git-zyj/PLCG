/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126266
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
    var_20 -= ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_16))) > ((-9223372036854775807LL - 1LL)))))) - (((/* implicit */int) ((10636838042602027037ULL) < (((/* implicit */unsigned long long int) 0LL)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            arr_7 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) min((((/* implicit */unsigned int) var_7)), (var_9)))) - (arr_3 [i_0])))) ? (7809906031107524579ULL) : (((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_1 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32763))) : (arr_6 [i_1] [i_1 - 1] [i_0 + 1])))));
            arr_8 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) (_Bool)1))) + (var_4)));
        }
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_21 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0 + 2])) ? (((/* implicit */int) (short)32766)) : (1317193810)));
            /* LoopSeq 1 */
            for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
            {
                var_22 = ((/* implicit */unsigned int) ((unsigned short) (unsigned char)90));
                /* LoopSeq 3 */
                for (int i_4 = 1; i_4 < 18; i_4 += 1) 
                {
                    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_3 [(unsigned char)6])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) * (var_8)))) : ((-(var_6)))));
                    var_24 = ((((/* implicit */int) arr_11 [i_0] [(unsigned char)8] [(unsigned char)8] [i_4 + 1])) << ((((((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)96)))) - (5035))));
                    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_3)))) ? (((/* implicit */unsigned long long int) (~(-14LL)))) : (10636838042602027037ULL)));
                }
                for (unsigned int i_5 = 0; i_5 < 19; i_5 += 1) 
                {
                    var_26 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_19 [i_0 - 3] [i_0] [i_0 - 3] [i_0 + 1] [i_0] [i_0]))))) || (((/* implicit */_Bool) ((signed char) (unsigned char)162)))));
                    var_27 = ((/* implicit */short) arr_15 [i_0] [i_0] [i_3] [i_5] [i_3]);
                }
                for (long long int i_6 = 3; i_6 < 18; i_6 += 2) 
                {
                    var_28 *= ((/* implicit */unsigned short) ((_Bool) ((signed char) arr_18 [i_0 - 2] [16LL] [17LL] [i_6 - 2])));
                    var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) 63U)) && (((/* implicit */_Bool) 7809906031107524563ULL))))))));
                }
            }
            var_30 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_10 [(unsigned short)18] [i_0 + 2] [i_2]))));
        }
        for (unsigned long long int i_7 = 1; i_7 < 15; i_7 += 2) 
        {
            var_31 = ((/* implicit */int) (!(((/* implicit */_Bool) min(((short)-32765), (((/* implicit */short) arr_21 [i_7] [i_0 + 1] [i_0] [i_7])))))));
            var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_21 [i_7 + 4] [i_7] [i_0] [i_0 - 3]))))), (min((((/* implicit */unsigned char) var_14)), (arr_21 [i_7] [i_7 + 3] [i_0 + 2] [i_0 - 2]))))))));
            var_33 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_0] [(signed char)8] [(signed char)8] [i_0 + 1])) ? (((arr_23 [i_7 + 4] [(_Bool)1]) ? ((+(((/* implicit */int) var_5)))) : (min((arr_5 [i_0] [(unsigned short)16]), (((/* implicit */int) arr_0 [(unsigned short)6])))))) : (((((/* implicit */int) var_5)) / (arr_5 [i_0] [(unsigned short)12])))));
        }
        arr_26 [i_0 + 2] [i_0] = ((long long int) max((max(((short)32763), (((/* implicit */short) (_Bool)1)))), (max((((/* implicit */short) (unsigned char)90)), (var_0)))));
    }
    for (unsigned char i_8 = 1; i_8 < 21; i_8 += 1) 
    {
        arr_29 [i_8] = ((/* implicit */signed char) (-(((((/* implicit */long long int) 8)) - (-3277921967108971603LL)))));
        /* LoopSeq 1 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_10 = 0; i_10 < 22; i_10 += 1) 
            {
                var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_36 [i_8 + 1] [i_9] [i_10] [i_9])), ((unsigned char)169)))) ? ((+(((/* implicit */int) arr_36 [i_8 + 1] [i_9] [i_9] [i_8])))) : ((~(((/* implicit */int) (signed char)31))))));
                var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) 744718643)) ? (-744718644) : (((/* implicit */int) (unsigned short)48309))));
                arr_37 [i_8] [i_9] [i_10] = ((/* implicit */long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_8 + 1]))) + (134780948U)))));
                /* LoopSeq 1 */
                for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                {
                    arr_41 [i_9] = ((unsigned short) min((var_4), (((/* implicit */int) var_13))));
                    /* LoopSeq 1 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_36 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (10636838042602027037ULL))), (((var_1) << (((var_9) - (4202612805U)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_8])) ? (4160186347U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) && (arr_38 [i_9] [(short)21] [i_8] [i_8 - 1])))) : (((/* implicit */int) ((short) max((((/* implicit */unsigned char) arr_40 [i_8 - 1] [i_9] [i_10] [i_11])), ((unsigned char)99)))))));
                        var_37 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) arr_42 [i_8] [(_Bool)1] [i_8] [i_9] [i_8]))) + (min((var_4), (((/* implicit */int) (unsigned char)89))))))) && (((/* implicit */_Bool) (+(var_2))))));
                    }
                    var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_40 [i_8] [i_8] [i_8 - 1] [i_11 + 1])) << (((((/* implicit */int) var_18)) - (42111)))))) ? (((((((/* implicit */int) (unsigned char)90)) < (((/* implicit */int) (unsigned short)60891)))) ? (var_2) : (((/* implicit */long long int) min((((/* implicit */unsigned int) var_10)), (134780948U)))))) : (((/* implicit */long long int) ((arr_40 [i_8] [i_8 + 1] [12U] [i_8]) ? (((/* implicit */int) arr_40 [i_8] [i_8 + 1] [i_8 - 1] [i_8 - 1])) : (((/* implicit */int) var_10)))))));
                    var_39 = ((/* implicit */int) min(((short)32767), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_4) : (var_8)))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 1) 
                    {
                        var_40 = ((/* implicit */long long int) min((var_40), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)99))) : (0U))))));
                        arr_47 [(unsigned short)17] [i_13] [i_9] [(unsigned char)19] [i_9] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)19)) % (((/* implicit */int) arr_43 [(unsigned char)20] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))))) ? (((/* implicit */int) arr_28 [i_11 + 1])) : (((/* implicit */int) arr_44 [i_8 - 1] [i_8] [i_8 + 1] [i_11 + 1] [i_11 + 1]))))) ? (arr_39 [(unsigned char)19] [i_9]) : (min((((long long int) (_Bool)0)), ((((_Bool)1) ? (arr_39 [i_8] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_8] [(short)6] [i_8] [(signed char)20] [(unsigned char)1]))))))));
                        var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_40 [i_8 - 1] [i_8 + 1] [i_8] [(_Bool)1])), (arr_31 [i_11 + 1] [i_11 + 1] [i_11 + 1])))) ? (((/* implicit */unsigned int) ((var_8) + (((((/* implicit */int) arr_34 [i_9] [i_9])) - (var_12)))))) : (var_9)));
                    }
                }
            }
            var_42 += ((/* implicit */_Bool) arr_42 [16U] [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_9]);
            /* LoopNest 3 */
            for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 1) 
            {
                for (short i_15 = 1; i_15 < 21; i_15 += 1) 
                {
                    for (unsigned int i_16 = 2; i_16 < 20; i_16 += 2) 
                    {
                        {
                            var_43 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1623945502066955956LL))));
                            var_44 ^= ((/* implicit */short) ((((((/* implicit */_Bool) arr_33 [i_16])) && (((/* implicit */_Bool) arr_33 [i_16])))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_49 [i_14] [i_9] [i_14] [i_15 + 1])) && (var_10)))) > (((/* implicit */int) ((var_11) && (((/* implicit */_Bool) arr_28 [i_8])))))))) : (var_12)));
                            var_45 = ((/* implicit */unsigned short) var_6);
                            var_46 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) arr_40 [i_8 - 1] [i_8 - 1] [i_15 + 1] [i_16])) > (((/* implicit */int) arr_40 [i_8] [i_8 + 1] [i_8 + 1] [i_8 - 1])))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned char i_17 = 4; i_17 < 19; i_17 += 2) 
            {
                var_47 -= ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) min((arr_32 [i_17] [(_Bool)1] [i_17 - 2]), (((/* implicit */unsigned int) (short)32764)))))) * ((~(((/* implicit */int) (!(arr_57 [i_8] [i_9] [i_9]))))))));
                var_48 *= ((/* implicit */long long int) min((((/* implicit */unsigned int) (((!(var_11))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_19)) || (((/* implicit */_Bool) (unsigned char)77))))) : (((((/* implicit */int) arr_57 [i_8] [i_8] [i_17])) ^ (var_8)))))), (((((/* implicit */_Bool) (unsigned short)992)) ? (((268369920U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)21697))))))))));
            }
        }
        var_49 = ((/* implicit */signed char) 209435050);
    }
    var_50 = ((/* implicit */short) min(((_Bool)1), ((_Bool)1)));
}
