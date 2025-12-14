/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15240
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
    var_13 = ((/* implicit */_Bool) (~(max((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)19732))))), (max((var_11), (((/* implicit */long long int) var_5))))))));
    var_14 &= ((/* implicit */int) min((var_12), (((/* implicit */long long int) ((((/* implicit */int) var_6)) - (((/* implicit */int) var_10)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) (~(var_11))))) ? (max((((/* implicit */unsigned long long int) var_7)), (min((6685510395880605165ULL), (((/* implicit */unsigned long long int) (short)-17600)))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)45800))))), (1444634367125613587LL))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 3; i_3 < 12; i_3 += 1) 
                {
                    {
                        arr_12 [i_0] [i_3 + 3] [i_2] [i_1] = ((/* implicit */_Bool) var_3);
                        arr_13 [i_3] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */int) var_4)) * ((~(arr_8 [i_3] [i_3] [i_2] [i_1] [i_1 - 1] [i_0])))));
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_9 [i_0])))) ? (((((/* implicit */_Bool) arr_9 [i_0])) ? (var_9) : (((/* implicit */long long int) arr_9 [i_0])))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) * (arr_9 [i_0]))))));
        var_17 = ((/* implicit */long long int) arr_4 [i_0] [(short)10]);
    }
}
