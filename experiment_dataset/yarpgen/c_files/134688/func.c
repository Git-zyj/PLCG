/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134688
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
    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) min(((-(((/* implicit */int) ((signed char) (_Bool)0))))), (((/* implicit */int) ((_Bool) ((signed char) (_Bool)0)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((short) max((((/* implicit */unsigned int) min((((/* implicit */int) arr_0 [i_0] [i_1])), (48786547)))), (((arr_5 [(unsigned char)16] [i_1] [i_1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))))));
                            /* LoopSeq 2 */
                            for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                            {
                                var_15 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) arr_2 [i_1])))));
                                var_16 *= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (short)-30610))) ? (((((/* implicit */_Bool) arr_3 [i_0] [(short)6] [i_0])) ? (-102419981074051567LL) : (9223372036854775807LL))) : (((/* implicit */long long int) ((int) -2103150863))))))));
                            }
                            for (short i_5 = 1; i_5 < 22; i_5 += 1) 
                            {
                                var_17 = (+(max((((/* implicit */int) ((unsigned char) arr_13 [i_0] [i_1] [(short)14] [i_3] [i_1] [i_5] [i_2]))), ((-(((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_3])))))));
                                arr_14 [i_0] [i_1] [i_1] [i_3] [i_5] = (i_1 % 2 == 0) ? (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) ((long long int) 2103150862))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_3] [6])) >> (((((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_3])) - (41))))))))) / (((/* implicit */int) ((_Bool) arr_6 [i_0] [i_1] [(short)7])))))) : (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) ((long long int) 2103150862))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_3] [6])) >> (((((((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_3])) - (41))) - (155))))))))) / (((/* implicit */int) ((_Bool) arr_6 [i_0] [i_1] [(short)7]))))));
                            }
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned int) min((((/* implicit */signed char) (((~(((/* implicit */int) (_Bool)1)))) > (((/* implicit */int) arr_0 [i_0] [i_1]))))), (((signed char) 9223372036854775807LL))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */int) (unsigned char)48)) >= (((/* implicit */int) (unsigned char)15)))))));
        arr_17 [i_6] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (((_Bool)1) && ((_Bool)0))))));
        /* LoopSeq 1 */
        for (long long int i_7 = 0; i_7 < 17; i_7 += 1) 
        {
            var_20 = min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_16 [i_6]))))), (min((arr_16 [i_6]), (arr_16 [i_6]))));
            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((_Bool) ((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)8))))) >= (max((1786635556U), (((/* implicit */unsigned int) (unsigned char)246))))))))));
            var_22 = min((((/* implicit */int) ((199440914) >= (((/* implicit */int) (short)-4096))))), (((2102876872) ^ (((/* implicit */int) (_Bool)0)))));
        }
        var_23 = ((/* implicit */short) max(((+(max((((/* implicit */unsigned int) (unsigned char)213)), (3290675449U))))), (((/* implicit */unsigned int) max(((-(-792246325))), (((/* implicit */int) arr_4 [i_6])))))));
        arr_20 [i_6] [(short)14] |= min((((/* implicit */unsigned int) ((arr_5 [i_6] [i_6] [i_6]) < (arr_5 [i_6] [i_6] [i_6])))), (min((((/* implicit */unsigned int) (unsigned char)240)), (647048760U))));
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned char) ((int) 6029572415940688972ULL));
        /* LoopNest 2 */
        for (unsigned char i_9 = 0; i_9 < 17; i_9 += 4) 
        {
            for (unsigned int i_10 = 3; i_10 < 15; i_10 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_12 = 1; i_12 < 16; i_12 += 4) 
                        {
                            var_25 *= ((/* implicit */unsigned long long int) ((int) max((arr_2 [i_10 - 1]), (((/* implicit */int) max(((_Bool)1), (arr_13 [i_8] [i_9] [i_10] [(_Bool)1] [i_11] [i_8] [(short)12])))))));
                            var_26 = ((/* implicit */unsigned int) arr_0 [i_8] [i_8]);
                        }
                        for (long long int i_13 = 2; i_13 < 13; i_13 += 3) 
                        {
                            var_27 &= ((/* implicit */_Bool) min((((((arr_3 [i_8] [i_8] [i_11]) << (((((-1) + (10))) - (7))))) & (((/* implicit */int) ((((/* implicit */int) arr_7 [i_8] [i_11] [i_8] [(short)22])) < (((/* implicit */int) arr_11 [1] [i_9] [i_9] [i_11] [i_11]))))))), (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)127)), ((unsigned char)113))))));
                            var_28 = ((/* implicit */unsigned int) (~(((arr_16 [i_8]) >> (((((unsigned int) arr_26 [i_9] [i_8] [(unsigned char)0])) - (96U)))))));
                            var_29 = ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_13 - 1] [i_13 - 1] [i_10] [(_Bool)1]))) < (max((((/* implicit */long long int) (short)27113)), (((((/* implicit */long long int) 4294967295U)) | ((-9223372036854775807LL - 1LL)))))));
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_30 ^= ((max((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) (unsigned char)27)) << (((((/* implicit */int) (signed char)-55)) + (63))))))) + (((/* implicit */int) ((((/* implicit */int) arr_42 [i_8] [(signed char)13] [i_10] [i_11] [i_14] [i_11] [i_10])) <= (((/* implicit */int) arr_26 [i_8] [i_11] [i_11]))))));
                            var_31 = ((/* implicit */short) min((var_31), (((short) ((short) (short)(-32767 - 1))))));
                            var_32 -= ((/* implicit */short) (-(((/* implicit */int) (((+(1344380553))) <= (arr_2 [i_10 - 1]))))));
                            arr_43 [i_8] [i_9] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((9223372036854775807LL) << (0LL))) == (((((arr_24 [i_10]) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [(_Bool)1] [i_9] [i_10] [i_8]))) : (67108863LL))) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)64)))))));
                            arr_44 [i_8] [i_8] [i_10] [i_8] [10U] [i_8] = ((/* implicit */short) min(((-((+(arr_22 [i_9] [i_11]))))), (((/* implicit */int) ((((/* implicit */int) arr_19 [i_10 - 1] [i_8])) < (196608))))));
                        }
                    }
                    for (unsigned char i_15 = 2; i_15 < 15; i_15 += 4) 
                    {
                        arr_48 [i_8] [i_8] [i_10] [i_15 - 2] = ((/* implicit */_Bool) min((((long long int) (~(((/* implicit */int) arr_4 [(short)17]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(9223372036854775807LL)))) ? (3673208459U) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) arr_4 [3LL])), (arr_8 [i_8]))))))))));
                        arr_49 [i_8] [i_8] [i_10 - 2] [i_15 + 1] = ((/* implicit */unsigned int) ((short) min((((/* implicit */long long int) (short)-27114)), (-2272378999370794930LL))));
                    }
                    for (unsigned long long int i_16 = 1; i_16 < 14; i_16 += 3) 
                    {
                        var_33 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_30 [i_8] [i_9] [15U]))));
                        arr_53 [i_8] [(_Bool)1] [i_10 - 1] = (!(((/* implicit */_Bool) ((((/* implicit */int) (short)12289)) & (((/* implicit */int) arr_33 [i_8] [i_16] [i_10] [i_16 - 1] [i_9] [i_10]))))));
                        var_34 |= ((/* implicit */int) ((((/* implicit */unsigned long long int) max((((621758837U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)148))))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_51 [i_9] [i_9])))))))) != (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -199440914)))))) + (((((/* implicit */_Bool) (unsigned char)165)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_8] [i_9] [(unsigned char)7] [(unsigned char)7] [(unsigned char)7]))) : (arr_32 [i_16] [5] [i_8])))))));
                        var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_46 [i_10 - 3] [i_10 - 3] [i_16 + 1] [i_16 + 1] [i_16 - 1] [i_16])))))))));
                    }
                    arr_54 [i_8] [i_8] [i_8] = ((/* implicit */signed char) (~(min((arr_47 [i_10 - 3] [i_10 - 3] [i_10] [i_10]), (arr_41 [i_10] [i_10] [(_Bool)1] [i_10] [i_10 + 2] [i_10 - 2] [i_10 - 1])))));
                    var_36 = ((/* implicit */unsigned long long int) arr_46 [12] [i_10 - 2] [i_10] [i_9] [i_8] [i_9]);
                }
            } 
        } 
    }
}
