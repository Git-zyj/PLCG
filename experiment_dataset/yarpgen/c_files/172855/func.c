/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172855
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
    var_17 = ((((/* implicit */long long int) var_16)) / (((long long int) ((((/* implicit */_Bool) -3811193086112153691LL)) ? (var_13) : (((/* implicit */int) var_7))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) ((unsigned short) arr_0 [i_0]))) ? (max((32767), (-1))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (1383558393) : (8))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 24; i_2 += 4) 
            {
                {
                    var_18 += ((/* implicit */int) ((((/* implicit */_Bool) var_15)) ? (((long long int) min((((/* implicit */int) (unsigned short)27313)), (var_16)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_0])) << (((var_3) - (1891249383)))))) && (((/* implicit */_Bool) 21))))))));
                    arr_11 [i_0] |= ((/* implicit */long long int) var_13);
                }
            } 
        } 
        var_19 = ((unsigned short) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [6])) : (var_8)));
    }
    var_20 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)38198))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) var_9)) : (var_5)))), (var_14)))));
    var_21 = var_13;
}
