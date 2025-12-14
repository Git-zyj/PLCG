/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131243
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
    var_16 = ((/* implicit */unsigned char) min((((/* implicit */long long int) var_5)), (var_1)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((1073741824) > (((/* implicit */int) arr_1 [i_0])))))))), (((((/* implicit */_Bool) 1943749068U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (11217461267931783994ULL)))));
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            arr_6 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (unsigned char)59);
            arr_7 [i_1] = ((/* implicit */unsigned short) (signed char)69);
            arr_8 [i_1] = ((/* implicit */_Bool) ((((arr_3 [i_0] [i_1]) ? ((~(18014398509481983LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -1735437006)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_1])) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))))))) & (((/* implicit */long long int) ((((/* implicit */_Bool) ((-1190601684) ^ (-1792081914)))) ? ((~(((/* implicit */int) arr_1 [i_0])))) : (((arr_3 [i_0] [i_0]) ? (((/* implicit */int) arr_1 [i_1 + 1])) : (((/* implicit */int) arr_0 [i_0])))))))));
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    {
                        arr_16 [i_1] [i_1] = ((/* implicit */int) (_Bool)0);
                        var_17 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (short)24551)) : (((/* implicit */int) (signed char)-53)))), (((((/* implicit */int) arr_1 [i_1 + 2])) / (((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1]))))));
                    }
                } 
            } 
        }
        for (short i_4 = 0; i_4 < 21; i_4 += 4) 
        {
            arr_19 [i_0] [i_4] = ((/* implicit */short) (_Bool)1);
            var_18 ^= ((/* implicit */_Bool) (~(((/* implicit */int) ((((((/* implicit */_Bool) 536870911)) ? (1073741824) : (((/* implicit */int) (unsigned char)102)))) > (((/* implicit */int) (unsigned short)63264)))))));
            arr_20 [i_4] [i_4] [i_0] |= ((/* implicit */_Bool) ((((((/* implicit */int) arr_9 [i_4] [i_4] [i_4])) < (((((/* implicit */int) (signed char)91)) + (536870911))))) ? (((((/* implicit */_Bool) -536870917)) ? (((((/* implicit */int) (unsigned short)1008)) % (((/* implicit */int) arr_18 [i_0] [i_0] [i_0])))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)102)) != (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */int) ((2147483647) <= (((((/* implicit */_Bool) 2)) ? (-1073741811) : (((/* implicit */int) arr_14 [i_4] [i_4] [(signed char)14] [i_4] [i_4] [i_4])))))))));
            var_19 = ((/* implicit */_Bool) (unsigned char)102);
            /* LoopNest 2 */
            for (short i_5 = 0; i_5 < 21; i_5 += 1) 
            {
                for (unsigned char i_6 = 2; i_6 < 20; i_6 += 2) 
                {
                    {
                        arr_26 [i_0] [i_4] [i_5] [i_5] = arr_24 [i_0] [i_4] [i_5] [i_5] [i_6 - 2];
                        arr_27 [i_0] [i_4] [12U] [(unsigned char)20] [i_5] = ((/* implicit */signed char) ((max((arr_0 [i_0]), ((_Bool)1))) ? (((arr_3 [i_0] [i_4]) ? (((/* implicit */int) arr_24 [i_5] [i_5] [(short)10] [i_5] [i_6 + 1])) : (((((/* implicit */_Bool) arr_12 [i_0] [i_4] [(_Bool)1] [(signed char)17])) ? (((/* implicit */int) (_Bool)1)) : ((-2147483647 - 1)))))) : (((/* implicit */int) arr_15 [i_4] [i_5] [i_6 + 1] [i_6 - 2]))));
                        var_20 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((422139439U), (801280676U)))) ? (((/* implicit */int) max((((/* implicit */signed char) arr_3 [i_0] [i_4])), (arr_15 [i_0] [i_5] [i_5] [i_6])))) : (((/* implicit */int) ((((/* implicit */int) arr_18 [i_0] [i_0] [i_0])) < (((/* implicit */int) (signed char)-91)))))))) ? (((((/* implicit */_Bool) -1830062878)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((((-1073741825) & (((/* implicit */int) (unsigned short)28357)))) / (((arr_17 [i_0]) ? (((/* implicit */int) (_Bool)1)) : (-536870916)))))));
                    }
                } 
            } 
        }
        /* LoopSeq 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
            {
                for (short i_9 = 0; i_9 < 21; i_9 += 2) 
                {
                    {
                        var_21 ^= ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)55079)) : (((/* implicit */int) arr_33 [i_9] [9ULL] [9ULL]))));
                        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_3 [i_0] [i_7]) ? (((/* implicit */int) arr_22 [i_9] [i_9])) : (((/* implicit */int) arr_4 [i_0] [i_9] [i_8 + 1]))))) ? (((/* implicit */int) (unsigned char)168)) : (((/* implicit */int) (_Bool)1))))) ? (1737824376897122618ULL) : (((((/* implicit */_Bool) max((arr_29 [i_0]), (((/* implicit */unsigned char) (_Bool)1))))) ? (max((127ULL), (((/* implicit */unsigned long long int) arr_18 [i_0] [i_7] [i_8])))) : (((/* implicit */unsigned long long int) arr_30 [i_8 + 1] [i_8 + 1])))))))));
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_25 [i_0] [i_9] [i_8]))))) ? (min((((arr_33 [i_0] [i_0] [i_8]) ? (((/* implicit */int) arr_28 [(unsigned char)9])) : (((/* implicit */int) (signed char)127)))), (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (short)-6263))))))) : (((((/* implicit */int) (!(((/* implicit */_Bool) (short)8191))))) % (((((/* implicit */_Bool) arr_21 [i_0] [i_9] [i_8] [i_9])) ? (((/* implicit */int) arr_14 [i_0] [i_0] [(short)12] [i_0] [i_0] [i_0])) : (((/* implicit */int) (short)-32416))))))));
                        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_0] [11] [i_8 + 1] [(signed char)8] [i_0] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)1024))) : (arr_30 [i_8] [i_7]))))));
                    }
                } 
            } 
            arr_34 [i_0] = ((/* implicit */signed char) arr_31 [i_7] [i_7] [17U] [(unsigned short)0]);
            /* LoopNest 3 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (short i_11 = 2; i_11 < 18; i_11 += 3) 
                {
                    for (signed char i_12 = 0; i_12 < 21; i_12 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_7] [i_10] [i_10] [i_12])) || (((/* implicit */_Bool) (short)-23566))))), ((unsigned char)177)))) & ((-(((/* implicit */int) (short)10))))));
                            var_26 = ((/* implicit */signed char) (-(((((/* implicit */int) arr_31 [i_0] [i_11 + 3] [i_10] [i_11])) + (((/* implicit */int) arr_12 [(unsigned char)14] [i_11 + 3] [(unsigned char)14] [i_11]))))));
                            var_27 *= ((/* implicit */signed char) min((max((((/* implicit */long long int) ((arr_28 [i_0]) ? (((/* implicit */int) (unsigned short)17015)) : (((/* implicit */int) (_Bool)0))))), (arr_21 [i_11 - 1] [(unsigned short)2] [(unsigned short)2] [i_11 + 1]))), (((/* implicit */long long int) ((((arr_9 [i_0] [i_0] [(unsigned char)4]) ? (arr_41 [18ULL] [i_7] [i_10] [i_7] [i_12] [i_10] [i_11]) : (((/* implicit */int) arr_36 [(_Bool)1] [i_10] [i_11] [i_12])))) | (((((/* implicit */_Bool) (signed char)19)) ? (((/* implicit */int) (unsigned short)10457)) : (((/* implicit */int) (signed char)-12)))))))));
                        }
                    } 
                } 
            } 
            var_28 = arr_37 [i_0] [i_0] [i_0] [i_0];
        }
        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
        {
            arr_47 [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_22 [i_13] [i_13])) | (((/* implicit */int) (signed char)-86)))))));
            var_29 = (-(((arr_33 [(unsigned short)16] [(unsigned short)16] [i_13]) ? (((/* implicit */int) arr_33 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_33 [i_0] [i_13 - 1] [i_13 - 1])))));
            /* LoopNest 2 */
            for (short i_14 = 0; i_14 < 21; i_14 += 4) 
            {
                for (short i_15 = 0; i_15 < 21; i_15 += 1) 
                {
                    {
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((((/* implicit */int) arr_15 [i_15] [i_14] [i_13 - 1] [i_0])) == (((/* implicit */int) arr_3 [i_0] [i_0])))) ? (((/* implicit */int) (unsigned short)47122)) : ((~(((/* implicit */int) (signed char)-19))))))) / (arr_44 [i_13] [i_14] [i_13])));
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) | (8388544U)));
                        /* LoopSeq 1 */
                        for (unsigned char i_16 = 2; i_16 < 19; i_16 += 2) 
                        {
                            arr_54 [i_0] [i_16] [i_13] [i_13] [(signed char)14] [i_0] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_50 [i_0] [i_13 - 1] [i_14] [i_13])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_31 [i_14] [i_14] [i_14] [i_14]) ? (((/* implicit */int) (unsigned short)47104)) : (((/* implicit */int) arr_14 [i_0] [i_13] [i_14] [i_0] [i_14] [i_16]))))) ? ((-(((/* implicit */int) arr_37 [i_0] [i_13] [i_0] [i_13])))) : (((/* implicit */int) max(((short)30858), (((/* implicit */short) (unsigned char)214)))))))) : (((((/* implicit */_Bool) arr_50 [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_13] [i_13 - 1] [i_16 + 1] [i_13]))) : (arr_50 [i_0] [i_13 - 1] [i_16 + 2] [i_13])))));
                            var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)55079)) >> (((/* implicit */int) (_Bool)1))))), (min((((/* implicit */unsigned int) (unsigned char)162)), (arr_30 [i_13] [i_13])))))) ? (((/* implicit */int) ((((/* implicit */int) arr_53 [i_14] [i_16 - 2] [i_16 + 1] [i_16 + 1] [i_16 - 2] [i_16 - 2] [i_16])) != (((((/* implicit */_Bool) arr_13 [i_14] [i_13] [i_14] [i_15] [i_16])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_0] [i_13 - 1] [i_14]))))))) : (((/* implicit */int) (_Bool)1)))))));
                        }
                        var_33 = min((((((/* implicit */_Bool) (~(((/* implicit */int) arr_28 [i_14]))))) ? (((/* implicit */int) arr_31 [i_0] [i_13] [i_14] [i_15])) : (((((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_13 - 1] [i_14] [i_15])) & (468078786))))), (((((/* implicit */_Bool) (signed char)17)) ? (((((/* implicit */int) arr_1 [i_14])) ^ (((/* implicit */int) (signed char)12)))) : (((/* implicit */int) min((arr_22 [i_13] [i_13]), (((/* implicit */short) (unsigned char)183))))))));
                    }
                } 
            } 
        }
        var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) max((arr_50 [i_0] [i_0] [i_0] [(signed char)20]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_0] [(_Bool)1] [i_0])) ? (((/* implicit */int) min(((signed char)-27), ((signed char)26)))) : (((/* implicit */int) (_Bool)1))))))))));
        /* LoopNest 2 */
        for (unsigned short i_17 = 0; i_17 < 21; i_17 += 1) 
        {
            for (unsigned long long int i_18 = 0; i_18 < 21; i_18 += 3) 
            {
                {
                    var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_17] [(_Bool)1] [i_18] [(_Bool)1])) ? (((arr_45 [i_17] [i_17]) & (arr_45 [i_0] [i_18]))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_24 [i_0] [(short)18] [i_17] [i_17] [i_0])))))));
                    arr_59 [i_17] [i_17] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_49 [i_0])) ? (-1190873368) : (((/* implicit */int) arr_37 [i_0] [i_17] [i_18] [i_18])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_0] [i_17] [i_17] [i_17])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)48)) != (((/* implicit */int) (short)30720))))) : (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)-32))))))));
                    var_36 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_15 [i_0] [i_17] [i_17] [i_0])) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)55079)) ? (-515889316) : (arr_5 [i_17])))) ? (((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) (unsigned short)10457)) : (((/* implicit */int) arr_33 [i_18] [i_0] [i_18])))) : (((/* implicit */int) (signed char)-35))))));
                }
            } 
        } 
    }
    var_37 += ((/* implicit */short) var_9);
}
