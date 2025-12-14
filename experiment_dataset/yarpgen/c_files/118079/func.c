/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118079
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 22; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */signed char) ((((/* implicit */int) var_0)) != (((/* implicit */int) (short)17877))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 1; i_3 < 20; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_0] [i_2 + 1] [i_3 - 1] [i_3 - 1])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_2 - 2] [i_3 + 1])))));
                        arr_9 [i_1] [i_2] [i_1] [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-86)) ? (2922884872010393509LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-29604)))))) ? (66584576LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2 - 1] [i_0] [i_0] [i_0])))));
                    }
                    arr_10 [i_1] [i_1] = (+(var_13));
                }
            } 
        } 
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))))))))));
    }
    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) /* same iter space */
    {
        arr_13 [i_4] [i_4] = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */short) var_1)), ((short)29604)))) ? (((/* implicit */int) (signed char)-75)) : ((+(((/* implicit */int) var_8)))))))));
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 23; i_5 += 3) 
        {
            for (short i_6 = 0; i_6 < 23; i_6 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 23; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 3; i_8 < 21; i_8 += 4) 
                        {
                            {
                                var_21 -= ((/* implicit */int) ((((/* implicit */long long int) min(((-(((/* implicit */int) (short)-29600)))), (((((/* implicit */int) arr_7 [i_4] [i_5] [i_4] [i_8])) / (((/* implicit */int) var_3))))))) * (((long long int) (unsigned short)12607))));
                                var_22 *= ((/* implicit */short) max((((/* implicit */unsigned long long int) (short)29599)), (0ULL)));
                            }
                        } 
                    } 
                    arr_24 [(short)22] [i_4] [i_4] [i_4 + 1] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((short) (-9223372036854775807LL - 1LL)))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_4])) + (((/* implicit */int) arr_23 [i_4] [i_4] [19ULL] [19ULL] [19ULL]))))) : (((((/* implicit */_Bool) arr_2 [i_4] [i_4])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (short)29615)))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_9 = 0; i_9 < 23; i_9 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned char) max(((+(((/* implicit */int) arr_5 [i_4] [i_4 + 1] [i_6] [i_4])))), (((((/* implicit */_Bool) (short)29604)) ? (((((/* implicit */int) arr_11 [i_9] [i_4])) ^ (((/* implicit */int) var_7)))) : (((/* implicit */int) arr_3 [i_4 + 1] [i_4 + 1] [i_4]))))));
                        arr_27 [i_4] [i_4] [(short)0] [(short)0] = ((/* implicit */signed char) ((short) min(((+(((/* implicit */int) (short)(-32767 - 1))))), (var_16))));
                        var_24 = ((short) ((((/* implicit */int) max((arr_3 [i_4] [i_4] [i_4]), (((/* implicit */unsigned short) (short)-29611))))) < (((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))));
                    }
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(5630423751806694785ULL)))) ? (((((/* implicit */_Bool) arr_12 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (1624137884U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-50))))))));
    }
    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */short) min((((/* implicit */long long int) (signed char)-6)), (6702763034967808650LL)));
        /* LoopSeq 1 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            arr_35 [i_10] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [3ULL] [i_10 + 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (((3ULL) >> (((((/* implicit */int) ((short) (short)(-32767 - 1)))) + (32774)))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_12 = 2; i_12 < 19; i_12 += 2) 
            {
                arr_39 [13LL] [13LL] [i_12] [(short)21] |= ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_10 + 1] [i_10] [i_10 + 1] [i_10 + 1]))) ^ ((~(-1LL))));
                /* LoopNest 2 */
                for (short i_13 = 0; i_13 < 23; i_13 += 3) 
                {
                    for (signed char i_14 = 0; i_14 < 23; i_14 += 2) 
                    {
                        {
                            arr_44 [i_10] [i_10] [i_10] [i_10] [i_10] [i_11] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_10] [i_10]))) : (var_2)))) ? (((/* implicit */int) (unsigned short)65519)) : (((/* implicit */int) arr_33 [i_10] [i_10 + 1] [i_12 + 1]))));
                            arr_45 [i_10] [i_10] [i_10] [i_10] [i_10] [i_14] [(unsigned char)10] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_32 [i_12 + 3]))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    var_27 = ((/* implicit */long long int) arr_22 [i_10] [i_15] [i_15] [i_12] [i_12] [i_15] [i_15]);
                    arr_49 [i_15] [i_15] [i_12] [i_15] = ((/* implicit */short) ((unsigned long long int) arr_1 [i_10 + 1] [i_12]));
                    var_28 += ((/* implicit */signed char) (-(((/* implicit */int) arr_19 [i_12 + 2] [i_10 + 1] [i_12] [i_15] [i_15]))));
                }
            }
            arr_50 [i_10] [i_10] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_28 [i_10 + 1])) ? (((/* implicit */int) arr_28 [i_10 + 1])) : (((/* implicit */int) (short)-17056)))));
        }
    }
    for (signed char i_16 = 2; i_16 < 18; i_16 += 2) 
    {
        arr_54 [i_16] [i_16] = ((/* implicit */long long int) ((signed char) var_0));
        var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) max((var_0), (((/* implicit */short) ((_Bool) ((var_9) / (((/* implicit */int) (unsigned char)62)))))))))));
        arr_55 [i_16] [i_16] = ((/* implicit */unsigned long long int) (unsigned char)63);
        var_30 |= (-(max((arr_52 [i_16] [i_16 - 1]), (((/* implicit */long long int) 1071514510)))));
        /* LoopSeq 4 */
        for (signed char i_17 = 0; i_17 < 20; i_17 += 1) 
        {
            arr_58 [i_17] = ((/* implicit */signed char) (~(((/* implicit */int) (short)-24788))));
            arr_59 [(signed char)19] = ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_19 [i_16] [i_16 + 2] [i_16 - 2] [i_16 - 1] [i_16 + 2]))))));
            arr_60 [(signed char)14] [i_16] [i_16] &= ((/* implicit */signed char) max((((((/* implicit */_Bool) 17970949359620391972ULL)) ? (((/* implicit */int) (unsigned char)162)) : (((/* implicit */int) (unsigned short)15171)))), (((((/* implicit */int) (signed char)-94)) / (-964042358)))));
        }
        for (unsigned long long int i_18 = 2; i_18 < 17; i_18 += 2) 
        {
            /* LoopNest 2 */
            for (short i_19 = 1; i_19 < 19; i_19 += 2) 
            {
                for (int i_20 = 0; i_20 < 20; i_20 += 4) 
                {
                    {
                        arr_71 [i_19] [i_19] [i_18 + 3] [i_18] = (signed char)49;
                        var_31 -= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_63 [i_16] [i_18] [i_16])))) ? ((~(arr_63 [i_18] [i_20] [(signed char)4]))) : (min((arr_63 [i_16] [i_18] [i_16 - 1]), (arr_63 [i_16] [i_18] [i_16])))));
                        var_32 = ((/* implicit */signed char) ((short) ((((/* implicit */int) ((arr_47 [i_19] [i_19] [i_19] [i_19] [i_19]) <= (((/* implicit */long long int) var_10))))) > (((/* implicit */int) (signed char)-15)))));
                    }
                } 
            } 
            var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((((/* implicit */_Bool) (signed char)-103)) ? (17970949359620391972ULL) : (((/* implicit */unsigned long long int) arr_66 [i_16 + 1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_14 [i_16] [i_18])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-17670))) : (3858215415U))))))));
            arr_72 [i_16] [i_16] [(unsigned char)13] = ((/* implicit */unsigned long long int) ((((var_1) && (((/* implicit */_Bool) (-(18LL)))))) ? (((min((arr_67 [i_16] [i_16] [i_16] [i_16]), (((/* implicit */long long int) arr_34 [i_18] [i_16] [i_16])))) / (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_16 + 1] [i_16]))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_68 [i_18] [i_18] [i_18 + 3])) | (((/* implicit */int) var_15)))))));
            arr_73 [i_16] = ((/* implicit */short) (~(((/* implicit */int) min((((unsigned short) var_13)), (((/* implicit */unsigned short) arr_42 [i_16 - 1] [i_16 - 1] [i_16 + 2] [i_16 + 2] [i_18 + 2])))))));
        }
        for (signed char i_21 = 1; i_21 < 19; i_21 += 1) 
        {
            var_34 = ((/* implicit */signed char) ((((((/* implicit */int) arr_22 [i_16] [i_16] [i_16 + 2] [i_16] [i_21 + 1] [i_21 + 1] [i_21 + 1])) / (((/* implicit */int) arr_22 [i_16] [i_16] [i_16 - 1] [i_16] [i_21 - 1] [i_21] [i_21 - 1])))) / (((((/* implicit */_Bool) arr_22 [i_16] [i_16] [i_16 + 1] [i_21] [i_21 + 1] [i_21] [i_21 - 1])) ? (((/* implicit */int) arr_22 [i_16] [i_16] [i_16 + 1] [i_21] [i_21 - 1] [i_21 - 1] [i_21 - 1])) : (((/* implicit */int) arr_22 [i_16] [i_16] [i_16 + 1] [i_16 + 1] [i_21 + 1] [i_21] [i_21 + 1]))))));
            var_35 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) arr_26 [i_16] [i_21] [i_16] [i_16] [i_16] [i_16])) : (((/* implicit */int) arr_18 [i_21] [(unsigned short)2] [i_16] [6LL])))))) ? (((((((/* implicit */long long int) var_16)) ^ (arr_53 [i_16] [i_21]))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1LL)))))))) : (((/* implicit */long long int) ((((/* implicit */int) ((short) (short)29596))) << (((((/* implicit */int) ((unsigned char) arr_37 [i_16 + 2] [i_16 + 2] [i_21] [i_16 + 2]))) - (146))))))));
        }
        /* vectorizable */
        for (short i_22 = 0; i_22 < 20; i_22 += 2) 
        {
            arr_79 [4] [4] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_16] [i_16 - 2] [i_16] [i_22] [i_16] [i_16 - 2])) ? (((/* implicit */int) arr_29 [i_16] [i_16])) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) (short)24787)) : (((/* implicit */int) var_7))));
            var_36 = ((/* implicit */long long int) ((_Bool) arr_31 [i_16 - 1]));
            arr_80 [i_22] [i_16] = ((/* implicit */signed char) ((137371844608LL) * (((/* implicit */long long int) ((/* implicit */int) arr_70 [i_22] [i_22] [i_22] [i_16 + 2])))));
            var_37 ^= ((/* implicit */long long int) arr_18 [i_22] [i_16] [(short)17] [i_16]);
            arr_81 [i_16] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_15 [i_22]))));
        }
    }
    var_38 = ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((long long int) (short)29591))) < (((((/* implicit */_Bool) (short)0)) ? (10293548005904441686ULL) : (1ULL)))))), (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) max(((short)-19658), (((/* implicit */short) (signed char)0))))) : (((((/* implicit */int) var_0)) * (((/* implicit */int) var_8))))))));
    var_39 = ((/* implicit */long long int) max((((/* implicit */int) ((short) min((3975584671U), (var_10))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)114))) > (-6318391981425362226LL)))) : (((/* implicit */int) var_15))))));
    var_40 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 319382625U)) ? (475794714089159641ULL) : (((/* implicit */unsigned long long int) 1702318189))))) ? (min((((/* implicit */long long int) var_3)), ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (var_11)))))))) != (17970949359620391972ULL)));
}
