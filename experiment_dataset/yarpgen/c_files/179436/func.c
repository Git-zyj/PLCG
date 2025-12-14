/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179436
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
    for (long long int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_0 [i_0 + 1])))) ? (max((((/* implicit */unsigned long long int) ((var_1) ? (((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1] [i_1])) : (((/* implicit */int) var_1))))), (max((arr_0 [(unsigned short)2]), (((/* implicit */unsigned long long int) arr_1 [i_0])))))) : (var_2)));
                var_12 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_3 [i_0 + 1])) : (((/* implicit */int) (signed char)40)))));
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 4) 
                {
                    arr_8 [i_0] [i_0] = var_2;
                    arr_9 [i_0] [(unsigned short)5] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_2 + 1] [i_2 + 3] [i_2 + 3])) ? (((/* implicit */int) var_0)) : (((arr_3 [i_0]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_7 [i_2]))))))) : (((unsigned long long int) min((var_8), (((/* implicit */short) var_7)))))));
                    var_13 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0 - 1] [i_2 + 2] [i_2] [i_2 - 1]))))) << (((/* implicit */int) ((_Bool) arr_6 [i_0 + 1] [i_2 + 1] [i_2] [i_2 + 2])))));
                    arr_10 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0 + 1] [i_1] [i_2 + 2]))))) ? (((/* implicit */int) (!(arr_2 [i_0 + 1] [i_1] [i_2 + 2])))) : (((/* implicit */int) max((var_10), (((/* implicit */short) arr_2 [i_0 - 1] [i_1] [i_2 - 1])))))));
                }
                for (short i_3 = 3; i_3 < 11; i_3 += 2) /* same iter space */
                {
                    var_14 = ((/* implicit */long long int) (!(var_1)));
                    var_15 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [(_Bool)1]))))) ? (((/* implicit */int) ((unsigned char) arr_13 [4] [i_0 - 1] [(short)10]))) : (((var_1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10))))));
                    arr_14 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) max((arr_0 [i_0 + 1]), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) var_0)), (arr_5 [i_0 - 1] [i_0 + 1] [i_0]))))));
                }
                for (short i_4 = 3; i_4 < 11; i_4 += 2) /* same iter space */
                {
                    var_16 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0 + 1] [i_4 - 3])) ? (((/* implicit */int) max((arr_7 [i_0]), (((/* implicit */signed char) var_0))))) : (((/* implicit */int) ((unsigned char) var_6)))))) ? (((/* implicit */int) (!(max(((_Bool)1), (var_0)))))) : (((/* implicit */int) var_4))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_5 = 1; i_5 < 11; i_5 += 2) 
                    {
                        arr_22 [i_5 + 2] [i_4] [i_0] [i_0] [i_0] = ((((/* implicit */int) arr_20 [i_0 - 1] [i_4 - 3] [i_5 - 1] [i_5])) / ((+(((/* implicit */int) var_5)))));
                        var_17 += arr_0 [(short)1];
                    }
                    for (unsigned short i_6 = 1; i_6 < 11; i_6 += 4) 
                    {
                        var_18 -= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (short)960)) != (((/* implicit */int) var_8))))) != (((/* implicit */int) max((var_7), (arr_1 [12ULL]))))));
                        arr_26 [i_0] [i_0] [i_4 + 2] [i_6 + 1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_11 [i_0])))) != (var_2)));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) | (((/* implicit */int) (short)-25998))))) ? (((arr_24 [i_0 + 1] [(short)0] [i_4] [i_0]) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_7] [i_0]))) | (0ULL)))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_18 [i_0] [i_0])))), (((/* implicit */int) arr_2 [i_0 + 1] [i_0 - 1] [i_4 - 1]))))) : ((~(((((/* implicit */unsigned long long int) arr_28 [i_0] [i_1] [i_1] [i_4] [4ULL] [i_7])) & (arr_0 [i_0])))))));
                        var_20 ^= ((/* implicit */_Bool) ((long long int) (~(((/* implicit */int) arr_4 [i_0 - 1] [i_1] [i_7])))));
                        var_21 -= ((/* implicit */short) (+(min(((-(var_2))), (((/* implicit */unsigned long long int) max(((_Bool)1), ((_Bool)1))))))));
                    }
                    arr_29 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_24 [i_4] [i_4] [i_4 - 2] [i_0])) * (((/* implicit */int) arr_24 [i_4 - 3] [i_4 - 2] [i_4 - 2] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) var_5))))))) : (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))))), (max((var_2), (((/* implicit */unsigned long long int) var_6))))))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_8 = 0; i_8 < 16; i_8 += 3) 
    {
        for (int i_9 = 1; i_9 < 15; i_9 += 2) 
        {
            {
                var_22 = ((/* implicit */unsigned long long int) var_5);
                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_34 [i_8] [i_9 + 1]), (arr_34 [i_8] [i_9 - 1])))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_30 [i_9 + 1] [i_9 - 1])) : (((/* implicit */int) arr_30 [i_9 + 1] [i_9 - 1])))) : (min((((/* implicit */int) arr_30 [i_8] [i_9 + 1])), ((-(((/* implicit */int) arr_33 [i_8] [i_8] [i_8]))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) var_6))));
}
