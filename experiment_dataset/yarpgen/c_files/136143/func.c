/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136143
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
    var_18 &= ((/* implicit */_Bool) var_7);
    var_19 = ((/* implicit */unsigned int) var_10);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) (unsigned char)230))) ? (((-5013028398516260279LL) - (2595574562257351162LL))) : (((/* implicit */long long int) ((((unsigned int) 2863821905607899917ULL)) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)21901)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32190))))))))));
                    var_20 -= ((/* implicit */short) min(((+(((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) / (arr_7 [19U] [(short)4] [i_2]))))), (((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) -552119883))))))));
                    var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)18601)))))));
                }
            } 
        } 
    } 
    var_22 -= ((/* implicit */signed char) (-(((/* implicit */int) var_3))));
}
