/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163474
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
    var_12 -= ((/* implicit */unsigned short) var_9);
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) max((((/* implicit */long long int) min((arr_4 [i_0 - 1] [i_0 + 1]), (arr_4 [i_0 - 2] [i_0 + 1])))), (-5930269042144656595LL)));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((max((-882181186831697861LL), (((/* implicit */long long int) arr_4 [i_0 - 1] [17ULL])))), (((/* implicit */long long int) var_7))))) ? (arr_8 [i_3] [(unsigned char)2] [i_1] [i_0]) : (((/* implicit */unsigned long long int) (+(882181186831697878LL))))));
                        var_15 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_4 [i_1] [i_2])), ((~(arr_3 [i_0 - 1] [i_0 - 2] [i_0 - 2])))));
                        /* LoopSeq 2 */
                        for (int i_4 = 2; i_4 < 21; i_4 += 1) 
                        {
                            var_16 = min(((+(((/* implicit */int) arr_5 [i_0 - 2] [i_4 - 1] [i_0 - 2])))), (((/* implicit */int) var_6)));
                            var_17 = arr_6 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2];
                            var_18 = ((/* implicit */long long int) min((var_18), (min((-882181186831697861LL), ((~(-882181186831697861LL)))))));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 24; i_5 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0 - 1] [i_3])) - (((/* implicit */int) arr_1 [i_2] [i_5])))))));
                            var_20 &= ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 1] [i_1] [(unsigned short)7]))) : (arr_6 [i_0 - 1] [i_0 + 1] [i_0 - 1] [(signed char)15] [(signed char)15]));
                            var_21 = ((/* implicit */unsigned long long int) (-(arr_7 [i_0 - 1] [i_0] [i_0 - 1])));
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((arr_6 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1]) >> (((arr_6 [i_0 + 1] [i_0] [i_0 - 1] [i_0] [i_0 + 1]) - (4189117236U))))))));
                        }
                        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1])) ? (arr_6 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1]) : (arr_6 [i_0] [i_0 + 1] [i_0] [i_0] [i_0 - 2])))))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_6 = 0; i_6 < 11; i_6 += 3) 
    {
        for (unsigned char i_7 = 0; i_7 < 11; i_7 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 11; i_8 += 4) 
                {
                    for (long long int i_9 = 0; i_9 < 11; i_9 += 1) 
                    {
                        {
                            var_24 |= ((/* implicit */short) ((arr_1 [i_6] [i_8]) ? (min((var_1), (((/* implicit */int) arr_26 [i_9] [i_8] [i_7] [(signed char)6])))) : (((/* implicit */int) arr_4 [i_7] [i_9]))));
                            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) max((((/* implicit */unsigned char) var_4)), (((unsigned char) (+(((/* implicit */int) arr_21 [i_9]))))))))));
                            var_26 = ((/* implicit */unsigned char) ((max((max((var_7), (((/* implicit */unsigned int) arr_26 [i_6] [i_9] [i_6] [i_9])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_8 [i_7] [i_6] [i_7] [i_6]))))))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_8] [0U])) ? (((((/* implicit */int) var_5)) ^ (((/* implicit */int) arr_20 [(_Bool)1] [5LL] [i_8])))) : ((-(((/* implicit */int) (signed char)-1)))))))));
                            var_27 &= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_2)) ? (arr_0 [i_8]) : (arr_0 [i_7])))));
                        }
                    } 
                } 
                var_28 = max((((/* implicit */unsigned long long int) max((arr_23 [i_7] [i_7] [i_7] [i_7]), (arr_23 [i_6] [(unsigned char)8] [i_6] [i_6])))), (((arr_3 [i_6] [i_7] [i_6]) ^ (arr_3 [i_6] [i_7] [i_7]))));
                var_29 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_26 [i_6] [i_6] [i_6] [i_6])) && (((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) min(((unsigned short)38401), (((/* implicit */unsigned short) arr_20 [i_7] [i_6] [i_6]))))) : (arr_18 [i_6])));
                var_30 = var_6;
            }
        } 
    } 
}
