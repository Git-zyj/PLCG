/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172382
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
    var_12 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((var_2) ? (((/* implicit */int) min((var_8), (var_6)))) : ((((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0))))))) : (((((var_11) >= (var_11))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) << (((((/* implicit */int) var_9)) - (31)))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_3)))))));
    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_5)))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */signed char) arr_0 [i_0 - 1])), (var_8)))) ? (min((((/* implicit */int) var_1)), (((arr_0 [i_0]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4)))))) : (((max((arr_1 [i_0]), ((_Bool)1))) ? (((((/* implicit */int) (unsigned short)14759)) - (((/* implicit */int) (unsigned short)64470)))) : (((/* implicit */int) ((unsigned short) var_5))))))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (((-(((/* implicit */int) (unsigned short)16204)))) < ((-(((/* implicit */int) var_5))))))) >> (((unsigned int) ((((/* implicit */int) (unsigned char)122)) < (((/* implicit */int) var_8)))))));
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_0 [i_0 - 1])))), (((((/* implicit */_Bool) (signed char)-103)) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 - 2])))))))));
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_3))))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            var_17 *= ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-119)) ? (((((/* implicit */_Bool) (signed char)-120)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-88)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)20522)) : (((/* implicit */int) (_Bool)1))))))), (((long long int) ((((/* implicit */_Bool) var_7)) ? (2898020990175473686ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))));
            arr_6 [i_1] = ((/* implicit */long long int) (short)12910);
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_2 = 2; i_2 < 18; i_2 += 3) 
            {
                var_18 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-53))));
                arr_9 [i_2] = ((/* implicit */unsigned short) (((+(((/* implicit */int) (unsigned short)34102)))) ^ ((~(((/* implicit */int) arr_7 [i_2] [i_2] [i_2]))))));
                arr_10 [i_0] [i_1] [i_0] &= ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))) < (((((/* implicit */_Bool) (unsigned char)89)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_5 [i_0])))));
                /* LoopNest 2 */
                for (short i_3 = 2; i_3 < 18; i_3 += 2) 
                {
                    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 4) 
                    {
                        {
                            arr_16 [i_0] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) var_7)) & (((/* implicit */int) arr_13 [i_3] [i_2] [18U] [i_3 - 1] [i_3 - 2] [i_3 - 1]))));
                            var_19 = ((/* implicit */long long int) (-((-(((/* implicit */int) var_2))))));
                            arr_17 [i_2] = ((/* implicit */int) (signed char)-110);
                        }
                    } 
                } 
            }
            for (int i_5 = 4; i_5 < 17; i_5 += 1) 
            {
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((arr_4 [i_0 - 2]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_4 [i_0 - 2])))) : (((/* implicit */int) (unsigned char)89)))))));
                arr_21 [i_0] [13LL] [i_1] = (!(((/* implicit */_Bool) var_3)));
            }
            arr_22 [i_0] [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (unsigned short)59082)) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0 + 1])))), (((arr_1 [i_0 - 2]) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 + 1]))))));
        }
        /* vectorizable */
        for (unsigned short i_6 = 0; i_6 < 19; i_6 += 4) 
        {
            arr_27 [i_6] [i_6] [i_0] = (!(((/* implicit */_Bool) var_8)));
            arr_28 [(signed char)1] = ((/* implicit */unsigned short) ((arr_0 [i_0 + 1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 2]))) : (-1953399802193499258LL)));
        }
    }
    /* vectorizable */
    for (unsigned int i_7 = 1; i_7 < 13; i_7 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_8 = 0; i_8 < 14; i_8 += 2) 
        {
            /* LoopSeq 1 */
            for (signed char i_9 = 2; i_9 < 12; i_9 += 2) 
            {
                var_21 += ((/* implicit */unsigned int) (((!(arr_14 [i_7] [i_8] [i_7]))) && (((/* implicit */_Bool) ((unsigned char) var_1)))));
                /* LoopSeq 1 */
                for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                {
                    var_22 ^= ((/* implicit */int) ((arr_14 [i_9] [i_9 - 1] [i_9]) ? (arr_20 [(unsigned short)18] [i_9 + 1] [i_9] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    arr_38 [i_7] [0LL] [i_9] [(_Bool)1] = ((((((/* implicit */_Bool) arr_8 [i_10] [i_9] [i_8] [16LL])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_11))) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)45324))));
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (+(((((/* implicit */int) var_7)) / (((/* implicit */int) (unsigned short)16196)))))))));
                    var_24 = ((/* implicit */short) ((long long int) var_1));
                }
                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_7 + 1] [i_7] [i_7] [i_8] [i_8] [i_8] [(_Bool)1])) ? (((long long int) (unsigned char)133)) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_8 [i_9] [i_8] [i_7] [i_7]))))))))));
            }
            arr_39 [i_7] [i_7] = ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) - (((/* implicit */int) (_Bool)1))))) ? ((+(arr_11 [i_7] [i_8] [i_7] [i_7]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_7 - 1]))));
            arr_40 [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-93))))));
            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) arr_19 [i_8] [i_8] [i_8]))));
        }
        arr_41 [i_7] = ((/* implicit */short) (_Bool)1);
    }
}
