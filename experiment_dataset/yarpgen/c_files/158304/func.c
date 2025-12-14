/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158304
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) arr_8 [i_0] [i_1]))) >> ((((~(((/* implicit */int) var_11)))) - (59))))))));
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */long long int) (!(((_Bool) 5395790134739502939ULL))));
                    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0])))))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                {
                    arr_13 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (!(((((/* implicit */_Bool) 2305843009213693951LL)) && (((/* implicit */_Bool) var_4))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_3])))))));
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        for (signed char i_5 = 0; i_5 < 18; i_5 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((1666250306U), (((/* implicit */unsigned int) (signed char)0))))) ? (((/* implicit */int) arr_0 [i_3])) : ((-(((/* implicit */int) arr_0 [i_0]))))));
                                var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_5] [i_3])) ? (arr_15 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1]))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 2; i_6 < 17; i_6 += 3) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_28 [i_3] [i_1] = (+(max((arr_27 [i_3] [i_3] [i_6 + 1] [i_6 - 2] [i_6 - 1] [i_6 + 1] [i_6]), (((/* implicit */unsigned int) var_2)))));
                                var_18 = ((/* implicit */unsigned int) (~((-(((/* implicit */int) (signed char)21))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 18; i_8 += 3) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_29 [i_1] [i_3] [i_8] [i_9]), (arr_29 [i_8] [i_3] [i_1] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_23 [i_0] [i_1] [i_3] [i_8] [i_9]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))) : (arr_15 [i_0] [i_0]))))));
                                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_3] [i_8])) ? (14603410135340365645ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : ((~(-5954932408468170960LL))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 3) 
                    {
                        for (long long int i_11 = 0; i_11 < 18; i_11 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) max((arr_30 [i_11] [i_3] [i_3] [i_1] [i_3] [i_0]), (((unsigned short) ((((/* implicit */_Bool) (signed char)90)) ? (var_6) : (((/* implicit */long long int) arr_27 [i_10] [i_1] [i_3] [i_10] [i_11] [i_10] [i_0])))))));
                                arr_38 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_3] = ((/* implicit */unsigned int) ((int) ((((/* implicit */int) (unsigned short)30720)) != (((/* implicit */int) (signed char)77)))));
                                arr_39 [i_0] [i_3] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) max((arr_25 [i_11] [i_10] [i_3] [i_1] [i_1] [i_0]), (arr_25 [i_11] [i_10] [i_3] [i_1] [i_0] [i_0]))))));
                            }
                        } 
                    } 
                }
                var_22 = arr_6 [i_0] [i_0] [i_0];
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_12 = 1; i_12 < 21; i_12 += 3) 
    {
        for (unsigned long long int i_13 = 2; i_13 < 21; i_13 += 2) 
        {
            for (unsigned short i_14 = 3; i_14 < 20; i_14 += 3) 
            {
                {
                    arr_48 [i_12 + 2] [i_12 + 2] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4365364189389721738ULL)) ? (var_8) : (((/* implicit */unsigned long long int) var_10))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)122))) - (arr_47 [i_13]))) : (arr_44 [i_12] [i_12 + 1])))) ? ((-(((/* implicit */int) arr_43 [i_14 - 2] [i_12])))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((var_0) | (((/* implicit */long long int) ((/* implicit */int) (signed char)-110)))))) < (max((((/* implicit */unsigned long long int) (signed char)-107)), (arr_44 [i_12 - 1] [i_13]))))))));
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_13 + 2] [i_13 - 1])) ? (((/* implicit */unsigned long long int) max((976944252901755837LL), (-1627149064661804635LL)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50176))) * (0ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16600))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_10)) / (arr_40 [i_12 + 1])))), (0ULL)))));
                }
            } 
        } 
    } 
    var_24 ^= ((/* implicit */_Bool) var_3);
}
