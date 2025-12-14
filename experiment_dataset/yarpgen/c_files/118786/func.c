/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118786
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
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_10 [i_2] [i_1] = arr_8 [i_3] [i_2] [i_1] [i_0];
                            var_15 += ((/* implicit */_Bool) (unsigned char)110);
                            var_16 = ((/* implicit */_Bool) ((((/* implicit */int) var_4)) % (((/* implicit */int) ((((((/* implicit */unsigned long long int) var_14)) + (arr_2 [i_1 + 1]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_3] [(_Bool)1] [i_3]))))))));
                            var_17 = ((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_2] [i_0]);
                            var_18 ^= ((/* implicit */unsigned int) 10047086387086515774ULL);
                        }
                    } 
                } 
                arr_11 [i_1] [i_1] = ((/* implicit */short) var_7);
                /* LoopSeq 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_19 ^= ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) < (var_8))))) % (arr_6 [i_0] [(unsigned char)2] [i_4] [i_4]))) % (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) << (((((/* implicit */int) (signed char)-105)) + (105))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 3; i_5 < 16; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 18; i_6 += 3) 
                        {
                            {
                                var_20 -= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) / (arr_17 [i_0] [i_1 + 1] [i_1 + 1] [i_0] [i_6])));
                                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) var_11))));
                                var_22 -= ((/* implicit */long long int) arr_0 [i_5 - 3]);
                                var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [2U]))) | (var_6)))))))));
                            }
                        } 
                    } 
                }
                for (long long int i_7 = 3; i_7 < 17; i_7 += 2) 
                {
                    var_24 -= ((/* implicit */long long int) arr_14 [i_0] [i_7]);
                    arr_24 [i_0] [i_7 - 2] [1U] = ((/* implicit */unsigned short) arr_5 [i_0] [i_0 + 1] [i_0 + 1]);
                    var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) arr_21 [(_Bool)1] [16ULL] [i_7] [(_Bool)1] [i_7]))));
                }
                /* vectorizable */
                for (int i_8 = 2; i_8 < 16; i_8 += 2) 
                {
                    var_26 = var_13;
                    var_27 = var_6;
                    var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((2038276710U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)56))))))) > (10047086387086515774ULL))))));
                    var_29 ^= ((/* implicit */_Bool) ((arr_7 [16ULL] [16ULL] [i_8] [16ULL]) % (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 2; i_9 < 15; i_9 += 2) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned char) arr_27 [i_0] [i_0] [i_0 + 1]);
                                var_31 *= ((/* implicit */unsigned char) 6295917995946719532ULL);
                                var_32 -= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_7) > (var_6))))) % (2256690594U)));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_11 = 4; i_11 < 8; i_11 += 1) 
    {
        var_33 *= (_Bool)1;
        /* LoopNest 2 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                {
                    var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)39890)) * (((/* implicit */int) ((((/* implicit */_Bool) arr_32 [i_11])) && (((/* implicit */_Bool) arr_12 [i_11] [15] [i_12] [i_13]))))))) % (var_3))))));
                    var_35 = ((/* implicit */_Bool) min((var_35), (((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_34 [i_12] [7U])) && (var_4)))) | (((/* implicit */int) arr_39 [(_Bool)1] [(unsigned short)10]))))) < (var_1)))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_14 = 3; i_14 < 11; i_14 += 3) 
        {
            for (unsigned int i_15 = 0; i_15 < 12; i_15 += 3) 
            {
                for (unsigned char i_16 = 0; i_16 < 12; i_16 += 1) 
                {
                    {
                        var_36 *= ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_11 - 4] [i_16] [i_11 - 4]))) / (3093652920U))) * (((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_13))))) * (2097212467U)))));
                        var_37 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_11] [i_14] [i_16]))) - (var_12))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_30 [16] [(unsigned short)3] [i_14 - 3] [i_11]) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_44 [5LL] [5LL])))))))))));
                        var_38 = ((/* implicit */unsigned char) arr_38 [i_11] [i_14 + 1]);
                        var_39 = ((/* implicit */unsigned char) arr_39 [8] [(short)10]);
                    }
                } 
            } 
        } 
        var_40 = ((/* implicit */unsigned long long int) min((var_40), (((7504888244736221568ULL) % (((/* implicit */unsigned long long int) 3825026968U))))));
        /* LoopNest 2 */
        for (unsigned char i_17 = 0; i_17 < 12; i_17 += 4) 
        {
            for (short i_18 = 0; i_18 < 12; i_18 += 3) 
            {
                {
                    var_41 += ((/* implicit */unsigned char) (_Bool)1);
                    var_42 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)39887))) > (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (-4874269915622861007LL))))))) / (((((/* implicit */unsigned long long int) -945951012377182794LL)) ^ (var_12)))));
                    /* LoopNest 2 */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        for (unsigned char i_20 = 0; i_20 < 12; i_20 += 4) 
                        {
                            {
                                arr_61 [i_11 + 4] [i_18] [i_18] [i_11 + 4] = ((/* implicit */unsigned long long int) ((2256690586U) >= (var_7)));
                                var_43 = ((/* implicit */unsigned long long int) var_1);
                                var_44 = ((/* implicit */_Bool) max((var_44), (((/* implicit */_Bool) var_5))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (short i_21 = 0; i_21 < 21; i_21 += 1) 
    {
        for (long long int i_22 = 2; i_22 < 19; i_22 += 2) 
        {
            {
                var_45 ^= ((((/* implicit */_Bool) arr_65 [0LL])) || (arr_62 [i_22]));
                arr_68 [i_21] = ((/* implicit */_Bool) (unsigned short)61120);
                arr_69 [i_21] [i_21] = ((/* implicit */_Bool) var_3);
            }
        } 
    } 
}
