/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174795
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((max((131071LL), (((/* implicit */long long int) (unsigned short)7642)))) - (((/* implicit */long long int) ((((/* implicit */_Bool) ((-131072LL) * (-131071LL)))) ? (((336888262U) * (var_9))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (-1) : (((/* implicit */int) (unsigned char)158)))))))))))));
                                var_13 += ((/* implicit */_Bool) (((-(min((((/* implicit */long long int) 3958079033U)), (var_3))))) - (((/* implicit */long long int) (-(((/* implicit */int) (short)29780)))))));
                                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) var_9))));
                                var_15 = ((/* implicit */int) var_3);
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */short) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_6), (var_6))))) - (max((0ULL), (var_10)))))));
                    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) arr_10 [i_0] [i_0] [i_0] [i_1 + 2] [i_2]))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 2) 
    {
        var_18 = ((/* implicit */unsigned short) min((((/* implicit */signed char) var_5)), (var_1)));
        /* LoopNest 3 */
        for (short i_6 = 1; i_6 < 10; i_6 += 2) 
        {
            for (signed char i_7 = 0; i_7 < 13; i_7 += 4) 
            {
                for (unsigned int i_8 = 1; i_8 < 12; i_8 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (int i_9 = 0; i_9 < 13; i_9 += 3) /* same iter space */
                        {
                            var_19 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((unsigned int) var_7))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (14932563650191051937ULL))) * (((((/* implicit */_Bool) 14932563650191051955ULL)) ? (5593433538719692696ULL) : (((/* implicit */unsigned long long int) 131070LL))))))));
                            var_20 = ((/* implicit */short) (+(min((((/* implicit */long long int) (unsigned short)65535)), (var_2)))));
                            var_21 = ((/* implicit */int) 3524977187U);
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_5)), (min((((/* implicit */long long int) var_7)), (var_2)))))))))));
                        }
                        for (int i_10 = 0; i_10 < 13; i_10 += 3) /* same iter space */
                        {
                            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((2139095040) / ((~(117440512)))))) ? (max((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-62))) ^ (14932563650191051937ULL))))) : (((/* implicit */unsigned long long int) (~(arr_5 [i_8 - 1] [i_8 + 1] [i_6] [i_6 - 1]))))));
                            var_24 -= ((/* implicit */int) (!(((/* implicit */_Bool) ((short) ((signed char) (signed char)37))))));
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 13; i_11 += 3) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [7ULL])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-58))))) : (3514180423518499679ULL)));
                            var_26 = ((/* implicit */signed char) ((unsigned long long int) arr_21 [i_6] [i_6] [i_6] [i_8 - 1]));
                            var_27 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)0))));
                            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) (((~(((/* implicit */int) (short)28998)))) * (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11)))))))));
                        }
                        var_29 ^= ((/* implicit */signed char) max((((((/* implicit */int) arr_21 [i_5] [i_6] [i_7] [i_6])) - (((/* implicit */int) var_11)))), (((/* implicit */int) max((arr_21 [i_8] [i_7] [i_6 + 1] [i_5]), (((/* implicit */unsigned short) (short)-8206)))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_12 = 0; i_12 < 24; i_12 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_13 = 0; i_13 < 24; i_13 += 1) 
        {
            for (short i_14 = 0; i_14 < 24; i_14 += 2) 
            {
                {
                    var_30 = ((/* implicit */unsigned long long int) ((var_0) - (((/* implicit */long long int) min((((/* implicit */unsigned int) min(((_Bool)1), (var_8)))), (((var_4) * (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))));
                    var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) max((14), (((/* implicit */int) var_1))))) ? (((4294967295U) - (arr_32 [i_12]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2069913604U)))))))))));
                    var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((short) ((max((((/* implicit */unsigned long long int) var_11)), (13564083816812388113ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-117)))))))));
                }
            } 
        } 
        var_33 |= ((/* implicit */signed char) ((((/* implicit */_Bool) min(((-(var_0))), (((/* implicit */long long int) ((var_7) * (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))) ? (min((arr_37 [i_12] [i_12]), (-1))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */long long int) var_9))))) ? ((~(((/* implicit */int) (signed char)101)))) : (((0) * (((/* implicit */int) arr_33 [i_12]))))))));
    }
    for (short i_15 = 4; i_15 < 19; i_15 += 4) 
    {
        var_34 = ((/* implicit */signed char) ((((var_2) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) - (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_35 [i_15] [i_15 - 4] [i_15]))))));
        var_35 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) arr_35 [i_15 + 1] [i_15] [i_15])) * (((/* implicit */int) arr_39 [i_15 - 2]))))) - (((((/* implicit */_Bool) 14932563650191051937ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_2)))));
        /* LoopNest 2 */
        for (unsigned int i_16 = 0; i_16 < 22; i_16 += 3) 
        {
            for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_18 = 1; i_18 < 20; i_18 += 3) 
                    {
                        for (int i_19 = 3; i_19 < 19; i_19 += 2) 
                        {
                            {
                                var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 3514180423518499661ULL)) ? (((/* implicit */long long int) 14)) : (var_3))) / ((~(var_0)))))) ? (min((((((/* implicit */_Bool) var_4)) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) var_3)))), (((18446744073709551609ULL) * (((/* implicit */unsigned long long int) var_3)))))) : (((/* implicit */unsigned long long int) (-(var_2))))));
                                var_37 = ((/* implicit */short) -1387719745505879421LL);
                                var_38 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!((!(((/* implicit */_Bool) 5771014415527922694ULL)))))))));
                                var_39 = ((/* implicit */unsigned long long int) max((var_39), (((/* implicit */unsigned long long int) (!(var_5))))));
                            }
                        } 
                    } 
                    var_40 = ((/* implicit */signed char) (short)-1654);
                    /* LoopNest 2 */
                    for (signed char i_20 = 0; i_20 < 22; i_20 += 2) 
                    {
                        for (unsigned short i_21 = 2; i_21 < 21; i_21 += 2) 
                        {
                            {
                                var_41 = ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) - ((-(-424228625)))));
                                var_42 = ((/* implicit */int) (((((_Bool)1) ? (14932563650191051945ULL) : (2216615441596416ULL))) * (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_37 [i_15 - 3] [i_15 - 3])), (min((((/* implicit */unsigned int) var_6)), (4294967295U))))))));
                                var_43 ^= ((/* implicit */unsigned int) ((((/* implicit */long long int) max((var_7), (((/* implicit */unsigned int) var_1))))) - (min((var_3), (arr_51 [i_17 - 1] [3LL] [i_17 - 1])))));
                                var_44 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1387719745505879421LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)28269), (((/* implicit */short) var_1)))))) : (18444527458267955199ULL)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) -1012701189)) : (14526195904710017295ULL))) : (((((/* implicit */_Bool) (unsigned char)87)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (7ULL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
