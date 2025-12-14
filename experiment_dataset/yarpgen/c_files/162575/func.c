/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162575
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_2 [0ULL] = ((/* implicit */signed char) ((unsigned short) max((max((((/* implicit */unsigned int) (unsigned short)13274)), (918526403U))), (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-23710))))))));
        var_14 = ((/* implicit */unsigned short) min((((/* implicit */short) ((_Bool) 3376440892U))), (var_11)));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
            arr_5 [i_0] [i_0] [i_0] |= var_3;
        }
        for (int i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            arr_8 [(signed char)9] = ((/* implicit */long long int) arr_4 [14ULL] [(signed char)9]);
            arr_9 [(_Bool)1] = arr_3 [i_0] [i_2];
            var_16 = ((/* implicit */signed char) ((unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) 2366057162501145052ULL)) ? (((/* implicit */long long int) 1151272182)) : (-9223372036854775806LL)))));
        }
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
    {
        var_17 = ((/* implicit */unsigned long long int) 2);
        var_18 = ((/* implicit */unsigned char) ((signed char) ((long long int) var_9)));
        var_19 = ((/* implicit */short) ((int) (-2147483647 - 1)));
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) var_7))));
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) var_11))));
    }
    var_22 = ((/* implicit */long long int) ((signed char) 1016));
    var_23 = ((/* implicit */_Bool) ((unsigned short) 918526403U));
}
