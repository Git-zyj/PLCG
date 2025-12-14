/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154097
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) /* same iter space */
        {
            arr_7 [i_0] [i_1] [i_0] = (~(((/* implicit */int) arr_6 [i_0] [i_0])));
            /* LoopNest 3 */
            for (signed char i_2 = 3; i_2 < 20; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */int) (signed char)70);
                            var_21 = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
                            var_22 = ((/* implicit */unsigned long long int) var_8);
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_5 = 1; i_5 < 21; i_5 += 3) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_23 = ((/* implicit */short) ((((((/* implicit */_Bool) var_2)) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) + (2147483647))))));
                        arr_22 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_17 [i_5 + 2] [i_0] [i_5 + 2]))));
                        var_24 += ((/* implicit */_Bool) var_9);
                        arr_23 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) arr_15 [i_0] [i_0]);
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_19)) ? (((((/* implicit */int) (signed char)101)) | (((/* implicit */int) var_12)))) : (arr_10 [i_1] [i_5 + 2] [i_0])));
                    }
                } 
            } 
            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_0])) ? (((/* implicit */long long int) ((int) var_8))) : (var_7)));
        }
        for (signed char i_7 = 0; i_7 < 24; i_7 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_8 = 2; i_8 < 23; i_8 += 1) 
            {
                for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                {
                    {
                        arr_30 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (+(arr_0 [i_8 - 1] [i_0])));
                        var_27 = (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)-28746))))));
                        arr_31 [i_7] [i_0] [i_8] [i_0] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_26 [i_9 + 1] [i_9 + 1] [i_8 + 1] [i_8]))));
                        arr_32 [i_0] [i_0] [i_0] = (i_0 % 2 == 0) ? (((((((/* implicit */int) arr_8 [i_0] [i_0] [i_8 - 1])) + (2147483647))) >> (((((/* implicit */int) var_6)) + (6317))))) : (((((((((/* implicit */int) arr_8 [i_0] [i_0] [i_8 - 1])) - (2147483647))) + (2147483647))) >> (((((/* implicit */int) var_6)) + (6317)))));
                    }
                } 
            } 
            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_29 [(short)20])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(signed char)2]))))) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
            var_29 = ((/* implicit */unsigned long long int) arr_16 [i_7] [i_7] [i_7] [i_0]);
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            arr_36 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) (unsigned short)57344))))) & (arr_10 [i_0] [i_10] [i_0])));
            var_30 = ((/* implicit */unsigned short) arr_28 [i_0]);
        }
        var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) (+(((/* implicit */int) var_8)))))));
        var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) var_7))));
    }
    /* vectorizable */
    for (signed char i_11 = 0; i_11 < 24; i_11 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_12 = 1; i_12 < 23; i_12 += 3) 
        {
            for (unsigned short i_13 = 0; i_13 < 24; i_13 += 1) 
            {
                for (short i_14 = 0; i_14 < 24; i_14 += 1) 
                {
                    {
                        var_33 = ((((/* implicit */_Bool) ((((/* implicit */int) var_17)) ^ (((/* implicit */int) var_16))))) || (((/* implicit */_Bool) ((unsigned short) (unsigned short)8218))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 1) /* same iter space */
                        {
                            var_34 ^= ((/* implicit */unsigned short) var_18);
                            arr_49 [i_11] [i_12] [i_13] [i_14] [i_15] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)10465))));
                            var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) ((short) 4294967295U)))));
                            arr_50 [22] [i_14] [i_13] [i_14] [i_15] &= ((/* implicit */int) ((_Bool) arr_16 [i_11] [i_11] [i_11] [2]));
                        }
                        for (unsigned long long int i_16 = 0; i_16 < 24; i_16 += 1) /* same iter space */
                        {
                            var_36 ^= ((((/* implicit */_Bool) arr_15 [i_12 - 1] [22])) ? (((/* implicit */int) ((signed char) var_15))) : (2147483647));
                            arr_54 [i_16] [i_12] [i_12] [i_12] = ((/* implicit */unsigned int) ((24ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
                            var_37 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_29 [i_12])) + (((/* implicit */int) arr_27 [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12]))));
                        }
                        arr_55 [i_11] [i_11] [i_13] [i_14] [i_12 + 1] [14] &= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (24ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_11] [(_Bool)1] [i_12 - 1] [i_12 - 1])))));
                        var_38 = ((/* implicit */unsigned short) (((+(7U))) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))));
                    }
                } 
            } 
        } 
        var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10U)) ? (2879285554U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)225)))));
        var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_11] [(_Bool)1] [i_11]))) % (arr_37 [i_11])));
        var_41 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_24 [i_11] [i_11] [(_Bool)1]))));
    }
    for (signed char i_17 = 0; i_17 < 24; i_17 += 3) /* same iter space */
    {
        var_42 = ((/* implicit */unsigned short) max((((/* implicit */int) (unsigned short)57344)), ((~(((/* implicit */int) (signed char)-102))))));
        var_43 = ((/* implicit */unsigned char) ((short) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))) - (((/* implicit */int) min((((/* implicit */short) arr_5 [i_17])), ((short)15838)))))));
    }
    var_44 &= ((/* implicit */unsigned char) ((unsigned short) (unsigned char)251));
    var_45 = ((/* implicit */unsigned long long int) var_0);
}
