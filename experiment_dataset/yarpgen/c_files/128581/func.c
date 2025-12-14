/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128581
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
    for (short i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        var_20 = ((/* implicit */signed char) var_15);
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    {
                        var_21 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)5706)) ? (((/* implicit */int) ((var_6) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : ((~(((/* implicit */int) var_7))))));
                        arr_12 [i_0] [i_0] [i_2] = ((/* implicit */long long int) (!(var_15)));
                    }
                } 
            } 
        } 
        arr_13 [4LL] [4LL] = ((/* implicit */short) (~(((((/* implicit */_Bool) var_9)) ? (arr_5 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
        var_22 = ((/* implicit */_Bool) var_9);
    }
    var_23 = (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_17)), (var_10)))));
}
