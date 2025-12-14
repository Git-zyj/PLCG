/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126203
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
    var_13 = ((/* implicit */signed char) min(((+(((((/* implicit */long long int) ((/* implicit */int) (signed char)14))) - (var_6))))), (((/* implicit */long long int) var_5))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 8; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        {
                            arr_9 [i_0] [i_1] [i_1] [i_1] [i_3] [i_3] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_2 [i_2 + 2] [i_2 - 1] [i_2 + 2]) ? (((/* implicit */int) arr_2 [i_2 - 1] [i_2 + 1] [i_2 - 1])) : (((/* implicit */int) arr_2 [i_2 - 1] [i_2 + 2] [i_2 + 2]))))) ? (((((/* implicit */_Bool) arr_7 [i_1] [i_2 - 2] [i_2 - 1] [i_2 - 1] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_1 [i_0])))))) : ((-(arr_7 [i_0] [0ULL] [i_2] [i_3] [(signed char)5]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2 + 2] [i_3]))))))));
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */signed char) (~(arr_5 [i_0] [i_1] [i_2] [i_3])));
                        }
                    } 
                } 
                arr_11 [i_0] = ((/* implicit */_Bool) (+(min((var_3), (arr_5 [i_0] [i_0] [i_0] [i_0])))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */short) var_9);
                            var_15 &= ((/* implicit */short) (+(((/* implicit */int) max((arr_15 [i_0] [i_1] [i_4] [i_5]), (((/* implicit */short) arr_2 [i_5] [i_4] [i_1])))))));
                            /* LoopSeq 4 */
                            /* vectorizable */
                            for (unsigned short i_6 = 0; i_6 < 10; i_6 += 3) 
                            {
                                arr_21 [i_0] [i_5] [i_4] [i_5] [i_6] [i_5] = ((/* implicit */unsigned int) (_Bool)1);
                                arr_22 [i_5] [4U] [i_4] [i_5] [i_6] = ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_4] [i_5] [i_6])) ? (arr_8 [i_0] [i_1] [i_4] [i_5] [2ULL]) : (arr_8 [i_0] [i_1] [i_4] [i_5] [i_6]));
                            }
                            /* vectorizable */
                            for (unsigned char i_7 = 0; i_7 < 10; i_7 += 4) 
                            {
                                arr_25 [i_5] [i_5] [i_4] [i_5] [i_7] = ((/* implicit */unsigned long long int) arr_6 [i_7]);
                                var_16 &= ((/* implicit */short) (~(((/* implicit */int) arr_2 [i_1] [i_4] [i_5]))));
                            }
                            for (unsigned long long int i_8 = 4; i_8 < 9; i_8 += 2) 
                            {
                                arr_28 [i_0] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_23 [i_8 - 1])))) ? (var_9) : (((unsigned int) arr_7 [i_8 - 1] [i_8] [i_8 - 4] [i_8 - 1] [i_8 - 2]))));
                                var_17 = arr_3 [i_5];
                            }
                            /* vectorizable */
                            for (unsigned char i_9 = 2; i_9 < 8; i_9 += 1) 
                            {
                                arr_31 [i_5] [i_4] [i_5] = ((/* implicit */short) (_Bool)1);
                                arr_32 [i_0] [i_5] [i_0] = ((/* implicit */unsigned long long int) (~(2950183913320465616LL)));
                            }
                        }
                    } 
                } 
                arr_33 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)28672))))), (((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] [i_1])))))));
                arr_34 [i_0] = ((/* implicit */long long int) (+(var_11)));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_12)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */unsigned long long int) var_10)) / (var_12)))))))))));
    var_19 = ((/* implicit */unsigned int) (~(var_6)));
    var_20 = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_10)) : (var_3));
}
