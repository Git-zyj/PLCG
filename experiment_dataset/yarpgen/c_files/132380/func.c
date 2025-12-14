/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132380
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_4 [0LL] [0LL] [i_1 - 2])) || (((/* implicit */_Bool) ((long long int) arr_4 [12ULL] [12ULL] [i_1]))))), (((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-23)), (var_15)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2047)) ? (((/* implicit */int) (short)-3927)) : (((/* implicit */int) arr_1 [(short)12]))))))))))));
                arr_6 [i_0] = ((/* implicit */short) ((signed char) ((arr_4 [i_0] [i_1 - 2] [i_1 - 1]) / (((/* implicit */int) arr_5 [i_0])))));
                var_19 = ((/* implicit */long long int) ((unsigned long long int) (+(((/* implicit */int) (short)-1)))));
                var_20 = ((/* implicit */long long int) min((((/* implicit */unsigned short) var_11)), (max((((/* implicit */unsigned short) ((5469217135743256264LL) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))), (arr_5 [i_0])))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            for (int i_4 = 0; i_4 < 25; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 1; i_5 < 23; i_5 += 3) 
                    {
                        for (long long int i_6 = 2; i_6 < 22; i_6 += 1) 
                        {
                            {
                                arr_18 [i_2] [i_2] [i_3] [i_2] [i_5] [i_5] [i_2] = ((/* implicit */unsigned int) max((max((((/* implicit */long long int) ((int) (unsigned char)248))), (((((/* implicit */_Bool) -1047860244)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (549755813887LL))))), (((/* implicit */long long int) ((((/* implicit */int) arr_17 [i_5] [i_2] [i_2] [i_5 - 1] [i_5 + 2])) % (262143))))));
                                arr_19 [i_2] [i_2] [i_2] [i_6 + 1] [i_6 + 1] [i_3] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) var_4)) != (var_12)));
                                var_21 = ((/* implicit */unsigned char) (-(max((max((-352977987705538746LL), (((/* implicit */long long int) (signed char)108)))), (((/* implicit */long long int) (unsigned char)128))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) var_8))));
                }
            } 
        } 
    } 
}
