/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106243
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
    var_13 = ((/* implicit */unsigned long long int) max((-1), (1515082088)));
    var_14 = ((/* implicit */long long int) var_9);
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                for (int i_3 = 2; i_3 < 22; i_3 += 1) 
                {
                    {
                        var_15 = ((/* implicit */short) max(((!(((/* implicit */_Bool) arr_4 [i_0 + 1] [i_2 + 2])))), ((!(((/* implicit */_Bool) var_1))))));
                        var_16 |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(arr_8 [i_1] [22U] [i_0 + 1] [i_2] [i_2 + 2])))) * (max((arr_6 [i_1] [i_1] [i_2]), (((/* implicit */unsigned long long int) arr_8 [i_1] [i_2] [i_2] [i_2] [i_2 + 3]))))));
                        var_17 = min((((arr_6 [i_0] [i_0] [i_0 + 1]) * (arr_6 [i_0] [i_0] [i_0 + 1]))), (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0 + 1])) ? (arr_6 [i_0] [i_0 - 1] [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))));
                    }
                } 
            } 
            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) arr_0 [i_1]))));
        }
        var_19 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_7 [8LL])))) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) var_7))))));
        arr_10 [(_Bool)0] |= ((/* implicit */unsigned short) max(((-(((/* implicit */int) arr_9 [i_0] [18U])))), ((+(((/* implicit */int) arr_9 [i_0] [(unsigned short)0]))))));
        arr_11 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) - (2104575255U)));
    }
}
