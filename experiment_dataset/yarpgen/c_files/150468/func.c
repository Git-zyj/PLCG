/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150468
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [18] [i_2] [10U] = ((/* implicit */int) ((((/* implicit */_Bool) ((short) (-(((/* implicit */int) (unsigned char)255)))))) ? (((((/* implicit */_Bool) max((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */long long int) arr_7 [i_0] [i_1 + 2] [i_0] [i_2]))))) ? (((long long int) 3094957899279364937LL)) : (((long long int) arr_7 [i_0] [i_1] [i_2] [i_1])))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 2147483647))))));
                    arr_9 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((short) arr_3 [i_2]));
                }
            } 
        } 
    } 
    var_19 = min((((/* implicit */long long int) min((((/* implicit */unsigned short) (short)-23746)), (min((((/* implicit */unsigned short) (unsigned char)48)), ((unsigned short)0)))))), (var_14));
}
