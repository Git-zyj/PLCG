/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104742
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
    for (unsigned long long int i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned short i_3 = 2; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_14 [i_4] [(signed char)0] [i_2] [i_1] [0U] [i_2] |= ((/* implicit */unsigned short) ((arr_4 [i_0 - 1] [i_0 - 1] [i_2]) / (((((/* implicit */_Bool) arr_7 [i_3 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3 - 1]))) : (arr_10 [(short)10] [i_0] [i_3 - 2] [7U] [i_4])))));
                                var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) -169754737)) ? (min((((/* implicit */unsigned long long int) 7753068475638167150LL)), (6255218354306537197ULL))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_11)), (var_7))))))))));
                                var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) min((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned int) (short)-10839))))))), ((!(((/* implicit */_Bool) min((7348877265991287513LL), (((/* implicit */long long int) var_6))))))))))));
                                arr_15 [i_1] [i_1] [i_1] [6ULL] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 169754763)) ? (((/* implicit */long long int) -169754737)) : (7753068475638167123LL)))) > (arr_6 [i_0 + 1] [i_0] [i_0 - 1])));
                            }
                        } 
                    } 
                } 
                arr_16 [i_0 - 2] [i_0] = ((/* implicit */unsigned short) ((short) -7753068475638167103LL));
                var_14 -= arr_10 [6LL] [i_0] [i_0 - 3] [i_1] [i_0];
                arr_17 [i_0 - 1] [i_0] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_0 + 1] [i_1])) ? (arr_10 [i_0 - 3] [i_1] [i_0 - 1] [i_1] [i_0 - 1]) : (4611686018427387903LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1] [i_1])))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_5 = 0; i_5 < 13; i_5 += 2) 
    {
        for (int i_6 = 0; i_6 < 13; i_6 += 2) 
        {
            for (int i_7 = 0; i_7 < 13; i_7 += 2) 
            {
                {
                    arr_25 [i_7] [i_6] [i_7] [i_7] = ((/* implicit */short) (-(((long long int) ((var_5) > (((/* implicit */long long int) -1342742733)))))));
                    arr_26 [i_5] [(unsigned short)6] = arr_20 [i_6] [i_6];
                }
            } 
        } 
    } 
}
