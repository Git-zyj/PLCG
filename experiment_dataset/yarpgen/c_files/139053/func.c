/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139053
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_10 = ((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_6)))) < (((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_2])) ? (((/* implicit */int) var_3)) : (-965014437)))))) < (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [i_1 - 1])) <= (((/* implicit */int) (_Bool)0)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_3] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (_Bool)0);
                                var_11 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)53)), (3304283672U)));
                                var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) min(((+(((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (signed char)90)))))), (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3] [i_2])))))));
                                arr_14 [18] [i_1] [i_2] [18] [i_1] = min((min((arr_2 [i_1 - 1] [i_1] [i_1 - 1]), (arr_2 [i_1 - 1] [i_1] [i_1 + 1]))), (((((((/* implicit */int) arr_0 [i_1 - 1])) & (((/* implicit */int) var_5)))) - (((/* implicit */int) var_5)))));
                                var_13 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_3])) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1] [i_0])) && (((/* implicit */_Bool) 1389444876U))))), (1064581143U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (+(0ULL))))));
                    var_15 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1])) ? (arr_3 [i_1 - 1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_1 + 1] [i_0]))))));
                    arr_15 [i_1] = ((/* implicit */short) arr_7 [i_2] [(short)5] [i_2] [(short)5]);
                }
            } 
        } 
    } 
    var_16 ^= ((/* implicit */unsigned long long int) var_2);
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) 9223372036854775795LL)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
    var_18 = ((/* implicit */unsigned long long int) var_2);
}
