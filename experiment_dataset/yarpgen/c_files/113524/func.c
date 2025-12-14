/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113524
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
    var_11 = var_0;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_12 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(min((642376508011126279ULL), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]))))))) ? (((((/* implicit */_Bool) 8191ULL)) ? (arr_3 [i_0]) : (1466620179333093996ULL))) : (max((((arr_3 [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned long long int) min((5U), (((/* implicit */unsigned int) (unsigned short)0)))))))));
                var_13 ^= ((/* implicit */long long int) arr_3 [i_0]);
                var_14 += ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1]))))))))));
                var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) arr_2 [i_0] [i_1]))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) var_6))));
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        var_17 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (arr_5 [i_2]) : (max(((+(((/* implicit */int) arr_6 [i_2])))), ((+(((/* implicit */int) var_3))))))));
        /* LoopSeq 3 */
        for (long long int i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            /* LoopSeq 4 */
            for (short i_4 = 0; i_4 < 15; i_4 += 3) 
            {
                var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))));
                arr_11 [(_Bool)1] [i_4] [i_4] = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_2])) >= (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_9 [i_4] [i_4])))))))), (min((var_1), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_4] [i_4])) ? (((/* implicit */int) arr_6 [3U])) : (((/* implicit */int) arr_7 [13])))))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 15; i_5 += 1) 
                {
                    for (unsigned short i_6 = 0; i_6 < 15; i_6 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */int) ((((/* implicit */long long int) max((var_1), (((/* implicit */unsigned int) (unsigned char)3))))) != (min((((/* implicit */long long int) (unsigned short)0)), (0LL)))));
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (-((~(min((((/* implicit */unsigned long long int) (unsigned char)127)), (1466620179333093996ULL))))))))));
                            var_21 = ((/* implicit */unsigned int) max((((((/* implicit */int) (unsigned char)255)) + (((/* implicit */int) (unsigned char)253)))), ((~(arr_5 [i_3])))));
                        }
                    } 
                } 
                arr_17 [i_4] = var_1;
            }
            for (unsigned short i_7 = 0; i_7 < 15; i_7 += 3) 
            {
                arr_21 [i_2] [(unsigned char)12] |= ((/* implicit */long long int) arr_8 [i_2] [i_2]);
                /* LoopNest 2 */
                for (unsigned int i_8 = 1; i_8 < 14; i_8 += 1) 
                {
                    for (unsigned char i_9 = 0; i_9 < 15; i_9 += 4) 
                    {
                        {
                            arr_28 [i_2] [i_3] [i_7] [i_9] [i_9] &= ((/* implicit */unsigned char) arr_12 [i_2] [i_3] [i_3] [i_8 - 1]);
                            arr_29 [1] [i_7] = ((/* implicit */short) ((min((arr_16 [i_2] [i_7] [(signed char)9] [i_2] [i_2]), (((/* implicit */long long int) ((unsigned short) var_6))))) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3]))) < (arr_27 [i_2] [i_7] [i_7] [10] [i_9])))))));
                        }
                    } 
                } 
            }
            for (int i_10 = 2; i_10 < 12; i_10 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_11 = 0; i_11 < 15; i_11 += 1) 
                {
                    for (unsigned short i_12 = 0; i_12 < 15; i_12 += 4) 
                    {
                        {
                            var_22 = (+(((((/* implicit */long long int) ((((/* implicit */_Bool) arr_32 [(unsigned char)13] [(unsigned char)13] [i_10] [i_11])) ? (arr_25 [i_2]) : (((/* implicit */int) arr_7 [i_11]))))) & (max((var_6), (((/* implicit */long long int) arr_36 [i_2] [i_3] [i_10] [i_11] [(signed char)9] [i_3])))))));
                            var_23 = ((/* implicit */long long int) ((min((16854631575211127836ULL), (((/* implicit */unsigned long long int) (short)-20307)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                            arr_38 [(unsigned char)0] [(unsigned char)0] [i_10 + 1] [9] [i_11] [i_12] [5U] = ((/* implicit */unsigned char) ((max((max((((/* implicit */unsigned int) var_5)), (3261454154U))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [(unsigned short)9])) * (((/* implicit */int) arr_7 [i_10 + 1]))))))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) (unsigned char)2)) + (((/* implicit */int) arr_24 [i_12] [i_11] [14LL] [i_3] [i_2])))) == (((/* implicit */int) var_10))))))));
                        }
                    } 
                } 
                var_24 |= ((/* implicit */long long int) (((!(((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned char) arr_13 [(unsigned char)9] [i_10] [i_2] [i_2]))))))) ? (max((var_1), (max((var_8), (var_1))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((((/* implicit */int) (unsigned short)65535)) != (((/* implicit */int) (unsigned char)2)))), (((((/* implicit */int) (unsigned char)129)) != (((/* implicit */int) (unsigned char)253))))))))));
                arr_39 [12LL] [i_3] [i_10 + 3] = ((/* implicit */unsigned short) arr_15 [(short)12] [i_3] [i_10] [i_3] [i_10]);
            }
            for (int i_13 = 2; i_13 < 12; i_13 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (long long int i_14 = 0; i_14 < 15; i_14 += 2) 
                {
                    var_25 *= ((/* implicit */unsigned short) (signed char)127);
                    var_26 = ((/* implicit */unsigned int) ((-1169569608566912449LL) / (((/* implicit */long long int) ((1145924779U) + (((/* implicit */unsigned int) 65535)))))));
                    var_27 = (~(min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) + (var_0))), (((/* implicit */unsigned long long int) arr_9 [i_3] [i_13])))));
                }
                for (unsigned short i_15 = 0; i_15 < 15; i_15 += 3) 
                {
                    var_28 = ((/* implicit */signed char) ((((unsigned long long int) 4294967290U)) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                    arr_47 [i_15] [i_13] [i_3] [9ULL] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 18446744073709551615ULL))));
                    var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((min((17317701143843235516ULL), (((/* implicit */unsigned long long int) arr_42 [i_3] [i_13 + 3] [i_15])))) + (((/* implicit */unsigned long long int) arr_30 [i_13 + 1] [i_13 + 2] [i_13 + 2]))))) || (((/* implicit */_Bool) (-(((4294967290U) >> (((var_8) - (1336844025U))))))))));
                }
                var_30 = 3039582228U;
            }
            var_31 += ((/* implicit */unsigned long long int) (-(60006576U)));
            arr_48 [i_2] [i_3] [i_3] = ((/* implicit */int) ((((arr_37 [(signed char)14] [i_3] [i_2] [(signed char)10] [i_2]) & (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_2] [i_3] [6ULL] [(unsigned short)2] [10LL]))))) > (((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)174))) : (2199023255551LL)))));
        }
        for (signed char i_16 = 0; i_16 < 15; i_16 += 2) 
        {
            var_32 = ((/* implicit */short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_3)) & (-1963940774))))))), (min((((/* implicit */long long int) arr_41 [i_2] [i_16] [i_16])), (min((((/* implicit */long long int) -517264522)), (-6331538414662360030LL)))))));
            var_33 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -4121711371912555696LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_2] [6LL] [i_2] [i_2] [i_16]))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) + (var_8)))))) ? (min((((unsigned long long int) var_5)), (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
        }
        for (unsigned long long int i_17 = 0; i_17 < 15; i_17 += 3) 
        {
            var_34 -= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) + (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
            arr_54 [(unsigned short)4] [i_17] [i_17] = ((/* implicit */short) 4294967295U);
            /* LoopSeq 1 */
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                arr_58 [(signed char)0] &= ((/* implicit */unsigned int) ((long long int) (!(((/* implicit */_Bool) ((unsigned short) var_10))))));
                arr_59 [i_18] = ((/* implicit */int) (~(((((/* implicit */_Bool) ((((/* implicit */long long int) var_1)) / (arr_9 [i_2] [i_18])))) ? (((/* implicit */unsigned int) arr_5 [i_18])) : (((arr_56 [i_2] [i_2]) / (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))));
            }
        }
        var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)129)) ? (((((/* implicit */long long int) ((/* implicit */int) var_2))) / (arr_37 [i_2] [i_2] [i_2] [i_2] [i_2]))) : (((/* implicit */long long int) ((517264521) | (-1469045514))))));
    }
}
