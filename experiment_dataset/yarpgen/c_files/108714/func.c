/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108714
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
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_19 &= ((/* implicit */short) arr_8 [(signed char)10] [i_1] [(unsigned short)4]);
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_6 [11] [i_1] [i_0])) ? ((~(arr_7 [i_2] [i_1] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) (~(var_7)))))))))));
                    arr_9 [(signed char)10] [i_1] [i_2] |= ((/* implicit */long long int) ((((((((/* implicit */_Bool) 974999003U)) && (((/* implicit */_Bool) 974999018U)))) ? (((/* implicit */int) (short)512)) : (((/* implicit */int) (!((_Bool)1)))))) | (((/* implicit */int) (unsigned char)235))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((max((((/* implicit */long long int) var_5)), (var_1))) > (((/* implicit */long long int) ((/* implicit */int) var_9)))))) : (((((/* implicit */int) max(((unsigned short)55905), (((/* implicit */unsigned short) var_4))))) * (((/* implicit */int) ((2694736578U) == (4126486523U))))))));
    /* LoopSeq 3 */
    for (unsigned short i_3 = 1; i_3 < 9; i_3 += 2) 
    {
        arr_12 [i_3 + 2] &= ((/* implicit */_Bool) ((((168480792U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65533))))) & (((/* implicit */unsigned int) ((/* implicit */int) min((var_2), (arr_1 [(unsigned char)8])))))));
        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) max((((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_3]))))), (((var_13) ? (arr_2 [i_3]) : (arr_2 [i_3]))))))));
        arr_13 [(_Bool)1] = ((/* implicit */long long int) var_11);
    }
    for (short i_4 = 0; i_4 < 10; i_4 += 1) 
    {
        var_23 &= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) var_7)) != (((var_13) ? (arr_7 [i_4] [i_4] [i_4] [3U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18343)))))))) - (((((/* implicit */int) ((unsigned char) arr_2 [i_4]))) | (((/* implicit */int) max((arr_11 [(_Bool)1]), (arr_10 [i_4]))))))));
        var_24 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) arr_14 [i_4] [i_4])) ? (arr_14 [i_4] [i_4]) : (arr_14 [6] [i_4]))));
        arr_18 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_15 [i_4]), (arr_15 [i_4])))) ? (((/* implicit */int) arr_15 [i_4])) : ((+(var_7)))));
        var_25 += ((/* implicit */_Bool) (-(arr_17 [i_4])));
        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >> (((13827943156854857686ULL) - (13827943156854857660ULL))))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 20; i_5 += 1) 
    {
        arr_21 [18U] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_16)))) ? (((((/* implicit */_Bool) -7760459891134604929LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_5]))) : (2694736578U))) : (((/* implicit */unsigned int) var_7))));
        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_5])) ? (73127384U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_2)) - (51902))))) : (((((/* implicit */int) var_17)) & (((/* implicit */int) arr_20 [i_5]))))));
        /* LoopSeq 3 */
        for (unsigned int i_6 = 3; i_6 < 17; i_6 += 1) 
        {
            arr_25 [i_6] = ((/* implicit */signed char) 0);
            /* LoopSeq 1 */
            for (long long int i_7 = 3; i_7 < 17; i_7 += 4) 
            {
                var_28 += ((/* implicit */unsigned char) var_14);
                var_29 = ((((var_3) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_6]))) : (var_6))) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13))))));
            }
        }
        for (long long int i_8 = 1; i_8 < 17; i_8 += 4) 
        {
            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) ? (var_6) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
            var_31 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_29 [i_8 - 1] [i_5] [(unsigned short)16])) ? (((/* implicit */int) arr_24 [i_8 + 2] [12] [i_8 - 1])) : (((/* implicit */int) arr_29 [i_5] [i_8 - 1] [(short)14]))));
            var_32 += (+(((/* implicit */int) (signed char)71)));
            var_33 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((2142886169207322634LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? ((-(var_0))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_24 [i_8 + 3] [12] [(unsigned char)10])) / (((/* implicit */int) arr_28 [i_5] [i_8])))))));
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_34 = ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (var_7) : (((/* implicit */int) arr_29 [i_5] [i_5] [(unsigned char)8])));
            /* LoopSeq 1 */
            for (unsigned short i_10 = 0; i_10 < 20; i_10 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_11 = 0; i_11 < 20; i_11 += 1) 
                {
                    arr_37 [i_5] [i_9] [i_10] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_5] [i_9] [i_9]))) / (arr_31 [i_5] [i_11])));
                    arr_38 [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)7785))))) ? (((var_3) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_28 [i_9] [i_10])))) : ((-(((/* implicit */int) var_15))))));
                }
                /* LoopSeq 2 */
                for (short i_12 = 0; i_12 < 20; i_12 += 2) 
                {
                    var_35 &= ((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_9])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_5] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_33 [i_5] [(short)14] [(short)14] [i_5])))) : (((((/* implicit */unsigned long long int) var_18)) | (16216251547650750476ULL)))));
                    arr_41 [i_5] [i_9] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)39855)) - (((/* implicit */int) (short)26074))));
                    var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_29 [i_9] [i_9] [i_9])) ? (((/* implicit */int) arr_34 [i_9] [i_9] [i_10])) : ((+(((/* implicit */int) var_2))))));
                }
                for (unsigned char i_13 = 0; i_13 < 20; i_13 += 2) 
                {
                    var_37 = ((/* implicit */int) ((((/* implicit */_Bool) arr_43 [i_9] [i_9])) ? ((+(var_6))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_17)) - (((/* implicit */int) arr_26 [i_9])))))));
                    arr_44 [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -589995693899305786LL)) ? (1859806401U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    /* LoopSeq 3 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                    {
                        var_38 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_10))))) % ((+(var_6)))));
                        var_39 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_22 [i_10])) ? ((~(((/* implicit */int) var_3)))) : (((/* implicit */int) var_14))));
                        var_40 += ((/* implicit */short) ((((/* implicit */_Bool) arr_32 [i_5] [i_9] [(unsigned short)7])) ? (arr_32 [i_5] [i_14] [i_10]) : (arr_32 [i_5] [i_5] [i_5])));
                    }
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                    {
                        var_41 = ((/* implicit */unsigned long long int) arr_46 [(short)19] [i_9] [i_10] [(short)14] [i_15]);
                        var_42 -= ((/* implicit */unsigned short) arr_48 [i_5] [i_13]);
                    }
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                    {
                        arr_52 [i_5] [i_5] [i_9] [i_5] = ((/* implicit */short) arr_51 [i_5] [i_9] [i_10] [i_13] [i_16]);
                        var_43 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (168480766U)));
                    }
                }
            }
            arr_53 [i_5] [i_9] [i_9] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_42 [i_5] [i_5] [i_9]))));
        }
        var_44 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [6ULL])) ? (2308807254U) : (arr_45 [(short)14] [i_5])))) ? ((-(var_7))) : (((/* implicit */int) arr_19 [i_5]))));
    }
}
