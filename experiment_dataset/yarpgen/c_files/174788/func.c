/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174788
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
    var_12 = ((/* implicit */unsigned short) var_3);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_13 = ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0] [i_0])) - ((-(((/* implicit */int) arr_0 [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] = ((unsigned long long int) max(((~(252201579132747776LL))), (max((252201579132747776LL), (var_6)))));
                    var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) min((arr_8 [i_1 + 2] [i_1 + 1] [i_1 + 2]), (arr_8 [i_1 + 2] [i_1 - 2] [i_1 - 1])))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) ((var_0) % (252201579132747750LL)))))))));
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        var_15 = var_8;
                        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) max((var_3), (var_8))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)2453))))) && (((/* implicit */_Bool) 18446744073709551615ULL)))))) : (min((var_0), (var_6)))));
                        var_17 = ((/* implicit */unsigned long long int) (short)-4497);
                        var_18 = ((/* implicit */short) max((((/* implicit */unsigned long long int) -2916384734987812561LL)), (((arr_12 [i_1 - 2] [6LL]) * (0ULL)))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 1; i_4 < 14; i_4 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned short) ((13972129743208710771ULL) ^ (((/* implicit */unsigned long long int) arr_5 [i_1 - 1] [i_1 + 1] [i_1 - 2]))));
                        var_20 = ((/* implicit */long long int) ((((/* implicit */int) (short)-24887)) % (((/* implicit */int) (short)2453))));
                    }
                    for (short i_5 = 2; i_5 < 16; i_5 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_6 = 3; i_6 < 15; i_6 += 3) 
                        {
                            arr_20 [10ULL] [10ULL] [i_0] [i_2] [i_2] [9LL] [i_6 - 3] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_12 [i_0] [i_1 + 3])))) && (((/* implicit */_Bool) (+(arr_12 [i_0] [i_1 + 1]))))));
                            arr_21 [i_0] [i_0] [10ULL] [i_0] [i_5] [13LL] = ((/* implicit */short) 17047166466333363065ULL);
                            arr_22 [i_0] [i_0] [i_0] [i_6] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (short)32761))))));
                            arr_23 [(unsigned short)0] [i_0] [i_1 + 3] [i_0] [i_1 + 3] [i_0] [i_0] = ((((/* implicit */_Bool) ((short) var_9))) ? (((long long int) ((((/* implicit */int) (short)-1705)) - (((/* implicit */int) var_2))))) : (-9025465784437980914LL));
                        }
                        var_21 = ((/* implicit */short) arr_18 [i_0] [i_0] [i_1 + 1]);
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 3; i_7 < 16; i_7 += 3) 
                    {
                        arr_28 [i_1] [i_1 + 2] [6ULL] [(unsigned short)8] [i_2] [i_0] |= ((/* implicit */short) max((min(((-(var_4))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) var_1))))))), (((((/* implicit */_Bool) arr_14 [16ULL] [i_1 - 2] [16ULL])) ? (arr_4 [i_0] [i_1 + 3]) : (16695009005411861429ULL)))));
                        /* LoopSeq 2 */
                        for (long long int i_8 = 3; i_8 < 15; i_8 += 3) 
                        {
                            var_22 = ((/* implicit */short) (!(((((/* implicit */_Bool) 4474614330500840868ULL)) || (((/* implicit */_Bool) 9223372036854775807LL))))));
                            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (~((+(arr_12 [i_0] [(short)6]))))))));
                            arr_32 [(short)0] [i_2] [i_2] [i_7 - 2] [i_2] [i_2] [i_1 - 2] &= ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) -6582845205178497149LL))))), (((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_11))))));
                        }
                        for (short i_9 = 0; i_9 < 17; i_9 += 3) 
                        {
                            arr_36 [(short)0] [i_2] [(short)0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_0)) >= (arr_4 [i_0] [i_0])))), (max(((unsigned short)46965), (arr_33 [i_0] [i_2] [10ULL])))))) ? (max((((((/* implicit */_Bool) -46691215120243669LL)) ? (var_4) : (18446744073709551614ULL))), (((/* implicit */unsigned long long int) var_3)))) : (((((/* implicit */_Bool) var_0)) ? (arr_15 [(short)8] [i_2] [i_7 - 1] [i_7 - 1] [(short)8] [(short)8]) : (arr_15 [(short)8] [i_7] [i_7 - 2] [i_9] [i_9] [i_7 - 2])))));
                            var_24 = ((max((((/* implicit */unsigned long long int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (((unsigned long long int) (short)27114)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_6 [i_2])))))));
                            var_25 *= max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-10203))))), (((((/* implicit */unsigned long long int) 17591917608960LL)) - (var_4))));
                            var_26 = ((/* implicit */short) min((((((/* implicit */_Bool) 15936352400664334399ULL)) && (((/* implicit */_Bool) (short)-10203)))), ((!(((/* implicit */_Bool) (unsigned short)49541))))));
                        }
                    }
                    var_27 = ((/* implicit */long long int) 9910930063194405883ULL);
                }
            } 
        } 
        var_28 ^= ((/* implicit */short) 0ULL);
        var_29 = ((/* implicit */long long int) ((var_4) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((unsigned long long int) var_6)))))));
    }
    var_30 = var_3;
    var_31 = ((/* implicit */unsigned long long int) (unsigned short)65535);
}
