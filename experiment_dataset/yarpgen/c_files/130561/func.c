/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130561
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
    for (signed char i_0 = 4; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 13; i_3 += 3) 
                    {
                        for (signed char i_4 = 1; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_20 = ((unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)36916))))) ? (((((/* implicit */int) (unsigned short)65127)) * (((/* implicit */int) arr_4 [i_2])))) : (((/* implicit */int) var_18))));
                                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) min((arr_5 [i_0]), ((unsigned short)28647)))) ? ((~(((/* implicit */int) (unsigned short)53934)))) : (((/* implicit */int) arr_1 [i_4]))))))));
                                arr_11 [i_0] [i_1] [i_2] [i_3] = (unsigned char)255;
                            }
                        } 
                    } 
                    var_22 += ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_6 [i_0] [i_0 + 3] [i_0] [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0 + 3] [i_2] [i_1 + 1]))) : (7270778021715313804LL))), (((/* implicit */long long int) min((arr_6 [i_0] [i_0 + 1] [i_2] [i_1 - 2]), (((/* implicit */unsigned short) var_17)))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 2) 
    {
        for (unsigned short i_6 = 0; i_6 < 18; i_6 += 4) 
        {
            for (unsigned short i_7 = 0; i_7 < 18; i_7 += 4) 
            {
                {
                    arr_22 [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_18 [i_5] [i_5] [i_5]), (arr_18 [i_5] [i_5] [i_7])))) >> (((((4092LL) ^ (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65523)) ^ (((/* implicit */int) arr_16 [i_6]))))))) - (28255LL)))));
                    var_23 *= ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) arr_18 [i_7] [i_6] [i_5])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_15)))), (((/* implicit */int) min(((unsigned short)36911), (var_19)))))) << (((((((/* implicit */int) (unsigned short)64408)) << (((((/* implicit */int) (signed char)25)) - (14))))) - (131907573)))));
                    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)0)) * (((/* implicit */int) var_11)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_8 = 2; i_8 < 18; i_8 += 1) 
    {
        var_25 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)8330)) ? (((/* implicit */int) (unsigned short)40735)) : (((/* implicit */int) (unsigned short)2120))));
        var_26 = ((unsigned short) ((((((/* implicit */int) var_17)) == (((/* implicit */int) arr_23 [i_8])))) ? (((((/* implicit */_Bool) (unsigned short)47999)) ? (((/* implicit */int) arr_25 [i_8])) : (((/* implicit */int) (unsigned short)128)))) : (((/* implicit */int) arr_25 [i_8 - 1]))));
        var_27 &= ((/* implicit */unsigned short) arr_24 [i_8]);
    }
    for (unsigned short i_9 = 2; i_9 < 11; i_9 += 1) 
    {
        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) ((unsigned short) var_12)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) arr_26 [i_9])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_19 [i_9] [i_9])))) : (((((/* implicit */int) (signed char)36)) - (((/* implicit */int) arr_18 [i_9] [i_9] [i_9]))))))))))));
        var_29 += ((/* implicit */unsigned char) ((((/* implicit */int) var_14)) - (min(((~(((/* implicit */int) (unsigned short)65407)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned short)28644))))))));
        arr_29 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_27 [i_9] [i_9 + 1])) == (((/* implicit */int) (unsigned short)38898))))) << (((((/* implicit */int) arr_24 [i_9 - 1])) + (143)))));
        /* LoopNest 2 */
        for (unsigned char i_10 = 1; i_10 < 14; i_10 += 1) 
        {
            for (unsigned short i_11 = 0; i_11 < 15; i_11 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_12 = 0; i_12 < 15; i_12 += 4) 
                    {
                        arr_39 [i_12] [i_11] [i_9] [i_10] [i_9] = arr_27 [i_9] [i_9];
                        var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) (-(((((((long long int) var_11)) + (9223372036854775807LL))) >> (((/* implicit */int) (unsigned short)14)))))))));
                        var_31 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_31 [i_9] [i_10 - 1] [i_9])) <= (((/* implicit */int) arr_31 [i_9] [i_10 + 1] [i_9])))) ? (((/* implicit */int) arr_31 [i_9] [i_10 + 1] [i_9])) : (((/* implicit */int) ((unsigned short) var_7)))));
                    }
                    for (unsigned short i_13 = 3; i_13 < 14; i_13 += 2) 
                    {
                        arr_44 [i_9] [i_9] [i_9] [i_9] = min(((unsigned short)8719), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)65535)) >= (((/* implicit */int) (unsigned short)8192))))));
                        var_32 += ((/* implicit */unsigned short) (+(((/* implicit */int) arr_16 [i_9]))));
                        var_33 *= (unsigned short)33090;
                    }
                    for (unsigned short i_14 = 0; i_14 < 15; i_14 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_15 = 0; i_15 < 15; i_15 += 2) 
                        {
                            var_34 = ((/* implicit */long long int) min(((~(((/* implicit */int) arr_18 [i_10] [i_10 - 1] [i_10 - 1])))), (((/* implicit */int) arr_30 [i_9] [i_9] [i_14]))));
                            var_35 *= ((/* implicit */unsigned char) max((max((((/* implicit */int) min(((unsigned short)65535), ((unsigned short)119)))), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned short)448)) : (((/* implicit */int) (unsigned short)19590)))))), (((((/* implicit */_Bool) arr_32 [i_9 - 1] [i_9 - 2] [i_15])) ? ((~(((/* implicit */int) (signed char)-70)))) : (((/* implicit */int) arr_21 [i_9] [i_9 + 1] [i_10 + 1]))))));
                            arr_51 [i_9] [i_10] [i_11] [i_11] [i_9] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */int) max((var_12), (((/* implicit */unsigned short) (signed char)-126))))) << (((((((/* implicit */int) var_5)) & (((/* implicit */int) var_12)))) - (16764))))));
                            arr_52 [i_15] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) arr_38 [i_9] [i_9] [i_9] [i_9])) ^ (((/* implicit */int) arr_23 [i_9]))))) | (((((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_0))) + (9223372036854775807LL))) << (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)65520)) : (((/* implicit */int) arr_27 [i_9] [i_9])))) - (65520)))))));
                        }
                        var_36 += ((/* implicit */long long int) (unsigned short)64092);
                    }
                    /* LoopNest 2 */
                    for (signed char i_16 = 0; i_16 < 15; i_16 += 4) 
                    {
                        for (unsigned short i_17 = 0; i_17 < 15; i_17 += 2) 
                        {
                            {
                                var_37 ^= ((/* implicit */signed char) (~(((((/* implicit */_Bool) (unsigned short)42906)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)65088)) : (((/* implicit */int) var_11)))) : ((~(((/* implicit */int) arr_48 [i_11] [i_16] [i_11] [i_9] [i_9]))))))));
                                var_38 &= ((/* implicit */unsigned short) arr_26 [i_11]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
