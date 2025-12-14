/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162988
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_15 = ((/* implicit */short) min(((-(((((/* implicit */int) arr_0 [i_0])) << (((/* implicit */int) arr_0 [i_0])))))), (((((((/* implicit */int) arr_1 [i_0] [i_0])) - (((/* implicit */int) arr_1 [4LL] [(unsigned short)1])))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))))));
        var_16 = ((_Bool) ((long long int) arr_1 [6ULL] [i_0]));
    }
    for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((short) (+(((/* implicit */int) arr_0 [i_1]))))))));
        var_18 = arr_1 [i_1] [i_1];
        arr_5 [i_1] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((arr_0 [i_1]) ? (arr_3 [i_1]) : (arr_3 [13]))) >> (((((/* implicit */int) ((signed char) arr_4 [i_1]))) + (48)))))) ? (((/* implicit */unsigned int) arr_4 [(short)6])) : (min((((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) : (var_1))), (((/* implicit */unsigned int) ((short) var_1)))))));
    }
    var_19 = ((/* implicit */_Bool) var_9);
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        for (short i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (int i_4 = 0; i_4 < 21; i_4 += 1) 
                {
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_2] [i_3])))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 2; i_5 < 17; i_5 += 3) 
                    {
                        for (long long int i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            {
                                arr_18 [i_2] [i_3] [i_2] [i_3] [i_6] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_4] [i_4])) ? (((/* implicit */int) ((short) (!(((/* implicit */_Bool) arr_17 [i_2] [i_5 - 2] [i_4] [i_2] [i_2])))))) : (((/* implicit */int) ((unsigned short) ((arr_11 [i_4] [i_4]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [13ULL])))))))));
                                var_21 = ((int) (-((+(-5272191042858993750LL)))));
                            }
                        } 
                    } 
                    var_22 ^= ((((/* implicit */_Bool) 4265077880237696530ULL)) ? (((/* implicit */long long int) 1806648272)) : (5272191042858993754LL));
                }
                /* vectorizable */
                for (signed char i_7 = 1; i_7 < 19; i_7 += 2) 
                {
                    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((short) (+(arr_11 [i_2] [i_2])))))));
                    var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) (~(var_13))))));
                    var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) (((+(arr_11 [i_2] [i_2]))) & (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))));
                }
                /* vectorizable */
                for (unsigned char i_8 = 0; i_8 < 21; i_8 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 21; i_9 += 4) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 21; i_10 += 4) 
                        {
                            {
                                arr_28 [i_2] [i_3] [i_8] [i_9] [i_10] |= ((/* implicit */long long int) ((unsigned long long int) 14181666193471855069ULL));
                                var_26 = ((/* implicit */int) ((arr_17 [i_2] [i_3] [i_8] [i_9] [3U]) + (arr_17 [i_2] [i_3] [i_8] [i_9] [(short)19])));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */int) ((((((var_11) + (2147483647))) << (((((var_4) + (3863892865983274176LL))) - (21LL))))) == (((/* implicit */int) ((unsigned char) arr_20 [i_2] [i_3] [i_3])))));
                }
                /* LoopSeq 1 */
                for (unsigned char i_11 = 2; i_11 < 20; i_11 += 2) 
                {
                    arr_32 [i_11] [i_2] [i_2] = ((/* implicit */_Bool) ((unsigned int) 4265077880237696508ULL));
                    /* LoopSeq 1 */
                    for (unsigned short i_12 = 1; i_12 < 19; i_12 += 2) 
                    {
                        var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_12)) * (((/* implicit */int) arr_29 [i_2] [i_3] [i_11] [i_12 - 1])))))))))));
                        var_29 = ((/* implicit */long long int) min(((-(((/* implicit */int) var_14)))), (((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned int) arr_10 [i_2] [16] [i_2])), (arr_24 [i_2] [i_2] [i_3] [i_11] [i_12])))))));
                        var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((signed char) ((unsigned long long int) ((int) arr_23 [i_11])))))));
                        var_31 = ((/* implicit */long long int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_8)), (var_2))))) + (((var_6) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_2] [i_2] [7U] [11] [i_12] [8]))))))), (((/* implicit */unsigned long long int) ((((unsigned int) var_6)) - (((/* implicit */unsigned int) ((/* implicit */int) min((arr_15 [20] [i_3] [20] [(short)1] [i_3] [i_3]), (arr_10 [i_3] [i_11] [i_12]))))))))));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_13 = 0; i_13 < 21; i_13 += 2) 
                    {
                        var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) arr_11 [i_2] [i_3]))) + (((((/* implicit */int) arr_15 [i_2] [i_3] [i_11 - 1] [i_13] [i_3] [i_13])) + (((/* implicit */int) arr_15 [i_2] [i_3] [i_11 - 1] [i_13] [i_3] [i_11 - 1])))))))));
                        var_33 |= ((/* implicit */unsigned char) min((((/* implicit */int) ((min((arr_7 [3U]), (((/* implicit */long long int) arr_17 [i_2] [i_3] [i_11] [i_3] [i_13])))) != (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_22 [i_2] [i_2] [i_2])), (arr_11 [i_2] [i_3]))))))), (min((((/* implicit */int) ((arr_14 [i_2] [i_3] [17] [i_13]) || (((/* implicit */_Bool) arr_17 [(_Bool)1] [i_3] [(_Bool)1] [i_13] [i_11]))))), (((int) arr_1 [i_3] [i_3]))))));
                        arr_37 [i_2] [i_2] [i_2] [i_2] &= ((/* implicit */short) min((((int) arr_6 [i_11 + 1])), (((/* implicit */int) ((_Bool) (-(((/* implicit */int) arr_8 [i_13]))))))));
                    }
                }
                var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) var_5))));
            }
        } 
    } 
}
