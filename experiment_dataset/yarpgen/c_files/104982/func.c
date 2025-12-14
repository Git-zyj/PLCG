/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104982
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
    var_15 &= ((/* implicit */short) (unsigned short)39005);
    var_16 = (((+(((/* implicit */int) var_9)))) ^ (((/* implicit */int) ((((/* implicit */int) max(((short)-29865), (((/* implicit */short) var_5))))) == (((/* implicit */int) var_11))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */_Bool) (short)29865);
                var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((int) var_13))), ((-(arr_1 [i_0] [i_0])))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    var_18 = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)26520))));
                    arr_10 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_5)) : (2059394547)));
                }
                for (short i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    var_19 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_3] [(unsigned char)18])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_3])) : (((/* implicit */int) arr_9 [7U] [i_0] [i_0] [i_0])))) % (max((((int) arr_13 [12LL] [12LL] [12LL])), (((/* implicit */int) max((var_10), (((/* implicit */unsigned short) var_7)))))))));
                    arr_14 [i_0] = ((/* implicit */int) min((((((/* implicit */_Bool) arr_5 [i_0])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [i_0]))))), (((/* implicit */unsigned long long int) min((arr_4 [i_0] [i_0] [i_3]), (((/* implicit */short) var_14)))))));
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 20; i_4 += 2) 
                    {
                        for (short i_5 = 0; i_5 < 21; i_5 += 4) 
                        {
                            {
                                arr_21 [(_Bool)1] [i_1] [(_Bool)1] [i_4] [i_0] [(_Bool)1] = ((/* implicit */int) min(((~(arr_1 [i_4 + 1] [i_0]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_12 [i_4 - 1] [i_5])))))));
                                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-120))) ^ (((arr_13 [i_1] [i_4 - 1] [i_5]) + (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-120)) ? (var_12) : (((/* implicit */int) (short)16055)))))))));
                                var_21 &= max((((max((((/* implicit */long long int) arr_7 [i_3])), (-8087677949028332973LL))) >> (((((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (arr_5 [i_3])))) - (62055))))), (((/* implicit */long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_3] [i_4] [i_5] [i_3]))) | (arr_19 [i_4]))), (((/* implicit */unsigned int) min((((/* implicit */short) var_11)), ((short)-29885))))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)26531), (((/* implicit */unsigned short) ((((/* implicit */int) arr_16 [i_1] [(unsigned char)12] [i_1] [i_0])) < (((/* implicit */int) arr_12 [i_0] [2]))))))))) : (max((max((-2230181150298834018LL), (((/* implicit */long long int) arr_18 [i_0] [(short)0] [15LL] [i_0] [i_3] [i_3])))), (((/* implicit */long long int) ((((/* implicit */int) var_1)) + (((/* implicit */int) (signed char)-1)))))))));
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 21; i_6 += 4) 
                {
                    for (long long int i_7 = 0; i_7 < 21; i_7 += 2) 
                    {
                        {
                            arr_26 [i_1] [i_0] [(_Bool)1] [i_1] [i_1] [i_1] = max((((((/* implicit */_Bool) arr_24 [i_1] [i_0])) ? (3565934146052294763LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))), (((/* implicit */long long int) ((((/* implicit */int) arr_17 [i_0] [i_1] [9] [i_1] [i_6] [i_6])) ^ (((/* implicit */int) (short)-29880))))));
                            var_23 = ((/* implicit */_Bool) (~(-1428922059)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 ^= ((/* implicit */short) ((((/* implicit */int) var_2)) ^ (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9)))) * (((/* implicit */int) ((1322888432U) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
}
