/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134468
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_16 = ((arr_2 [i_0]) <= (arr_2 [i_0]));
        var_17 = ((/* implicit */short) arr_0 [i_0]);
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) 267386880U)) && (((/* implicit */_Bool) -822038606036492873LL))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) var_2);
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            var_20 |= ((/* implicit */signed char) var_15);
            var_21 = ((/* implicit */unsigned long long int) min((var_21), (arr_2 [i_1])));
        }
        for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            var_22 ^= ((/* implicit */unsigned short) var_10);
            var_23 = ((/* implicit */unsigned long long int) var_9);
        }
        arr_13 [i_1] = ((/* implicit */long long int) (((-(((((/* implicit */unsigned long long int) 4641602477569923888LL)) + (arr_2 [i_1]))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (arr_10 [i_1]) : (((((/* implicit */_Bool) arr_0 [14LL])) ? (arr_1 [i_1]) : (var_4))))))));
    }
    var_24 = ((/* implicit */unsigned char) var_13);
}
