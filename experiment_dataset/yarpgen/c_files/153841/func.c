/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153841
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 4; i_1 < 12; i_1 += 3) 
        {
            {
                arr_5 [i_1 - 1] [i_0] &= ((/* implicit */signed char) arr_0 [i_1 + 2] [i_0]);
                var_10 += ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_4 [i_0] [(short)4] [i_1 - 3])) ? (arr_4 [i_0] [i_1] [i_1 + 4]) : (arr_4 [i_0] [i_0] [i_1 + 2]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) max(((short)14373), (((/* implicit */short) (signed char)31))))))))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 4; i_2 < 14; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 14; i_3 += 3) 
                    {
                        for (short i_4 = 1; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) << (((((/* implicit */int) (unsigned char)255)) - (246)))))) >= (3903708876459575642ULL)));
                                var_12 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((806735958U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4611684918915760128LL)))))))) ? (((/* implicit */unsigned long long int) arr_9 [i_0] [i_3 + 1] [i_0] [i_3 - 2])) : ((-((~(14543035197249975963ULL)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned char i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_10 [i_1 + 3] [i_1 - 2] [i_2] [i_2 - 1] [i_1])), (min((arr_7 [i_0] [i_1] [i_2]), (((/* implicit */unsigned long long int) arr_3 [i_0]))))))) ? ((~(((/* implicit */int) arr_0 [2ULL] [i_2 - 4])))) : ((-(((/* implicit */int) var_7))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 2) 
                        {
                            var_14 = ((/* implicit */unsigned int) arr_7 [i_2] [i_2] [i_1 - 1]);
                            var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((806735958U) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1)))))))))));
                        }
                    }
                    for (short i_7 = 0; i_7 < 16; i_7 += 2) /* same iter space */
                    {
                        var_16 ^= ((/* implicit */unsigned short) ((long long int) min((((/* implicit */unsigned long long int) arr_3 [i_0])), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) arr_19 [(short)0] [i_1 + 2] [i_0])) : (9076266497652015029ULL))))));
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) 1849832277U)), (arr_8 [i_7] [i_0]))) / (((/* implicit */long long int) (~(((/* implicit */int) var_6)))))))) / (arr_2 [i_2])));
                    }
                    for (short i_8 = 0; i_8 < 16; i_8 += 2) /* same iter space */
                    {
                        arr_25 [i_1] [i_8] [(short)6] [(_Bool)1] [i_2] [i_2 - 2] = ((/* implicit */unsigned char) ((short) ((unsigned int) arr_14 [i_0] [i_1 - 4] [i_2] [i_2 - 1] [i_1] [i_1 - 4])));
                        var_18 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_24 [i_2] [i_2 + 2] [i_2] [i_2] [i_2] [i_1 + 3])) ? (((/* implicit */int) arr_15 [i_2] [i_2] [i_2] [i_1 + 3])) : (((/* implicit */int) arr_15 [i_2 - 1] [i_2] [i_1 - 2] [i_1 - 2])))));
                        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) arr_16 [i_8] [(signed char)7] [i_2] [i_8] [i_0] [i_8] [i_8]))) << (((arr_20 [i_8] [i_2] [(signed char)4] [(unsigned short)5] [i_0] [i_0]) - (2428149904U))))))));
                        arr_26 [(unsigned char)0] [i_2] [i_1 - 1] = ((/* implicit */short) 3903708876459575642ULL);
                    }
                    for (unsigned long long int i_9 = 1; i_9 < 15; i_9 += 2) 
                    {
                        arr_29 [i_1] = ((/* implicit */short) arr_14 [i_9] [i_9] [i_2] [i_1] [(unsigned short)11] [i_0]);
                        var_20 ^= ((/* implicit */long long int) var_5);
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-1)) ? ((((_Bool)1) ? (3050774325U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)124))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)21))))))));
                        var_22 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) == (arr_12 [i_0] [(unsigned char)0] [i_2] [i_9] [(_Bool)1] [i_0] [(unsigned char)0]))))) & (((arr_23 [6U] [6U] [i_2] [i_9]) + (((/* implicit */long long int) ((/* implicit */int) (short)0))))))) == (((/* implicit */long long int) min(((~(((/* implicit */int) var_4)))), (((((/* implicit */_Bool) 536870911U)) ? (((/* implicit */int) (unsigned short)50391)) : (((/* implicit */int) arr_18 [i_9 + 1] [i_2] [i_1] [(signed char)15])))))))));
                        arr_30 [(signed char)1] = ((/* implicit */long long int) (((-(arr_16 [i_9 + 1] [i_9] [i_9] [i_2 - 2] [i_2] [i_1] [i_1 + 3]))) & (((((/* implicit */_Bool) arr_28 [i_9 - 1] [i_0] [i_2] [i_2 - 3] [i_1 - 1])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)1))))) : ((+(3488231338U)))))));
                    }
                    arr_31 [i_2] [i_1] [i_1 - 1] [i_0] = ((/* implicit */unsigned int) ((var_3) != (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)149)) + (((/* implicit */int) arr_14 [i_1 - 3] [i_2 - 1] [i_2] [i_2 - 4] [12ULL] [i_1])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 3; i_10 < 12; i_10 += 3) 
                    {
                        for (unsigned char i_11 = 1; i_11 < 14; i_11 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) min((((long long int) ((((/* implicit */_Bool) 2096563758U)) ? (((/* implicit */int) (unsigned short)31)) : (((/* implicit */int) (unsigned short)0))))), (((/* implicit */long long int) ((arr_20 [i_2] [i_0] [i_2 + 1] [i_1] [i_0] [i_0]) <= (arr_20 [(unsigned short)8] [i_2] [i_2 + 1] [i_2] [i_2] [12LL])))))))));
                                var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) min((9370477576057536573ULL), (((/* implicit */unsigned long long int) var_2)))))));
                                var_25 = ((unsigned int) min((min((((/* implicit */unsigned int) (signed char)-124)), (574894239U))), (min((((/* implicit */unsigned int) (short)(-32767 - 1))), (arr_20 [i_11 - 1] [i_10 + 1] [i_10] [i_2] [i_1 - 2] [i_0])))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 2) 
                {
                    var_26 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)76)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)172)), ((short)-6813))))) : (2245132824U)))) ? (arr_12 [i_12] [i_0] [i_1] [i_1] [i_1] [i_0] [i_0]) : (max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) <= (arr_3 [i_0])))), (((var_9) & (4294967295U)))))));
                    var_27 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */unsigned long long int) -1LL)) : ((~(((arr_2 [(signed char)4]) & (arr_4 [i_12] [i_1] [i_0])))))));
                    arr_39 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_0] [i_12] [i_12] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_1] [i_0]))) : (-4469141635734854767LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_1] [i_0]))) : (arr_21 [(signed char)8] [i_1])))) ? (((((/* implicit */_Bool) arr_34 [i_12] [12ULL] [i_12] [i_1] [i_0])) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)244)), ((short)-1)))) : (((/* implicit */int) (unsigned char)166)))) : (((((/* implicit */_Bool) arr_19 [i_12] [i_1 + 1] [i_12])) ? (((/* implicit */int) (unsigned short)33302)) : (((/* implicit */int) var_6))))));
                }
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_13 = 0; i_13 < 21; i_13 += 1) 
    {
        var_28 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) % (2198403538U)));
        /* LoopNest 3 */
        for (unsigned char i_14 = 0; i_14 < 21; i_14 += 3) 
        {
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                for (unsigned int i_16 = 0; i_16 < 21; i_16 += 2) 
                {
                    {
                        arr_52 [i_13] [i_14] [i_15] [i_13] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_45 [i_16] [i_13] [i_13] [(unsigned char)8]))));
                        var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((unsigned long long int) (!(((/* implicit */_Bool) arr_49 [i_13] [i_13] [i_15]))))))));
                    }
                } 
            } 
        } 
        var_30 = ((/* implicit */unsigned short) arr_41 [i_13]);
    }
    for (unsigned short i_17 = 1; i_17 < 9; i_17 += 4) 
    {
        var_31 = arr_13 [(signed char)6] [i_17] [(signed char)6];
        arr_55 [i_17] = ((/* implicit */unsigned char) min((584849421478137760ULL), (((/* implicit */unsigned long long int) (unsigned char)6))));
    }
    for (unsigned short i_18 = 1; i_18 < 23; i_18 += 3) 
    {
        var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) (((((!(((/* implicit */_Bool) arr_57 [i_18])))) ? ((~(1493931917226118818ULL))) : (((/* implicit */unsigned long long int) arr_57 [i_18])))) != (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_56 [i_18 - 1]))))))))));
        var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((max((14543035197249975952ULL), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) 2096563741U))))) || (((/* implicit */_Bool) min((arr_59 [i_18 - 1]), (arr_59 [i_18 + 2])))))))));
    }
    var_34 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)126)) >> (((((/* implicit */int) (unsigned short)64512)) - (64488)))));
    /* LoopSeq 2 */
    for (long long int i_19 = 2; i_19 < 13; i_19 += 2) 
    {
        var_35 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */long long int) (+(2198403537U)))) / ((+(arr_8 [i_19] [i_19 + 2]))))));
        arr_62 [12U] = ((/* implicit */signed char) 2096563758U);
    }
    /* vectorizable */
    for (unsigned short i_20 = 0; i_20 < 17; i_20 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            for (unsigned long long int i_22 = 0; i_22 < 17; i_22 += 3) 
            {
                {
                    var_36 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)11))) : (((((/* implicit */_Bool) 6LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_20]))) : (arr_46 [i_22] [i_21] [i_21] [i_20])))));
                    var_37 = ((/* implicit */unsigned short) (+((~(((/* implicit */int) (unsigned char)25))))));
                    var_38 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_49 [i_20] [i_21] [i_22]))));
                }
            } 
        } 
        var_39 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_65 [i_20] [i_20])) & (((/* implicit */int) arr_65 [i_20] [i_20]))));
    }
}
