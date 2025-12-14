/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132689
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) 877845732))));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) var_15);
    }
    for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 17; i_3 += 1) 
            {
                {
                    var_20 = ((var_2) | (((/* implicit */long long int) (~(((/* implicit */int) var_9))))));
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) var_6)))))) / ((+(var_10)))));
                    arr_12 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((unsigned long long int) ((((/* implicit */int) (unsigned char)103)) * (((/* implicit */int) var_15))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                }
            } 
        } 
        arr_13 [i_1] [i_1] = ((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1]);
    }
    var_22 = ((/* implicit */long long int) ((unsigned char) (((~(((/* implicit */int) var_7)))) | (((/* implicit */int) var_1)))));
}
