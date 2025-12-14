/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136391
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
    var_17 = ((/* implicit */unsigned int) var_4);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        arr_12 [2LL] [i_1] [i_2] [i_3] = max((min((((/* implicit */unsigned int) var_9)), (((unsigned int) var_11)))), (((/* implicit */unsigned int) -1242563072)));
                        var_18 = ((((((/* implicit */_Bool) ((arr_4 [i_0]) ? (var_0) : (var_16)))) ? ((+(((/* implicit */int) var_3)))) : (((/* implicit */int) var_13)))) * (((1242563072) / (-1242563072))));
                    }
                    var_19 = (-(min((((((/* implicit */_Bool) -1242563072)) ? (var_5) : (((/* implicit */int) var_4)))), (((/* implicit */int) var_15)))));
                }
            } 
        } 
    } 
}
