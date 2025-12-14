/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155563
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
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) min((((/* implicit */int) var_14)), (((((/* implicit */_Bool) (+(((/* implicit */int) var_14))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_4)))))))));
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) var_8))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 += ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (arr_1 [23LL]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
                    var_19 -= ((/* implicit */unsigned short) min((((/* implicit */long long int) arr_8 [i_1 - 2] [(short)22])), (min((((/* implicit */long long int) (+(((/* implicit */int) arr_7 [i_0]))))), (arr_4 [i_1 - 1] [i_1 + 2])))));
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (-((-(((/* implicit */int) var_12)))))))));
                    var_21 = ((/* implicit */long long int) var_12);
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 1; i_3 < 21; i_3 += 4) 
                    {
                        var_22 += ((/* implicit */unsigned char) ((long long int) -1813414133));
                        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) min((((/* implicit */short) (unsigned char)62)), (arr_8 [10U] [10U]))))));
                        var_24 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_3))))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)145))))) ? ((~(12608956252585552687ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [(_Bool)1] [8ULL] [8ULL])))))));
                        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) (((+(((/* implicit */int) (unsigned char)62)))) / (((/* implicit */int) arr_8 [i_0] [8U]))))) ? (arr_2 [i_2] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 25; i_4 += 1) 
                    {
                        var_26 -= ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_2] [i_4])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_12 [i_4] [18LL] [i_1] [i_0]))))) * (((((/* implicit */_Bool) (unsigned short)3641)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)50))) : (arr_5 [i_2])))));
                        var_27 = ((/* implicit */unsigned short) (-(arr_4 [i_1 - 2] [i_1])));
                    }
                    for (unsigned long long int i_5 = 1; i_5 < 24; i_5 += 2) 
                    {
                        var_28 *= ((/* implicit */long long int) min((min((max((((/* implicit */unsigned long long int) var_8)), (0ULL))), (((/* implicit */unsigned long long int) (unsigned char)50)))), (((/* implicit */unsigned long long int) ((unsigned short) (_Bool)0)))));
                        var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) max((((/* implicit */unsigned int) arr_12 [i_0] [i_0] [(short)8] [i_1 + 2])), (((unsigned int) arr_12 [i_1] [i_1] [i_1] [i_1 - 1])))))));
                        var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)206)))))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_6 = 2; i_6 < 17; i_6 += 2) 
    {
        for (int i_7 = 0; i_7 < 18; i_7 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_8 = 0; i_8 < 18; i_8 += 3) 
                {
                    /* LoopNest 2 */
                    for (long long int i_9 = 2; i_9 < 16; i_9 += 1) 
                    {
                        for (unsigned char i_10 = 3; i_10 < 17; i_10 += 2) 
                        {
                            {
                                var_31 *= ((/* implicit */_Bool) ((unsigned char) (-((((_Bool)1) ? (((/* implicit */int) (short)32756)) : (((/* implicit */int) (unsigned short)61895)))))));
                                arr_31 [i_10] = max((((/* implicit */unsigned int) arr_13 [i_6 - 2] [i_6 - 2] [i_10 - 2] [i_6 - 2])), (((((/* implicit */unsigned int) ((/* implicit */int) var_12))) / (var_9))));
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) min((((((/* implicit */int) arr_15 [i_6] [i_6 + 1] [i_6 - 1] [i_6 - 2] [(signed char)16])) - (((/* implicit */int) arr_14 [i_6] [i_6 - 1] [i_6] [i_6 + 1])))), ((-(((/* implicit */int) arr_15 [i_6 - 1] [i_6 - 2] [i_6] [i_6 - 2] [i_6])))))))));
                    arr_32 [i_6] [i_6] [i_6] [i_6] |= ((/* implicit */long long int) ((_Bool) max((((/* implicit */int) var_14)), (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_14 [i_7] [i_7] [23] [i_7])))))));
                    arr_33 [(short)16] [(short)16] [(short)16] [i_7] |= ((/* implicit */long long int) (-(900895244U)));
                }
                /* vectorizable */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_12 = 1; i_12 < 16; i_12 += 1) 
                    {
                        var_33 = ((/* implicit */int) ((short) arr_11 [i_6 - 1]));
                        var_34 = ((/* implicit */short) min((var_34), (arr_17 [i_12] [i_6] [i_12 + 2] [i_12 + 1])));
                        var_35 = ((/* implicit */short) ((unsigned char) arr_27 [(short)17] [i_6 - 2] [i_12 - 1] [(short)17] [i_11]));
                    }
                    arr_38 [i_7] &= ((/* implicit */unsigned char) arr_25 [i_6] [i_7] [(_Bool)1] [i_11]);
                }
                var_36 ^= ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
}
