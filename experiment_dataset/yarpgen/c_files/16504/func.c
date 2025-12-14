/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16504
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
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((1270349514) - (((/* implicit */int) (short)-31514))))) ? ((+(var_14))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_11)))))) + (((((/* implicit */_Bool) ((short) -1270349528))) ? (min((var_3), (((/* implicit */unsigned long long int) (unsigned short)8)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_11)))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((unsigned char) 14382979765454556046ULL));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) ((short) arr_0 [i_0] [13ULL]))) : (((/* implicit */int) (!(((/* implicit */_Bool) 14382979765454556062ULL)))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    {
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-31536)) <= (((/* implicit */int) (short)-31500))));
                        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) 1270349503)) != (arr_5 [(_Bool)1] [i_1]))) ? (arr_11 [i_0 + 1] [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (short)31507)))))))));
                        arr_12 [i_0] [i_0] [i_3] = arr_8 [i_0] [i_0];
                    }
                } 
            } 
            arr_13 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (var_2) : (arr_1 [i_0 + 1])));
        }
        for (long long int i_4 = 1; i_4 < 14; i_4 += 4) 
        {
            arr_17 [i_0] [i_0 + 2] [1] = ((unsigned char) ((((/* implicit */int) var_7)) >= (((/* implicit */int) arr_4 [i_0] [i_4] [(unsigned char)7]))));
            arr_18 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_4 - 1])) ? (arr_10 [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_4 + 1] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 + 2] [i_4 - 1] [(unsigned short)5])))));
        }
    }
    for (unsigned char i_5 = 1; i_5 < 23; i_5 += 3) 
    {
        var_23 = ((/* implicit */long long int) max((var_23), (max((((/* implicit */long long int) max((arr_20 [i_5 + 2]), ((!(var_13)))))), (((((/* implicit */_Bool) max((arr_21 [i_5]), (arr_21 [i_5])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_5] [i_5])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_19 [i_5] [i_5]))))) : (((((/* implicit */_Bool) 315559252581798268LL)) ? (-2486348323325023326LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))))))))));
        arr_22 [(unsigned char)18] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)1809))))));
    }
    for (unsigned char i_6 = 0; i_6 < 25; i_6 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_7 = 0; i_7 < 25; i_7 += 3) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (long long int i_9 = 0; i_9 < 25; i_9 += 4) 
                {
                    {
                        var_24 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 14382979765454556061ULL)) ? (((/* implicit */unsigned long long int) arr_26 [i_9])) : (var_18)))) || (((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned short) arr_20 [(signed char)7]))))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_24 [i_9]))))) : (max(((~(4063764308254995569ULL))), (((/* implicit */unsigned long long int) ((signed char) var_0)))))));
                        var_25 = ((/* implicit */_Bool) min((((unsigned char) (~(arr_26 [i_6])))), (min((arr_28 [i_9] [(unsigned char)1] [i_7]), ((unsigned char)0)))));
                        arr_35 [i_6] [i_7] [i_8] [i_9] = ((/* implicit */unsigned char) var_13);
                    }
                } 
            } 
        } 
        arr_36 [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_6] [i_6] [i_6])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_6])))))) | (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) arr_29 [i_6] [2] [2])) : (arr_32 [i_6] [i_6] [i_6] [i_6])))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-7273)) & (1270349492)))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (9908113977401154249ULL))))) : (((((/* implicit */_Bool) arr_28 [i_6] [i_6] [(unsigned char)3])) ? (4063764308254995573ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_6] [i_6] [i_6])))))));
        /* LoopNest 2 */
        for (long long int i_10 = 2; i_10 < 24; i_10 += 4) 
        {
            for (int i_11 = 0; i_11 < 25; i_11 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 25; i_12 += 2) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 25; i_13 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_6] [i_11] [(unsigned char)20] [(_Bool)1])) ? (((/* implicit */int) arr_38 [(unsigned short)10])) : (((/* implicit */int) var_6))))) && (((/* implicit */_Bool) var_5)))) ? (min((4063764308254995585ULL), (((/* implicit */unsigned long long int) -766614605)))) : (((/* implicit */unsigned long long int) max((((int) var_18)), (arr_23 [i_10 + 1]))))));
                                arr_48 [(unsigned short)23] [(unsigned short)23] [(unsigned short)23] [(unsigned short)23] [i_13] = ((/* implicit */unsigned char) (-(((((/* implicit */int) arr_25 [i_6] [i_10 - 2])) - ((+(((/* implicit */int) arr_30 [i_10 + 1] [(unsigned char)16] [(unsigned char)16]))))))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) arr_40 [i_6] [i_6])) : (arr_34 [i_6] [i_6] [i_6] [i_11] [(signed char)11]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4063764308254995564ULL))))))))) ? (((/* implicit */long long int) ((arr_40 [i_10 - 2] [i_10]) | (arr_40 [i_10 - 2] [i_10 - 2])))) : (((((/* implicit */_Bool) ((6050832727783648829ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) arr_24 [i_10])) ? (arr_26 [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_10]))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_45 [(unsigned char)7] [(unsigned char)7] [(unsigned char)7] [(unsigned char)7] [i_11] [i_11])) + (((/* implicit */int) (_Bool)1)))))))));
                    arr_49 [i_6] [(short)20] [i_11] = ((/* implicit */short) max((((/* implicit */unsigned long long int) arr_40 [i_10 + 1] [i_10 - 2])), (((arr_46 [i_10 - 1]) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_41 [i_6] [14])) ? (((/* implicit */int) arr_24 [i_6])) : (((/* implicit */int) (unsigned char)108)))))))));
                }
            } 
        } 
    }
    var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_15) <= (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))) : (((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned long long int) var_13))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_12)))));
}
