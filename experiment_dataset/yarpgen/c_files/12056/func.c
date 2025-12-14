/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12056
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
    var_16 |= ((/* implicit */_Bool) max((((2408066980855319396ULL) | (((/* implicit */unsigned long long int) 334632333)))), (((/* implicit */unsigned long long int) var_4))));
    /* LoopSeq 4 */
    for (signed char i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 17; i_2 += 3) 
            {
                {
                    var_17 |= ((long long int) max((((/* implicit */long long int) min((arr_7 [i_0] [i_0] [i_0]), (((/* implicit */short) var_15))))), (max((-7173895197177226944LL), (((/* implicit */long long int) (_Bool)1))))));
                    var_18 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((arr_2 [i_0]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0 - 1]))))))));
                }
            } 
        } 
        var_19 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (min((8785218768091992175LL), (((/* implicit */long long int) var_11)))) : (((/* implicit */long long int) -577397639)))));
    }
    for (signed char i_3 = 0; i_3 < 23; i_3 += 3) 
    {
        var_20 |= min((min((((/* implicit */unsigned long long int) min((arr_8 [i_3] [i_3]), (((/* implicit */signed char) var_5))))), ((-(15156387326448879587ULL))))), (3290356747260672029ULL));
        var_21 |= ((/* implicit */_Bool) min((min((((((/* implicit */_Bool) arr_9 [i_3] [i_3])) ? (arr_9 [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) max((1914265908), (((/* implicit */int) (_Bool)1))))))), (((/* implicit */long long int) (unsigned short)19117))));
        var_22 = ((/* implicit */short) ((arr_9 [i_3] [(short)11]) | (((/* implicit */long long int) ((/* implicit */int) min((min((((/* implicit */short) arr_8 [i_3] [4ULL])), ((short)-32763))), (((/* implicit */short) arr_8 [i_3] [i_3]))))))));
    }
    for (unsigned short i_4 = 0; i_4 < 25; i_4 += 3) 
    {
        var_23 = ((/* implicit */int) ((_Bool) -1914265908));
        var_24 = ((/* implicit */signed char) arr_11 [i_4]);
    }
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 15; i_5 += 3) 
    {
        var_25 = ((/* implicit */long long int) ((var_7) ? (((/* implicit */int) arr_14 [i_5])) : (((/* implicit */int) ((signed char) (signed char)-85)))));
        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) var_6))));
    }
}
