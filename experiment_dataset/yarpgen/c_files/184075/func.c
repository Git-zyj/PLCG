/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184075
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
    var_10 = ((/* implicit */unsigned int) var_6);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            var_11 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_0 - 2])) ? (((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) (unsigned short)40231))));
            arr_4 [i_0] [i_1] [i_0] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) 72022409665839104LL))));
            arr_5 [i_0] [i_1] [i_1] &= ((/* implicit */unsigned long long int) -72022409665839100LL);
            var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) (unsigned short)40231))));
            var_13 = ((/* implicit */unsigned int) arr_1 [i_0]);
        }
        for (signed char i_2 = 3; i_2 < 21; i_2 += 2) 
        {
            /* LoopSeq 3 */
            for (signed char i_3 = 0; i_3 < 23; i_3 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_4 = 1; i_4 < 21; i_4 += 4) 
                {
                    arr_13 [i_4] [i_3] [i_2 + 2] [(unsigned char)7] &= ((/* implicit */_Bool) 108916106);
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        var_14 = ((/* implicit */long long int) 108916083);
                        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((int) max((arr_6 [i_2] [i_2] [i_2 + 1]), (arr_6 [i_2] [i_2] [i_2 - 3])))))));
                    }
                    arr_17 [i_0] [i_0] [i_0] [i_3] [i_3] [i_4] = ((/* implicit */unsigned short) (~(var_3)));
                    var_16 = ((/* implicit */unsigned char) (+(((unsigned int) (unsigned short)43763))));
                }
                arr_18 [i_0] [(unsigned short)10] = ((/* implicit */short) ((long long int) arr_11 [i_0] [i_2] [i_2 - 1] [i_0 - 2]));
                var_17 &= ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */int) (signed char)79)) != (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-42)), ((unsigned short)21775))))))), ((~(((/* implicit */int) arr_7 [i_0]))))));
                arr_19 [(unsigned short)16] [i_2] [i_3] [i_2] &= (~(max((((((/* implicit */int) var_0)) | (((/* implicit */int) arr_16 [i_0] [i_0 - 2] [i_0] [i_2] [i_2] [i_3])))), ((~(((/* implicit */int) (signed char)7)))))));
            }
            for (int i_6 = 3; i_6 < 22; i_6 += 1) 
            {
                arr_23 [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned int) max((((/* implicit */unsigned short) min((arr_15 [i_0] [i_2] [i_6]), (((/* implicit */unsigned char) (_Bool)1))))), ((unsigned short)6362)))), (((1859320412U) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                var_18 = ((/* implicit */int) max((var_18), ((~((-(var_7)))))));
            }
            for (signed char i_7 = 4; i_7 < 22; i_7 += 4) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_8 = 0; i_8 < 23; i_8 += 3) 
                {
                    var_19 -= ((/* implicit */unsigned short) ((((unsigned int) -3125677027607228072LL)) % (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)8)))))));
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_1) ? (72022409665839097LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)63)))))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) ((unsigned char) (unsigned char)248)))));
                    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */int) arr_22 [i_0 + 1] [i_7 - 3] [i_7 - 3] [i_8])) != (((/* implicit */int) var_5)))))));
                }
                var_22 = ((/* implicit */unsigned char) (((-(((/* implicit */int) max(((unsigned short)6362), (((/* implicit */unsigned short) arr_26 [i_0] [i_0] [8LL]))))))) / ((+(((/* implicit */int) (signed char)-18))))));
            }
            arr_29 [i_0] [(signed char)3] [i_0] = ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) (short)-11530)), (min((arr_1 [i_2]), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])))))), (((/* implicit */unsigned long long int) ((_Bool) var_5)))));
        }
        for (short i_9 = 0; i_9 < 23; i_9 += 4) 
        {
            var_23 *= ((/* implicit */unsigned char) ((((long long int) (~(arr_28 [i_0] [i_0] [i_9] [i_9] [(_Bool)1])))) >= (((/* implicit */long long int) min((((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_2)) - (19625))))), (((/* implicit */int) (unsigned short)59170)))))));
            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) arr_0 [18U]))));
            arr_32 [i_0] [i_9] [i_9] &= ((((((/* implicit */_Bool) arr_9 [11LL] [11LL] [i_0 - 1] [i_0 + 1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_6)))) >> (((/* implicit */int) ((((/* implicit */int) var_6)) >= (arr_9 [i_0 - 1] [i_0 - 2] [(short)16] [i_9])))));
            /* LoopSeq 2 */
            for (long long int i_10 = 4; i_10 < 22; i_10 += 2) 
            {
                var_25 = ((/* implicit */unsigned int) arr_20 [i_0] [i_9] [i_9]);
                var_26 -= ((/* implicit */int) (signed char)-62);
                /* LoopSeq 4 */
                for (long long int i_11 = 0; i_11 < 23; i_11 += 3) 
                {
                    var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [(unsigned short)7] [(unsigned short)7])) ? ((((-(((/* implicit */int) arr_35 [i_0] [(unsigned short)10] [i_11])))) - (((/* implicit */int) (signed char)25)))) : ((-(-108916102))))))));
                    arr_39 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_9] [i_10] [i_11] = ((/* implicit */long long int) ((max((((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))), (min((((/* implicit */unsigned int) var_9)), (1610612736U))))) | (((/* implicit */unsigned int) (+(((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1)))))))));
                }
                /* vectorizable */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    var_28 = ((/* implicit */long long int) (short)5085);
                    var_29 = ((/* implicit */signed char) ((((/* implicit */int) arr_22 [i_0 + 1] [i_10 - 1] [i_10 - 1] [i_12])) >> (((((/* implicit */int) (short)-18860)) + (18877)))));
                    arr_43 [i_12] [i_12] [i_0 + 1] [i_0] [i_12] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0 + 1])) & (((/* implicit */int) arr_2 [i_0 + 1]))));
                    /* LoopSeq 1 */
                    for (long long int i_13 = 1; i_13 < 19; i_13 += 2) 
                    {
                        arr_48 [i_13 + 4] [i_12] [i_10] [i_12] [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_4)) ? (arr_10 [i_12] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
                        var_30 = (_Bool)1;
                        var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) arr_37 [i_0] [i_9] [i_10] [i_12] [i_13]))));
                        var_32 ^= ((/* implicit */unsigned char) arr_3 [i_12] [i_13]);
                    }
                }
                for (int i_14 = 0; i_14 < 23; i_14 += 3) 
                {
                    arr_51 [i_14] [i_14] = min((108916101), (((((/* implicit */int) max((arr_15 [i_14] [i_0] [i_0]), (((/* implicit */unsigned char) (signed char)125))))) - (((/* implicit */int) arr_21 [i_9] [i_9] [i_10 - 3] [i_9])))));
                    arr_52 [i_0] [i_9] [i_14] [i_14] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)12983)))))));
                    /* LoopSeq 2 */
                    for (int i_15 = 0; i_15 < 23; i_15 += 2) /* same iter space */
                    {
                        var_33 &= ((/* implicit */long long int) arr_1 [i_9]);
                        var_34 -= ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_15])) ^ (((/* implicit */int) var_1))))) <= ((((_Bool)1) ? (((/* implicit */long long int) arr_37 [i_0] [i_0 + 1] [i_0 - 2] [i_0] [i_0])) : (arr_25 [i_0] [i_0] [i_0])))))), (arr_49 [i_10] [i_0] [i_15] [i_14])));
                        arr_56 [i_15] [i_9] [i_9] [i_9] [i_15] &= ((/* implicit */long long int) arr_54 [i_0] [i_9] [i_0 - 2] [i_0 - 2] [i_0]);
                    }
                    for (int i_16 = 0; i_16 < 23; i_16 += 2) /* same iter space */
                    {
                        var_35 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-64)) | (((/* implicit */int) ((arr_30 [i_0 + 1] [i_0 - 2]) > (arr_30 [i_0 - 2] [i_0 - 2]))))));
                        arr_60 [i_14] [i_10] = (+(((509217659U) >> (((var_7) - (1405558139))))));
                        var_36 = ((/* implicit */unsigned int) (signed char)32);
                        var_37 = ((unsigned int) ((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)8064))))) | (max((arr_50 [i_0] [i_14] [i_14]), (((/* implicit */long long int) -2055296647))))));
                        arr_61 [(unsigned char)13] [i_9] [i_10] [i_14] [i_14] = (unsigned short)6371;
                    }
                }
                for (unsigned short i_17 = 2; i_17 < 22; i_17 += 4) 
                {
                    var_38 += ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_8 [i_0])), (min((((/* implicit */int) (unsigned char)60)), ((~(((/* implicit */int) (unsigned short)57479))))))));
                    var_39 = ((/* implicit */int) min((var_39), (((/* implicit */int) (unsigned short)46761))));
                }
            }
            for (long long int i_18 = 0; i_18 < 23; i_18 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_19 = 0; i_19 < 23; i_19 += 1) 
                {
                    for (unsigned char i_20 = 0; i_20 < 23; i_20 += 2) 
                    {
                        {
                            var_40 *= ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) max((var_0), (var_0)))), (max((((/* implicit */unsigned long long int) 5907453711375455076LL)), (18ULL))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)226), (arr_22 [i_0 - 2] [i_0 - 1] [i_0 - 2] [i_9])))))));
                            var_41 = ((/* implicit */signed char) (-((+(((((/* implicit */int) arr_57 [i_0] [10] [i_0] [i_9] [i_18] [i_9] [i_20])) & (((/* implicit */int) (unsigned short)6338))))))));
                            var_42 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((~(((/* implicit */int) (_Bool)1))))))) ? (3940943803U) : ((+(354023502U)))));
                        }
                    } 
                } 
                var_43 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3940943823U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)0))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 503207751U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)209))) : (var_4)))) | (((((/* implicit */_Bool) -771891106)) ? (arr_30 [i_9] [19ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_0] [i_9] [i_0] [i_18])))))))));
                var_44 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((arr_72 [i_18] [i_18] [i_18] [i_18] [i_18]) ? (1764473529U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) -3294030931899965541LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (9077979746522441272LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0 - 2]))))), (((/* implicit */long long int) -1210284293))));
                var_45 = ((/* implicit */short) (+(((((/* implicit */_Bool) (short)-30471)) ? (((/* implicit */unsigned int) 1210284284)) : (max((var_4), (((/* implicit */unsigned int) arr_6 [i_0] [17LL] [17LL]))))))));
            }
        }
        var_46 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_59 [i_0] [i_0] [(unsigned char)8] [(unsigned short)6] [i_0] [i_0]))));
        var_47 = max(((+(((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0 - 2] [i_0])) ? (((/* implicit */int) arr_62 [i_0] [i_0 - 2])) : (arr_28 [i_0] [i_0] [i_0] [i_0] [i_0]))))), ((~(((/* implicit */int) arr_2 [i_0 - 2])))));
        /* LoopNest 2 */
        for (signed char i_21 = 0; i_21 < 23; i_21 += 3) 
        {
            for (unsigned char i_22 = 1; i_22 < 20; i_22 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_23 = 3; i_23 < 22; i_23 += 1) 
                    {
                        arr_81 [i_0] [i_22] [(_Bool)1] [i_23] [i_23] = ((/* implicit */unsigned short) max((((/* implicit */int) (short)11291)), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)12))))));
                        arr_82 [i_0 - 2] [(signed char)0] [i_0] [(signed char)0] [i_23] [(unsigned char)0] &= ((/* implicit */unsigned short) (~(((/* implicit */int) ((short) (signed char)-80)))));
                        var_48 = ((/* implicit */int) max((var_48), (((((/* implicit */_Bool) ((signed char) -1210284282))) ? ((~(((/* implicit */int) arr_27 [i_0 - 2] [i_22] [i_22] [i_22 + 3])))) : (((/* implicit */int) min((var_5), (((/* implicit */unsigned char) arr_27 [i_0 + 1] [i_21] [i_22] [i_22 + 2])))))))));
                        var_49 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_0))));
                    }
                    arr_83 [i_22] [(unsigned char)0] [i_21] [i_22] = (-(min(((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (-4398046511104LL))), (((/* implicit */long long int) max((((/* implicit */short) var_9)), (var_6)))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_24 = 2; i_24 < 21; i_24 += 2) 
                    {
                        var_50 += ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) 504895244)) && (((/* implicit */_Bool) -1210284262)))))));
                        arr_88 [i_24] [i_22] [i_21] [(_Bool)0] [i_22] [i_0] = ((/* implicit */signed char) (unsigned char)230);
                        var_51 += ((/* implicit */_Bool) var_0);
                    }
                    /* vectorizable */
                    for (unsigned char i_25 = 0; i_25 < 23; i_25 += 1) 
                    {
                        var_52 = ((/* implicit */unsigned short) (_Bool)1);
                        arr_91 [i_0] [i_0] [i_22] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)49))));
                        var_53 = ((/* implicit */_Bool) min((var_53), ((!(((/* implicit */_Bool) var_7))))));
                        var_54 = ((/* implicit */long long int) (!((_Bool)1)));
                    }
                }
            } 
        } 
    }
    var_55 = ((/* implicit */signed char) max((var_3), (((/* implicit */long long int) (~(var_4))))));
    var_56 = ((/* implicit */signed char) min((var_56), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (unsigned short)248))) ? (max((var_7), (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)50))))))) ? ((+((+(var_7))))) : (((/* implicit */int) ((signed char) ((((/* implicit */int) (unsigned short)16384)) / (((/* implicit */int) (_Bool)1)))))))))));
}
