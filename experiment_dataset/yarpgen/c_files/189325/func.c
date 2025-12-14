/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189325
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
    for (int i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_6 [i_1] [7U] [7U] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) arr_5 [i_1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [9] [18U]))) : (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)60216), (((/* implicit */unsigned short) arr_3 [i_0 - 2])))))))));
                    arr_7 [i_2] [16LL] [16LL] |= ((/* implicit */signed char) ((int) ((unsigned short) ((unsigned long long int) arr_3 [i_2]))));
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_2 [i_0] [i_0 - 1] [i_1]), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)33522)) != (((/* implicit */int) arr_4 [(short)12])))))))) ? (((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)19626))) ^ (-5024141419746202143LL))) + (((/* implicit */long long int) max((arr_1 [16U]), (((/* implicit */unsigned int) (short)127))))))) : (((/* implicit */long long int) arr_1 [i_1]))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2079039717)) ? (((unsigned int) -2079039717)) : (max((((/* implicit */unsigned int) -2079039717)), (1004953888U)))))) ? (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) (short)-128)) >= (((/* implicit */int) (short)107)))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) 3298775818U))))), (10045381964209444064ULL))))))));
}
