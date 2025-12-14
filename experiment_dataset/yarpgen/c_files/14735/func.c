/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14735
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
    var_12 = ((/* implicit */long long int) var_5);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_2] [i_1] [3U] = ((/* implicit */unsigned int) (unsigned short)65535);
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 12; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_3] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) 16U)))))))) ? (1449841565) : ((+(((/* implicit */int) (short)1792))))));
                                arr_17 [i_0] [i_2] [i_0] [i_3] [i_2] [i_4] = ((/* implicit */_Bool) (((((_Bool)1) || (((/* implicit */_Bool) (unsigned char)221)))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)221))) * (4059825394637490055ULL))))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) -7935222220160630499LL)) ? (((/* implicit */int) (signed char)-81)) : (((/* implicit */int) (_Bool)1))))))));
                            }
                        } 
                    } 
                    arr_18 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) (+(((((((/* implicit */_Bool) 14386918679072061561ULL)) && (((/* implicit */_Bool) (short)-30296)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)-8256)))) : (((((((/* implicit */int) var_2)) + (2147483647))) >> (((/* implicit */int) var_3))))))));
                    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) (unsigned char)236))));
                }
            } 
        } 
    } 
}
