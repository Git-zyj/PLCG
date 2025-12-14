/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189276
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
    var_10 = ((/* implicit */signed char) ((-8570633541429775285LL) >= (((/* implicit */long long int) (-(((/* implicit */int) var_6)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        var_11 ^= max((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_3])) ? (-559463908) : (((/* implicit */int) (signed char)-114)))), (((/* implicit */int) ((-1324335299) <= (1605135188)))));
                        var_12 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) (unsigned char)150)) / (-399380194))) : (((/* implicit */int) arr_8 [i_1] [i_2] [i_3]))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_4 = 3; i_4 < 14; i_4 += 2) 
                        {
                            var_13 = ((((/* implicit */_Bool) 1324335312)) ? (9323622) : (((/* implicit */int) arr_3 [i_2] [i_1] [i_2 + 1])));
                            arr_13 [i_3] [i_1 - 3] [i_2 + 1] [i_1] [i_3] = ((/* implicit */unsigned short) 7263572845999395934ULL);
                        }
                    }
                    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) -1978596872)) ? ((-(max((((/* implicit */int) (unsigned short)8160)), (1324335311))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((4294967293U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)168)))))))))));
                    var_15 &= ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (!(((/* implicit */_Bool) -1509409762))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) var_0);
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(min((-1324335305), (((/* implicit */int) var_1))))))) && (((/* implicit */_Bool) min((((/* implicit */long long int) ((var_7) > (((/* implicit */long long int) ((/* implicit */int) var_4)))))), (var_7))))));
    /* LoopSeq 4 */
    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 3) 
    {
        var_18 = ((int) ((arr_14 [i_5]) > (arr_15 [i_5])));
        arr_16 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) arr_14 [i_5]))) / (min((arr_14 [i_5]), (arr_14 [i_5])))));
        var_19 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_14 [i_5])) ? (arr_14 [i_5]) : (arr_14 [i_5]))));
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) arr_15 [i_5]))));
        var_21 *= ((/* implicit */short) (_Bool)1);
    }
    /* vectorizable */
    for (unsigned char i_6 = 2; i_6 < 22; i_6 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */long long int) (+(arr_17 [i_6 - 1])));
        var_23 = ((/* implicit */unsigned short) ((unsigned long long int) (_Bool)1));
        var_24 = ((/* implicit */unsigned int) arr_20 [i_6]);
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (unsigned short i_8 = 0; i_8 < 23; i_8 += 4) 
            {
                {
                    var_25 = ((/* implicit */_Bool) ((-1324335287) * (((/* implicit */int) var_9))));
                    var_26 = ((/* implicit */unsigned char) var_3);
                }
            } 
        } 
    }
    for (unsigned char i_9 = 2; i_9 < 22; i_9 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_10 = 0; i_10 < 23; i_10 += 2) 
        {
            for (long long int i_11 = 0; i_11 < 23; i_11 += 1) 
            {
                {
                    var_27 = ((/* implicit */int) var_2);
                    var_28 = ((/* implicit */signed char) max((((/* implicit */unsigned int) 534773760)), (357900556U)));
                    var_29 += ((/* implicit */unsigned int) arr_18 [i_9] [i_10]);
                    /* LoopSeq 2 */
                    for (unsigned short i_12 = 4; i_12 < 22; i_12 += 1) 
                    {
                        var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) ((unsigned char) -1978596853)))));
                        var_31 &= ((/* implicit */unsigned char) ((max((arr_26 [i_9 - 2]), (arr_26 [i_9 - 2]))) - (((/* implicit */unsigned long long int) min((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (7869697542634644329LL))), (((/* implicit */long long int) arr_27 [i_9 - 1])))))));
                    }
                    for (unsigned char i_13 = 2; i_13 < 19; i_13 += 2) 
                    {
                        var_32 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_0)) ? (((var_9) ? (arr_20 [i_11]) : (((/* implicit */long long int) 28)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)44259)) : (((/* implicit */int) (unsigned short)21224))))))), (((/* implicit */long long int) -1978596852))));
                        /* LoopSeq 1 */
                        for (long long int i_14 = 0; i_14 < 23; i_14 += 3) 
                        {
                            var_33 = (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_5))))))));
                            var_34 = ((/* implicit */long long int) max((var_34), (((long long int) max((max((18446744073709551608ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) max((94027151), (((/* implicit */int) var_1))))))))));
                        }
                    }
                    var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_9] [i_9 - 2] [i_9 - 1] [i_10] [i_11])) ? (((/* implicit */int) arr_37 [i_9] [i_9 - 1] [i_9] [i_9] [i_9 + 1])) : (((/* implicit */int) arr_37 [i_9] [i_10] [i_11] [i_10] [i_11]))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) <= (((var_5) + (var_5)))))) : (((/* implicit */int) (unsigned short)5807))));
                }
            } 
        } 
        arr_40 [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_39 [i_9] [i_9]))) ? (((/* implicit */unsigned long long int) ((arr_27 [i_9 - 2]) / (((-1978596852) - (((/* implicit */int) arr_25 [i_9] [i_9 - 2] [i_9 - 2] [i_9 - 2]))))))) : (((arr_26 [i_9 - 1]) - (((/* implicit */unsigned long long int) var_5))))));
    }
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        /* LoopNest 2 */
        for (short i_16 = 2; i_16 < 8; i_16 += 4) 
        {
            for (unsigned short i_17 = 0; i_17 < 12; i_17 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_18 = 0; i_18 < 12; i_18 += 2) 
                    {
                        for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                        {
                            {
                                arr_54 [i_15] = ((/* implicit */long long int) max((((/* implicit */unsigned int) (~(((/* implicit */int) min((((/* implicit */unsigned short) (short)19831)), ((unsigned short)56421))))))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_15] [i_15] [i_15] [i_15]))) : (((((/* implicit */_Bool) -2147483631)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_33 [i_15] [i_16 + 3] [i_17] [i_17])))))));
                                var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) ((unsigned short) 1978596871)))) + ((+(((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_8 [i_17] [i_16 - 1] [i_17])))))))))));
                            }
                        } 
                    } 
                    arr_55 [i_15] [i_16] [i_15] [i_15] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned char)152)))) ? (min((arr_10 [i_15] [i_16 + 1] [i_15] [i_16]), (arr_10 [i_15] [i_16 + 1] [i_16] [i_16 + 1]))) : (min((((/* implicit */unsigned long long int) arr_28 [i_16 - 1] [i_16 + 1] [i_16])), (arr_10 [i_15] [i_16 + 1] [i_15] [i_16])))));
                    arr_56 [i_15] [i_15] [i_15] [i_15] = max((((((/* implicit */_Bool) -10)) ? (((/* implicit */int) (_Bool)0)) : (-2147483640))), (((/* implicit */int) (signed char)-84)));
                }
            } 
        } 
        var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) (unsigned char)252))));
    }
}
