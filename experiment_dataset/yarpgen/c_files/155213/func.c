/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155213
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
    var_18 = ((/* implicit */signed char) var_0);
    var_19 = ((/* implicit */_Bool) var_11);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */int) ((short) (~(arr_7 [i_1] [12LL] [12LL]))));
                    arr_9 [i_0] [(unsigned short)17] [i_2] [14ULL] = ((/* implicit */long long int) ((int) var_1));
                    var_20 -= ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_2 + 1] [i_0 + 1] [i_2 + 1])) && (((/* implicit */_Bool) var_17))));
                    var_21 *= ((/* implicit */short) (+(((/* implicit */int) arr_5 [i_2 + 2] [i_2] [i_2 + 2]))));
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_12) : (((/* implicit */long long int) var_10))))) ? (((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (1869306731) : (((/* implicit */int) var_1))))));
    }
    var_22 = ((/* implicit */unsigned long long int) var_7);
}
