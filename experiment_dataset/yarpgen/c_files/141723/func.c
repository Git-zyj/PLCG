/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141723
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_5 [i_0] &= ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */unsigned long long int) (+(-158506825)))) : (((16565295517111886232ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (short i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_1 [i_3 - 1])))) ? ((-(2352738110286743119LL))) : (((-872553257952148205LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))))));
                            arr_12 [i_3] [i_3] [i_3] [(short)11] [i_3] [i_1] = ((/* implicit */unsigned char) -1237506961);
                            var_21 = ((/* implicit */_Bool) arr_10 [i_2] [i_1] [i_3 + 3] [i_3] [i_3 - 1]);
                            var_22 = ((/* implicit */unsigned long long int) var_8);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            {
                arr_18 [i_4] |= ((/* implicit */long long int) var_13);
                var_23 ^= ((/* implicit */signed char) max((((((/* implicit */int) (short)-30346)) & (arr_14 [i_5]))), (((/* implicit */int) var_13))));
                var_24 += ((/* implicit */unsigned int) var_2);
            }
        } 
    } 
    var_25 |= ((/* implicit */int) ((max((((((/* implicit */_Bool) var_4)) ? (var_19) : (((/* implicit */unsigned int) 158506825)))), (min((var_15), (((/* implicit */unsigned int) var_8)))))) >= (var_15)));
    var_26 = ((/* implicit */int) var_6);
}
