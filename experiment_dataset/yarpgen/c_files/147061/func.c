/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147061
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_20 += ((/* implicit */unsigned short) arr_0 [i_0] [i_1]);
                arr_7 [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((var_10), (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [2ULL] [i_1])))))))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) % (arr_0 [10] [i_0]))) >> (((var_10) - (1961594709)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 4; i_2 < 24; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 2; i_3 < 23; i_3 += 2) 
        {
            {
                var_21 = max((((/* implicit */int) var_13)), (((min((((/* implicit */int) arr_8 [i_2 - 1])), (arr_10 [i_2] [i_3 + 2] [i_3]))) | ((~(((/* implicit */int) arr_8 [0LL])))))));
                /* LoopNest 2 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        {
                            arr_17 [i_4] [21ULL] [i_4 - 1] [i_4] [i_4 - 1] [i_4] |= ((/* implicit */short) (+(min(((+(((/* implicit */int) arr_8 [i_2])))), (min((arr_10 [i_3 + 2] [i_4 - 1] [i_5]), (var_10)))))));
                            var_22 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_11 [i_5] [i_5] [i_4])), (min(((unsigned short)54945), (((/* implicit */unsigned short) (signed char)68))))));
                            var_23 = ((/* implicit */unsigned int) max(((+(((var_11) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))), (((/* implicit */unsigned long long int) ((max((arr_14 [i_4] [i_2] [i_2]), (((/* implicit */long long int) arr_13 [i_2 - 3] [i_2] [i_2 - 3] [i_4])))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))))));
                        }
                    } 
                } 
                arr_18 [i_2 - 3] = ((/* implicit */signed char) max(((unsigned char)5), (((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)5)))) != (((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
}
