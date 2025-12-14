/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104273
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
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) arr_1 [i_0]))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (long long int i_2 = 3; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] [i_0] [i_0] &= ((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1] [i_2]);
                    var_16 = ((/* implicit */signed char) (_Bool)1);
                    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) arr_1 [i_0]))));
                }
            } 
        } 
        arr_8 [(signed char)8] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) 10448016773123558930ULL))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0]))));
    }
    var_18 = ((/* implicit */int) min((max((((/* implicit */unsigned short) ((var_0) != (((/* implicit */unsigned long long int) 3))))), (var_3))), (((/* implicit */unsigned short) var_6))));
    var_19 = ((/* implicit */unsigned long long int) max((var_19), (max((((/* implicit */unsigned long long int) var_9)), ((-(var_0)))))));
    var_20 |= var_1;
}
