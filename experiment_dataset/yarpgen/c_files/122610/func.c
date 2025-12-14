/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122610
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
    var_16 += (-(((/* implicit */int) var_1)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_17 = min((((((/* implicit */_Bool) arr_8 [i_3 + 1] [i_1 + 4] [i_0 - 1])) ? (arr_8 [i_3 + 1] [i_1 + 4] [i_0 - 1]) : (arr_8 [i_3 + 1] [i_1 + 3] [i_0 + 2]))), (((/* implicit */unsigned int) arr_7 [i_0])));
                                var_18 = ((/* implicit */_Bool) ((min((arr_2 [i_1 + 1]), (arr_2 [i_1 + 2]))) ? (min((((/* implicit */unsigned long long int) arr_2 [i_0])), (max((arr_1 [i_1] [6]), (((/* implicit */unsigned long long int) 3340396158U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((3340396158U) <= (((/* implicit */unsigned int) 1251994244))))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned int) ((unsigned short) 13942282652033063624ULL));
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) -8802748410936325469LL))));
                    var_21 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((int) arr_6 [i_1]))) : (min((((/* implicit */unsigned int) arr_4 [i_0 - 1] [i_0 - 1] [i_0])), (var_5)))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 2; i_5 < 11; i_5 += 1) 
                    {
                        var_22 = ((/* implicit */int) max((4504461421676487969ULL), (((/* implicit */unsigned long long int) (+((-(4294967295U))))))));
                        var_23 = ((/* implicit */_Bool) arr_9 [6U] [4ULL] [i_2] [i_5 + 2]);
                    }
                    /* vectorizable */
                    for (short i_6 = 3; i_6 < 10; i_6 += 1) 
                    {
                        var_24 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_13 [i_2])) ? (222184747U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) << (((1785092518U) - (1785092497U)))));
                        var_25 = ((/* implicit */unsigned int) arr_2 [i_1]);
                        var_26 = ((/* implicit */unsigned int) (+(var_13)));
                        var_27 = arr_0 [i_1];
                    }
                }
            } 
        } 
    } 
}
