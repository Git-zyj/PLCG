/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157071
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
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (long long int i_4 = 4; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned int) (unsigned short)50896)), (17U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(2978597666U)))))))));
                                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2978597673U)) ? (min((((/* implicit */unsigned long long int) arr_4 [i_1] [i_0])), (var_7))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_4 - 3] [i_4 - 3])) / (((/* implicit */int) var_9)))))));
                                var_14 = ((/* implicit */int) arr_5 [i_1 + 2] [i_1 + 2]);
                                arr_15 [i_0] [i_1 - 1] [i_1] [i_3] [i_1 - 1] = ((/* implicit */int) max((((/* implicit */unsigned long long int) 234884423U)), (((((/* implicit */_Bool) 4060082876U)) ? (18151889535168254484ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 + 1] [i_4 - 2])))))));
                                arr_16 [i_0] [i_1 - 1] [i_4] [(_Bool)1] [i_3] &= ((/* implicit */unsigned long long int) ((unsigned short) (+(((/* implicit */int) arr_1 [i_4 - 3])))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) min((arr_12 [11] [i_1 - 1] [(short)1] [i_1 + 1] [i_0] [i_0]), (arr_12 [i_2] [i_1 - 2] [i_1 + 1] [i_1 + 1] [i_0] [i_0])))) >> (((((/* implicit */int) min((arr_3 [i_1 - 1]), (arr_3 [i_1 + 1])))) - (59890)))));
                    arr_17 [i_0] [i_1] [i_0] [12] = (+(arr_6 [i_1 - 2] [i_1 + 2] [i_1 - 1]));
                }
            } 
        } 
    } 
    var_16 += ((/* implicit */signed char) max((((((/* implicit */_Bool) min((((/* implicit */int) var_10)), (var_0)))) ? (2978597662U) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_2)))))), (min((min((((/* implicit */unsigned int) var_2)), (var_6))), (((/* implicit */unsigned int) var_10))))));
}
