/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182753
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
    var_14 *= ((/* implicit */unsigned long long int) var_4);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (long long int i_4 = 4; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_15 ^= ((/* implicit */signed char) var_9);
                                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((signed char) max(((~(((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [20LL] [i_4] [i_0] [i_0])))), (((/* implicit */int) var_10))))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */long long int) max((var_17), (min((max((arr_6 [i_2] [i_1] [i_0]), (arr_11 [(short)10] [i_1] [i_2] [(_Bool)1]))), (((long long int) ((((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_2] [i_0])) - (var_2))))))));
                    var_18 = ((/* implicit */_Bool) min((var_18), ((!(((/* implicit */_Bool) ((unsigned int) (-(((/* implicit */int) var_3))))))))));
                    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) (short)-1)), (4294967272U)))) : (max((var_12), (((/* implicit */long long int) 4294967262U))))))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1] [6ULL])) ? (((/* implicit */unsigned long long int) ((long long int) arr_11 [i_0] [i_2] [i_2] [i_0]))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1] [i_2])) ? (((/* implicit */unsigned long long int) arr_8 [i_1] [(signed char)16] [i_2] [i_1] [i_1] [i_1])) : (13939550974248658953ULL))))) : (((/* implicit */unsigned long long int) ((long long int) min((13939550974248658931ULL), (((/* implicit */unsigned long long int) var_12))))))));
                    var_20 += 13939550974248658955ULL;
                }
            } 
        } 
    } 
}
