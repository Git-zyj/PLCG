/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134752
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
    var_12 = var_0;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 16; i_3 += 3) 
                    {
                        for (short i_4 = 3; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] [i_3] [i_0] [i_3] [i_3 + 2] [i_4 - 1] = (+(((((/* implicit */_Bool) max((2163686180U), (((/* implicit */unsigned int) (_Bool)1))))) ? (((((/* implicit */_Bool) 3113018039479657056LL)) ? (-2147483646) : (((/* implicit */int) (short)19219)))) : (-2015691482))));
                                arr_16 [i_0] [i_3] [i_2] [i_3 + 2] [i_3] [i_3] [1LL] = ((/* implicit */long long int) -2147483646);
                            }
                        } 
                    } 
                } 
                var_13 -= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) max((((/* implicit */long long int) arr_4 [i_1] [4ULL] [i_1 + 1])), (arr_9 [i_0] [i_1] [i_1] [i_0])))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) max((((/* implicit */short) var_4)), ((short)15140)))))), (((((/* implicit */_Bool) (short)-4360)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((2147483645) - (((/* implicit */int) (_Bool)1))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_13 [i_1 + 2]))))) ? (((/* implicit */unsigned long long int) (((~(9048514205575314913LL))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_1] [i_1])) > (2147483645)))))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [(unsigned char)2] [i_1 - 1] [i_0] [i_1 - 1] [i_1 - 1]))) : (2926825033374925524ULL)))));
                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) max((522240ULL), (((/* implicit */unsigned long long int) 2985716010U)))))));
                var_16 = max((max((216651944791658889ULL), (((/* implicit */unsigned long long int) 11LL)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_1] [i_1 + 2]))))));
            }
        } 
    } 
}
