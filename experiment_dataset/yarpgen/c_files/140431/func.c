/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140431
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
    var_12 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */unsigned short) ((short) (signed char)-2))), (var_10))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_13 -= ((/* implicit */signed char) 21U);
                arr_6 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) arr_2 [i_0]))))) : (arr_3 [i_0])))) ? (arr_3 [i_0]) : (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)237)) < (503301740)))), ((-(arr_3 [i_0])))))));
                arr_7 [i_0] [i_0 + 1] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned short) arr_5 [i_0] [i_0] [(signed char)2])), (min((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) || (arr_2 [i_1])))), (arr_0 [i_0])))));
                arr_8 [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned char) max((arr_4 [i_0 - 2]), (arr_4 [i_0 + 1])))), (min((var_5), (((/* implicit */unsigned char) arr_4 [i_0 - 2]))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (unsigned int i_3 = 2; i_3 < 23; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 4; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_19 [i_4] [i_4] [i_4] [i_4] [(unsigned short)11] [i_4] [i_0] = ((/* implicit */short) (signed char)-3);
                                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) ((short) var_6)))) ? (max((((/* implicit */int) arr_15 [i_0] [i_0] [i_2] [i_2] [14ULL])), (((((/* implicit */int) arr_15 [14ULL] [(signed char)0] [14ULL] [i_3] [i_4])) + (((/* implicit */int) var_7)))))) : (((((/* implicit */int) min(((short)10527), (arr_5 [(signed char)20] [i_4] [i_4 - 2])))) | (((/* implicit */int) arr_10 [i_0 - 1] [i_3 - 1] [i_4 + 2] [i_4 + 2])))))))));
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_11 [i_4 - 2] [i_0 - 2]), (arr_11 [i_4 + 3] [i_0 + 1])))) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_3 + 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_15 = ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_8)))) : (1534605447U)))));
}
