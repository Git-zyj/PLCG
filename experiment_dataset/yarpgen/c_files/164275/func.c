/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164275
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((unsigned long long int) max(((-(arr_4 [i_0] [i_0]))), (((18128743496170250257ULL) + (arr_2 [i_0])))));
                var_11 -= ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0])) ? (var_7) : (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) ? (var_9) : (arr_5 [i_0] [i_0] [i_0]))));
                var_12 = ((((/* implicit */_Bool) max((318000577539301390ULL), (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (18128743496170250257ULL) : (var_8)))))) ? (arr_2 [i_1]) : (((arr_5 [i_0] [16ULL] [i_0]) + (((((/* implicit */_Bool) var_10)) ? (15615509439620594938ULL) : (arr_0 [19ULL] [i_0]))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned long long int) (!(((arr_5 [i_0] [i_1] [i_0]) < (arr_3 [i_0] [i_0])))));
                                var_14 = var_9;
                            }
                        } 
                    } 
                } 
                arr_13 [i_0] = arr_5 [i_0] [i_1] [i_0];
            }
        } 
    } 
    var_15 = 18128743496170250257ULL;
    var_16 = ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_10)) ? (((var_3) / (18128743496170250259ULL))) : (((var_5) / (var_1))))) : (((((/* implicit */_Bool) (~(var_9)))) ? (3427656416011041579ULL) : ((+(var_9))))));
    var_17 = ((((/* implicit */_Bool) var_4)) ? (min((max((5046942383678682921ULL), (10829699983991285374ULL))), ((+(2680456756925432627ULL))))) : ((~(((var_2) + (2305838611167182848ULL))))));
}
