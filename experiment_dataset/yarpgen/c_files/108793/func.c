/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108793
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
    var_18 = ((var_17) ? (((((-49081524) ^ (var_3))) >> (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (-1LL))) - (40318LL))))) : (((/* implicit */int) var_7)));
    var_19 = ((/* implicit */int) var_5);
    var_20 = ((/* implicit */int) ((max(((+(16077190755091087013ULL))), (((/* implicit */unsigned long long int) var_7)))) + (((/* implicit */unsigned long long int) var_9))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                for (int i_3 = 3; i_3 < 17; i_3 += 1) 
                {
                    {
                        var_21 -= ((/* implicit */int) (~(max((max((((/* implicit */unsigned long long int) var_8)), (16077190755091087013ULL))), (((/* implicit */unsigned long long int) ((_Bool) (_Bool)1)))))));
                        var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_11)) << (((((/* implicit */int) arr_1 [i_0 + 1])) + (10491))))))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) max((-1LL), (((/* implicit */long long int) 743801471))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [(unsigned char)4] [i_0] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) : (((int) (unsigned char)203))))) : (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 16077190755091087007ULL)) || (((/* implicit */_Bool) arr_0 [11ULL]))))), (arr_3 [i_0 + 1])))));
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            for (short i_5 = 1; i_5 < 14; i_5 += 2) 
            {
                {
                    var_24 = ((/* implicit */short) arr_15 [i_5]);
                    var_25 *= ((/* implicit */unsigned char) ((2147483647) >> (((max((arr_16 [i_5] [i_5] [i_4] [i_0]), (arr_16 [i_0 - 2] [i_0] [i_0] [2ULL]))) - (1917369758103233069LL)))));
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 1; i_6 < 17; i_6 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) max((var_26), ((~(max((((/* implicit */unsigned long long int) var_16)), (arr_10 [i_0 - 1] [(_Bool)0] [i_0] [i_0] [i_0])))))));
                        var_27 |= ((/* implicit */long long int) ((arr_10 [i_0] [i_6] [i_5] [i_4] [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_11 [i_0] [i_0 + 1] [i_5 - 1] [i_6 + 1] [i_0] [i_0]) < (((/* implicit */unsigned int) ((/* implicit */int) max((var_5), (arr_6 [5LL])))))))))));
                        /* LoopSeq 1 */
                        for (int i_7 = 0; i_7 < 18; i_7 += 4) 
                        {
                            var_28 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_2 [i_7])) ? (((/* implicit */int) var_16)) : (-766698595))) + ((+(((/* implicit */int) (unsigned char)29)))))) - (max((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [5] [i_5] [(_Bool)1]))))), (((((/* implicit */int) arr_15 [i_6])) - (arr_7 [i_0] [i_4] [i_7])))))));
                            arr_22 [i_0] [i_0] [i_7] [i_0] |= ((/* implicit */short) ((signed char) 2365796551U));
                            var_29 += ((/* implicit */short) ((8495949828845445301LL) == (((/* implicit */long long int) 939524096U))));
                        }
                        arr_23 [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_6))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_8 = 1; i_8 < 17; i_8 += 2) /* same iter space */
                        {
                            var_30 = ((/* implicit */short) 15290514745319449361ULL);
                            var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) ((((unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_13 [i_6]))))) / (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_9 = 1; i_9 < 17; i_9 += 2) /* same iter space */
                        {
                            var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)93)) ? (((arr_5 [i_9]) ? (7291559794435996557ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52876))))) : (((((/* implicit */_Bool) (unsigned char)205)) ? (68718952448ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-42)))))));
                            arr_28 [i_4] = ((/* implicit */unsigned int) -1238226794);
                            var_33 = ((/* implicit */unsigned long long int) ((long long int) arr_9 [i_9] [i_9 - 1] [i_5 + 3] [i_5 + 1]));
                            arr_29 [i_4] [(unsigned short)12] [i_6] [i_4] = ((((/* implicit */_Bool) var_2)) ? (arr_4 [i_4] [i_9] [i_9 - 1]) : (arr_4 [i_5] [i_6] [i_9 - 1]));
                            arr_30 [i_5] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_24 [i_9] [13] [i_9 + 1] [i_4] [i_9 - 1])) ^ (((/* implicit */int) arr_24 [(signed char)10] [i_9 + 1] [i_9 + 1] [i_4] [i_9 - 1]))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_10 = 1; i_10 < 14; i_10 += 3) 
                        {
                            arr_35 [i_0] [i_4] [i_5] [i_6] [i_10] = ((unsigned short) ((((/* implicit */_Bool) arr_8 [i_4] [i_5] [i_6] [i_10])) ? (var_9) : (var_9)));
                            var_34 = ((/* implicit */short) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) (short)10906)))) >= (((/* implicit */int) arr_1 [i_10]))));
                        }
                        for (int i_11 = 0; i_11 < 18; i_11 += 3) 
                        {
                            var_35 = ((/* implicit */signed char) ((unsigned long long int) (-((-(18446744073709551615ULL))))));
                            var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [5ULL] [i_5] [i_5] [0])) ? (arr_16 [i_0] [i_0] [i_4] [i_0]) : (arr_16 [i_5] [i_5] [i_4] [i_0])))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_31 [i_4] [i_6] [i_4] [i_4])), (var_11)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 876671456))))) : (((/* implicit */int) arr_24 [i_0 - 2] [i_4] [i_5] [i_4] [i_11])))) : (((/* implicit */int) ((((/* implicit */int) arr_24 [i_0 + 1] [i_5 + 2] [i_6] [i_4] [i_6 + 1])) < (((/* implicit */int) arr_24 [i_0 + 1] [i_5 + 2] [i_6] [i_4] [i_6 + 1])))))));
                            arr_38 [i_0 - 1] [i_4] [i_5] [i_5] [i_4] [i_11] [i_11] = ((/* implicit */unsigned long long int) max(((~(arr_7 [i_0 + 1] [i_5 - 1] [i_6 - 1]))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_9 [i_11] [i_6 + 1] [8LL] [i_4])) : (((/* implicit */int) arr_9 [i_0] [i_5] [(short)6] [i_6 - 1]))))));
                        }
                    }
                }
            } 
        } 
        var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) (-(18446744004990599154ULL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0]))) : (var_15)));
    }
    for (short i_12 = 1; i_12 < 17; i_12 += 4) 
    {
        var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_16 [i_12] [i_12] [i_12] [i_12]))) / (((/* implicit */long long int) ((((/* implicit */int) (short)31)) - (((/* implicit */int) arr_33 [i_12] [12] [i_12] [i_12])))))))) ? (((/* implicit */int) arr_41 [i_12 + 1])) : (((arr_7 [i_12 + 1] [i_12 + 1] [i_12 - 1]) * (((/* implicit */int) arr_18 [i_12 + 1] [2] [i_12 + 1] [i_12] [4LL] [i_12 - 1]))))));
        arr_43 [i_12] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) max((((/* implicit */short) var_16)), ((short)15360)))))) ^ (arr_12 [i_12] [i_12] [i_12] [14ULL] [i_12] [(_Bool)0])));
        /* LoopNest 3 */
        for (unsigned char i_13 = 2; i_13 < 15; i_13 += 1) 
        {
            for (unsigned char i_14 = 1; i_14 < 16; i_14 += 1) 
            {
                for (int i_15 = 0; i_15 < 18; i_15 += 2) 
                {
                    {
                        var_39 = ((/* implicit */unsigned long long int) arr_44 [i_12] [i_12] [i_12]);
                        var_40 = ((/* implicit */int) 18361166023787520098ULL);
                        /* LoopSeq 2 */
                        for (unsigned char i_16 = 0; i_16 < 18; i_16 += 2) 
                        {
                            arr_54 [(_Bool)1] [i_15] [i_14] [i_12] [i_12] = (+((+(((((/* implicit */int) arr_33 [i_12] [i_14] [i_16] [i_15])) * (((/* implicit */int) arr_47 [i_12] [i_12] [11LL] [i_12])))))));
                            arr_55 [i_12] [4ULL] [i_14] [i_15] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551591ULL)) ? (((/* implicit */unsigned int) 1892020978)) : (var_4)))) ? (11844852395239023641ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) || (((/* implicit */_Bool) (+(((((/* implicit */int) var_5)) - (((/* implicit */int) var_16)))))))));
                        }
                        /* vectorizable */
                        for (int i_17 = 1; i_17 < 16; i_17 += 2) 
                        {
                            var_41 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_17 + 1] [i_12 - 1]))) - (((((/* implicit */_Bool) var_15)) ? (var_4) : (((/* implicit */unsigned int) var_0))))));
                            var_42 = ((/* implicit */unsigned short) var_10);
                            var_43 = ((/* implicit */unsigned long long int) (signed char)16);
                        }
                        arr_60 [(unsigned char)7] [i_13] [i_14] [i_15] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) arr_6 [4ULL])) - (10611)))))) && (((/* implicit */_Bool) ((arr_37 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]) / (((/* implicit */int) var_16)))))))) | (((int) max((4357022911865716549LL), (((/* implicit */long long int) 1210112643)))))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_18 = 0; i_18 < 25; i_18 += 3) 
    {
        var_44 = ((/* implicit */unsigned char) arr_61 [i_18]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_19 = 4; i_19 < 21; i_19 += 2) 
        {
            var_45 = ((_Bool) ((((/* implicit */int) var_11)) % (((/* implicit */int) arr_62 [i_18]))));
            arr_65 [i_18] [i_18] [i_18] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (short)-12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_61 [i_18]))) : (var_15)))));
            var_46 = ((((/* implicit */int) var_5)) >> (((/* implicit */int) ((((/* implicit */_Bool) 709273721)) && (((/* implicit */_Bool) 8495949828845445301LL))))));
            var_47 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_62 [i_18]))));
            arr_66 [i_18] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_61 [i_19 + 2])) && (((/* implicit */_Bool) arr_63 [i_19 - 1]))));
        }
    }
}
