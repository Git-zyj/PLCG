/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188444
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
    var_18 = ((/* implicit */unsigned char) ((var_3) % (min((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_8)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)8506))) + (var_3)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_2] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) ((unsigned short) var_7))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_0 - 1])), (var_2)))) ? (((/* implicit */long long int) (-(((((/* implicit */int) arr_0 [i_0 - 2])) + (((/* implicit */int) arr_6 [i_2] [i_2] [i_4]))))))) : (min((((/* implicit */long long int) (-2147483647 - 1))), (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) / (2147450880LL)))))));
                                var_20 = ((/* implicit */_Bool) arr_1 [i_0 + 2]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_21 += ((/* implicit */int) (((!(((/* implicit */_Bool) ((arr_5 [i_0] [i_1] [i_1] [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((long long int) ((arr_2 [i_6]) / (((/* implicit */long long int) ((/* implicit */int) arr_9 [6] [i_1] [i_2] [i_1])))))) : (((/* implicit */long long int) min((((/* implicit */int) ((unsigned short) (signed char)36))), ((((_Bool)1) ? (((/* implicit */int) (unsigned char)96)) : (((/* implicit */int) var_6)))))))));
                                var_22 = ((/* implicit */unsigned char) arr_18 [i_2] [i_1] [i_2] [i_5] [i_6]);
                                arr_19 [i_2] [(signed char)18] [i_2] [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) (_Bool)1);
                                var_23 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) arr_4 [i_5] [i_5] [i_5])) ? (min((((/* implicit */unsigned long long int) var_11)), (0ULL))) : (var_14)))));
                                var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_2 [i_0])))) ? (((/* implicit */int) arr_3 [i_0])) : (((((/* implicit */int) (signed char)42)) % (-1337192866)))))) ? ((((_Bool)1) ? (min((((/* implicit */unsigned long long int) (_Bool)1)), (6918431794723155444ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-16868)) ? (((/* implicit */long long int) var_4)) : (arr_2 [i_5])))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_5)) ? (-1337192866) : (((/* implicit */int) var_11)))) - (((((/* implicit */int) arr_14 [18U] [i_1] [17LL] [i_5])) / (((/* implicit */int) arr_18 [i_2] [(short)7] [i_2] [10U] [i_2])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
