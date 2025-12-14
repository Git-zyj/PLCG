/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172371
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
    var_18 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) / (min((((/* implicit */long long int) var_10)), (var_13)))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_0))));
        var_20 = ((/* implicit */unsigned int) ((unsigned short) (-(((/* implicit */int) (short)31171)))));
        var_21 = (!(((/* implicit */_Bool) arr_0 [i_0])));
    }
    /* LoopSeq 2 */
    for (long long int i_1 = 0; i_1 < 21; i_1 += 2) /* same iter space */
    {
        arr_5 [i_1] [i_1] &= ((/* implicit */short) (((-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) != (var_11)))))) * (((/* implicit */int) arr_3 [i_1]))));
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            arr_9 [(_Bool)1] = ((/* implicit */short) ((1048574U) == (((/* implicit */unsigned int) ((/* implicit */int) (short)31167)))));
            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */int) arr_4 [i_1] [i_2])) & (((/* implicit */int) arr_4 [i_2] [i_2]))))))));
        }
        for (short i_3 = 3; i_3 < 20; i_3 += 3) 
        {
            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) arr_8 [20]))));
            var_24 = ((/* implicit */signed char) (~(((/* implicit */int) var_9))));
        }
    }
    for (long long int i_4 = 0; i_4 < 21; i_4 += 2) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) var_0))));
        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((unsigned int) ((unsigned short) arr_7 [i_4] [i_4] [i_4]))))));
    }
}
