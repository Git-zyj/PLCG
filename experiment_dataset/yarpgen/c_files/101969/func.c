/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101969
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
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [4] = ((/* implicit */short) (unsigned short)63984);
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_0)), (arr_7 [i_2] [10ULL] [i_1] [i_0])))) ? (((unsigned int) arr_0 [i_0])) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_13))))))));
                }
            } 
        } 
        arr_10 [i_0] = arr_1 [i_0] [i_0];
    }
    var_14 = ((/* implicit */unsigned long long int) (!(((((6113219457449860085LL) * (((/* implicit */long long int) ((/* implicit */int) var_0))))) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
}
