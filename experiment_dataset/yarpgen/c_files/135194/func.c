/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135194
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
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) arr_1 [i_0 - 1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 1]))) : (((var_8) >> (((((/* implicit */int) var_2)) - (196)))))));
        var_16 ^= ((/* implicit */unsigned long long int) ((unsigned int) (!(((/* implicit */_Bool) ((signed char) (_Bool)1))))));
        var_17 += ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 + 1])) & (((/* implicit */int) arr_1 [i_0 - 1]))))) ? (((((((/* implicit */_Bool) (short)28)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1270557838086445627LL)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (unsigned char)207))))))) : (max((((/* implicit */unsigned int) (unsigned char)207)), (var_7))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 3; i_1 < 18; i_1 += 1) 
    {
        var_18 += ((/* implicit */_Bool) ((unsigned int) arr_1 [i_1 + 1]));
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_5 [i_1] [i_1 + 1]) : (4U)))) ? ((+(16890455043642664101ULL))) : (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned long long int) var_7)) : (arr_3 [i_1] [i_1])))));
        var_20 = ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) arr_4 [i_1])))));
        var_21 = ((/* implicit */unsigned int) ((unsigned char) var_8));
        /* LoopSeq 3 */
        for (int i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            var_22 = ((/* implicit */long long int) ((signed char) ((long long int) 3548841703U)));
            /* LoopSeq 4 */
            for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) /* same iter space */
            {
                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((-2120081245) ^ (((/* implicit */int) var_9))))) ? (arr_4 [i_1 - 1]) : (((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) (_Bool)1)))))));
                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_3])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                var_25 = ((/* implicit */unsigned long long int) (+(2)));
                var_26 = ((/* implicit */long long int) (signed char)12);
                var_27 = ((/* implicit */int) 1270557838086445637LL);
            }
            for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    for (unsigned short i_6 = 2; i_6 < 20; i_6 += 2) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_1 - 3] [i_6 - 2])) ? (arr_3 [i_1 + 4] [i_6 - 1]) : (((/* implicit */unsigned long long int) var_8))));
                            var_29 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_6] [18] [i_2] [i_1])) || (((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_4] [i_5] [i_6]))))) != (((/* implicit */int) (unsigned short)0))));
                            var_30 = ((((/* implicit */_Bool) arr_7 [i_5] [(unsigned char)10])) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1)))) : (arr_19 [(unsigned char)8] [i_6 - 2] [i_2] [i_1 + 2] [i_1] [i_1 + 4] [i_1]));
                            var_31 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) var_2))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_1])) == (((/* implicit */int) arr_17 [i_4] [i_4] [i_4] [i_4]))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_7 = 0; i_7 < 22; i_7 += 1) 
                {
                    var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_1]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_7] [i_4] [i_2] [i_1 + 3])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3)))))));
                    var_33 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 614600788)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1]))) : (14796676002468332108ULL)))) && (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_4]))) > (arr_10 [16ULL] [16ULL] [i_1])))));
                    /* LoopSeq 2 */
                    for (unsigned char i_8 = 1; i_8 < 21; i_8 += 4) /* same iter space */
                    {
                        var_34 = ((/* implicit */long long int) arr_2 [i_7]);
                        var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_11 [i_8 - 1] [i_7] [i_2] [8])) : (((/* implicit */int) var_6))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_3))) - (-1294077593263223819LL))) : (((/* implicit */long long int) arr_5 [i_7] [i_8 + 1]))));
                    }
                    for (unsigned char i_9 = 1; i_9 < 21; i_9 += 4) /* same iter space */
                    {
                        var_36 = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) var_9))) > (((/* implicit */int) ((signed char) 16865475449545692106ULL)))));
                        var_37 = ((/* implicit */unsigned int) (~(35184372088824LL)));
                        var_38 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_20 [i_1] [i_4] [i_4] [i_7])) >> (((((int) arr_22 [i_1] [i_1] [(_Bool)1] [i_1] [i_1 - 2] [i_1] [i_1 + 4])) - (2112549545)))));
                        var_39 = ((((/* implicit */int) var_10)) / (arr_4 [i_4]));
                    }
                    var_40 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) arr_24 [i_1 + 4])) ^ (arr_25 [i_1 + 2])));
                    /* LoopSeq 1 */
                    for (unsigned char i_10 = 1; i_10 < 20; i_10 += 4) 
                    {
                        var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_22 [i_4] [i_4] [(signed char)21] [i_4] [i_4] [i_4] [i_4]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1])))))) ? (((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) arr_11 [i_1] [i_2] [(short)6] [i_7])) : (((/* implicit */int) var_0)))) : (((/* implicit */int) ((unsigned char) arr_11 [i_2] [i_4] [i_7] [i_10])))));
                        var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) -7467306677995306727LL)) ? (((/* implicit */unsigned int) arr_19 [i_1 + 3] [i_2] [i_4] [i_2] [9LL] [i_1 + 2] [i_2])) : (var_7)));
                        var_43 = ((/* implicit */unsigned char) min((var_43), (((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */int) arr_1 [i_2])) / (((/* implicit */int) arr_11 [i_1] [i_4] [i_7] [i_10]))))))));
                    }
                }
            }
            for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 4) /* same iter space */
            {
                var_44 ^= ((/* implicit */long long int) var_5);
                var_45 ^= ((/* implicit */unsigned char) arr_12 [i_11]);
                var_46 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) (unsigned char)47)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_3 [i_11] [i_11]))));
                var_47 = ((/* implicit */signed char) arr_15 [20ULL] [i_1 - 1] [i_1 - 1] [i_1]);
                var_48 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_17 [i_11] [i_2] [i_2] [i_1])) : (((/* implicit */int) (_Bool)1)))));
            }
            for (unsigned char i_12 = 0; i_12 < 22; i_12 += 1) 
            {
                var_49 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) ((unsigned short) arr_6 [i_1]))) : (arr_7 [i_1 - 3] [i_1])));
                /* LoopSeq 3 */
                for (unsigned char i_13 = 4; i_13 < 20; i_13 += 4) 
                {
                    var_50 = ((/* implicit */unsigned char) arr_2 [i_2]);
                    var_51 ^= ((/* implicit */unsigned int) (+(-2042394887100718081LL)));
                }
                for (unsigned char i_14 = 0; i_14 < 22; i_14 += 4) 
                {
                    var_52 *= ((/* implicit */signed char) 7467306677995306727LL);
                    var_53 = ((/* implicit */long long int) (~(((/* implicit */int) var_11))));
                    var_54 = ((/* implicit */unsigned char) ((int) arr_22 [i_14] [i_14] [i_14] [i_14] [i_1 - 3] [i_1] [i_1]));
                }
                for (unsigned int i_15 = 0; i_15 < 22; i_15 += 3) 
                {
                    var_55 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1] [i_1 + 2] [i_12] [i_15]))) + (var_12)));
                    var_56 = ((/* implicit */unsigned int) var_4);
                    /* LoopSeq 1 */
                    for (signed char i_16 = 0; i_16 < 22; i_16 += 4) 
                    {
                        var_57 = ((/* implicit */short) ((((/* implicit */int) arr_27 [i_1 + 4] [i_1 - 3] [i_1 - 1] [i_1] [i_1])) << (((arr_3 [i_1] [i_1 + 1]) - (15043218664691695831ULL)))));
                        var_58 = ((/* implicit */unsigned char) ((((arr_29 [i_1] [i_1] [i_1]) + (((/* implicit */int) (unsigned char)71)))) / (((((/* implicit */_Bool) arr_36 [i_1 + 3] [i_1 - 1] [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (arr_4 [i_2])))));
                        var_59 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_12)))) ? (((((/* implicit */int) var_14)) % (((/* implicit */int) var_5)))) : (((/* implicit */int) var_3))));
                        var_60 = ((/* implicit */signed char) arr_27 [i_1 - 1] [i_1] [i_1 + 2] [i_1] [i_1]);
                    }
                }
                var_61 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_20 [i_1] [i_1] [i_2] [i_12])) : (((/* implicit */int) arr_20 [i_1 - 1] [i_1] [(signed char)9] [20ULL]))))) % (arr_44 [i_12] [i_1] [i_2] [i_1] [i_1] [i_1] [i_1])));
            }
            var_62 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_11)) * (((/* implicit */int) (_Bool)1)))))));
        }
        for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
        {
            var_63 = ((/* implicit */signed char) ((((/* implicit */int) var_2)) + (((/* implicit */int) var_5))));
            var_64 = ((/* implicit */unsigned char) ((unsigned long long int) arr_45 [i_1] [i_17] [i_17 - 1] [i_17] [i_17 - 1] [i_1 - 1] [i_1]));
        }
        for (int i_18 = 0; i_18 < 22; i_18 += 3) 
        {
            var_65 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_1 + 3] [i_1 + 2] [i_1]))) > (4278430174U)));
            var_66 *= ((/* implicit */unsigned long long int) (_Bool)1);
        }
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_19 = 1; i_19 < 19; i_19 += 4) 
    {
        var_67 = ((/* implicit */short) var_8);
        var_68 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(1595742231)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_19] [i_19] [i_19])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10)))))));
        var_69 = ((/* implicit */unsigned long long int) min((var_69), (((/* implicit */unsigned long long int) ((_Bool) -1)))));
    }
    for (unsigned int i_20 = 0; i_20 < 14; i_20 += 2) 
    {
        var_70 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_8)))) | ((+(var_8))))) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_20] [i_20] [i_20] [i_20] [i_20])) ? (((/* implicit */int) arr_18 [i_20] [i_20] [i_20] [i_20] [i_20])) : (((/* implicit */int) var_1)))))));
        var_71 = ((/* implicit */_Bool) -1270557838086445628LL);
    }
}
