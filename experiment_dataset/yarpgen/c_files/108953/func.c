/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108953
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
    var_14 = ((/* implicit */short) max(((-(min((var_4), (((/* implicit */long long int) var_8)))))), (((/* implicit */long long int) var_3))));
    var_15 &= ((/* implicit */unsigned long long int) var_0);
    /* LoopSeq 4 */
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned int) (unsigned short)20815);
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
    }
    for (unsigned char i_1 = 2; i_1 < 16; i_1 += 4) /* same iter space */
    {
        var_17 ^= ((/* implicit */signed char) ((min((arr_5 [i_1]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-7))))))) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        var_18 &= ((/* implicit */_Bool) (+((~(((/* implicit */int) arr_4 [i_1 - 1]))))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            for (unsigned int i_3 = 1; i_3 < 16; i_3 += 2) 
            {
                {
                    var_19 += ((/* implicit */signed char) (!(((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_7 [i_1] [i_1] [i_1]))))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 17; i_4 += 2) 
                    {
                        for (int i_5 = 1; i_5 < 14; i_5 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) (signed char)127)))));
                                arr_16 [i_1] [i_4] [i_3] [i_1] [i_1] = ((/* implicit */signed char) (_Bool)1);
                                var_21 = min(((signed char)-49), (((/* implicit */signed char) ((arr_9 [i_3] [i_5 + 3] [i_3]) < (var_4)))));
                            }
                        } 
                    } 
                    arr_17 [i_3] [i_2] [i_1] &= ((/* implicit */long long int) (unsigned short)23978);
                    arr_18 [i_1] [i_1] [i_1] [i_1] = arr_10 [i_1 - 1] [i_2] [i_3 - 1];
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned char i_6 = 4; i_6 < 15; i_6 += 4) 
        {
            var_22 -= ((/* implicit */short) arr_10 [i_6] [i_6] [i_1 - 2]);
            var_23 -= ((/* implicit */unsigned short) max((((/* implicit */signed char) (!(((/* implicit */_Bool) max((arr_0 [i_1] [i_6]), ((signed char)127))))))), ((signed char)(-127 - 1))));
        }
        for (unsigned short i_7 = 0; i_7 < 17; i_7 += 3) /* same iter space */
        {
            arr_24 [i_7] [i_7] = ((/* implicit */_Bool) (-((((_Bool)1) ? (arr_20 [i_1] [i_1 + 1]) : (arr_20 [i_1] [i_1 - 1])))));
            var_24 = max((((/* implicit */unsigned short) min((arr_14 [i_1] [i_1] [i_1 - 1]), (arr_14 [i_1] [i_1 + 1] [i_1 + 1])))), ((unsigned short)65535));
        }
        /* vectorizable */
        for (unsigned short i_8 = 0; i_8 < 17; i_8 += 3) /* same iter space */
        {
            var_25 *= ((/* implicit */long long int) ((((/* implicit */_Bool) 2329592435422447904LL)) && (((/* implicit */_Bool) (short)7235))));
            arr_28 [i_1] [i_1] [i_8] = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)46))));
            arr_29 [i_1] [i_8] [i_8] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_27 [i_1] [i_8] [i_1]))));
            arr_30 [i_8] [i_1] = ((((/* implicit */_Bool) (short)18200)) ? (((/* implicit */int) arr_12 [i_1] [i_1] [i_1 - 1] [i_1])) : (((/* implicit */int) arr_15 [i_1 + 1] [i_1] [i_1 - 2] [i_1 - 2] [i_1])));
        }
        arr_31 [i_1] = ((/* implicit */short) var_12);
    }
    for (unsigned int i_9 = 0; i_9 < 12; i_9 += 3) 
    {
        arr_36 [i_9] = ((/* implicit */signed char) (+(18ULL)));
        /* LoopSeq 2 */
        for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 3) 
        {
            var_26 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((arr_1 [i_9]), (arr_1 [i_9]))))));
            arr_39 [i_9] [i_10] [i_9] = ((/* implicit */unsigned char) arr_22 [i_9] [i_9]);
            var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) var_9))));
            var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) (((~(max((((/* implicit */long long int) (signed char)112)), (arr_3 [i_9]))))) <= (((/* implicit */long long int) ((/* implicit */int) min((arr_15 [i_9] [i_9] [i_9] [i_9] [i_10]), (((/* implicit */short) (signed char)127)))))))))));
            var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) min((((/* implicit */int) max((arr_21 [i_9] [i_10]), ((signed char)-120)))), ((~(((/* implicit */int) (signed char)-47)))))))));
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_12 = 3; i_12 < 10; i_12 += 4) 
            {
                for (signed char i_13 = 1; i_13 < 10; i_13 += 3) 
                {
                    {
                        var_30 = ((/* implicit */signed char) ((unsigned char) (signed char)0));
                        var_31 += ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (signed char)69)), (1056487842U)))), (((unsigned long long int) (_Bool)0)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 3238479442U)))))));
                        arr_48 [i_11] [i_11] [i_11] [i_11] [i_11] [i_9] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)33796))) == (((((/* implicit */long long int) ((/* implicit */int) arr_46 [i_13 + 1] [i_11] [i_12 + 1] [i_13 + 1]))) / (-3935343210773159857LL)))));
                    }
                } 
            } 
            arr_49 [i_9] = ((/* implicit */_Bool) (unsigned short)31739);
            arr_50 [i_9] [i_11] [4U] |= ((/* implicit */long long int) 1056487842U);
        }
        /* LoopSeq 1 */
        for (signed char i_14 = 2; i_14 < 11; i_14 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_15 = 0; i_15 < 12; i_15 += 4) 
            {
                arr_55 [i_9] = ((/* implicit */long long int) (~(((((/* implicit */int) arr_8 [i_9] [i_9] [i_15])) ^ (((/* implicit */int) (signed char)-23))))));
                arr_56 [i_9] [i_14] [i_15] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (signed char)46))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) max((arr_13 [i_9] [i_14] [i_15] [i_9]), (((/* implicit */signed char) (_Bool)1))))), ((unsigned short)33796))))) : (arr_44 [i_9] [i_9] [i_9] [i_9] [i_15] [i_9])));
                arr_57 [i_9] [i_14] [i_14] [i_15] &= ((/* implicit */int) ((max((((/* implicit */long long int) min((arr_15 [i_9] [i_9] [i_9] [i_9] [i_9]), (((/* implicit */short) (unsigned char)233))))), (arr_9 [i_9] [i_9] [i_9]))) | (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-116)))))));
            }
            var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) 823159680213773371ULL))));
            /* LoopSeq 2 */
            for (signed char i_16 = 0; i_16 < 12; i_16 += 2) 
            {
                /* LoopSeq 1 */
                for (long long int i_17 = 0; i_17 < 12; i_17 += 1) 
                {
                    var_33 = ((/* implicit */unsigned int) max((var_33), (max((max((((/* implicit */unsigned int) arr_10 [i_14 - 1] [i_14] [i_16])), (3238479454U))), (((/* implicit */unsigned int) ((arr_10 [i_14 - 1] [i_16] [i_14 - 1]) << (((arr_10 [i_14 - 1] [i_14 - 1] [i_14 - 1]) - (279503168))))))))));
                    var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) min((((/* implicit */unsigned short) (short)-18200)), ((unsigned short)31740))))));
                }
                arr_64 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) 3238479454U);
            }
            for (short i_18 = 0; i_18 < 12; i_18 += 4) 
            {
                arr_69 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) arr_65 [i_9] [i_9] [i_9] [i_9]);
                var_35 ^= ((/* implicit */unsigned long long int) (!(((((((/* implicit */_Bool) (unsigned short)31740)) ? (9223372036854775807LL) : (((/* implicit */long long int) 1056487830U)))) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)233)))))));
                /* LoopNest 2 */
                for (unsigned short i_19 = 0; i_19 < 12; i_19 += 1) 
                {
                    for (signed char i_20 = 0; i_20 < 12; i_20 += 4) 
                    {
                        {
                            var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) min((9223372036854775807LL), (((/* implicit */long long int) arr_1 [i_18])))))))) - ((+(((/* implicit */int) (unsigned short)0)))))))));
                            var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) (signed char)127))));
                            var_38 = ((/* implicit */signed char) max(((~((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) (unsigned short)31740))));
                            arr_74 [i_9] [i_14] [i_14] [i_14] [i_14] [i_9] [i_14] = ((/* implicit */int) (_Bool)1);
                        }
                    } 
                } 
                var_39 = ((/* implicit */unsigned char) var_2);
                arr_75 [i_9] = ((/* implicit */_Bool) min(((((+(((/* implicit */int) (_Bool)1)))) | (((/* implicit */int) (unsigned char)15)))), ((~(max((((/* implicit */int) arr_8 [i_9] [i_14] [i_18])), (1150469656)))))));
            }
        }
        arr_76 [i_9] [i_9] = ((/* implicit */signed char) ((unsigned char) max((3238479459U), (((/* implicit */unsigned int) (unsigned short)25098)))));
    }
    /* vectorizable */
    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
    {
        var_40 += ((/* implicit */signed char) (unsigned short)31739);
        var_41 = ((/* implicit */unsigned int) max((var_41), (((/* implicit */unsigned int) arr_0 [i_21] [i_21]))));
        arr_79 [i_21] = ((/* implicit */_Bool) 1269448315740812744LL);
        arr_80 [i_21] [i_21] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)(-127 - 1)))));
        /* LoopNest 3 */
        for (unsigned short i_22 = 0; i_22 < 14; i_22 += 3) 
        {
            for (signed char i_23 = 1; i_23 < 12; i_23 += 3) 
            {
                for (unsigned int i_24 = 1; i_24 < 11; i_24 += 2) 
                {
                    {
                        arr_89 [i_21] [i_22] [i_21] = ((/* implicit */signed char) -1654602017);
                        var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) ((6578124041208472262LL) / (3935343210773159856LL))))));
                        var_43 += ((/* implicit */signed char) 3935343210773159856LL);
                        arr_90 [i_21] [(signed char)0] [i_23] [i_24] |= ((/* implicit */unsigned short) ((unsigned char) arr_23 [i_23 + 1] [i_24 + 3]));
                    }
                } 
            } 
        } 
    }
}
