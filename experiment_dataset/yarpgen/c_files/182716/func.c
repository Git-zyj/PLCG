/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182716
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
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))) || (((/* implicit */_Bool) var_0)))))) * (var_17))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) var_2);
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((-2039525746) % (((/* implicit */int) min((arr_3 [i_1] [i_0 + 2] [i_0 + 4]), (((/* implicit */unsigned short) arr_2 [i_0])))))))) : (max((min((((/* implicit */unsigned long long int) -2039525748)), (104877576037772436ULL))), (((/* implicit */unsigned long long int) arr_2 [i_0]))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)480))));
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 4; i_2 < 15; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 2; i_3 < 15; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 1) 
                        {
                            {
                                var_24 &= ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)38)) < (((/* implicit */int) arr_14 [i_2] [i_6] [i_4] [i_5])))))) + (((unsigned long long int) arr_7 [i_6])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -821868237)) ? (((/* implicit */int) (short)14178)) : (((/* implicit */int) (short)15728)))))));
                                var_25 = arr_9 [i_3] [i_4] [i_6];
                                var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((((/* implicit */int) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_2] [i_3] [i_4] [12U]))) <= (-3400922515459635492LL))))))) - (min((max((-50797875), (((/* implicit */int) arr_17 [i_2] [i_2] [i_2 - 2] [4LL] [i_2])))), (max((arr_18 [i_3] [i_3 - 1] [i_4] [4LL] [i_6]), (((/* implicit */int) arr_3 [12] [1ULL] [i_3])))))))))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) var_7))));
                    var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2] [i_2 + 1] [i_2])) ? ((+(((/* implicit */int) arr_3 [i_4] [i_3] [i_2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_2 + 2] [i_3] [i_2 + 2] [(unsigned short)16])))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [7ULL] [i_2 - 2]))))) : (((/* implicit */int) arr_13 [i_2 + 2] [i_3] [i_3]))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_7 = 0; i_7 < 17; i_7 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) arr_9 [i_3 - 1] [i_3 + 2] [i_3 + 1]))));
                        var_30 = ((/* implicit */unsigned long long int) arr_12 [i_7] [(short)13] [i_2 + 1]);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 2) 
                        {
                            var_31 |= ((/* implicit */long long int) arr_7 [i_2 + 2]);
                            var_32 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_2 - 1] [i_2 - 1] [i_4] [i_2 - 1] [i_2 - 4])) ? (arr_15 [i_2] [i_3 + 1] [i_4] [i_7] [i_8]) : (arr_15 [i_2 - 2] [i_2 - 2] [i_4] [(unsigned char)15] [i_2 - 2])));
                        }
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 17; i_9 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned long long int) (+(((int) arr_15 [7ULL] [(_Bool)1] [i_4] [i_3] [i_2]))));
                        /* LoopSeq 1 */
                        for (short i_10 = 0; i_10 < 17; i_10 += 3) 
                        {
                            var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) (~(((/* implicit */int) var_19)))))));
                            var_35 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_18 [i_3 - 1] [i_3 - 1] [i_2 - 3] [i_10] [i_10]))));
                            var_36 = ((/* implicit */short) (signed char)-93);
                        }
                        var_37 = ((/* implicit */unsigned char) arr_23 [i_2 - 1]);
                    }
                }
            } 
        } 
    } 
}
