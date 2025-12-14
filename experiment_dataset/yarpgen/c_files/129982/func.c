/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129982
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned char) (((-(arr_1 [i_0]))) + (((/* implicit */long long int) ((unsigned int) (short)21055)))));
        var_12 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((0) & (((/* implicit */int) min(((short)-22288), (((/* implicit */short) (signed char)82)))))))), ((~(arr_1 [i_0])))));
        var_13 = ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) arr_1 [i_0])) & (15791776027670429435ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_0])))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) max(((+(((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) ((signed char) arr_1 [i_0])))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) 
            {
                {
                    var_14 = ((/* implicit */long long int) (-(max((((4294967283U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)61))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) + (((/* implicit */int) (signed char)61)))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_5 = 2; i_5 < 22; i_5 += 2) /* same iter space */
                        {
                            arr_15 [i_1] [i_1] [i_2] [i_1] [i_4] [i_5 - 1] [i_5] = ((/* implicit */unsigned int) (+((~(((/* implicit */int) arr_13 [i_5 + 1] [i_5 + 1] [i_4] [i_3] [i_5 + 1] [i_2] [i_3]))))));
                            var_15 = ((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9399))) : (15167133144405173474ULL)));
                            var_16 = ((/* implicit */unsigned short) (~(((/* implicit */int) min((arr_13 [i_4] [i_4] [i_5] [i_5] [i_5 - 2] [i_4] [i_1]), (arr_13 [i_1] [i_2] [i_2] [i_4] [i_5 - 2] [i_2] [i_2]))))));
                            var_17 = ((/* implicit */unsigned long long int) (+(((((_Bool) var_10)) ? (arr_5 [i_5 + 1] [i_5 - 2] [i_5 + 1]) : (((/* implicit */long long int) ((/* implicit */int) min(((short)-16778), (((/* implicit */short) var_9))))))))));
                            arr_16 [i_1] = ((/* implicit */unsigned int) arr_12 [i_1] [i_2] [i_3] [i_5]);
                        }
                        for (long long int i_6 = 2; i_6 < 22; i_6 += 2) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_1] [i_1] [i_2] [i_2] [i_3] [i_4] [i_1])) & ((-(((/* implicit */int) var_5))))))), (max((((/* implicit */long long int) arr_3 [i_1])), (var_10)))));
                            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) var_5))) / ((+(((/* implicit */int) arr_14 [i_6] [i_6] [i_6]))))))) ? (((/* implicit */unsigned long long int) (+((+(306942974)))))) : (min((((/* implicit */unsigned long long int) arr_7 [i_2] [i_3] [i_3])), (((11006864965359958883ULL) / (((/* implicit */unsigned long long int) 12U)))))))))));
                            arr_19 [i_3] [i_1] = ((/* implicit */short) arr_10 [i_1] [i_1] [i_4] [i_1]);
                            arr_20 [i_1] [i_2] [i_2] [i_3] [i_1] [i_6 + 1] = ((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) >= (((/* implicit */int) (unsigned short)6654))));
                        }
                        for (long long int i_7 = 2; i_7 < 22; i_7 += 2) /* same iter space */
                        {
                            arr_23 [i_1] [i_1] [i_3] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (signed char)-1);
                            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) arr_6 [i_3]))));
                            arr_24 [i_1] [i_2] [i_2] [i_1] [i_3] [i_4] [i_7] = ((/* implicit */unsigned char) ((unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)58883))))))));
                        }
                        arr_25 [i_1] [i_2] [i_1] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 4294967283U)) && (((((/* implicit */_Bool) 2654968046039122187ULL)) && (((/* implicit */_Bool) 15791776027670429435ULL)))))) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) ((unsigned short) arr_9 [i_1] [i_1])))));
                        arr_26 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_6 [i_1])), (min((((/* implicit */unsigned short) (signed char)-93)), ((unsigned short)5474)))))) ? (var_10) : (((/* implicit */long long int) 2683410521U))));
                    }
                    arr_27 [i_1] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */short) arr_3 [i_1])), (arr_6 [i_1])))) ? (max((((((/* implicit */long long int) ((/* implicit */int) var_7))) | (7913982507031298322LL))), (((/* implicit */long long int) (-(((/* implicit */int) (short)16777))))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_1] [i_2])) & (((/* implicit */int) arr_6 [i_1])))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned char) min((max((9530102339471468522ULL), (((/* implicit */unsigned long long int) (short)-16779)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (arr_31 [i_1] [i_3] [i_3] [i_2] [i_1])))) % (((/* implicit */int) arr_14 [i_1] [i_3] [i_1])))))));
                        arr_32 [i_1] [i_2] [i_3] [i_1] = ((/* implicit */_Bool) ((((min((((/* implicit */int) var_8)), (var_0))) | (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_3] [i_3] [i_1])) || (arr_8 [i_2] [i_1])))))) * ((-(((((/* implicit */int) arr_12 [i_1] [i_1] [i_3] [i_8])) * (((/* implicit */int) arr_21 [i_8] [i_8] [i_8] [i_8] [i_1] [i_2]))))))));
                    }
                    for (int i_9 = 1; i_9 < 22; i_9 += 3) 
                    {
                        arr_36 [i_9 + 1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_5);
                        arr_37 [i_1] [i_9] [i_1] [i_9] = ((/* implicit */unsigned int) 9223372036854775807LL);
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 3) 
                    {
                        arr_42 [i_1] [i_1] [i_1] [i_10] = arr_4 [i_2];
                        arr_43 [i_1] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */long long int) (short)16966)), (7913982507031298324LL)));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_11 = 2; i_11 < 22; i_11 += 4) 
        {
            for (unsigned short i_12 = 0; i_12 < 23; i_12 += 3) 
            {
                {
                    arr_49 [i_11] [i_1] [i_1] [i_11 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) arr_21 [i_11] [i_11] [i_11 + 1] [i_11 + 1] [i_1] [i_12]))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_34 [i_1] [i_1] [i_1] [i_11 - 2]) && (((/* implicit */_Bool) arr_30 [i_12] [i_1] [i_11 - 2] [i_12])))))) : (((0LL) * (((/* implicit */long long int) ((/* implicit */int) (short)0)))))));
                    var_22 = arr_4 [i_1];
                    /* LoopSeq 1 */
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                    {
                        arr_54 [i_1] [i_11] = ((/* implicit */signed char) 1433813801);
                        var_23 *= ((/* implicit */_Bool) min((((/* implicit */int) (signed char)-104)), (max((((/* implicit */int) arr_30 [i_1] [i_11] [i_1] [i_13])), ((+(((/* implicit */int) (short)16773))))))));
                    }
                    var_24 = ((/* implicit */signed char) ((unsigned long long int) (+(((/* implicit */int) ((short) (signed char)-93))))));
                }
            } 
        } 
        arr_55 [i_1] = ((/* implicit */short) arr_39 [i_1] [i_1] [i_1] [i_1]);
        arr_56 [i_1] = ((/* implicit */signed char) arr_5 [i_1] [i_1] [i_1]);
    }
    for (int i_14 = 0; i_14 < 17; i_14 += 3) 
    {
        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) (~((-(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-52))) - (15133628542484398485ULL))))))))));
        var_26 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) arr_12 [i_14] [i_14] [i_14] [i_14])), (arr_40 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 9223372036854775807LL)) ^ (12ULL)))) ? (((/* implicit */int) max((var_4), (((/* implicit */short) var_6))))) : (((/* implicit */int) var_1)))))));
        arr_60 [i_14] = ((/* implicit */long long int) (~((~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)95)))))))));
    }
    var_27 = ((/* implicit */unsigned char) (_Bool)0);
}
