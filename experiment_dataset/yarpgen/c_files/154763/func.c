/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154763
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
    var_17 = ((/* implicit */long long int) var_16);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned short i_2 = 4; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((3153810524072302335LL) >> (((((/* implicit */int) (unsigned short)65523)) - (65521)))));
                    arr_7 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((signed char) ((((/* implicit */int) arr_0 [i_0] [i_0])) >> (((((/* implicit */int) var_6)) - (36254))))))), (max((((/* implicit */unsigned int) (signed char)1)), (562697861U)))));
                }
            } 
        } 
    } 
}
