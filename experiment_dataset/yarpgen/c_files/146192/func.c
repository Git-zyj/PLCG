/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146192
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
    for (signed char i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = (~(var_15));
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_10), (((/* implicit */short) arr_4 [(unsigned short)15] [i_0 - 2] [i_0]))))) ? (arr_1 [i_0 - 3]) : (((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_0 - 1]) > (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0 - 2] [i_0])))))))));
                    var_18 &= ((/* implicit */unsigned char) 2485793842U);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 2) 
    {
        var_19 |= ((/* implicit */unsigned char) max((((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3 + 1]))) - (-7448566275529998154LL))), (((/* implicit */long long int) ((int) max((((/* implicit */unsigned int) arr_2 [i_3 + 2])), (2492596526U)))))));
        arr_10 [i_3] = (-(((/* implicit */int) (unsigned char)0)));
        arr_11 [i_3] [i_3] = ((/* implicit */int) (((+(arr_6 [i_3 + 1] [i_3 + 2]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [14ULL] [i_3 + 2] [i_3])))));
        /* LoopNest 3 */
        for (long long int i_4 = 4; i_4 < 15; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (unsigned short i_6 = 1; i_6 < 15; i_6 += 3) 
                {
                    {
                        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) arr_20 [(_Bool)0] [(unsigned char)6] [i_5]))));
                        var_21 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [(unsigned short)1]))))) ? (((long long int) arr_4 [i_4 - 1] [i_5] [i_3])) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) max((((/* implicit */short) (signed char)120)), (var_3)))) > (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
                        var_22 |= ((/* implicit */short) max(((-(((/* implicit */int) (_Bool)0)))), ((-(((/* implicit */int) var_3))))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */_Bool) max((min((((/* implicit */long long int) (_Bool)1)), (arr_1 [i_3 + 3]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_3] [i_3 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3968543302U))))));
    }
    var_24 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_6))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_7 = 0; i_7 < 17; i_7 += 1) 
    {
        var_25 |= ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)60592))));
        var_26 = ((/* implicit */unsigned int) 14361737842001060455ULL);
    }
    /* vectorizable */
    for (unsigned char i_8 = 0; i_8 < 14; i_8 += 3) 
    {
        /* LoopSeq 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            arr_29 [i_8] [(short)1] |= ((/* implicit */_Bool) 4294967295U);
            arr_30 [0U] [0U] [(unsigned char)0] = ((/* implicit */_Bool) (-(arr_18 [i_8] [i_8] [i_8] [i_8])));
            var_27 = ((/* implicit */signed char) var_3);
            var_28 -= ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (4085006231708491161ULL)));
        }
        for (short i_10 = 1; i_10 < 12; i_10 += 3) 
        {
            arr_33 [i_8] [i_8] [i_10] = ((/* implicit */long long int) (~(arr_21 [i_8])));
            var_29 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)48)) >> (((14361737842001060424ULL) - (14361737842001060405ULL)))));
        }
        var_30 = ((/* implicit */long long int) (~(((/* implicit */int) var_14))));
    }
    for (signed char i_11 = 0; i_11 < 18; i_11 += 4) 
    {
        arr_38 [i_11] [i_11] = ((/* implicit */signed char) ((long long int) (-(arr_34 [i_11]))));
        var_31 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_11] [i_11] [i_11])) + (2147483647)))) & (max((((/* implicit */unsigned long long int) (-(arr_1 [i_11])))), ((+(14361737842001060474ULL)))))));
    }
    for (unsigned short i_12 = 2; i_12 < 24; i_12 += 1) 
    {
        var_32 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) max((arr_40 [i_12]), (((/* implicit */short) var_0)))))) - ((-(((((/* implicit */long long int) ((/* implicit */int) var_3))) / (255LL)))))));
        /* LoopSeq 2 */
        for (unsigned short i_13 = 3; i_13 < 23; i_13 += 3) 
        {
            var_33 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_40 [i_12])) & (((((/* implicit */int) (signed char)120)) % (((/* implicit */int) arr_40 [i_12]))))))), ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_12]))) / (4085006231708491141ULL)))))));
            var_34 ^= ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) 4085006231708491142ULL)) || (((/* implicit */_Bool) arr_39 [i_12] [i_12 - 2])))))));
            var_35 = ((/* implicit */long long int) ((unsigned char) (_Bool)1));
        }
        for (unsigned long long int i_14 = 0; i_14 < 25; i_14 += 4) 
        {
            var_36 = arr_46 [(unsigned char)20] [i_14];
            arr_47 [i_14] [i_12 - 1] &= ((/* implicit */int) (unsigned char)6);
            var_37 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_45 [i_12 - 2] [i_12 - 2])) ? (arr_45 [i_12 - 2] [i_12 - 1]) : (arr_45 [i_12 - 1] [i_12 - 2]))), (((/* implicit */long long int) ((int) arr_45 [i_12 + 1] [i_12 + 1])))));
        }
        var_38 -= ((/* implicit */unsigned char) (_Bool)1);
        var_39 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((arr_44 [i_12] [6LL]), (((/* implicit */long long int) arr_41 [i_12 - 1] [(_Bool)1] [i_12 - 1])))))));
        var_40 += ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((var_11) | (((/* implicit */int) (unsigned char)117)))) : (max((arr_46 [i_12] [i_12 + 1]), (((/* implicit */int) arr_40 [(unsigned char)18])))))))));
    }
    /* LoopNest 3 */
    for (long long int i_15 = 2; i_15 < 19; i_15 += 2) 
    {
        for (unsigned int i_16 = 3; i_16 < 20; i_16 += 3) 
        {
            for (unsigned char i_17 = 0; i_17 < 22; i_17 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_18 = 0; i_18 < 22; i_18 += 4) 
                    {
                        var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) arr_44 [i_17] [i_16])) : (14361737842001060478ULL))) & (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_15)), (arr_41 [(_Bool)1] [i_16] [(_Bool)1]))))))) ? (arr_54 [13ULL] [13ULL] [i_17] [i_18]) : (((/* implicit */long long int) arr_41 [i_15] [i_16] [i_18]))));
                        var_42 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((var_2) + (((/* implicit */unsigned long long int) var_12)))) / (arr_50 [i_16 - 1]))))));
                    }
                    var_43 = arr_41 [i_15] [i_16] [i_15 + 3];
                }
            } 
        } 
    } 
}
