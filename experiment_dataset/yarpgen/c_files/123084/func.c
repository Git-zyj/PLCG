/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123084
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
    var_13 -= ((/* implicit */short) ((((var_8) & (min((16568263934548797649ULL), (((/* implicit */unsigned long long int) var_5)))))) & (min((((/* implicit */unsigned long long int) ((long long int) var_11))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) ^ (var_3)))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [(signed char)9] [i_0])) : (((/* implicit */int) arr_1 [i_0])))) << ((((+(1878480139160753967ULL))) - (1878480139160753938ULL)))));
        arr_3 [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12))))) : (((((/* implicit */_Bool) var_10)) ? (1878480139160753966ULL) : (12017743243445041998ULL))))), (((/* implicit */unsigned long long int) var_5))));
        var_14 -= ((/* implicit */unsigned char) arr_1 [i_0]);
        var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)127)), ((unsigned char)228)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : ((~(((/* implicit */int) (short)5210))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) : (((((/* implicit */_Bool) (short)29764)) ? (((((/* implicit */_Bool) 132741481)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))));
        var_16 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)21056)) ? ((-(((/* implicit */int) (short)24896)))) : (((((/* implicit */int) var_4)) | (((/* implicit */int) (signed char)114)))))) + ((~(((((/* implicit */int) (unsigned char)0)) ^ (((/* implicit */int) var_9))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) min((max((min((6214820135667505853ULL), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) arr_0 [(signed char)4] [i_1])))), (((((/* implicit */_Bool) ((((/* implicit */int) var_2)) * (((/* implicit */int) (short)-23931))))) ? ((+(var_8))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) (unsigned short)51126))))))))))));
        var_18 += ((/* implicit */long long int) min(((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_1 [i_1])), (var_3)))))), (((((/* implicit */unsigned int) (-(((/* implicit */int) var_10))))) <= (((1073725440U) % (((/* implicit */unsigned int) ((/* implicit */int) (short)10878)))))))));
        arr_6 [i_1] &= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) arr_1 [i_1])), ((unsigned short)18908)))), (min((1878480139160753965ULL), (((/* implicit */unsigned long long int) 501756573U))))));
        arr_7 [12U] [(signed char)6] = ((/* implicit */signed char) min((((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-84))))), (min((((/* implicit */unsigned int) var_2)), (1073725440U)))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)24762)), (923700539U)))) ? (min((925603145160699251LL), (((/* implicit */long long int) (signed char)66)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)24896)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_1 [i_1])))))))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 1; i_2 < 18; i_2 += 3) 
    {
        arr_12 [i_2] |= ((/* implicit */signed char) ((var_3) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2 - 1] [i_2])))));
        /* LoopSeq 4 */
        for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            var_19 -= ((/* implicit */unsigned long long int) ((2199023255551LL) != (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2] [i_2 + 1])))));
            arr_15 [i_2] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_8 [(unsigned char)1] [i_2])))) ? (1878480139160753959ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)16)))));
            arr_16 [i_2] = ((/* implicit */short) var_9);
            /* LoopSeq 4 */
            for (int i_4 = 1; i_4 < 18; i_4 += 1) 
            {
                arr_19 [i_3] [i_3] [i_4 + 1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)94)) ? (((/* implicit */int) (unsigned short)32768)) : (((/* implicit */int) (unsigned short)25670))));
                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) var_5))));
                var_21 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_13 [i_2] [i_2 - 1] [i_2])) : (((/* implicit */int) var_11))));
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 2) 
                {
                    arr_23 [i_2] [i_4] [11] [11] = ((/* implicit */long long int) ((short) ((((/* implicit */int) arr_11 [i_2] [6U])) % (((/* implicit */int) (short)-23579)))));
                    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)64219)) ? (-4813977935480694344LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32768)))))) ? ((-(var_3))) : (((((/* implicit */_Bool) (unsigned short)39865)) ? (16568263934548797649ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-32))))))))));
                    var_23 = ((/* implicit */_Bool) ((unsigned short) (+(((/* implicit */int) arr_11 [i_2] [i_2 + 1])))));
                }
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                /* LoopSeq 1 */
                for (long long int i_7 = 1; i_7 < 17; i_7 += 4) 
                {
                    var_24 = ((/* implicit */int) (unsigned char)161);
                    var_25 |= ((/* implicit */unsigned char) (!(((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned char)178))))));
                    var_26 &= ((/* implicit */unsigned int) var_7);
                }
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 4) 
                {
                    for (short i_9 = 0; i_9 < 19; i_9 += 1) 
                    {
                        {
                            arr_34 [i_9] [i_9] [(unsigned short)13] [0LL] [(unsigned short)13] [i_9] [(unsigned short)13] = ((/* implicit */signed char) (+(arr_8 [(_Bool)1] [i_2 + 1])));
                            var_27 = ((/* implicit */unsigned short) ((signed char) ((unsigned long long int) (short)-21420)));
                            var_28 = ((/* implicit */long long int) var_8);
                            arr_35 [i_9] [i_9] [i_9] [i_9] [i_8] [i_9] [15] = (short)-17486;
                            var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? ((-(((/* implicit */int) var_12)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
                        }
                    } 
                } 
            }
            for (signed char i_10 = 3; i_10 < 17; i_10 += 1) 
            {
                /* LoopSeq 2 */
                for (short i_11 = 0; i_11 < 19; i_11 += 3) 
                {
                    arr_41 [i_11] [(short)14] [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) var_2))));
                    var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_3)))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_12 = 0; i_12 < 19; i_12 += 4) 
                    {
                        arr_45 [i_12] [i_12] [i_12] = ((/* implicit */signed char) ((int) var_0));
                        arr_46 [i_2] [i_2] [i_2] [i_11] [(short)2] |= ((/* implicit */signed char) ((long long int) arr_33 [i_2 - 1]));
                        var_31 = ((/* implicit */unsigned short) (~(var_1)));
                        var_32 = ((/* implicit */short) ((0ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_2] [i_2] [(unsigned char)7] [i_11] [i_12] [i_12])))));
                    }
                    arr_47 [i_2] [i_3] [i_10] [i_3] [i_11] |= ((/* implicit */unsigned int) ((((/* implicit */long long int) var_5)) != (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)168))) / (arr_24 [i_2] [i_2] [i_2] [i_2])))));
                }
                for (unsigned long long int i_13 = 1; i_13 < 18; i_13 += 3) 
                {
                    var_33 = ((/* implicit */signed char) ((((/* implicit */long long int) 67043328U)) ^ (-1161410914317718252LL)));
                    var_34 = ((/* implicit */short) ((((((((/* implicit */int) var_0)) * (((/* implicit */int) var_10)))) + (2147483647))) << (((((/* implicit */int) var_2)) - (6271)))));
                }
                arr_51 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)0)) ? ((~(var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_3] [i_3] [(short)10])))));
                arr_52 [i_2 + 1] [i_2 + 1] [i_2] [i_2] |= var_6;
            }
            for (short i_14 = 1; i_14 < 15; i_14 += 3) 
            {
                var_35 = var_6;
                var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)32767)) : ((+(((/* implicit */int) (signed char)-11))))));
                var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) (+(((/* implicit */int) var_11)))))));
            }
        }
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
        {
            arr_57 [i_2] [i_15] [i_15] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) != (var_3))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((signed char) arr_13 [2U] [i_2] [i_15]))));
            var_38 = ((/* implicit */long long int) arr_40 [i_2] [i_2] [i_2 + 1] [6ULL]);
        }
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
        {
            var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? ((-(((/* implicit */int) var_2)))) : (((/* implicit */int) var_12)))))));
            var_40 = ((/* implicit */int) min((var_40), (((/* implicit */int) 1735441932310441405LL))));
            var_41 &= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned short)44272)))) ? (((((/* implicit */_Bool) 16568263934548797639ULL)) ? (arr_44 [i_2] [i_2] [i_2] [i_2] [i_16]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 1582659880147969473LL))))));
            arr_60 [14ULL] [i_16] &= ((/* implicit */signed char) -217314587875170151LL);
        }
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
        {
            var_42 -= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_36 [i_2 - 1] [i_2 + 1] [(unsigned short)9]))));
            arr_63 [i_2] = ((/* implicit */unsigned int) (((_Bool)1) ? (((int) 9223372036854775780LL)) : (((/* implicit */int) (!(((/* implicit */_Bool) -6239578132767593681LL)))))));
            arr_64 [i_2] [i_2] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)55292))));
        }
        var_43 |= var_1;
        var_44 = ((/* implicit */short) min((var_44), (((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)4))) : (((((/* implicit */_Bool) (signed char)-17)) ? (arr_54 [i_2] [i_2] [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)37))))))))));
        arr_65 [i_2] = ((/* implicit */unsigned int) ((var_3) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_3))))))));
    }
}
