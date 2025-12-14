/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150499
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
    var_10 = ((/* implicit */long long int) var_3);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) /* same iter space */
                    {
                        var_11 = ((/* implicit */long long int) var_3);
                        var_12 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_1 [i_3] [i_0 - 2]))));
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 4; i_4 < 21; i_4 += 1) 
                        {
                            var_13 += ((/* implicit */short) ((((/* implicit */_Bool) 13LL)) ? (5673756801461298676ULL) : (((/* implicit */unsigned long long int) -3531092926145444358LL))));
                            var_14 = ((/* implicit */int) var_8);
                        }
                        for (unsigned char i_5 = 3; i_5 < 20; i_5 += 4) 
                        {
                            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)92)) ? (((/* implicit */int) arr_15 [i_0] [i_0])) : (((/* implicit */int) (signed char)107))));
                            var_16 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)108))))) & (arr_0 [i_0] [i_5 + 1])));
                            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned short)55492))))) ? (arr_0 [i_0] [i_5 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (arr_12 [i_0 - 2] [i_0] [i_1] [i_0 - 2] [i_0 - 2] [i_3] [i_3]) : (arr_12 [i_5 - 1] [i_0] [i_3] [i_2] [i_1] [i_0] [i_0 - 1])));
                        }
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 4) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned char) (unsigned short)10043);
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)55492)) : (((/* implicit */int) arr_9 [i_0] [i_0 - 1] [i_0 - 2] [i_6]))));
                    }
                    for (long long int i_7 = 2; i_7 < 21; i_7 += 2) 
                    {
                        var_21 ^= ((/* implicit */unsigned int) var_2);
                        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)10044)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)0))));
                        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)108)) ? (9133912282717549694LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34727)))))) ? (arr_6 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((long long int) arr_6 [i_0] [i_0])))));
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-103)) ? (-703468941360781646LL) : (-9133912282717549695LL)));
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)10044)) ? (((9133912282717549694LL) % (((/* implicit */long long int) ((/* implicit */int) (signed char)-108))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-98)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)1)))))));
                    }
                    var_26 = (signed char)72;
                }
            } 
        } 
        var_27 = ((/* implicit */int) ((13771090951274915349ULL) >> (((((/* implicit */int) (signed char)98)) - (89)))));
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 1; i_8 < 18; i_8 += 2) 
        {
            for (unsigned int i_9 = 0; i_9 < 22; i_9 += 2) 
            {
                {
                    var_28 = (((!(var_1))) ? (((((/* implicit */_Bool) -1600571977)) ? (((/* implicit */long long int) ((/* implicit */int) (short)22962))) : (arr_5 [i_0] [i_8 + 1] [i_9]))) : (((/* implicit */long long int) -1072980211)));
                    var_29 = ((/* implicit */unsigned int) ((((/* implicit */long long int) 761264498U)) <= (((((/* implicit */_Bool) var_2)) ? (arr_5 [i_0] [i_8] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12751)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 0; i_10 < 22; i_10 += 1) 
                    {
                        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)224)) - (((/* implicit */int) (short)-19129))));
                                var_31 = ((/* implicit */signed char) ((var_1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)56))) : (((long long int) (unsigned short)64184))));
                                var_32 = ((/* implicit */unsigned int) var_4);
                                var_33 = ((/* implicit */unsigned int) var_5);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_34 = ((/* implicit */long long int) arr_9 [i_0] [i_0] [i_0] [i_0]);
        var_35 = (signed char)-104;
    }
    for (signed char i_12 = 0; i_12 < 23; i_12 += 1) /* same iter space */
    {
        var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) arr_33 [i_12]))));
        var_37 |= ((/* implicit */short) ((max((((((/* implicit */_Bool) arr_34 [i_12] [i_12])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_3))))), (((/* implicit */long long int) arr_34 [i_12] [i_12])))) + (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_12] [i_12])))));
    }
    for (signed char i_13 = 0; i_13 < 23; i_13 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned short i_14 = 0; i_14 < 23; i_14 += 1) /* same iter space */
        {
            var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) (short)22963))));
            var_39 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)74)) : (((/* implicit */int) (signed char)88))));
        }
        for (unsigned short i_15 = 0; i_15 < 23; i_15 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (short i_16 = 0; i_16 < 23; i_16 += 1) 
            {
                var_40 = ((/* implicit */signed char) ((((/* implicit */int) var_9)) | (((/* implicit */int) (short)22962))));
                var_41 = ((/* implicit */_Bool) ((((/* implicit */int) (short)-22962)) / (((/* implicit */int) arr_33 [i_13]))));
                /* LoopNest 2 */
                for (long long int i_17 = 0; i_17 < 23; i_17 += 4) 
                {
                    for (short i_18 = 2; i_18 < 20; i_18 += 3) 
                    {
                        {
                            var_42 = ((/* implicit */int) max((var_42), (((/* implicit */int) (short)-27533))));
                            var_43 += ((/* implicit */unsigned char) -1490618402955389758LL);
                            var_44 = ((/* implicit */long long int) var_2);
                        }
                    } 
                } 
                var_45 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2496249927270862870LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((4720135345566417363LL) != (((/* implicit */long long int) ((/* implicit */int) arr_38 [(unsigned short)18]))))))));
            }
            for (long long int i_19 = 4; i_19 < 22; i_19 += 2) /* same iter space */
            {
                var_46 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1023LL)) && (var_1)))), (((unsigned long long int) (short)-22963)))))));
                var_47 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (signed char)-66)), (((((/* implicit */_Bool) arr_33 [i_19 + 1])) ? (((/* implicit */unsigned long long int) 1723137639U)) : (40368817187683278ULL)))));
                var_48 = ((/* implicit */unsigned long long int) (signed char)-101);
            }
            /* vectorizable */
            for (long long int i_20 = 4; i_20 < 22; i_20 += 2) /* same iter space */
            {
                var_49 = ((/* implicit */unsigned char) ((1841246894390909644ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (signed char)-104))))));
                var_50 |= ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)36523)) : (((/* implicit */int) (signed char)98))));
                var_51 = ((/* implicit */long long int) (signed char)108);
            }
            var_52 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6))))) ? (((arr_42 [10U] [(short)15] [10U]) ? (((/* implicit */unsigned int) 1696816132)) : (3901157380U))) : (((/* implicit */unsigned int) 1696816132))))));
            var_53 = ((/* implicit */_Bool) ((int) arr_35 [i_15]));
            var_54 = ((/* implicit */signed char) max((var_54), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)7921))) ? (((arr_44 [i_15] [i_13] [i_13]) & (arr_45 [i_13] [i_13] [i_13] [i_15]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_1)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)26740)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_37 [(short)20]))))) : (((((var_8) % (arr_50 [20ULL]))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32368)) ? (((/* implicit */int) (short)6114)) : (((/* implicit */int) (signed char)81))))))))))));
        }
        var_55 |= ((/* implicit */unsigned int) max((max(((+(((/* implicit */int) (unsigned short)3306)))), (((/* implicit */int) var_7)))), (((/* implicit */int) arr_42 [i_13] [i_13] [i_13]))));
        var_56 |= ((/* implicit */_Bool) (unsigned short)56634);
        var_57 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)71)) ? (((((/* implicit */_Bool) arr_34 [i_13] [i_13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)88))) : (13281886547527524660ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */int) (_Bool)0)) : (max((var_4), (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))));
    }
    for (signed char i_21 = 0; i_21 < 23; i_21 += 1) /* same iter space */
    {
        var_58 = var_1;
        var_59 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_21] [i_21] [i_21] [i_21])) ? (((/* implicit */unsigned long long int) var_5)) : (min((var_0), (((/* implicit */unsigned long long int) arr_42 [i_21] [i_21] [i_21]))))))) ? (((/* implicit */long long int) max((min((((/* implicit */int) var_1)), (arr_43 [i_21]))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)32750)) : (arr_43 [i_21])))))) : (max((((((/* implicit */_Bool) var_7)) ? (arr_55 [i_21] [i_21]) : (((/* implicit */long long int) ((/* implicit */int) var_6))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)91)))))))));
        var_60 = ((/* implicit */long long int) (signed char)-92);
        var_61 |= ((/* implicit */unsigned long long int) var_6);
    }
    var_62 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((_Bool) (unsigned char)87))), (((-5088779407144160780LL) / (((/* implicit */long long int) ((/* implicit */int) var_9)))))))) ? (978922801) : (((int) max((((/* implicit */int) (signed char)-111)), (520093696))))));
}
