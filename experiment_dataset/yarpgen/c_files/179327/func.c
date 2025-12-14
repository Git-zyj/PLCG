/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179327
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
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((var_3) & (arr_3 [1ULL]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)173)))));
        var_13 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [(short)17] [(short)17])) || (((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_11 [i_1] [i_1] [i_2] = ((/* implicit */int) 295145568U);
                    arr_12 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (unsigned short)17500);
                    var_14 -= ((/* implicit */long long int) ((int) ((unsigned int) 246501549U)));
                }
            } 
        } 
        var_15 &= ((/* implicit */unsigned long long int) (-(4294967295U)));
    }
    for (unsigned int i_3 = 3; i_3 < 11; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 13; i_5 += 4) 
            {
                {
                    arr_22 [i_5] [i_5] &= (-(((unsigned long long int) arr_13 [i_5])));
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (+((~(0U))))))));
                    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) min(((~(max((((/* implicit */unsigned int) (unsigned short)48048)), (var_3))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 417426968)) || (((/* implicit */_Bool) 11889217965100343374ULL))))))))));
                    var_18 = ((/* implicit */unsigned char) ((((unsigned long long int) 5341572943305758449LL)) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) arr_17 [7U] [i_4] [(_Bool)1]))));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((unsigned char) (~(-417426968))))), (max((((/* implicit */int) var_10)), ((-(417426968)))))));
        var_21 *= ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_5 [i_3 + 1])) * (((/* implicit */int) arr_5 [i_3 - 1])))) + (((/* implicit */int) min((arr_5 [i_3 + 1]), (var_9))))));
        /* LoopSeq 1 */
        for (unsigned char i_6 = 0; i_6 < 13; i_6 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_7 = 0; i_7 < 13; i_7 += 2) 
            {
                for (unsigned long long int i_8 = 2; i_8 < 12; i_8 += 4) 
                {
                    {
                        arr_33 [i_8] [i_7] [i_3] = ((/* implicit */unsigned short) -812751685);
                        var_22 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((int) arr_26 [i_3] [i_3 - 2] [i_7] [i_7])))));
                        arr_34 [i_3] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_26 [i_3 + 1] [i_6] [i_7] [i_8]))));
                        var_23 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(12U))))));
                        arr_35 [i_3] [i_6] [i_7] [i_8] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_14 [i_3]))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_9 = 1; i_9 < 10; i_9 += 1) 
            {
                for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                {
                    {
                        var_24 = ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 26479834U)))) + (arr_20 [i_9] [i_6] [i_9] [i_9 - 1])));
                        var_25 = ((/* implicit */_Bool) arr_20 [i_10 + 1] [i_10] [i_10 + 1] [i_10 + 1]);
                        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((arr_25 [i_3] [i_6] [i_6]) & (-417426992))))));
                        var_27 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3 - 2] [i_6])) ? (arr_1 [(unsigned char)1] [i_6]) : (arr_1 [i_9] [(signed char)3])))) ? ((~((-(4196639895U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((4141883879U) - (14680064U))))))));
                    }
                } 
            } 
        }
    }
    /* LoopNest 2 */
    for (unsigned int i_11 = 3; i_11 < 17; i_11 += 2) 
    {
        for (short i_12 = 0; i_12 < 19; i_12 += 4) 
        {
            {
                var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) (+(67104768))))));
                /* LoopNest 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 19; i_14 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned long long int) ((short) 1880943426));
                            arr_51 [i_14] = ((/* implicit */_Bool) ((short) max((arr_2 [i_11]), (arr_2 [i_14]))));
                        }
                    } 
                } 
                var_30 = ((/* implicit */short) (((~(arr_1 [i_11 - 3] [i_11 - 2]))) <= (min((((/* implicit */unsigned long long int) min((((/* implicit */short) arr_43 [i_11])), (arr_0 [i_11] [i_12])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_12] [i_11] [i_11]))) + (arr_1 [i_12] [i_12])))))));
            }
        } 
    } 
    var_31 *= ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 2767981784U))))) * (((/* implicit */int) ((((/* implicit */int) (unsigned short)32853)) == (((/* implicit */int) (unsigned short)17500)))))));
    /* LoopSeq 3 */
    for (long long int i_15 = 0; i_15 < 21; i_15 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_16 = 0; i_16 < 21; i_16 += 1) 
        {
            for (unsigned short i_17 = 0; i_17 < 21; i_17 += 3) 
            {
                {
                    var_32 ^= ((/* implicit */short) ((unsigned char) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_16]))))) % (min((2767981767U), (((/* implicit */unsigned int) var_7)))))));
                    arr_60 [i_17] [i_16] [i_15] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -812751676)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)31))) : (3297374825U)))) || (((((/* implicit */_Bool) arr_1 [i_15] [i_15])) && (((/* implicit */_Bool) 4294967295U))))))), (max((8187237969198506005LL), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) arr_0 [i_15] [13ULL])))))))));
                }
            } 
        } 
        arr_61 [i_15] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)30373))));
    }
    /* vectorizable */
    for (short i_18 = 1; i_18 < 11; i_18 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_19 = 0; i_19 < 14; i_19 += 1) 
        {
            for (unsigned long long int i_20 = 2; i_20 < 10; i_20 += 2) 
            {
                {
                    var_33 ^= ((/* implicit */unsigned int) arr_58 [i_20 + 3] [i_19] [i_18 + 2] [i_18]);
                    var_34 = ((/* implicit */unsigned short) (~(arr_45 [i_18] [i_18] [i_18 + 1])));
                    /* LoopSeq 1 */
                    for (int i_21 = 0; i_21 < 14; i_21 += 3) 
                    {
                        var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) -1880943426))))))));
                        arr_74 [i_19] [i_19] [i_19] [i_19] = ((short) ((_Bool) arr_47 [i_18] [i_18]));
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) /* same iter space */
                    {
                        var_36 = ((/* implicit */unsigned char) ((unsigned short) 153083417U));
                        var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) (+(790099890U))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_23 = 0; i_23 < 14; i_23 += 4) 
                        {
                            var_38 = ((/* implicit */unsigned int) var_0);
                            var_39 = ((/* implicit */_Bool) (signed char)127);
                            arr_80 [i_18] [i_19] [i_20] [i_23] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)30363)) ? (((/* implicit */unsigned int) 42582098)) : (153083414U)));
                        }
                        var_40 = ((/* implicit */signed char) ((((/* implicit */int) arr_78 [i_19] [i_20 + 3] [i_18 - 1] [i_19])) + (((/* implicit */int) arr_78 [i_19] [i_20 + 3] [i_18 + 1] [i_19]))));
                    }
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_25 = 3; i_25 < 13; i_25 += 1) 
                        {
                            arr_87 [i_18] [i_20] [i_20] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 98327378U))));
                            var_41 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)30363)) && (((/* implicit */_Bool) 1880943404))));
                        }
                        arr_88 [i_20] &= ((/* implicit */short) (!(((/* implicit */_Bool) arr_7 [i_18 - 1]))));
                    }
                }
            } 
        } 
        arr_89 [i_18] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) 3885113808U)) || (var_9)))) + (((/* implicit */int) (unsigned char)0))));
    }
    for (short i_26 = 1; i_26 < 11; i_26 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_27 = 0; i_27 < 14; i_27 += 4) 
        {
            for (unsigned short i_28 = 0; i_28 < 14; i_28 += 3) 
            {
                for (unsigned int i_29 = 2; i_29 < 11; i_29 += 3) 
                {
                    {
                        var_42 = ((/* implicit */unsigned short) min((var_42), (((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) arr_2 [i_26 - 1])) <= (((/* implicit */int) arr_58 [i_29] [i_28] [i_27] [i_26]))))))));
                        arr_101 [i_26] [i_27] [i_28] [i_27] [i_29] = ((594985455U) << (((1880943428) - (1880943403))));
                        var_43 = ((/* implicit */signed char) arr_10 [i_26] [i_26] [i_26]);
                        arr_102 [i_26] [i_26] [i_26] [(unsigned char)7] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) ((_Bool) 9065910182544286073ULL))) >> (((/* implicit */int) (!(var_6))))))));
                    }
                } 
            } 
        } 
        var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) 9065910182544286087ULL))));
    }
}
