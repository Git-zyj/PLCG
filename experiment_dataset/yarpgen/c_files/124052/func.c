/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124052
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
    var_18 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)32767)))) / (((/* implicit */int) var_7)))), (((((/* implicit */_Bool) max((var_9), (((/* implicit */signed char) (_Bool)1))))) ? (((/* implicit */int) ((short) var_0))) : (((((/* implicit */_Bool) 506298041)) ? (-506298042) : (((/* implicit */int) (unsigned char)190))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) (_Bool)0);
                            /* LoopSeq 1 */
                            for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) 
                            {
                                arr_13 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (signed char)-52)) > (((/* implicit */int) (unsigned char)71)))))))) ? (min((((/* implicit */unsigned int) ((arr_12 [i_0] [i_2] [i_2] [i_2] [i_0]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1])))))), (arr_8 [i_1] [i_3] [i_2] [i_1] [i_1] [i_1]))) : (((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned short)32767)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)1)))), (((/* implicit */int) (signed char)-120)))))));
                                arr_14 [i_0] [i_1] [i_1] [i_0] [i_4] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (signed char)-86)), (((arr_7 [i_1]) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_3])) + (((/* implicit */int) arr_0 [i_3] [i_2]))))) : (((((/* implicit */_Bool) 6585832351334799719ULL)) ? (18446744073709551615ULL) : (5055186206990478703ULL)))))));
                                var_20 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */int) arr_10 [i_1] [i_1] [i_3])) * (((((/* implicit */_Bool) arr_1 [i_2] [i_0])) ? (((/* implicit */int) (signed char)-67)) : (((/* implicit */int) arr_10 [i_4] [i_2] [i_0])))))));
                                var_21 *= ((/* implicit */unsigned int) ((max((((arr_3 [i_0]) * (((/* implicit */unsigned long long int) arr_1 [i_2] [i_2])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)79)) || (((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0]))))))) != ((~(8869686477425434689ULL)))));
                            }
                            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1937650661)) ? (arr_1 [i_0] [i_0]) : (-643856951)))) * ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_3]))) : (arr_12 [i_0] [i_0] [i_0] [i_0] [12ULL])))))) ? (-390849267840870673LL) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_10 [i_0] [i_0] [i_0])))))));
                            var_23 = (i_1 % 2 == zero) ? (((/* implicit */signed char) max((((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_2] [i_3] [i_0] [i_2])) ? (arr_12 [i_3] [i_2] [i_1] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((arr_11 [i_0] [i_0] [i_1] [i_1] [i_2] [i_2] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)907))) : (3121578478U)))))), (((((arr_7 [i_1]) ? (((/* implicit */unsigned long long int) arr_8 [i_1] [i_1] [i_2] [i_2] [i_2] [i_3])) : (13073780083923582616ULL))) << (((((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_1] [i_3])) + (56)))))))) : (((/* implicit */signed char) max((((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_2] [i_3] [i_0] [i_2])) ? (arr_12 [i_3] [i_2] [i_1] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((arr_11 [i_0] [i_0] [i_1] [i_1] [i_2] [i_2] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)907))) : (3121578478U)))))), (((((arr_7 [i_1]) ? (((/* implicit */unsigned long long int) arr_8 [i_1] [i_1] [i_2] [i_2] [i_2] [i_3])) : (13073780083923582616ULL))) << (((((((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_1] [i_3])) + (56))) + (9))))))));
                        }
                    } 
                } 
                arr_15 [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)72)) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0])) : (((/* implicit */int) (signed char)67))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) (signed char)-67)))))) : (arr_8 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])));
                var_24 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (11)))) ? (((arr_8 [(unsigned char)14] [i_1] [i_1] [i_1] [(unsigned short)2] [i_1]) >> (((((/* implicit */int) (signed char)-67)) + (80))))) : (((/* implicit */unsigned int) min((((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (-24))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (min((14275286561666678333ULL), (((/* implicit */unsigned long long int) (unsigned char)37)))) : (((/* implicit */unsigned long long int) 9223372036854775807LL)))))));
                /* LoopSeq 3 */
                for (unsigned short i_5 = 1; i_5 < 14; i_5 += 2) 
                {
                    var_25 -= ((/* implicit */signed char) ((((max((770342115U), (arr_8 [(signed char)14] [12] [i_1] [i_0] [i_0] [(signed char)14]))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_5 - 1] [i_5 - 1] [i_0]))))) && (((/* implicit */_Bool) min(((short)-1), (((/* implicit */short) (_Bool)1)))))));
                    arr_18 [i_1] [i_1] = ((/* implicit */unsigned long long int) (signed char)-60);
                    arr_19 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */int) (signed char)-76);
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 4; i_6 < 13; i_6 += 2) 
                    {
                        arr_22 [i_0] [i_6] [i_0] [i_0] |= ((/* implicit */signed char) (+(((/* implicit */int) arr_9 [i_1] [i_1] [i_5] [i_6] [i_6 - 1]))));
                        arr_23 [i_0] [i_1] [i_5] [i_1] = ((/* implicit */_Bool) min((max((((/* implicit */unsigned int) (signed char)32)), (arr_8 [i_1] [i_1] [i_1] [i_6] [i_1] [i_5 - 1]))), (((/* implicit */unsigned int) ((int) arr_16 [i_5 + 1] [i_1] [i_5] [i_1])))));
                        var_26 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_10 [i_6 - 3] [i_5] [i_5 + 1])) ? (((/* implicit */int) arr_10 [i_6 + 2] [i_5 + 1] [i_5 + 1])) : (((/* implicit */int) (signed char)-106)))) << (((((((/* implicit */_Bool) 8925190553706660955LL)) ? (((/* implicit */int) (signed char)36)) : (((/* implicit */int) (unsigned char)181)))) - (30)))));
                        var_27 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_20 [i_6 - 2] [i_6] [i_6 + 2] [i_6 + 2] [i_6 + 1] [i_6])) ? (max((((/* implicit */unsigned long long int) -697788419)), (5372963989785969010ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)6), ((signed char)127))))))) != (9577057596284116926ULL)));
                        var_28 = ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)8180)) ? (((/* implicit */int) (unsigned char)219)) : (((/* implicit */int) arr_5 [i_5] [i_1] [(unsigned char)9]))))) & ((~(arr_16 [i_6] [i_6] [i_5] [i_5 + 1]))))) != (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 13354657466818889939ULL)) ? (((/* implicit */int) (short)10559)) : (((/* implicit */int) arr_7 [i_1]))))))));
                    }
                }
                /* vectorizable */
                for (short i_7 = 0; i_7 < 15; i_7 += 1) 
                {
                    var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1006255096)) ? (-196197896) : (((/* implicit */int) (unsigned char)225))));
                    arr_26 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((((/* implicit */int) arr_5 [i_0] [i_1] [i_1])) + (2147483647))) << (((((/* implicit */int) arr_21 [(signed char)9] [i_0] [i_1] [i_7])) - (1)))));
                    var_30 = (+(((/* implicit */int) arr_17 [i_0] [i_1])));
                    var_31 = ((/* implicit */unsigned long long int) arr_10 [i_1] [i_1] [i_0]);
                }
                /* vectorizable */
                for (unsigned char i_8 = 1; i_8 < 13; i_8 += 3) 
                {
                    var_32 = ((/* implicit */_Bool) ((unsigned short) (((_Bool)1) ? (-1948320570) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_8 + 1] [i_1] [i_8])))));
                    var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_8 + 1] [i_8] [i_8 + 2])) ? ((~(((/* implicit */int) (signed char)78)))) : (((/* implicit */int) arr_4 [i_8 + 1])))))));
                    var_34 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)247))) <= (arr_8 [i_1] [i_0] [i_1] [i_1] [i_1] [i_8]))) ? (((/* implicit */int) (unsigned short)49961)) : (((/* implicit */int) ((192943155) != (((/* implicit */int) (_Bool)1)))))));
                    var_35 += ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_8 + 1])) ? (arr_16 [i_8 + 2] [i_8 + 1] [i_8] [i_8 + 2]) : (arr_16 [i_8 - 1] [i_8 + 1] [i_8 + 1] [i_8 + 2])));
                }
            }
        } 
    } 
    var_36 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((/* implicit */int) (_Bool)1)) : (((int) (unsigned char)25))))) ? ((+(((((/* implicit */_Bool) 13468727180461579340ULL)) ? (((/* implicit */int) (unsigned short)30907)) : (((/* implicit */int) (_Bool)1)))))) : (min((((((/* implicit */_Bool) (short)22533)) ? (((/* implicit */int) (unsigned char)60)) : (((/* implicit */int) (unsigned short)0)))), (((var_2) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned char)196))))))));
}
