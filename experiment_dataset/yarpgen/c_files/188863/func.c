/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188863
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
    var_15 = ((/* implicit */int) var_10);
    var_16 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))))) <= (var_4))))));
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 13; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [(unsigned short)14] [14ULL] |= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) arr_0 [i_2 + 1]))))) <= (((/* implicit */int) arr_0 [i_0 + 2]))));
                    arr_8 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)38)) : (((/* implicit */int) var_2))))))) && (max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)33))) >= (var_0))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_2 + 1]))) <= (arr_4 [i_0])))))));
                }
            } 
        } 
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (unsigned char)217))));
        arr_9 [i_0] = ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0 + 1]))) == (max((((/* implicit */unsigned long long int) arr_6 [(short)4] [i_0] [(_Bool)1])), (var_0)))))) & (((/* implicit */int) ((((/* implicit */int) max(((unsigned char)38), (((/* implicit */unsigned char) var_11))))) <= (((((arr_6 [(short)11] [(short)11] [i_0]) + (2147483647))) >> (((((/* implicit */int) (unsigned char)45)) - (29)))))))));
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_13 [i_0] [i_0] [i_3] = ((/* implicit */unsigned int) (~((-(((8579441849584992823LL) % (((/* implicit */long long int) ((/* implicit */int) var_3)))))))));
            var_18 = ((/* implicit */int) min((var_18), (max((max((arr_6 [i_0 - 1] [i_0 + 2] [i_0 + 2]), (arr_6 [i_0 - 1] [i_0] [i_0 - 1]))), (((((/* implicit */int) (_Bool)1)) | (arr_6 [i_0 + 1] [i_0] [i_0 + 1])))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 1; i_4 < 14; i_4 += 1) 
            {
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(23LL)))) ? (((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (((/* implicit */int) arr_3 [i_0 + 2])) : (((/* implicit */int) arr_3 [i_0 + 1])))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_10))))));
                var_20 = ((/* implicit */int) max((var_20), (((int) (~(((/* implicit */int) (unsigned short)32630)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 2; i_5 < 14; i_5 += 1) 
                {
                    for (unsigned char i_6 = 1; i_6 < 13; i_6 += 2) 
                    {
                        {
                            arr_24 [9] [i_3] [i_4 - 1] [i_5] [i_0] = ((/* implicit */long long int) (-(((((/* implicit */int) arr_10 [i_0])) / (((/* implicit */int) arr_10 [i_0]))))));
                            var_21 = ((/* implicit */short) min((((long long int) arr_12 [(unsigned short)2])), (((/* implicit */long long int) ((arr_20 [i_4 + 1] [13] [i_4 + 1]) && (((/* implicit */_Bool) (unsigned short)32922)))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (~(((/* implicit */int) var_3))))), (arr_2 [(unsigned short)8])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [4LL])) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-2147483647 - 1))) / (var_6)))))))) : (((unsigned int) var_13)))))));
            }
        }
    }
    /* vectorizable */
    for (short i_7 = 1; i_7 < 13; i_7 += 1) /* same iter space */
    {
        arr_28 [i_7 + 2] = ((((/* implicit */int) arr_21 [i_7 + 2] [i_7 - 1])) < (((/* implicit */int) arr_21 [i_7 - 1] [i_7 + 1])));
        arr_29 [11LL] = ((((/* implicit */_Bool) var_1)) ? (arr_26 [i_7 - 1] [i_7 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_7 + 1]))));
        /* LoopSeq 2 */
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 4294967266U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)218))) : (arr_27 [i_7]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)114)) == (((/* implicit */int) (_Bool)1))))))));
            arr_32 [i_7] [i_8 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((/* implicit */int) ((arr_4 [i_7 + 1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_8 - 1] [i_8 - 1])))))) : (((/* implicit */int) (unsigned short)65522))));
        }
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) /* same iter space */
        {
            arr_35 [i_7] [12ULL] [12ULL] = ((((/* implicit */_Bool) arr_6 [i_7 - 1] [i_7] [i_7])) || (((/* implicit */_Bool) var_4)));
            arr_36 [i_9] |= ((/* implicit */int) var_4);
            arr_37 [i_7 + 3] [(unsigned char)4] |= ((/* implicit */unsigned long long int) arr_23 [i_7] [i_7] [(signed char)4] [i_9] [i_9]);
            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)216))))) % (var_4))))));
        }
        var_25 += ((/* implicit */unsigned short) ((arr_15 [i_7] [i_7] [i_7 + 1] [i_7 + 2]) >= (((5765827496666933531ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_7 + 3])))))));
        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned short)42174)) ? (arr_6 [i_7] [i_7 + 2] [i_7 + 1]) : (((/* implicit */int) arr_25 [10ULL])))))))));
    }
    for (short i_10 = 1; i_10 < 13; i_10 += 1) /* same iter space */
    {
        arr_40 [11ULL] [i_10] = ((/* implicit */unsigned short) var_11);
        arr_41 [i_10] = ((/* implicit */unsigned short) (~(((int) arr_5 [i_10 + 3] [i_10 + 3]))));
        /* LoopSeq 4 */
        for (short i_11 = 2; i_11 < 13; i_11 += 1) 
        {
            var_27 += ((/* implicit */long long int) min((((arr_27 [i_10 - 1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24934))))), (((((/* implicit */_Bool) arr_27 [i_10 - 1])) ? (((/* implicit */unsigned long long int) 23LL)) : (arr_27 [i_10 + 1])))));
            var_28 += ((/* implicit */unsigned int) ((var_4) << (((/* implicit */int) ((_Bool) max((23LL), (((/* implicit */long long int) (_Bool)1))))))));
            arr_45 [i_10] [i_11] [i_11 - 2] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_10] [14])) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_10] [i_10 + 1] [i_10] [i_10 - 1] [i_11] [i_11]))) : (arr_19 [i_10] [i_10] [i_10] [i_10 + 2] [i_10] [i_11])))), (12680916577042618084ULL)));
        }
        for (signed char i_12 = 0; i_12 < 16; i_12 += 1) 
        {
            var_29 ^= ((/* implicit */long long int) (_Bool)1);
            var_30 *= ((/* implicit */_Bool) (~((~(arr_31 [i_10 + 1])))));
            var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) / (max((max((((/* implicit */long long int) arr_42 [i_10] [i_12])), (arr_31 [i_10 + 1]))), (((/* implicit */long long int) max((arr_10 [(signed char)2]), (((/* implicit */unsigned short) (short)-10794))))))))))));
        }
        for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 1) 
        {
            arr_51 [i_10] [i_13] = ((/* implicit */long long int) arr_21 [i_10 + 1] [i_10]);
            arr_52 [i_13] = ((/* implicit */_Bool) ((unsigned short) ((unsigned short) arr_4 [i_10 + 2])));
            var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) max((((((/* implicit */_Bool) var_2)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (short)14336))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_25 [i_10 + 1])) >> (((((/* implicit */int) arr_25 [i_10 + 2])) - (9148)))))))))));
            arr_53 [i_10] [i_13] [i_10] = ((/* implicit */short) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((((/* implicit */int) (_Bool)1)), (arr_42 [i_10 + 3] [i_13])))), (((long long int) 18306331592353020088ULL))))) <= (5341505153906332214ULL)));
        }
        for (unsigned short i_14 = 1; i_14 < 14; i_14 += 1) 
        {
            arr_57 [i_14 - 1] [i_14] = (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) var_10)) / (-869788979)))) / (((16U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_10] [i_10 - 1] [i_14 + 2])))))))));
            var_33 = ((/* implicit */int) ((((((/* implicit */int) arr_21 [i_14 - 1] [i_10 - 1])) >> (((((/* implicit */int) (unsigned short)65534)) % (((/* implicit */int) var_7)))))) < (((/* implicit */int) arr_21 [i_10] [i_14]))));
            var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) var_13))));
        }
    }
}
