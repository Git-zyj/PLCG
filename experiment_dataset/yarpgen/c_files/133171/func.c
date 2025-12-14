/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133171
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
    var_19 = ((/* implicit */signed char) var_12);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_20 &= ((/* implicit */int) max((((unsigned long long int) 13182349722295430230ULL)), (((((/* implicit */_Bool) arr_0 [i_0] [1U])) ? ((-(3299885843521313192ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1)))))))));
        var_21 = ((/* implicit */unsigned short) max((min((((2060293062) | (((/* implicit */int) var_11)))), (((int) (short)8266)))), (((/* implicit */int) ((max((((/* implicit */unsigned int) var_8)), (1275005859U))) != (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_1 [i_0])))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        var_22 = ((/* implicit */long long int) ((short) (-(((((/* implicit */int) var_15)) << (((((((/* implicit */int) (short)-9603)) + (9630))) - (14))))))));
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)65535), (var_16))))) == ((~(arr_3 [i_1])))));
        var_24 = ((/* implicit */short) min(((signed char)127), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_3 [i_1])))))));
        var_25 = ((/* implicit */short) (signed char)-11);
    }
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            var_26 = ((/* implicit */signed char) (short)-24133);
            var_27 |= ((/* implicit */short) arr_10 [i_2] [(signed char)7] [i_3]);
        }
        for (short i_4 = 0; i_4 < 18; i_4 += 4) 
        {
            arr_15 [16ULL] [16ULL] [i_2] = ((/* implicit */short) ((min(((~(((/* implicit */int) (signed char)(-127 - 1))))), (((((/* implicit */_Bool) 67553994410557440ULL)) ? (((/* implicit */int) (signed char)14)) : (var_18))))) >> (((((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) (short)-24132))))), ((short)-19440)))) + (19471)))));
            /* LoopSeq 2 */
            for (unsigned int i_5 = 0; i_5 < 18; i_5 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 18; i_6 += 2) 
                {
                    for (unsigned int i_7 = 1; i_7 < 17; i_7 += 1) 
                    {
                        {
                            arr_27 [i_2] [i_5] [(short)9] = ((/* implicit */unsigned short) max((max((((/* implicit */int) var_15)), ((-(((/* implicit */int) (signed char)-114)))))), (((/* implicit */int) ((signed char) var_10)))));
                            var_28 = ((/* implicit */unsigned int) 67553994410557457ULL);
                        }
                    } 
                } 
                arr_28 [i_2] [i_4] [i_5] [(unsigned short)16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_16 [(_Bool)1] [(_Bool)1] [i_5]))))) ? (((((/* implicit */_Bool) (short)-30903)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_2] [i_2] [i_2]))) : (((((/* implicit */unsigned long long int) 2277606820U)) ^ (18379190079298994170ULL))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-114)))), (((/* implicit */int) (signed char)113)))))));
                var_29 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)-11)), (1665526456)));
            }
            for (long long int i_8 = 0; i_8 < 18; i_8 += 3) 
            {
                var_30 = ((signed char) ((((/* implicit */_Bool) ((unsigned int) var_6))) ? (2277606810U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1128561585)) ? (((/* implicit */int) arr_17 [(short)0] [i_4] [i_2])) : (((/* implicit */int) arr_17 [i_8] [i_8] [i_8])))))));
                var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) (short)-24105)), (1665526456)))) ? (max((arr_21 [i_4]), (((/* implicit */unsigned long long int) var_15)))) : (((/* implicit */unsigned long long int) max((arr_2 [i_4] [i_4]), (((/* implicit */int) (short)-1)))))));
                arr_33 [i_4] [i_4] [i_2] [i_8] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_13 [i_2])) == (((/* implicit */int) arr_13 [i_8])))))) == (max((2277606810U), (((/* implicit */unsigned int) arr_13 [i_2]))))));
            }
        }
        arr_34 [(short)17] = ((/* implicit */signed char) arr_17 [i_2] [i_2] [i_2]);
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 2) 
        {
            for (signed char i_10 = 0; i_10 < 18; i_10 += 2) 
            {
                {
                    var_32 = max((((/* implicit */unsigned long long int) max(((+(((/* implicit */int) (unsigned short)256)))), (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)121)), ((unsigned short)56242))))))), (((unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_9] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2]))) : (18446744073709551615ULL)))));
                    /* LoopSeq 3 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (long long int i_12 = 0; i_12 < 18; i_12 += 2) 
                        {
                            var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) var_8))) ? (((/* implicit */int) var_13)) : ((+(((/* implicit */int) var_7))))));
                            var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)9471)) ? (((/* implicit */int) (short)16877)) : (((/* implicit */int) (signed char)-110))));
                            var_35 = ((/* implicit */int) ((((/* implicit */_Bool) 2147483646U)) ? (4294967285U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                            var_36 = ((/* implicit */unsigned int) var_3);
                            var_37 += ((/* implicit */unsigned int) ((signed char) var_13));
                        }
                        for (unsigned int i_13 = 0; i_13 < 18; i_13 += 3) 
                        {
                            var_38 &= ((/* implicit */unsigned long long int) min(((short)26770), (((/* implicit */short) (signed char)127))));
                            var_39 = ((/* implicit */short) ((((/* implicit */_Bool) ((3760773199026231022ULL) | (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_6 [i_10])), (var_12))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) 2100853147U))))), (var_17))))));
                        }
                        for (unsigned char i_14 = 0; i_14 < 18; i_14 += 3) 
                        {
                            var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-31172)) ? (((/* implicit */int) arr_11 [i_9])) : (((/* implicit */int) (short)-14259))));
                            var_41 -= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) 4294967282U)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1665526456)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-14259))) : (869074610U)))) ? (12941878397358363507ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2])))))));
                            var_42 &= ((/* implicit */signed char) 706091105);
                            arr_49 [i_11] [i_11] [i_11] [i_11] [i_14] [i_11] = ((/* implicit */long long int) max((((int) arr_14 [(signed char)17] [i_10] [i_14])), (((/* implicit */int) ((short) arr_21 [i_9])))));
                        }
                        arr_50 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_21 [i_2]))) ? (-378684914) : (arr_46 [i_11] [i_10] [i_10])));
                    }
                    for (long long int i_15 = 0; i_15 < 18; i_15 += 1) 
                    {
                        var_43 = ((/* implicit */unsigned int) min((min((659623095), (706091106))), ((+(((/* implicit */int) var_15))))));
                        arr_54 [i_2] [i_9] [i_9] = ((/* implicit */unsigned int) min((((arr_21 [i_10]) >> (((((/* implicit */int) var_13)) + (88))))), (min((arr_39 [i_15] [i_10] [5ULL] [i_15] [i_9]), (((/* implicit */unsigned long long int) arr_48 [i_10] [i_9]))))));
                    }
                    /* vectorizable */
                    for (signed char i_16 = 3; i_16 < 17; i_16 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            var_44 = ((/* implicit */unsigned short) min((var_44), (((/* implicit */unsigned short) (-(28U))))));
                            var_45 |= ((/* implicit */short) 1353377534);
                            var_46 = ((/* implicit */unsigned long long int) arr_10 [i_16 + 1] [i_10] [i_16 - 2]);
                        }
                        for (short i_18 = 1; i_18 < 16; i_18 += 1) 
                        {
                            var_47 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)229)) << (((/* implicit */int) ((((/* implicit */int) arr_29 [i_18] [(unsigned short)16])) <= (((/* implicit */int) (signed char)-120)))))));
                            arr_64 [i_2] [i_2] [i_10] [8] [(short)17] = ((/* implicit */short) arr_51 [i_2]);
                            var_48 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)21451)) ? (((/* implicit */int) (signed char)51)) : (((1416817199) % (((/* implicit */int) var_13))))));
                            arr_65 [(unsigned short)4] [(unsigned short)4] [(unsigned short)4] [i_16 + 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_36 [i_9] [i_16 + 1] [12ULL])) * (2147483649U))))));
                            var_49 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) % (((/* implicit */int) arr_11 [i_18]))));
                        }
                        var_50 = ((/* implicit */signed char) min((var_50), (((/* implicit */signed char) (short)-18915))));
                    }
                    var_51 = ((/* implicit */unsigned int) var_14);
                }
            } 
        } 
        var_52 |= ((/* implicit */signed char) max((((((/* implicit */_Bool) min(((signed char)118), ((signed char)91)))) ? (arr_26 [(signed char)12] [i_2] [i_2] [i_2] [(signed char)11]) : (((/* implicit */int) (!(((/* implicit */_Bool) -1459305199))))))), (((/* implicit */int) (signed char)-127))));
    }
}
