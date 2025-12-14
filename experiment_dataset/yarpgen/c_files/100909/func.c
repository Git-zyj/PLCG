/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100909
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0])) ? (-8297108843572010017LL) : (((/* implicit */long long int) ((var_3) * (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
        var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_3 [i_0]) * (3852285608431146010ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (14594458465278405587ULL)));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            var_13 += ((/* implicit */signed char) (((-(((/* implicit */int) (unsigned short)49588)))) & (((/* implicit */int) arr_6 [10LL] [i_1]))));
            var_14 = ((/* implicit */unsigned char) (~(arr_5 [i_0])));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) -5204858001424938582LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7274))) : (arr_1 [i_0]))))));
                var_16 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(arr_1 [i_0]))))));
                var_17 = ((/* implicit */unsigned int) (((+(((/* implicit */int) (signed char)-118)))) / (((/* implicit */int) (unsigned short)60112))));
            }
            arr_10 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) arr_6 [i_1] [i_1]))))));
        }
        for (long long int i_3 = 1; i_3 < 9; i_3 += 1) 
        {
            arr_15 [i_0] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? ((+(((/* implicit */int) (signed char)5)))) : (((/* implicit */int) var_0))));
            var_18 = ((/* implicit */unsigned char) (~(arr_8 [i_0] [i_3 + 4] [i_3 + 2])));
            arr_16 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_0] [(unsigned short)6] [i_0] [i_0]))))) || (((/* implicit */_Bool) arr_7 [i_0] [i_3 + 4] [i_0]))));
        }
        /* LoopSeq 4 */
        for (unsigned short i_4 = 3; i_4 < 11; i_4 += 3) 
        {
            arr_19 [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3852285608431146029ULL)) ? (((/* implicit */long long int) 2268392420U)) : (6447530158214516970LL)))) % (arr_17 [i_4 + 1] [i_4 - 2] [i_4 + 2])));
            var_19 = ((/* implicit */unsigned long long int) (signed char)11);
            /* LoopNest 2 */
            for (unsigned char i_5 = 1; i_5 < 12; i_5 += 3) 
            {
                for (unsigned short i_6 = 3; i_6 < 12; i_6 += 3) 
                {
                    {
                        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) 3852285608431146011ULL)) ? (((/* implicit */unsigned long long int) arr_4 [(unsigned char)6] [i_6] [(unsigned char)6])) : (var_5))))));
                        /* LoopSeq 4 */
                        for (unsigned short i_7 = 0; i_7 < 13; i_7 += 1) 
                        {
                            var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [(unsigned char)0] [i_5] [i_7])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))))) % (((long long int) var_7))));
                            var_22 *= ((/* implicit */unsigned int) (((+(6447530158214516970LL))) | (6447530158214516962LL)));
                        }
                        for (unsigned char i_8 = 2; i_8 < 9; i_8 += 3) 
                        {
                            arr_32 [i_0] [i_0] [i_4] [i_5] [(signed char)4] [10ULL] |= ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)70))));
                            arr_33 [i_5] [i_5] [(signed char)6] [i_4] [(signed char)12] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)150)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_29 [i_8] [i_6] [i_5] [i_4] [(_Bool)1])) : (((/* implicit */int) arr_26 [i_6] [i_4]))))) : ((~(arr_3 [i_0])))));
                            arr_34 [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) 4294967295U)) != (arr_1 [i_8]))) ? (((/* implicit */int) arr_22 [i_0] [i_4] [i_5])) : (((/* implicit */int) (signed char)11))));
                        }
                        for (signed char i_9 = 0; i_9 < 13; i_9 += 1) 
                        {
                            var_23 = ((/* implicit */signed char) (+(((11902905761944975549ULL) * (((/* implicit */unsigned long long int) var_2))))));
                            arr_37 [(unsigned char)10] [i_4] [i_4] [i_6] [i_9] [i_0] = ((/* implicit */unsigned char) ((unsigned int) (~(((/* implicit */int) arr_30 [i_0] [i_4] [i_4] [i_5] [i_4] [i_6] [i_9])))));
                            arr_38 [i_4] = ((/* implicit */_Bool) ((unsigned int) 3232338032U));
                        }
                        for (unsigned int i_10 = 2; i_10 < 11; i_10 += 3) 
                        {
                            var_24 &= ((/* implicit */signed char) (unsigned char)11);
                            arr_42 [i_5] [i_4] [i_5] [i_6] [i_10] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)3015)) - (((/* implicit */int) (unsigned short)62520))))) ? (((((/* implicit */int) (unsigned short)58503)) & (((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) arr_2 [i_10 - 1]))));
                        }
                        arr_43 [i_6] [i_4] [i_5] [(signed char)12] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)209))));
                    }
                } 
            } 
            var_25 = ((/* implicit */long long int) (~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)209))) % (2082544688U)))));
            /* LoopNest 2 */
            for (unsigned int i_11 = 0; i_11 < 13; i_11 += 3) 
            {
                for (signed char i_12 = 1; i_12 < 9; i_12 += 1) 
                {
                    {
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)0)) || (arr_28 [i_0] [i_4] [i_4 - 1] [i_12 + 4])));
                        /* LoopSeq 1 */
                        for (unsigned int i_13 = 1; i_13 < 11; i_13 += 1) 
                        {
                            arr_52 [i_4] [11ULL] [i_11] [i_4] [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_45 [i_4] [i_4])) ? (((/* implicit */int) arr_45 [i_4] [i_4])) : (((/* implicit */int) var_7)))) | (((/* implicit */int) arr_40 [i_0] [i_0] [i_11] [i_12] [i_13] [i_13]))));
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)29))) : (arr_49 [i_13] [i_11] [i_0])))) >= (12686186405396840899ULL)));
                        }
                    }
                } 
            } 
        }
        for (long long int i_14 = 0; i_14 < 13; i_14 += 4) 
        {
            var_28 ^= ((/* implicit */unsigned long long int) arr_4 [i_14] [i_14] [i_14]);
            arr_56 [i_0] [i_0] [i_14] = ((/* implicit */unsigned char) arr_29 [i_0] [9ULL] [i_0] [i_14] [10ULL]);
            var_29 = ((/* implicit */signed char) (~(((/* implicit */int) arr_20 [i_14] [i_14]))));
        }
        for (signed char i_15 = 0; i_15 < 13; i_15 += 3) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned char i_16 = 1; i_16 < 12; i_16 += 1) 
            {
                var_30 ^= ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)10999)) + (((/* implicit */int) arr_51 [i_15] [i_15] [i_15] [4ULL] [i_15]))))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) arr_61 [i_0] [i_15] [i_0])) ? (arr_0 [i_0] [i_16]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [(unsigned char)0] [i_15]))))));
                arr_63 [i_0] [i_0] [i_15] [i_16] = ((/* implicit */unsigned int) (unsigned char)39);
            }
            for (unsigned short i_17 = 0; i_17 < 13; i_17 += 3) /* same iter space */
            {
                var_31 = ((/* implicit */unsigned int) (unsigned char)207);
                var_32 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_60 [9ULL] [i_17]))));
            }
            for (unsigned short i_18 = 0; i_18 < 13; i_18 += 3) /* same iter space */
            {
                arr_68 [i_18] = arr_1 [i_0];
                arr_69 [i_0] [8LL] [i_0] [i_18] = ((/* implicit */unsigned short) arr_7 [i_0] [i_0] [i_0]);
            }
            arr_70 [i_0] [i_15] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)60540)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (9394441513236039652ULL))) >> (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) & (var_4)))));
        }
        for (signed char i_19 = 0; i_19 < 13; i_19 += 3) /* same iter space */
        {
            var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) arr_6 [(unsigned short)6] [(unsigned short)6]))));
            var_34 = ((/* implicit */signed char) (unsigned short)31760);
            var_35 = ((/* implicit */unsigned int) var_9);
            arr_75 [i_19] [i_19] [i_0] = ((/* implicit */unsigned long long int) (signed char)16);
            var_36 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)11))) < (0U))) ? (((/* implicit */int) arr_50 [i_0] [i_0] [i_0] [i_19] [i_19])) : (((/* implicit */int) (_Bool)1))));
        }
        arr_76 [(signed char)2] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0]))));
    }
    for (unsigned short i_20 = 1; i_20 < 10; i_20 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_21 = 2; i_21 < 12; i_21 += 1) 
        {
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                {
                    arr_85 [i_20] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned short)51110)) * (((/* implicit */int) arr_83 [i_20]))))))) ? (((((/* implicit */_Bool) (~(4294967295U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)176)) << (((((/* implicit */int) (unsigned short)31760)) - (31745)))))) : (var_9))) : (((/* implicit */unsigned long long int) (+(663229537U))))));
                    arr_86 [i_20] [i_21] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-1)) * ((-(((/* implicit */int) var_1))))));
                }
            } 
        } 
        var_37 += ((unsigned char) (unsigned short)65517);
    }
    var_38 += ((/* implicit */unsigned char) var_3);
    var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_6)), (min((((/* implicit */unsigned long long int) (-(2815141609U)))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (6543838311764576057ULL))))))))));
    var_40 = ((/* implicit */unsigned int) min((min((var_5), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))))), (((/* implicit */unsigned long long int) var_6))));
}
