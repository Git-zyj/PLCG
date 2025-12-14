/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186885
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (short i_4 = 1; i_4 < 15; i_4 += 4) 
                        {
                            arr_15 [i_2] [i_1 - 2] [i_2] [i_3] [i_4] [i_1] [i_1] = ((/* implicit */signed char) ((7372160318125678486LL) >= (-8LL)));
                            var_15 = ((((/* implicit */_Bool) 7372160318125678486LL)) ? (-7372160318125678487LL) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_4 + 3] [i_0] [i_0] [14LL]))));
                        }
                        for (unsigned short i_5 = 2; i_5 < 18; i_5 += 4) 
                        {
                            var_16 += ((/* implicit */unsigned char) arr_17 [(unsigned char)12] [i_2] [(unsigned char)12] [i_5]);
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_5] = ((/* implicit */long long int) arr_1 [i_5 - 1]);
                        }
                        arr_19 [i_2] [i_1] [i_1] [i_2] = ((/* implicit */signed char) -7372160318125678486LL);
                    }
                    /* vectorizable */
                    for (unsigned int i_6 = 0; i_6 < 19; i_6 += 3) /* same iter space */
                    {
                        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) 7372160318125678473LL)) || (((/* implicit */_Bool) 7372160318125678461LL))));
                        /* LoopSeq 2 */
                        for (unsigned short i_7 = 2; i_7 < 16; i_7 += 4) 
                        {
                            var_18 = ((/* implicit */unsigned int) (+(-7372160318125678487LL)));
                            arr_24 [i_0] [(unsigned short)15] [i_2] [(short)8] = ((/* implicit */unsigned char) ((unsigned short) (unsigned char)129));
                            arr_25 [i_0] [(unsigned short)11] [i_2] [i_7] = ((/* implicit */signed char) var_14);
                            var_19 *= arr_3 [i_6];
                        }
                        for (short i_8 = 0; i_8 < 19; i_8 += 3) 
                        {
                            arr_28 [i_0] |= (unsigned char)117;
                            arr_29 [i_0] [i_1] [i_2] [i_6] [i_8] = ((/* implicit */unsigned char) ((signed char) arr_7 [i_0] [i_2] [i_0] [i_0]));
                            var_20 = ((/* implicit */signed char) -7372160318125678487LL);
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) -7372160318125678495LL)) ? (((/* implicit */int) (unsigned short)21743)) : (((/* implicit */int) var_5))))) / (7372160318125678461LL)));
                        }
                        arr_30 [i_2 + 2] [0] [(unsigned short)8] [6LL] [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) * (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) ((var_3) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) : (((/* implicit */int) arr_26 [(signed char)16] [(unsigned short)10] [i_2 + 2] [i_2] [i_2 + 1] [i_2] [i_2]))));
                        arr_31 [i_6] [i_6] [i_2] = ((/* implicit */unsigned short) ((signed char) -7372160318125678513LL));
                    }
                    for (unsigned int i_9 = 0; i_9 < 19; i_9 += 3) /* same iter space */
                    {
                        arr_34 [i_0] [i_2] [i_0] [(signed char)15] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (short)26739)) - (((/* implicit */int) var_10))))) > (((((/* implicit */_Bool) arr_33 [i_0] [(unsigned short)0] [14LL] [i_2])) ? (7372160318125678474LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)132)))))))) | (((/* implicit */int) (_Bool)1))));
                        var_22 |= ((/* implicit */int) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_22 [i_0] [i_1 + 2]))))) : (((((/* implicit */_Bool) -7372160318125678503LL)) ? (((/* implicit */unsigned long long int) var_13)) : (arr_21 [i_0] [10] [i_0] [i_2 + 2] [i_2] [(unsigned char)12])))))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_10 = 4; i_10 < 16; i_10 += 3) 
                    {
                        for (long long int i_11 = 0; i_11 < 19; i_11 += 2) 
                        {
                            {
                                arr_42 [i_2] [i_1 - 2] [i_2] [i_2] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_36 [i_10] [i_10 + 2] [i_11] [i_2] [i_11])) ? (arr_36 [i_2 - 1] [i_10 + 2] [(unsigned char)10] [i_2] [(short)8]) : (arr_36 [i_0] [i_10 - 1] [i_10 + 3] [i_2] [(_Bool)1]))) <= (max((arr_36 [i_0] [i_10 + 3] [i_11] [i_2] [i_11]), (((/* implicit */long long int) (unsigned char)148))))));
                                arr_43 [i_0] [i_1 - 1] [i_2 - 1] [i_2] [i_11] = ((/* implicit */signed char) ((((((_Bool) (short)29007)) || (((((/* implicit */_Bool) arr_38 [18LL] [i_2] [i_2] [(unsigned short)10] [i_0])) || (((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_0] [(unsigned short)5] [i_2])))))) ? (((/* implicit */int) arr_22 [i_0] [i_1 - 2])) : (((/* implicit */int) (short)-23286))));
                                var_23 = ((/* implicit */unsigned long long int) 1092317972U);
                                arr_44 [i_11] [i_11] [i_10] [i_2] [i_1 + 2] [i_11] &= ((/* implicit */signed char) max((((((((/* implicit */_Bool) arr_27 [7ULL])) ? (7372160318125678494LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))) >> (((((((/* implicit */_Bool) (unsigned char)135)) ? (((/* implicit */int) var_10)) : (0))) - (12816))))), (((/* implicit */long long int) arr_33 [i_0] [i_1] [i_2] [i_0]))));
                                arr_45 [i_10 + 1] [i_10 + 1] [i_2] [i_10 - 4] [i_10] [i_10] = ((/* implicit */unsigned long long int) (+(min((((/* implicit */long long int) (+(-1)))), (7372160318125678491LL)))));
                            }
                        } 
                    } 
                    var_24 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_11 [i_2 + 2] [i_1] [i_0] [i_0] [i_0]))))) : (((((/* implicit */_Bool) 7075849753860679802LL)) ? (((/* implicit */unsigned long long int) 23)) : (7833426733025080686ULL))))) % (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)65514)) ? (((/* implicit */int) arr_11 [i_2] [(unsigned short)1] [i_2] [(unsigned short)1] [i_2 + 1])) : (((/* implicit */int) arr_1 [i_0])))) | (((/* implicit */int) (!(((/* implicit */_Bool) 3686749701U))))))))));
                    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((min((((/* implicit */long long int) (unsigned short)40203)), (8721393487724139292LL))), (((/* implicit */long long int) ((7372160318125678512LL) == (((/* implicit */long long int) 1936571408U)))))))) ? (((((/* implicit */_Bool) ((signed char) 7372160318125678453LL))) ? (arr_32 [i_2 + 1]) : (arr_36 [i_2 + 1] [i_1 + 1] [i_2] [i_2] [i_1 + 3]))) : (((/* implicit */long long int) (~(((((((/* implicit */int) (short)-2)) + (2147483647))) >> (((((/* implicit */int) arr_27 [i_1])) - (49686))))))))));
                }
            } 
        } 
        var_26 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) arr_41 [i_0] [i_0] [(signed char)2])) | (((/* implicit */int) arr_41 [i_0] [i_0] [i_0])))));
    }
    for (signed char i_12 = 2; i_12 < 18; i_12 += 4) 
    {
        var_27 *= ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) -7372160318125678462LL))) + (((/* implicit */int) max((arr_23 [i_12 + 1] [i_12]), (((/* implicit */unsigned char) arr_46 [i_12] [i_12])))))));
        var_28 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) 5655087475832225467LL)), (15584607467098381515ULL)));
    }
    var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_5))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (var_8))))) : (((var_6) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)22751))) : (608217576U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) 7372160318125678461LL)))))) > (((unsigned long long int) (signed char)74)))))) : (((unsigned int) max((var_7), (((/* implicit */unsigned char) var_9)))))));
}
