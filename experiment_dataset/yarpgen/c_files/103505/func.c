/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103505
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
    var_13 ^= ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) != (16ULL))) || (((/* implicit */_Bool) min((var_11), (((((/* implicit */unsigned long long int) -7163442214231202061LL)) - (var_11))))))));
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) -1172658279)), (115645372382813524LL)))) ? (((((/* implicit */_Bool) 3379468442U)) ? (3379468442U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned int) -1914082481))))) ? (var_4) : (((((/* implicit */int) ((signed char) var_11))) ^ (var_6)))));
    var_15 = ((/* implicit */short) (-(var_8)));
    /* LoopSeq 3 */
    for (signed char i_0 = 4; i_0 < 18; i_0 += 3) 
    {
        arr_3 [i_0 - 2] = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1]))))));
        arr_4 [i_0 - 4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0 - 1] [(unsigned char)6]))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)108)), (arr_0 [i_0 + 1] [i_0 - 2])))) : (((/* implicit */int) min((arr_0 [i_0 - 3] [i_0 - 3]), (arr_0 [i_0 - 1] [i_0]))))));
        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) min((((((/* implicit */unsigned int) 1724109307)) - (915498853U))), (arr_1 [5LL] [i_0 - 3]))))));
        var_17 = ((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1]);
    }
    for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        var_18 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (short)-8389)), (max((max((1914082480), (var_4))), ((~(843945262)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) /* same iter space */
        {
            var_19 = ((/* implicit */int) min((var_19), (-1914082485)));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 14; i_3 += 3) 
            {
                for (signed char i_4 = 0; i_4 < 14; i_4 += 3) 
                {
                    {
                        var_20 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) 10751084789849976502ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))) : (438725677U))));
                        arr_14 [i_1] [i_2] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) >= (arr_11 [i_2] [i_2])));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_5 = 0; i_5 < 14; i_5 += 4) 
            {
                for (int i_6 = 0; i_6 < 14; i_6 += 4) 
                {
                    {
                        var_21 = ((/* implicit */long long int) ((arr_2 [i_1]) - (((/* implicit */unsigned long long int) arr_13 [i_1] [i_1] [i_5] [i_1]))));
                        var_22 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_1] [i_1] [i_1] [i_6]))) == (arr_15 [i_1] [i_6])));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 3) /* same iter space */
        {
            arr_24 [1ULL] [i_7] [5LL] = ((/* implicit */signed char) ((((/* implicit */int) arr_7 [6ULL] [i_1])) << (((((/* implicit */int) arr_7 [i_7] [i_1])) - (40217)))));
            /* LoopSeq 2 */
            for (long long int i_8 = 0; i_8 < 14; i_8 += 3) 
            {
                arr_27 [i_1] [9ULL] [(_Bool)1] [i_7] = ((int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_7] [i_1]))) == (arr_11 [i_1] [i_1])));
                arr_28 [i_1] [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_22 [i_1] [i_1] [i_1])) ? (((((/* implicit */_Bool) arr_13 [i_1] [i_7] [5ULL] [i_8])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [(unsigned short)7] [i_1] [i_1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_15 [i_1] [i_1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-68)))))))));
            }
            for (signed char i_9 = 0; i_9 < 14; i_9 += 2) 
            {
                /* LoopSeq 1 */
                for (short i_10 = 0; i_10 < 14; i_10 += 2) 
                {
                    var_23 = ((/* implicit */short) 3641550370U);
                    var_24 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(390177433)))) ? (arr_2 [i_1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65535)))))));
                }
                var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-31250)) ? (((/* implicit */long long int) arr_22 [(short)11] [(short)11] [i_9])) : (arr_26 [i_7] [i_7])))) ? (((/* implicit */long long int) arr_22 [i_9] [i_7] [i_9])) : (arr_23 [i_1] [i_1])));
                arr_35 [i_1] [i_1] [i_7] = var_4;
                arr_36 [i_7] [i_7] [(unsigned short)13] [0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((((/* implicit */int) (short)32755)) > (((/* implicit */int) (short)32767))))) : (((/* implicit */int) arr_0 [i_7] [i_7]))));
                arr_37 [i_7] = ((/* implicit */_Bool) (-(((/* implicit */int) var_0))));
            }
            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */int) ((((/* implicit */int) arr_5 [i_1])) == (arr_29 [i_7] [4ULL] [i_7] [i_1])))) : (((/* implicit */int) ((arr_16 [i_7]) == (arr_16 [i_1]))))));
            arr_38 [i_1] [i_7] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (_Bool)1))))) ^ (arr_13 [i_1] [i_1] [i_7] [i_1])));
            arr_39 [i_1] [i_7] = ((/* implicit */unsigned char) var_9);
        }
        arr_40 [i_1] [3U] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((arr_2 [(unsigned char)3]) != (arr_15 [i_1] [i_1]))) || (((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_1]))))) % ((~(((/* implicit */int) arr_20 [i_1] [i_1] [i_1] [i_1]))))));
    }
    for (unsigned int i_11 = 1; i_11 < 10; i_11 += 3) 
    {
        var_27 = ((/* implicit */_Bool) arr_26 [(unsigned char)4] [(unsigned char)0]);
        /* LoopNest 2 */
        for (short i_12 = 4; i_12 < 8; i_12 += 2) 
        {
            for (unsigned int i_13 = 1; i_13 < 10; i_13 += 1) 
            {
                {
                    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((((arr_31 [i_12] [i_12 - 3] [i_12 - 3] [10LL]) > (((/* implicit */unsigned long long int) 1325196430)))), (((((/* implicit */int) (short)-29837)) >= (var_6)))))) % (((/* implicit */int) ((((/* implicit */int) arr_19 [i_11] [i_13])) != (((/* implicit */int) ((unsigned short) var_4))))))));
                    var_29 = ((/* implicit */signed char) ((unsigned long long int) ((((17467293154928009097ULL) >> (((var_11) - (3293070503294736098ULL))))) <= (((/* implicit */unsigned long long int) var_4)))));
                    var_30 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((_Bool) 5412498357125260441ULL)) ? ((-(arr_33 [i_11] [13U] [i_11] [i_11 + 1] [i_11 + 1] [i_11]))) : (((/* implicit */long long int) 1914082496))))), (((arr_6 [i_11 - 1] [i_12 + 2]) * (arr_6 [i_11 + 1] [i_12 - 1])))));
                    arr_49 [i_13 + 1] [i_13] [0U] [i_11] = ((/* implicit */int) ((unsigned short) (-(((/* implicit */int) arr_0 [1ULL] [i_12])))));
                }
            } 
        } 
        var_31 = ((/* implicit */int) ((((/* implicit */_Bool) ((-1914082481) ^ (((/* implicit */int) arr_7 [i_11 - 1] [i_11 + 1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [12ULL] [12ULL])) ? (arr_26 [(unsigned short)6] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [12ULL] [i_11] [i_11 + 1] [i_11 + 1])))))) : (((((/* implicit */_Bool) -1488320520)) ? (arr_8 [i_11 - 1] [i_11 + 1] [i_11 + 1]) : (arr_8 [i_11 - 1] [i_11 - 1] [i_11 - 1])))));
        var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)-11)), (arr_7 [i_11 - 1] [i_11])))) ? (((/* implicit */int) ((arr_43 [i_11 + 1] [i_11]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) : (((/* implicit */int) arr_0 [(signed char)14] [0ULL]))))) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) - (arr_2 [i_11]))) / (((/* implicit */unsigned long long int) (-(3856241625U)))))) : ((+(9425690268649350862ULL)))));
    }
}
