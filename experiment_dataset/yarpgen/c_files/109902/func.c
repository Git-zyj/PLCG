/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109902
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
    for (int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        var_18 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2204916811U)) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) var_4))))) || (((((/* implicit */_Bool) (short)0)) && (((/* implicit */_Bool) arr_1 [i_0 - 2]))))));
        var_19 *= ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) 446967937)))))));
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (signed char)56))));
        var_21 *= (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) -446967938)) ? (2204916811U) : (((/* implicit */unsigned int) -446967938)))), (((/* implicit */unsigned int) -446967938))))));
    }
    for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        var_22 = ((/* implicit */signed char) var_17);
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) /* same iter space */
        {
            var_23 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2] [i_1]))))) > (((/* implicit */int) var_2))));
            /* LoopSeq 2 */
            for (int i_3 = 2; i_3 < 13; i_3 += 1) /* same iter space */
            {
                var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (-(((((/* implicit */unsigned int) ((/* implicit */int) (short)-14009))) ^ (3398610544U))))))));
                /* LoopNest 2 */
                for (unsigned int i_4 = 3; i_4 < 13; i_4 += 3) 
                {
                    for (unsigned int i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) 0))));
                            var_26 = ((/* implicit */unsigned int) var_2);
                        }
                    } 
                } 
                var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)79)) ? ((~(3398610524U))) : (((/* implicit */unsigned int) var_17)))))));
            }
            for (int i_6 = 2; i_6 < 13; i_6 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (short i_7 = 1; i_7 < 12; i_7 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_8 = 1; i_8 < 10; i_8 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)-19255)) && (((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1])))) ? (((/* implicit */int) ((((/* implicit */int) arr_11 [(_Bool)1] [0U] [i_2] [i_2] [i_7] [i_8])) == (((/* implicit */int) arr_13 [i_2] [i_2] [i_2] [i_1]))))) : (((/* implicit */int) arr_1 [i_6 + 1]))));
                        arr_21 [i_2] [i_7 + 2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_7 + 2] [i_2] [i_6 - 1] [i_6 - 1])) ? (((/* implicit */int) arr_13 [i_7 + 1] [i_2] [i_6 + 1] [i_7])) : (((/* implicit */int) var_0))));
                    }
                    for (signed char i_9 = 0; i_9 < 14; i_9 += 1) 
                    {
                        var_29 ^= ((((((/* implicit */_Bool) (unsigned short)15376)) ? (((/* implicit */int) (short)22564)) : (((/* implicit */int) (signed char)88)))) > (((/* implicit */int) arr_20 [(unsigned short)3] [i_2] [i_2] [i_7] [i_9])));
                        var_30 = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)-3278))));
                        var_31 = ((/* implicit */int) arr_0 [i_7]);
                        var_32 = ((/* implicit */unsigned int) ((unsigned long long int) arr_22 [i_9] [i_7] [i_1] [13U] [i_1]));
                        var_33 |= ((/* implicit */signed char) ((((/* implicit */unsigned int) var_10)) * (var_15)));
                    }
                    var_34 = ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) arr_17 [i_1] [i_7 + 2] [i_7] [i_7 + 1])) : (((/* implicit */int) (_Bool)1)));
                    var_35 = (((-(((/* implicit */int) var_7)))) < (((int) var_1)));
                    var_36 -= ((/* implicit */signed char) var_3);
                    var_37 += ((/* implicit */unsigned int) var_1);
                }
                var_38 = ((/* implicit */unsigned long long int) (-(-1178618414)));
            }
            var_39 = ((/* implicit */unsigned char) ((short) arr_18 [i_2] [i_2] [i_1]));
            var_40 = ((/* implicit */signed char) var_11);
            arr_24 [i_2] [i_2] [i_1] = ((/* implicit */short) arr_8 [i_2] [i_2]);
        }
        for (unsigned short i_10 = 0; i_10 < 14; i_10 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (short i_11 = 0; i_11 < 14; i_11 += 3) 
            {
                var_41 = ((/* implicit */int) arr_5 [i_1] [i_1] [i_1]);
                var_42 = ((/* implicit */unsigned char) var_12);
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                var_43 = ((/* implicit */unsigned short) arr_8 [i_12] [i_1]);
                arr_34 [i_12] = ((/* implicit */unsigned char) arr_22 [i_12] [i_1] [i_10] [i_1] [i_1]);
                var_44 = ((/* implicit */signed char) 0);
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_13 = 1; i_13 < 13; i_13 += 1) 
                {
                    var_45 ^= (-(arr_33 [4]));
                    /* LoopSeq 1 */
                    for (unsigned int i_14 = 4; i_14 < 10; i_14 += 4) 
                    {
                        var_46 = ((/* implicit */short) ((((/* implicit */int) (short)-14020)) & (((/* implicit */int) arr_37 [i_13 + 1] [i_13 + 1] [i_13] [i_13] [i_13 - 1]))));
                        arr_40 [i_10] [i_12] [i_12] [i_14 - 4] [i_10] = ((/* implicit */short) ((arr_29 [i_1] [i_12] [i_13 - 1] [i_14 - 1]) ? (((/* implicit */int) (unsigned short)20480)) : (((arr_15 [i_1] [i_12] [i_1]) ^ (((/* implicit */int) var_0))))));
                    }
                    arr_41 [i_1] [i_12] [i_12] [i_1] [i_10] = (+(((/* implicit */int) var_4)));
                    arr_42 [i_12] [i_12] [i_12] [i_12] = ((/* implicit */unsigned short) (+(-710336078)));
                }
                for (unsigned char i_15 = 3; i_15 < 11; i_15 += 2) 
                {
                    var_47 |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((unsigned short) (short)27617))))) != (((((/* implicit */_Bool) ((((/* implicit */int) var_8)) * (((/* implicit */int) arr_36 [i_1] [i_1]))))) ? (max((((/* implicit */unsigned long long int) arr_17 [i_10] [i_10] [i_12] [i_12])), (var_11))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_1] [(unsigned short)6])) ? (((/* implicit */int) (signed char)74)) : (((/* implicit */int) arr_20 [i_1] [i_10] [(_Bool)0] [i_1] [i_10])))))))));
                    var_48 *= ((/* implicit */short) (~(arr_44 [i_15 + 3] [i_15 + 2] [i_15 - 3] [i_15 - 1] [i_15 - 1])));
                    var_49 = ((/* implicit */unsigned short) min((arr_44 [i_15 - 1] [(signed char)13] [(signed char)13] [i_15 + 3] [i_15 + 1]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((signed char) arr_28 [i_1]))))))));
                }
                var_50 -= ((/* implicit */short) min((min((896356752U), (3398610544U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_12] [i_10] [i_12])) ? (((/* implicit */int) arr_7 [i_12] [i_10] [i_12])) : (2147483632))))));
            }
            arr_45 [i_1] [i_1] = ((/* implicit */unsigned short) arr_15 [i_1] [(_Bool)0] [i_1]);
            var_51 = ((/* implicit */unsigned char) min((var_51), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((signed char) arr_17 [i_10] [i_1] [i_1] [i_1]))) ? (((/* implicit */unsigned int) var_17)) : (var_6))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_17 [i_10] [i_10] [i_10] [i_1])) < ((~(((/* implicit */int) arr_1 [(unsigned short)3])))))))))))));
            var_52 = max((((/* implicit */short) var_8)), (max((((/* implicit */short) (_Bool)1)), ((short)27617))));
            var_53 *= ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1] [(unsigned short)6] [i_10] [i_1])) ? (((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [6U] [i_1] [6U])) : (((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [(short)6] [i_10] [i_1]))))), ((-(var_5)))));
        }
        for (unsigned short i_16 = 0; i_16 < 14; i_16 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (short i_17 = 1; i_17 < 10; i_17 += 4) 
            {
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    for (signed char i_19 = 3; i_19 < 13; i_19 += 1) 
                    {
                        {
                            var_54 = ((/* implicit */signed char) (-(((((_Bool) var_7)) ? (min((((/* implicit */unsigned int) var_7)), (896356772U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_38 [i_1] [i_1] [i_1] [i_17] [i_18] [i_18] [i_19])))))))));
                            arr_55 [i_17] [i_17] [i_16] = ((/* implicit */int) arr_27 [i_17] [(signed char)6]);
                        }
                    } 
                } 
            } 
            arr_56 [i_16] [i_1] [i_1] |= ((/* implicit */signed char) arr_38 [i_1] [i_16] [i_1] [(signed char)12] [i_16] [i_16] [i_16]);
            var_55 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_17)) ? (((((/* implicit */_Bool) (unsigned char)121)) ? (var_15) : (var_15))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [4] [i_1] [i_16] [i_16]))))) - (min((((558961205U) + (896356772U))), (((/* implicit */unsigned int) min((arr_35 [i_1] [i_16] [i_16]), (((/* implicit */unsigned short) var_4)))))))));
        }
        arr_57 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) var_10))));
        arr_58 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-27620)) && (((/* implicit */_Bool) arr_19 [(short)8] [(short)8] [i_1] [i_1])))) ? (((/* implicit */int) arr_51 [(short)12])) : ((-(((/* implicit */int) var_9))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_16)) ? (1653470795U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-3260))))) != (((var_12) - (((/* implicit */unsigned int) ((/* implicit */int) (short)-3291))))))))) : (min((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-41))) & (1653470795U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)64198)))))))));
        var_56 = ((/* implicit */_Bool) min((max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_19 [8U] [8U] [i_1] [i_1]))))), (((((/* implicit */_Bool) var_16)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))), (((arr_16 [i_1] [0ULL] [i_1] [i_1] [i_1]) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
    }
    /* LoopNest 3 */
    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
    {
        for (signed char i_21 = 0; i_21 < 10; i_21 += 4) 
        {
            for (unsigned short i_22 = 2; i_22 < 7; i_22 += 3) 
            {
                {
                    arr_68 [i_20] [i_20] [i_21] [i_22] |= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_20] [i_21] [i_22] [i_20]))) < (((((/* implicit */_Bool) arr_23 [i_21] [i_21] [i_22 - 1] [i_22 - 2] [i_21] [i_22 - 1] [i_20])) ? (((/* implicit */unsigned int) ((((var_10) + (2147483647))) << (((1653470795U) - (1653470795U)))))) : (max((2090050485U), (((/* implicit */unsigned int) arr_9 [i_20] [i_21] [(signed char)2] [i_21] [i_20] [(short)6]))))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned int i_23 = 0; i_23 < 10; i_23 += 4) 
                    {
                        var_57 = ((/* implicit */short) (-(arr_65 [i_20] [i_21] [i_23])));
                        var_58 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1622827696)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)12))) : (2934699372U)))) && (((/* implicit */_Bool) ((var_8) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (8976110490623563028ULL))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_24 = 0; i_24 < 10; i_24 += 2) /* same iter space */
                    {
                        var_59 += ((/* implicit */signed char) ((arr_25 [i_20] [i_20]) < (arr_25 [i_21] [i_21])));
                        arr_75 [i_20] [i_20] = ((/* implicit */unsigned short) (-(((var_12) / (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
                    }
                    for (unsigned int i_25 = 0; i_25 < 10; i_25 += 2) /* same iter space */
                    {
                        arr_79 [i_22] [i_21] [i_21] [i_21] [i_21] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_18 [i_20] [i_22 + 3] [i_22 - 2]))));
                        var_60 = ((((/* implicit */int) ((unsigned char) arr_1 [i_21]))) & (((/* implicit */int) arr_60 [i_20])));
                    }
                    for (unsigned long long int i_26 = 2; i_26 < 8; i_26 += 3) 
                    {
                        var_61 = ((/* implicit */int) arr_4 [i_20] [i_21]);
                        var_62 = ((/* implicit */int) ((9470633583085988587ULL) % (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_48 [i_20] [i_21] [i_22 + 3] [i_22])) ? (arr_54 [i_21] [i_20] [i_21] [i_20] [i_21]) : (3547779070U)))) | (((((/* implicit */_Bool) arr_25 [i_26 - 2] [i_20])) ? (var_11) : (var_11)))))));
                    }
                }
            } 
        } 
    } 
}
