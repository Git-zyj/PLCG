/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11767
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_6 [11U] [11U] = ((/* implicit */unsigned short) (-(((/* implicit */int) min(((unsigned short)4279), (((/* implicit */unsigned short) (_Bool)1)))))));
                    arr_7 [i_1] = min(((short)31527), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((3638061420U) << (((((/* implicit */int) (signed char)109)) - (94)))))) < (max((17500672362983362625ULL), (((/* implicit */unsigned long long int) (short)-31528))))))));
                    arr_8 [i_2] [15ULL] [i_0] [i_0] = ((/* implicit */unsigned int) (short)31527);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) (((-(1985427924U))) & (min((((/* implicit */unsigned int) (unsigned short)19818)), (6U))))))));
}
