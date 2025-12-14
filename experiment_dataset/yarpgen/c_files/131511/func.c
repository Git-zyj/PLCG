/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131511
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 1; i_3 < 11; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            var_17 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) | (((/* implicit */int) var_10))))) ? (((5784312912027888618LL) >> (((arr_10 [i_0] [i_0] [i_2] [i_0]) + (4646967305664366783LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 8319499464122291210ULL)) ? (((/* implicit */int) arr_8 [i_4] [i_1] [i_0])) : (((/* implicit */int) arr_8 [i_2] [i_1] [i_2])))))));
                            var_18 = ((/* implicit */unsigned char) arr_6 [i_1] [i_1]);
                        }
                        var_19 -= ((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_3]))));
                    }
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (6223682861023186434ULL))))));
                    arr_14 [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_0] [i_0] [i_2] [i_1] [i_2])) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_1] [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1] [i_2]))));
                    var_21 = ((/* implicit */unsigned int) var_14);
                }
            } 
        } 
        arr_15 [i_0] [i_0] |= ((/* implicit */long long int) arr_4 [i_0] [i_0]);
        var_22 = ((/* implicit */long long int) arr_5 [i_0] [i_0] [i_0]);
    }
    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 4) 
    {
        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) arr_19 [i_5]))));
        arr_20 [i_5] = ((/* implicit */signed char) min(((-(((((/* implicit */_Bool) arr_18 [i_5])) ? (((/* implicit */int) arr_17 [i_5])) : (((/* implicit */int) (unsigned short)0)))))), (min((((((/* implicit */_Bool) arr_17 [i_5])) ? (((/* implicit */int) arr_16 [i_5] [i_5])) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_5])))))))));
        arr_21 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)63992)) && (((/* implicit */_Bool) 0U))));
        var_24 = ((/* implicit */unsigned int) var_4);
    }
    for (long long int i_6 = 3; i_6 < 18; i_6 += 1) /* same iter space */
    {
        arr_24 [i_6] = ((/* implicit */_Bool) arr_17 [i_6 - 1]);
        /* LoopNest 2 */
        for (unsigned int i_7 = 0; i_7 < 20; i_7 += 1) 
        {
            for (long long int i_8 = 0; i_8 < 20; i_8 += 2) 
            {
                {
                    var_25 = ((/* implicit */unsigned long long int) arr_19 [i_6]);
                    var_26 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) var_14)) | (((/* implicit */int) arr_28 [i_6] [i_7] [i_8]))))) ? (((/* implicit */int) var_13)) : (var_12))) == ((((~(((/* implicit */int) arr_27 [i_8])))) | (((/* implicit */int) arr_29 [i_6] [i_7]))))));
                    /* LoopSeq 2 */
                    for (int i_9 = 2; i_9 < 18; i_9 += 2) /* same iter space */
                    {
                        var_27 -= ((/* implicit */unsigned char) (~(((/* implicit */int) max((arr_29 [i_6 + 1] [i_9 + 2]), (arr_29 [i_6 - 3] [i_9 + 1]))))));
                        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) (~(((/* implicit */int) var_13)))))) << (((((/* implicit */int) arr_31 [i_6])) + (113))))))));
                    }
                    for (int i_10 = 2; i_10 < 18; i_10 += 2) /* same iter space */
                    {
                        arr_35 [i_8] [i_8] [i_8] [i_7] [i_6 + 1] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)4095))))) % (arr_32 [i_6 - 3])))) - (arr_18 [i_10])));
                        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_18 [i_6])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_6] [i_7]))))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_7] [i_8] [i_10 + 2]))) - (18446744073709551615ULL)))))) ? (min((((/* implicit */unsigned int) max((((/* implicit */unsigned char) arr_28 [i_6] [i_7] [i_8])), (arr_34 [i_6] [i_7])))), (((2426979187U) - (4294967273U))))) : (min((((/* implicit */unsigned int) (+(arr_19 [i_10])))), (min((arr_32 [i_10]), (((/* implicit */unsigned int) var_1))))))));
                        var_30 = ((/* implicit */long long int) max((var_30), (((((/* implicit */_Bool) (~((~(((/* implicit */int) arr_30 [i_7]))))))) ? (((/* implicit */long long int) ((((((/* implicit */int) var_11)) << (((((/* implicit */int) arr_16 [i_6] [i_6])) - (43))))) << (((arr_32 [i_10]) - (2350500950U)))))) : (min((((((/* implicit */long long int) ((/* implicit */int) arr_28 [i_6] [i_6] [i_6]))) & (670758497252788171LL))), (((/* implicit */long long int) (short)27540))))))));
                        arr_36 [i_6] [i_6] [i_6 - 1] [i_6 + 2] = ((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) (~(((/* implicit */int) arr_34 [i_6 - 3] [i_7]))))), (max((arr_18 [i_7]), (((/* implicit */long long int) var_7)))))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (var_7) : (((/* implicit */int) var_0)))))));
                    }
                    var_31 = ((/* implicit */long long int) var_9);
                }
            } 
        } 
        arr_37 [i_6] = ((/* implicit */unsigned int) arr_17 [i_6]);
        var_32 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5)) ? (4219107679U) : (((/* implicit */unsigned int) -1889436435))))) ? (((/* implicit */int) ((arr_33 [i_6 - 1] [i_6 + 2]) >= (((/* implicit */long long int) ((((/* implicit */int) var_10)) % (((/* implicit */int) arr_22 [i_6])))))))) : (max((((/* implicit */int) ((signed char) arr_17 [i_6]))), (max((1528866780), (((/* implicit */int) (unsigned char)0))))))));
        var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_19 [i_6])) ? (arr_19 [i_6]) : (((/* implicit */int) var_9)))), (((/* implicit */int) arr_29 [i_6] [i_6])))))));
    }
    /* vectorizable */
    for (long long int i_11 = 3; i_11 < 18; i_11 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_12 = 0; i_12 < 20; i_12 += 3) 
        {
            /* LoopSeq 2 */
            for (signed char i_13 = 3; i_13 < 19; i_13 += 3) 
            {
                var_34 ^= ((/* implicit */unsigned char) arr_32 [i_13]);
                var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) ((arr_33 [i_12] [i_12]) | (((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_11] [i_13])) ? (((/* implicit */int) arr_44 [i_11] [i_11] [i_11])) : (((/* implicit */int) arr_44 [i_11 + 1] [i_11 + 1] [i_13]))))))))));
                /* LoopSeq 1 */
                for (unsigned char i_14 = 0; i_14 < 20; i_14 += 3) 
                {
                    var_36 = ((/* implicit */signed char) ((((/* implicit */int) var_14)) > (((/* implicit */int) arr_34 [i_11] [i_11]))));
                    var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_11] [i_12] [i_14]))) : (arr_45 [(unsigned char)8] [(unsigned char)8] [i_13] [i_13]))) >> ((((+(((/* implicit */int) var_14)))) - (17337))))))));
                    arr_49 [i_11] [i_12] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_11 + 2])) ? (((var_10) ? (((/* implicit */int) arr_31 [i_11])) : (((/* implicit */int) var_0)))) : ((+(arr_25 [i_11] [i_13 - 1] [i_14])))));
                    arr_50 [i_11] [i_12] = ((/* implicit */_Bool) (+(arr_32 [i_13 - 3])));
                }
                var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_12] [i_11])))))) >= (((((/* implicit */_Bool) arr_23 [i_12])) ? (((/* implicit */long long int) arr_32 [i_11 + 1])) : (arr_39 [(unsigned short)0] [(unsigned short)0]))))))));
            }
            for (signed char i_15 = 3; i_15 < 18; i_15 += 2) 
            {
                var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)40579)))))));
                /* LoopNest 2 */
                for (unsigned short i_16 = 0; i_16 < 20; i_16 += 4) 
                {
                    for (unsigned int i_17 = 0; i_17 < 20; i_17 += 1) 
                    {
                        {
                            var_40 = var_9;
                            arr_58 [i_17] [i_11] [i_15] [i_11] [i_11] = ((/* implicit */int) var_3);
                        }
                    } 
                } 
                var_41 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_38 [i_11 + 2]))));
                /* LoopSeq 2 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    var_42 = ((/* implicit */long long int) arr_29 [i_12] [i_12]);
                    var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4749447829501143228ULL)) ? (((/* implicit */long long int) ((-1019246980) - (((/* implicit */int) (unsigned short)64416))))) : (5784312912027888619LL)));
                    arr_61 [i_18] [i_18] [i_18] [i_11] [i_18] [i_18] = ((/* implicit */int) (((+(288230376151711743ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_30 [i_18])) <= (var_12)))))));
                }
                for (unsigned short i_19 = 2; i_19 < 19; i_19 += 4) 
                {
                    var_44 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_11] [i_11])))))) | (((((/* implicit */_Bool) arr_38 [i_11])) ? (var_2) : (((/* implicit */unsigned long long int) arr_19 [i_15]))))));
                    arr_65 [i_19] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_43 [i_11 - 3] [i_11 + 2] [i_11 + 1])));
                }
            }
            arr_66 [4LL] [4LL] [i_11] |= ((/* implicit */long long int) ((((/* implicit */int) arr_28 [i_11] [i_11] [i_12])) == (((((/* implicit */_Bool) arr_46 [i_11] [i_11] [i_11] [i_12] [i_11])) ? (((/* implicit */int) arr_28 [i_12] [i_12] [i_11])) : (((/* implicit */int) arr_22 [i_12]))))));
        }
        var_45 += ((/* implicit */unsigned int) ((arr_26 [i_11 + 2] [i_11 - 2]) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) arr_19 [i_11])) != (9223372036854775804LL)))))));
        var_46 &= arr_38 [i_11];
        arr_67 [i_11] = ((/* implicit */short) arr_57 [i_11]);
        arr_68 [(short)8] &= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (signed char)-106)) != (((/* implicit */int) (unsigned short)315))))) >> (((/* implicit */int) (_Bool)1))));
    }
    var_47 = ((/* implicit */short) var_16);
}
