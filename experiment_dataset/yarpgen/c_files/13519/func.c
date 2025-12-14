/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13519
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
    var_17 = ((/* implicit */long long int) max((var_17), ((+((-(-6972399789781856860LL)))))));
    var_18 = var_12;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 2; i_3 < 12; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_19 *= ((/* implicit */_Bool) arr_9 [i_3 - 2] [i_3] [i_3] [i_3 + 1]);
                                arr_13 [i_0] [i_1] [i_3 - 1] [i_3] = ((/* implicit */_Bool) ((((var_10) + (9223372036854775807LL))) << (((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_3 + 1] [i_2] [i_3 - 1]))) / (((arr_11 [i_0] [i_1] [i_2] [i_3 - 2] [i_4]) ? (arr_7 [i_2] [i_3 + 1] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
                                var_20 = ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-6698688116016563796LL)));
                                var_21 *= ((((/* implicit */_Bool) arr_6 [i_0] [i_2] [i_1])) ? (min((((long long int) (_Bool)1)), (8719551097338467667LL))) : (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_3 - 1])) * (((/* implicit */int) arr_0 [i_3 - 1]))))));
                            }
                        } 
                    } 
                } 
                var_22 = max((((long long int) 8719551097338467667LL)), (((/* implicit */long long int) ((_Bool) var_16))));
                arr_14 [i_0] [i_1] = ((/* implicit */_Bool) ((max(((_Bool)0), ((_Bool)1))) ? (((long long int) ((932826609948990830LL) >> (((-6083889314624136241LL) + (6083889314624136301LL)))))) : (((long long int) max((var_15), (var_15))))));
                arr_15 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((_Bool) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_1))))))));
            }
        } 
    } 
    var_23 = var_3;
    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9007199254740991LL)) ? (-8719551097338467668LL) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (_Bool)0))))))) ? (((/* implicit */int) (_Bool)1)) : ((((_Bool)0) ? ((~(((/* implicit */int) var_0)))) : (((/* implicit */int) (_Bool)1))))));
}
