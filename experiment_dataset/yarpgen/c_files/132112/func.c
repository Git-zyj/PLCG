/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132112
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) (((((!(((/* implicit */_Bool) (short)14)))) && (((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_5 [(unsigned short)20] [i_1 + 1] [i_1])), ((unsigned short)0)))))) ? (((/* implicit */int) max(((!(((/* implicit */_Bool) var_8)))), ((_Bool)1)))) : (((/* implicit */int) max(((!(((/* implicit */_Bool) arr_0 [i_0] [i_1])))), ((!(((/* implicit */_Bool) (short)-13080)))))))));
                    arr_7 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_7)), (((unsigned long long int) 2076172505)))))));
                    var_16 = ((/* implicit */unsigned short) min((max((var_5), (((/* implicit */short) arr_1 [i_0])))), (((/* implicit */short) arr_6 [i_0]))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */_Bool) max((((var_9) % (((/* implicit */unsigned int) ((((/* implicit */int) (short)23867)) + (((/* implicit */int) var_6))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((long long int) var_13))))))));
}
