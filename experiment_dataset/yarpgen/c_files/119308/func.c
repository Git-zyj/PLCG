/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119308
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
    var_16 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */int) var_15)) << (((((/* implicit */int) var_13)) - (14))))) : (((/* implicit */int) ((unsigned short) 140737488355326ULL))))));
    var_17 -= ((/* implicit */_Bool) var_7);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((max((var_14), (((/* implicit */long long int) arr_0 [i_0] [(_Bool)1])))) & (((/* implicit */long long int) min((arr_0 [i_0] [(_Bool)1]), (((/* implicit */unsigned int) (signed char)127)))))))) ? (arr_0 [20ULL] [i_0]) : (arr_0 [i_0] [8])));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)192)), (-215345133)))) ? (arr_5 [i_0]) : (((arr_5 [i_2]) - (((/* implicit */int) var_5)))))) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_20 *= ((/* implicit */_Bool) (unsigned short)11);
                        var_21 = ((/* implicit */long long int) arr_0 [i_1 - 1] [i_1]);
                        arr_10 [i_1] [i_1] [i_1 - 1] = ((/* implicit */int) min((2867455790876114419ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) 
                    {
                        for (unsigned long long int i_5 = 2; i_5 < 23; i_5 += 2) 
                        {
                            {
                                var_22 = arr_6 [i_0] [i_0] [i_0] [i_0];
                                var_23 = ((/* implicit */unsigned char) (~(((arr_8 [i_0] [i_5 - 2] [1ULL] [i_4]) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3313951811U)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 24; i_7 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned long long int) max((((((/* implicit */int) min((arr_18 [i_1 - 1] [i_2] [(signed char)18]), ((_Bool)1)))) + (((var_12) & (((/* implicit */int) var_7)))))), (max((2009593938), ((-(((/* implicit */int) arr_15 [(_Bool)1] [i_0] [i_1 - 1] [i_2] [(unsigned short)7] [i_1 - 1]))))))));
                                var_25 = ((/* implicit */_Bool) max((((/* implicit */int) ((signed char) var_5))), (arr_9 [i_1 - 1] [i_1] [i_1 - 1] [i_1])));
                            }
                        } 
                    } 
                    arr_19 [i_1] [(short)6] [13] [i_2] = ((/* implicit */unsigned short) (+(max(((~(((/* implicit */int) var_6)))), (((/* implicit */int) max((var_1), (var_1))))))));
                }
            } 
        } 
        var_26 *= ((/* implicit */signed char) ((max((-215345145), (((/* implicit */int) (_Bool)1)))) << (((((((/* implicit */_Bool) -1830591453)) ? (-303026386) : (((/* implicit */int) (_Bool)1)))) + (303026398)))));
    }
    for (int i_8 = 1; i_8 < 15; i_8 += 4) 
    {
        arr_22 [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_8 + 3] [i_8 + 1] [i_8] [i_8])) ^ (((/* implicit */int) arr_17 [(unsigned short)18] [i_8] [i_8] [(unsigned short)18] [i_8] [i_8] [i_8 + 3]))))) ? (((((/* implicit */int) arr_3 [(unsigned short)23] [5LL] [i_8 + 1])) >> (((((unsigned long long int) arr_4 [12LL] [(unsigned short)22] [i_8 + 2])) - (13415ULL))))) : (((/* implicit */int) var_15))));
        arr_23 [i_8] [i_8] = ((/* implicit */int) (short)7419);
        /* LoopNest 2 */
        for (unsigned short i_9 = 1; i_9 < 17; i_9 += 2) 
        {
            for (int i_10 = 0; i_10 < 18; i_10 += 3) 
            {
                {
                    var_27 = ((/* implicit */signed char) ((((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (signed char)21)))) + (((/* implicit */int) arr_2 [i_8]))));
                    var_28 = ((/* implicit */unsigned long long int) ((215345146) << (((((-925673892) + (925673917))) - (25)))));
                }
            } 
        } 
        var_29 = ((/* implicit */unsigned long long int) (+(((((arr_13 [i_8 + 1] [(unsigned short)12] [3] [i_8] [i_8 + 3] [i_8] [(short)5]) + (9223372036854775807LL))) << (((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_5)))) - (30741)))))));
    }
    var_30 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) var_12)) ^ (((((((/* implicit */_Bool) (signed char)-22)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2954))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
    var_31 = (+(((/* implicit */int) var_8)));
}
