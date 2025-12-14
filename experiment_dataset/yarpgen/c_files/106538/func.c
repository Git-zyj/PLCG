/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106538
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */short) var_4);
                var_15 = ((/* implicit */short) ((long long int) var_5));
                var_16 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((2409088336573423650ULL) < (var_8))) ? (((arr_1 [i_1]) / (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 - 2] [i_1] [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 + 1] [i_0 - 2] [i_0 - 1])))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 - 1] [i_0] [i_1]))) != (((unsigned long long int) (short)16384))))) : (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0 + 1] [i_0] [i_1])) >= (((/* implicit */int) var_13)))))));
            }
        } 
    } 
    var_17 -= ((/* implicit */long long int) var_13);
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) var_0))));
    var_19 = ((/* implicit */short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) * (var_0))), (((/* implicit */unsigned long long int) ((long long int) max((var_9), (var_7)))))));
    var_20 = ((/* implicit */unsigned short) max(((-(var_9))), (((/* implicit */long long int) var_3))));
}
