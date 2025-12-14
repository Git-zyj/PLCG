/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120427
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
    var_12 = ((/* implicit */unsigned short) ((8363763917546744246LL) > (((((/* implicit */long long int) ((/* implicit */int) var_5))) / (8363763917546744246LL)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_3 [2LL] [i_0] = ((/* implicit */short) (!(((((/* implicit */int) var_6)) < (((/* implicit */int) var_1))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            var_13 = ((/* implicit */unsigned int) var_7);
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                var_14 = ((/* implicit */unsigned short) (-(var_4)));
                /* LoopSeq 1 */
                for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) ((var_10) & (var_10)))))))));
                    var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) var_2))));
                }
            }
            arr_11 [i_1] = ((/* implicit */_Bool) ((var_4) ^ (((var_4) | (((/* implicit */int) var_11))))));
        }
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            arr_15 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) || (var_5)));
            arr_16 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) var_11)) & (((/* implicit */int) var_3))));
        }
        var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) <= (((var_10) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
    }
    var_18 = ((/* implicit */signed char) ((((/* implicit */int) (!(((var_2) <= (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))) | ((((((-(((/* implicit */int) var_1)))) + (2147483647))) << (((((var_4) % (((/* implicit */int) var_11)))) - (11119)))))));
}
