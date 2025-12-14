/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146403
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned int) arr_3 [i_0]);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 2199023124480ULL)) || (((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2] [8])))));
                    var_21 = ((/* implicit */short) (-(((/* implicit */int) (signed char)103))));
                }
            } 
        } 
        var_22 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) ^ (((((/* implicit */_Bool) (signed char)-97)) ? (((/* implicit */int) (signed char)-36)) : (((/* implicit */int) (unsigned char)188))))));
        var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 5ULL))));
    }
    var_24 = min((max((((/* implicit */short) var_3)), (min((var_8), (var_8))))), (((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_18)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
    {
        arr_11 [i_3] = ((/* implicit */long long int) (-((+((-(arr_10 [i_3])))))));
        arr_12 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) ((arr_10 [i_3]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)116))))))) ? ((+(((18446744073709551611ULL) / (arr_10 [i_3]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))));
        arr_13 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_3])) / (((/* implicit */int) (unsigned short)11736))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3]))) / (-7000098614161228227LL)))) : (((18446744073709551610ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3])))))));
    }
}
