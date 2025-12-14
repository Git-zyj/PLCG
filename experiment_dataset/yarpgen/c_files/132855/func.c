/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132855
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
    var_11 = ((/* implicit */unsigned int) var_8);
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_10 [i_0] = (-(min((arr_8 [i_0 - 1] [i_0]), (arr_8 [i_0 + 1] [i_0]))));
                    var_12 = ((/* implicit */unsigned int) min((min((13225011022325677852ULL), (((/* implicit */unsigned long long int) arr_4 [i_1])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)51339))))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned short) var_8);
}
